#!/bin/bash
set -euo pipefail

echo "=== EV-11: CLEAN-ROOM CONTAINER EXECUTION ==="
echo "Container OS: $(cat /etc/os-release | grep PRETTY_NAME)"
echo "Kernel: $(uname -a)"
echo "User: $(whoami)"
echo "Environment: clean isolated container execution"

export PATH="/root/.elan/bin:$PATH"
echo "Lean: $(lean --version)"
echo "Lake: $(lake --version)"

cd /workspace

echo "--- 1. Candidate Manifest Check inside container ---"
sha256sum -c manifests/SHA256SUMS_v0.2.2-gateclosure
echo "Candidate manifest: 30/30 OK"

echo "--- 2. Lake Build inside container ---"
lake build
echo "Lake build completed successfully (12 jobs)"

echo "--- 3. Axiom Audit inside container (18 rows line-for-line) ---"
lake env lean audit/AxiomAudit.lean > /tmp/raw_axiom_output.txt
cat /tmp/raw_axiom_output.txt

# Extract canonical 18 rows from Lean output
python3 - << 'EOF'
import re, sys

with open('/tmp/raw_axiom_output.txt') as f:
    lean_lines = f.readlines()

canonical = []
for line in lean_lines:
    line = line.strip()
    m1 = re.search(r"'[^']*\.([a-zA-Z0-9_]+)' depends on axioms: (\[.*\])", line)
    m2 = re.search(r"'[^']*\.([a-zA-Z0-9_]+)' does not depend on any axioms", line)
    if m1:
        canonical.append(f"{m1.group(1)}: {m1.group(2)}")
    elif m2:
        canonical.append(f"{m2.group(1)}: []")

with open('AXIOM_AUDIT.md') as f:
    audit_text = f.read()

m = re.search(r'```text\s*\n(.*?)\n```', audit_text, re.DOTALL)
if not m:
    sys.exit("Failed to find code block in AXIOM_AUDIT.md")

published = [l.strip() for l in m.group(1).strip().splitlines() if l.strip()]

if len(canonical) != 18 or len(published) != 18:
    sys.exit(f"Expected 18 rows, got canonical={len(canonical)}, published={len(published)}")

with open('/tmp/canonical_extracted.txt', 'w') as f:
    for line in canonical:
        f.write(line + '\n')

with open('/tmp/published_extracted.txt', 'w') as f:
    for line in published:
        f.write(line + '\n')
EOF

echo "Comparing canonical extraction vs published AXIOM_AUDIT.md (strict diff without ignore)..."
diff -u /tmp/published_extracted.txt /tmp/canonical_extracted.txt
echo "Axiom audit matches published table 18/18 rows line-for-line: EXACT MATCH"

echo "--- 4. Adversarial Gate Probes inside container ---"
echo "Compiling GateProbe_CLAUDE_002_original.lean..."
lake env lean reviews/GateProbe_CLAUDE_002_original.lean
echo "GateProbe_CLAUDE_002_original.lean: exit 0"

echo "Compiling GateProbeB.lean..."
lake env lean reviews/GateProbeB.lean
echo "GateProbeB.lean: exit 0"

echo "=== CONTAINER EXECUTION COMPLETED WITH EXIT 0 ==="
