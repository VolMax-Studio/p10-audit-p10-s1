# P10-audit-P10-s1: Failure Taxonomy Adjudication Mapping (Derived Checklist)

**Mapping Document:** `EV-14 / FAILURE_TAXONOMY_MAPPING`  
**Purpose:** Reclassification of EV-10 from standalone output to a derived mechanical checklist. Every entry maps directly to primary empirical verification logs in EV-01 through EV-13.  
**Frozen Decision Rule:** Substantive failure condition $\to$ `NotVerified`. Procedural fault $\to$ `ProtocolError / HALT` (invalid run, zero verdict).

---

## 1. Substantive Failure Taxonomy (F-01 through F-08)

| Fault Code | Failure Definition | Adjudication | Primary Supporting Evidence Artifact(s) |
|---|---|---|---|
| **F-01** | **Proof Integrity Breach:** Presence of `sorry`, `admit`, or user-declared `axiom` in any `.lean` file. | **PASS** (Zero Faults) | • [`evidence/06_axiom_audit.txt`](06_axiom_audit.txt) (Lines 38–46: zero sorry/admit/user-axiom)<br>• [`evidence/11_container_reproduction.txt`](11_container_reproduction.txt) (Zero axioms/sorry in container)<br>• [`evidence/12_full_tree_integrity_scan.txt`](12_full_tree_integrity_scan.txt) (Full-tree scan across all 14 `.lean` files in `P10Core/`, `audit/`, `reviews/`: 0 sorry, 0 admit, 0 user axioms) |
| **F-02** | **Axiom Creep:** Any theorem preregistered in T2.3 as axiom-free reports non-empty axiom dependency. | **PASS** (Zero Faults) | • [`evidence/06_axiom_audit.txt`](06_axiom_audit.txt) (Line 31: `conditionalComposition` = `[]`; Line 32: `positiveComposable` = `[]`; Line 33: `verifiedGlobalSupport_implies_originConditions` = `[]`)<br>• [`evidence/11_container_reproduction.txt`](11_container_reproduction.txt) (Container rerun matches 18/18 rows line-for-line with strict non-zero diff) |
| **F-03** | **Origin Condition Disconnect:** Theorem `verifiedGlobalSupport_implies_originConditions` fails to conclude `verifiedSem (x0.claim, x0.evidence)` directly about Stage 0 inputs. | **PASS** (Zero Faults) | • [`evidence/09_t3_self_application_demarcation.txt`](09_t3_self_application_demarcation.txt) (Section 1–2: Mechanized theorem concludes `verifiedSem (x0.claim, x0.evidence) := by ...` directly on Stage 0) |
| **F-04** | **Claim-Boundary Breach:** Any claim-bearing surface in Classes I–V contradicts B-1…B-6, or a mandatory carrier fails to state its assigned boundary. | **PASS** (Zero Faults) | • [`evidence/08_t1_claim_discipline.txt`](08_t1_claim_discipline.txt) (Demarcation verified in mandatory carriers `README.md`, `AXIOM_AUDIT.md`, `GATE_RESPONSE.md`, `GATE_CLOSURE.md`, `RATIFICATION.md`)<br>• [`evidence/13_t1_surface_adjudication.txt`](13_t1_surface_adjudication.txt) (Mechanical audit of all 17 surfaces in Classes I–V: 0 contradictions found) |
| **F-05** | **Build Non-Determinism:** `lake build` fails to complete with 12/12 jobs, or `#eval` fails to yield `true / true / true` on pinned Lean 4.34.0. | **PASS** (Zero Faults) | • [`evidence/05_clean_build.txt`](05_clean_build.txt) (12/12 jobs, compile-time `#eval check1..3` $\to$ `true / true / true`, exit code 0)<br>• [`evidence/11_container_reproduction.txt`](11_container_reproduction.txt) (Container rerun: 12/12 jobs, `#eval` $\to$ `true / true / true`, exit code 0) |
| **F-06** | **Adversarial Probe Failure:** Either `GateProbe_CLAUDE_002_original.lean` or `GateProbeB.lean` fails to compile with exit code 0, or diverges from published SHA-256. | **PASS** (Zero Faults) | • [`evidence/07_adversarial_probes.txt`](07_adversarial_probes.txt) (Probe 1 SHA `2427da6...` OK, exit code 0; Probe 2 SHA `3c41bd8...` OK, exit code 0)<br>• [`evidence/11_container_reproduction.txt`](11_container_reproduction.txt) (Container compilation: both probes exit code 0) |
| **F-07** | **Manifest Fracture:** Any file in `manifests/SHA256SUMS_v0.2.2-gateclosure` fails checksum verification. | **PASS** (Zero Faults) | • [`evidence/04_manifest_continuity.txt`](04_manifest_continuity.txt) (30/30 candidate files OK, exit code 0)<br>• [`evidence/11_container_reproduction.txt`](11_container_reproduction.txt) (Container rerun: 30/30 files OK, exit code 0) |
| **F-08** | **Historical Baseline Mutation:** Predecessor archive `baselines/P10-Core-v0.2.0-composition.zip` diverges from `a86501aa...`. | **PASS** (Zero Faults) | • [`evidence/04_manifest_continuity.txt`](04_manifest_continuity.txt) (Exact digest `a86501aab0f35d055087d5793b897260635b441fb51d12dc6d99cd0229a0fc89` verified; `SHA256SUMS_v0.2.1-gatefix` baseline line verified OK) |

---

## 2. Procedural Fault Checks (§7 Protocol Errors)

| Fault Code | Procedural Fault Definition | Adjudication | Supporting Evidence Artifact(s) |
|---|---|---|---|
| **§7.1** | **TargetMutationFault:** Target ref/commit altered during audit. | **PASS** (No Mutation) | • [`evidence/02_target_git_verification.txt`](02_target_git_verification.txt) (Target git tree clean, commit `419175726025f2586dbb65ad92ec8812628880b5` unchanged) |
| **§7.2** | **EnvironmentMismatchFault:** Host/container runs unpinned toolchain. | **PASS** (Pinned) | • [`evidence/01_environment.txt`](01_environment.txt) & [`evidence/11_container_reproduction.txt`](11_container_reproduction.txt) (Lean `v4.34.0`, Lake `5.0.0`) |
| **§7.3** | **PreregistrationFractureFault:** Modification to preregistration document after freeze. | **PASS** (Bit-Exact) | • [`FREEZE_RECORD.md`](../FREEZE_RECORD.md) & [`PREREG_MANIFEST.sha256`](../PREREG_MANIFEST.sha256) (SHA `4ff99c98ef2a043c726a93e15ebe6a7a40737bf1225826f9c88a8ce181e9eec2` intact, verified exit code 0) |
| **§7.4** | **PrematureExecutionFault:** Commands executed prior to freeze sign-off. | **PASS** (Sequenced) | • Freeze commit `3fd073cb64b52214bfed65a4d07a4178a17b50b8` strictly precedes all evaluation executions |
| **§7.5** | **SelfApplicationBoundaryFault:** Claim of global P10 consistency, meta-theoretical soundness, or compiler verification. | **PASS** (Bounded) | • [`evidence/09_t3_self_application_demarcation.txt`](09_t3_self_application_demarcation.txt) & Candidate report boundary inspection |
