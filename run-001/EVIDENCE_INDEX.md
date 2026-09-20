# P10-audit-P10-s1: Run 001 Evidence Index & Trace Log

**Run Identifier:** `P10-AUDIT-P10-S1-RUN-001`  
**Execution Timestamp:** 2026-09-20T10:28:39+02:00 / 2026-09-20T10:30:00+02:00  
**Target Ref:** `VolMax-Studio/p10-core@v0.2.2-gateclosure` (`419175726025f2586dbb65ad92ec8812628880b5`)  
**Preregistration Commit:** `3fd073cb64b52214bfed65a4d07a4178a17b50b8`  
**Preregistration SHA-256:** `4ff99c98ef2a043c726a93e15ebe6a7a40737bf1225826f9c88a8ce181e9eec2`  

---

## 1. Evidence Artifact Registry

| Artifact Identifier | File Path | Scope & Verified Conditions |
|---|---|---|
| `EV-01` | [`evidence/01_environment.txt`](evidence/01_environment.txt) | Lean `v4.34.0`, Lake `5.0.0`, Ubuntu Linux, pinned toolchain match |
| `EV-02` | [`evidence/02_target_git_verification.txt`](evidence/02_target_git_verification.txt) | Git ref `tags/v0.2.2-gateclosure` commit `4191757...`, clean working tree, `RATIFICATION.md` binding `96a7e126...` |
| `EV-03` | [`evidence/03_public_asset_fetch.txt`](evidence/03_public_asset_fetch.txt) | Public GitHub Release asset fetch (`curl -fL`), SHA-256 `96a7e126...`, uncorrupted extraction to sandbox |
| `EV-04` | [`evidence/04_manifest_continuity.txt`](evidence/04_manifest_continuity.txt) | 30/30 candidate files OK in `manifests/SHA256SUMS_v0.2.2-gateclosure`; baseline archive digest `a86501aa...` OK; v0.2.1 manifest baseline line OK |
| `EV-05` | [`evidence/05_clean_build.txt`](evidence/05_clean_build.txt) | Isolated `lake build` complete (12/12 jobs, 0 errors, 0 warnings); compile-time checks `true / true / true` |
| `EV-06` | [`evidence/06_axiom_audit.txt`](evidence/06_axiom_audit.txt) | 18/18 rows in `lake env lean audit/AxiomAudit.lean` verified; 0 sorry, 0 admit, 0 user axioms; zero axioms for `conditionalComposition`, `verifiedGlobalSupport_implies_originConditions`, `positiveComposable` |
| `EV-07` | [`evidence/07_adversarial_probes.txt`](evidence/07_adversarial_probes.txt) | Probe 1 (`reviews/GateProbe_CLAUDE_002_original.lean` [SHA: `2427da6...`]) compiled exit 0; Probe 2 (`reviews/GateProbeB.lean` [SHA: `3c41bd8...`]) compiled exit 0 |
| `EV-08` | [`evidence/08_t1_claim_discipline.txt`](evidence/08_t1_claim_discipline.txt) | Identifier `Truth_M` count = 0 in all `.lean` files; Demarcation B-1 through B-6 verified in mandatory carriers and preserved in aggregate across Classes I-V; `RATIFICATION.md` correctly scoped |
| `EV-09` | [`evidence/09_t3_self_application_demarcation.txt`](evidence/09_t3_self_application_demarcation.txt) | Origin conditions theorem concludes `verifiedSem (x0.claim, x0.evidence)` directly about Stage 0; Claude Gate PASS treated as input evidence ($E^*$), not proof of self-soundness; Gödel/Löb boundaries preserved |
| `EV-10` | [`evidence/10_failure_taxonomy_evaluation.txt`](evidence/10_failure_taxonomy_evaluation.txt) | Initial checklist evaluation of conditions F-01 through F-08 and §7 procedural fault checks (reclassified as derived checklist) |
| `EV-11` | [`evidence/11_container_reproduction.txt`](evidence/11_container_reproduction.txt) | Clean-room isolated Debian 13 container execution logs: 30/30 manifest OK, `lake build` 12/12 jobs OK, line-for-line 18-row strict fail-closed diff OK, probes exit 0 |
| `EV-12` | [`evidence/12_full_tree_integrity_scan.txt`](evidence/12_full_tree_integrity_scan.txt) | Full-tree scan of all 14 `.lean` files (including `reviews/`): 0 `sorry`, 0 `admit`, 0 user `axiom`, 0 `Truth_M` |
| `EV-13` | [`evidence/13_t1_surface_adjudication.txt`](evidence/13_t1_surface_adjudication.txt) | Exhaustive mechanical audit across all 17 prose/provenance surfaces in Classes I through V: 0 contradictions against B-1..B-6 |
| `EV-14` | [`evidence/14_failure_taxonomy_mapping.md`](evidence/14_failure_taxonomy_mapping.md) | Formal derived failure taxonomy mapping each F-01..F-08 and §7 check to underlying empirical raw verification logs |
| `EV-15` | [`evidence/15_candidate_boundary_review.txt`](evidence/15_candidate_boundary_review.txt) | Boundary review of `P10_AUDIT_P10_S1_REPORT_CANDIDATE.md` confirming zero overclaims and zero premature verdict assertion |

---

## 2. Command Trace Log

```bash
# 1. Environment Dump
export PATH="$HOME/.elan/bin:$PATH"
lean --version && lake --version

# 2. Git Ref & Ratification Check
git -C /home/volmax-studio/volmax-projects/iot2/p10-core status
git -C /home/volmax-studio/volmax-projects/iot2/p10-core rev-parse HEAD
sha256sum /home/volmax-studio/volmax-projects/iot2/p10-core/RATIFICATION.md

# 3. Public Asset Download & Sandbox Extraction
curl -fL https://github.com/VolMax-Studio/p10-core/releases/download/v0.2.2-gateclosure/P10-Core-v0.2.2-gateclosure.zip -o run-001/evidence/P10-Core-v0.2.2-gateclosure.zip
sha256sum run-001/evidence/P10-Core-v0.2.2-gateclosure.zip
unzip -q run-001/evidence/P10-Core-v0.2.2-gateclosure.zip -d run-001/sandbox/

# 4. Manifest & Baseline Continuity
cd run-001/sandbox/P10-Core-v0.2.2-gateclosure
sha256sum -c manifests/SHA256SUMS_v0.2.2-gateclosure
sha256sum baselines/P10-Core-v0.2.0-composition.zip
grep "baselines/P10-Core-v0.2.0-composition.zip" manifests/SHA256SUMS_v0.2.1-gatefix | sha256sum -c

# 5. Clean-room Build & Evaluation
lake build

# 6. Axiom Audit
lake env lean audit/AxiomAudit.lean
grep -rn "sorry" P10Core/ audit/
grep -rn "admit" P10Core/ audit/
grep -rn "^axiom " P10Core/ audit/

# 7. Adversarial Probes
lake env lean reviews/GateProbe_CLAUDE_002_original.lean
lake env lean reviews/GateProbeB.lean

# 8. T1 & Demarcation Scan
find . -name "*.lean" -exec grep -Hn "Truth_M" {} +
grep -rn "Truth_M" README.md RATIFICATION.md
```
