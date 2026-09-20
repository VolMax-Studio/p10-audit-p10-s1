# P10-audit-P10-s1: Formal Audit Pre-Registration Specification

**Document Identifier:** `P10-AUDIT-P10-S1-PREREG-001`  
**Revision:** `v0.2-frozen-draft`  
**Author / Principal Investigator:** Ivan Nestorov (ORCID: [`0009-0006-7940-9539`](https://orcid.org/0009-0006-7940-9539))  
**Organization:** VolMax Studio Lab  
**Date:** 2026-09-20  
**Status:** **PREREG DRAFT — READY FOR IMMUTABLE FREEZE**  

---

## 1. Executive Summary, Scope & Epistemic Status

This document establishes the pre-registered evidentiary protocol, evaluation harness, failure taxonomy, and deterministic decision procedure for **`P10-audit-P10-s1`**: the first formal self-audit of the public `P10-Core` release.

### 1.1 Logically Separate Meta-Protocol Run
In accordance with Section 10 (*P10-audit-P10 Profile*) of the governing P10 Specifications (v0.1 / v0.2 / v0.2.1), a self-audit is executed as a **logically separate / freshly instantiated meta-protocol run $P^*$** over a frozen, public mathematical artifact.  
`P10-audit-P10-s1` is an internal self-audit executed by the project team. It is **not** an organizationally independent third-party audit. External review corroboration is provided solely by the historical record of external adversarial gating (e.g., Claude Gate 002), which is treated as an input provenance receipt in $E^*$.

### 1.2 Non-Blind Pre-Registration Disclosure
This pre-registration is explicitly **non-blind**: it is formulated with full knowledge of the target artifact, its development trajectory, and the findings of previous adversarial gate reviews. The purpose of this document is **not** to pretend that the criteria were conceived in ignorance of the codebase, but to **strictly and immutably freeze the $S_1$ adjudication rules, failure conditions, and decision procedure prior to executing any evaluation commands**, eliminating post-hoc threshold adjustment and outcome-dependent rationalization.

### 1.3 Core Mandate
The mandate of `P10-audit-P10-s1` is strictly three-fold:
1. Audit the **claim discipline** of public prose and provenance surfaces ($T_1$);
2. Verify that the public release is **self-describing and sufficient for deterministic clean-room reproduction** using only documented public dependencies ($T_2$);
3. Formally exercise the **procedural self-application** of P10's evaluation rules upon its own public output, while strictly respecting the Gödel/Löb limitative boundary ($T_3$).

---

## 2. Target Formulation: Artifact ($A^*$) vs. Audit Claim ($c^*$)

To prevent conflation between physical artifacts and the propositions adjudicated by the calculus, the audit separates the frozen target into two distinct entities: the target artifact tuple $A^*$ and the propositional audit claim $c^*$.

### 2.1 The Two-Layer Target Artifact Tuple ($A^*$)
The physical subject of audit is a two-layer, ratified cryptographic release:

$$A^* = (A_{\text{candidate}}, H_{\text{ratification}}, \text{Ref}_{\text{git}})$$

| Component | Identifier & Cryptographic Binding | Public Availability / Fetch Location |
|---|---|---|
| **$A_{\text{candidate}}$ (Candidate Tree & Archive)** | Official candidate ZIP `P10-Core-v0.2.2-gateclosure.zip`<br>SHA-256: `96a7e126068d35d29776a785d6581ef07c12f66a52d4a850b8464bf96ac41c88`<br>Internal candidate manifest: `manifests/SHA256SUMS_v0.2.2-gateclosure` (30 files) | Public GitHub Release Asset:<br>[`P10-Core-v0.2.2-gateclosure.zip`](https://github.com/VolMax-Studio/p10-core/releases/download/v0.2.2-gateclosure/P10-Core-v0.2.2-gateclosure.zip) |
| **$H_{\text{ratification}}$ (Ratification Record)** | [`RATIFICATION.md`](https://github.com/VolMax-Studio/p10-core/blob/v0.2.2-gateclosure/RATIFICATION.md)<br>Human-ratified record executed by Ivan Nestorov on 2026-09-20 binding exact ZIP SHA-256 `96a7e126...` | Public Git file at tag `v0.2.2-gateclosure` |
| **$\text{Ref}_{\text{git}}$ (Public Git Object)** | Repository: `https://github.com/VolMax-Studio/p10-core` (Public)<br>Release Tag: [`v0.2.2-gateclosure`](https://github.com/VolMax-Studio/p10-core/releases/tag/v0.2.2-gateclosure)<br>Commit Object: `419175726025f2586dbb65ad92ec8812628880b5` | GitHub Public Release & Tag |
| **Public Toolchain Dependencies** | Lean 4.34.0 (`leanprover/lean4:v4.34.0`), Lake 5.0.0 | Official public Lean 4 release |
| **Historical Seed & Baselines** | Seed `v0.1.0-four-evidence`: `da2683ba7bfc7a8f97d6c62506a6c2abd2f0b27a`<br>Baseline `v0.2.0-composition`: `b4aef600f56820d86c5c079185942e8d3320a2a4`<br>Predecessor `v0.2.1-gatefix`: `f6b332f2c4db1b4b762c20b4fe214394c3420121` | Tagged historical commits |

> [!NOTE]
> **Two-Tier Manifest & Public Release Asset Provenance:**  
> The candidate manifest `manifests/SHA256SUMS_v0.2.2-gateclosure` seals the 30 candidate files contained in $A_{\text{candidate}}$. The ratified release tag `v0.2.2-gateclosure` binds both $A_{\text{candidate}}$ and $H_{\text{ratification}}$ (`RATIFICATION.md`). The exact candidate ZIP (`96a7e126...`) is published directly as an official GitHub Release asset on release tag `v0.2.2-gateclosure`, ensuring that all constituents of $A^*$ are publicly fetchable and byte-verifiable by third parties.

### 2.2 The Propositional Audit Claim ($c^*$)
The declarative claim under audit in meta-protocol $P^*$ is:

$$c^* = \text{„The public ratified artifact tuple } A^* \text{ satisfies targets } T_1 \text{ and } T_2\text{, and the execution of } S_1 \text{ satisfies target } T_3 \text{ under frozen rules } R^*\text{.“}$$

Target $T_3$ is an operational property of the **audit execution procedure itself**, while $T_1$ and $T_2$ are properties of the ratified artifact tuple $A^*$.

---

## 3. The Three Frozen Evaluation Targets ($T_1, T_2, T_3$)

The meta-protocol evaluates the conjunctive hypothesis:

$$T = T_1 \land T_2 \land T_3$$

---

### Target $T_1$ — Claim Discipline & Prose Surface Taxonomy

**Core Question:** *Do any public assertions in documentation, specifications, or metadata exceed the machine-checked mathematical guarantees established by the Lean 4 kernel?*

#### 1. Mechanical Taxonomy of Target File Surfaces
Every prose, specification, metadata, and configuration file within `v0.2.2-gateclosure` is mechanically partitioned into six functional classes:

| Class | Scope & File Set | Audit Obligation |
|---|---|---|
| **Class I: Primary Claim Surfaces** | `README.md`, `RELEASE_NOTES.md`, `RATIFICATION.md` | Primary normative claims. Must strictly preserve the $\mathrm{Truth}_M \neq \mathrm{Supports}_P$ demarcation and all epistemic boundaries. |
| **Class II: Epistemic & Trust Records** | `AXIOM_AUDIT.md`, `GATE_RESPONSE.md`, `GATE_CLOSURE.md` | Exactness of kernel axiom reporting; full disclosure of synthetic digest changelog and collapsed predicates. |
| **Class III: Architectural Specifications** | `spec/P10-Core-v0.1.md`, `spec/P10-Core-v0.2.md`, `spec/P10-Core-v0.2.1.md` | Historical normative specifications defining milestone scope; must not assert post-dated proof existence. |
| **Class IV: Provenance & Metadata** | `CITATION.cff`, `LICENSE`, `manifests/*` | Authorship, licensing terms, and cryptographic hash manifests. |
| **Class V: External Review Records** | `reviews/GATE_v0.2.0-...`, `reviews/GATE_v0.2.1-...` | Verbatim transmission fidelity; recorded as evidentiary review inputs ($E^*$). |
| **Class VI: Build, Toolchain & Assets** | `lean-toolchain`, `lakefile.toml`, `lake-manifest.json`, `assets/*` | Toolchain pinning and non-proof graphic assets. |

#### 2. Aggregate Boundary Preservation & Mandatory Carrier Map
To eliminate arbitrary adjudication, the six core epistemic boundaries must be satisfied **in aggregate across the release**. No file in any class may contradict them, and each boundary is assigned a **primary mandatory carrier file** that must explicitly formulate it:

| Boundary | Core Epistemic Requirement | Mandatory Carrier File |
|---|---|---|
| **B-1: Demarcation** | $\mathrm{Truth}_M(c) \neq \mathrm{Supports}_P(e, c, \kappa, v)$ must be explicitly stated. Zero claims of ontological or metaphysical truth. | `README.md` (§1) |
| **B-2: Digest Scope** | Synthetic `Digest` must be disclosed as a lossless non-vacuity model; zero claims of cryptographic compression or collision resistance. | `GATE_RESPONSE.md` (§2) & `AXIOM_AUDIT.md` |
| **B-3: Predicate Collapse** | Transparent disclosure of the four collapsed/redundant predicates (`runCompleted`, `checksSucceeded`, `evaluable`, `noProtocolFault`). | `README.md` (§3.Layer2.6) & `GATE_CLOSURE.md` |
| **B-4: Bounded Composition** | Composition theorem covers strictly the finite 4-stage chain; zero claims of unbounded transfinite composition. | `README.md` (§5) |
| **B-5: Non-Global Soundness** | Soundness proved for synthetic `FourEvidence` instance; zero claims of universal soundness across arbitrary untyped programs. | `README.md` (§5) |
| **B-6: Witness Discipline** | Transition certificate witnesses must be documented as structural acceptance guards, not conclusion premises. | `README.md` (§3.Layer2.1) & `GATE_CLOSURE.md` |

- **`Truth_M` Identifier Audit:** Code scanning must verify: identifier `Truth_M` appears exactly **0 times** in all `.lean` files, and is used in prose strictly within explicit demarcation boundaries.

---

### Target $T_2$ — Self-Describing Reproducibility via Public Dependencies

**Core Question:** *Is the public frozen target self-describing and sufficient for deterministic clean-room reproduction using only explicitly documented public dependencies?*

> [!NOTE]
> **Epistemic Scope of $T_2$:**  
> Our audit verifies whether the public repository artifact $A^*$ contains all necessary, uncorrupted source code, manifests, and toolchain configurations to allow deterministic compilation and proof verification using publicly available Lean 4.34.0 tooling. Previous external execution (such as Claude's clean-room run in Gate 002) serves as corroborating evidence in $E^*$, not as a replacement for internal machine verification.

#### 1. Verification Procedure for $T_2$
1. **Clean-Room Build:** `lake build` executes cleanly from an isolated clone/extraction of $A_{\text{candidate}}$ under pinned Lean 4.34.0 (12/12 jobs, 0 errors, 0 warnings).
2. **Compile-Time Execution:** `#eval check1`, `#eval check2`, and `#eval check3` evaluate deterministically to `true / true / true`.
3. **Kernel Axiom Transparency:** `lake env lean audit/AxiomAudit.lean` matches the published 18-row table line-for-line:
   - Zero `sorry`, zero `admit`, zero user-declared `axiom` anywhere in the tree;
   - `conditionalComposition` depends on **zero axioms** (`[]`);
   - `verifiedGlobalSupport_implies_originConditions` depends on **zero axioms** (`[]`);
   - `positiveComposable` depends on **zero axioms** (`[]`);
   - Discharged theorems depend solely on standard foundational Lean 4 axioms `[propext, Quot.sound]`.
4. **Adversarial Gate Probes:** Clean compilation with `lake env lean`:
   - `reviews/GateProbe_CLAUDE_002_original.lean` (SHA-256: `2427da6ec2cd545baa541885929782d5601130db9eba4e9a3268a763e401495e`) with exit code 0;
   - `reviews/GateProbeB.lean` (SHA-256: `3c41bd86f905fec1ea3175c2e1878e573bd32b8681e61b4a9480b37aab9f1310`) with exit code 0.
5. **Manifest & Baseline Continuity:**
   - `manifests/SHA256SUMS_v0.2.2-gateclosure` verifies **30/30 candidate files OK**;
   - Baseline archive `baselines/P10-Core-v0.2.0-composition.zip` matches exact digest `a86501aab0f35d055087d5793b897260635b441fb51d12dc6d99cd0229a0fc89`;
   - `manifests/SHA256SUMS_v0.2.1-gatefix` verifies cleanly on the baseline archive line.

---

### Target $T_3$ — Procedural Self-Application & Gödel/Löb Demarcation

**Core Question:** *Can P10 execute its procedural adjudication rules upon its own mathematical release without circularity, meta-theoretical overreach, or asserting self-soundness?*

#### 1. Crucial Demarcation: Procedural Adjudication vs. Machine Self-Verification
The audit enforces an absolute conceptual demarcation between:
- **Procedural Self-Application of P10 Rules:** Applying the socio-technical protocol tuple $\mathbf{P10} = (C^*, E^*, R^*, F^*, \mathcal{V}^*, D^*, H^*)$ to verify evidence bundles, enforce admissibility, check fail-closed rules, and issue verdicts over the repository deliverables.
- **Formal Self-Verification by the Lean FourEvidence Model:** The synthetic `FourEvidence` formalization in Lean 4 is a bounded model instance ($c: \text{„exactly } n=4 \text{ evidence entries satisfy } P\text{“}$). It is **not** a universal program verifier, automated proof auditor, or self-verifying kernel. The audit strictly **forbids** claiming that the Lean code has formally verified its own compiler, implementation, or repository.

#### 2. Anti-Circularity & External Gate Rule
> [!CAUTION]
> **Anti-Circularity Rule:**  
> $$\boxed{\text{PASS prethodnog Claude Gate-a NIJE dokaz za } T_3}$$
> The external gate verdict (Claude Gate Closure `PASS`) is an **input provenance artifact** in $E^*$. It proves that an external review concluded successfully under its own checks; **it does NOT constitute proof of P10's self-soundness or self-consistency**.

#### 3. Mathematical Formulation of Gödel/Löb Limits
Under standard derivability conditions for a sufficiently strong effectively axiomatized formal theory $T$:
- **Löb's Theorem:** states that if $T \vdash (\mathrm{Prov}_T(\ulcorner\varphi\urcorner) \to \varphi)$, then $T \vdash \varphi$.
- **Gödel's Second Incompleteness Theorem:** states that if $T$ is consistent, then $T \nvdash \mathrm{Cons}(T)$.

Therefore, `P10-audit-P10-s1`:
- Does **not** attempt to prove an internal reflection principle, global soundness, or consistency of P10;
- Concludes strictly as an evidentiary judgement:
  $$\mathrm{Supports}_{P^*}(e^*, c^*, v^*, \kappa^*)$$
- Explicitly forbids meta-theoretical self-attribution:
  $$\nvdash \operatorname{Sound}(\mathbf{P10}) \quad \text{and} \quad \nvdash \operatorname{Consistent}(\mathbf{P10}).$$

---

## 4. Allowable Verdict Set ($\mathcal{V}^*$)

The meta-protocol operates over the discrete, fail-closed verdict set:

$$\mathcal{V}^* = \{\texttt{Verified}, \texttt{VerifiedWithLimitations}, \texttt{NotVerified}, \texttt{NotDemonstrated}, \texttt{UnfalsifiableAsStated}, \texttt{Deferred}\}$$

---

## 5. Deterministic Decision Procedure (Verdict Precedence)

To prevent post-hoc verdict shopping, causal masking, or subjective rationalization, the audit outcome is determined by a strict, algorithmic precedence ladder:

```text
[Step 1: Check Protocol Integrity]
  │
  ├── Any Procedural Error Triggered? (Target mutation, toolchain mismatch, prereg fracture, premature run)
  │     └── YES ──> HALT with ProtocolError (RUN INVALID — ZERO VERDICT ISSUED)
  │     └── NO
  │
[Step 2: Evaluate Substantive Failures (F-01 through F-08)]
  │
  ├── Did any substantive failure occur? (Proof cheat, axiom creep, probe failure, manifest break, boundary breach)
  │     └── YES ──> Issue Verdict: NotVerified
  │     └── NO
  │
[Step 3: Evaluate Claim Falsifiability]
  │
  ├── Is the audit claim structurally unfalsifiable or un-evaluable?
  │     └── YES ──> Issue Verdict: UnfalsifiableAsStated
  │     └── NO
  │
[Step 4: Evaluate Operational Blockers]
  │
  ├── Did host environment or external operational dependencies block execution?
  │     └── YES ──> Issue Verdict: Deferred
  │     └── NO
  │
[Step 5: Evaluate Evidence Sufficiency]
  │
  ├── Is admissible evidence incomplete or missing for any check?
  │     └── YES ──> Issue Verdict: NotDemonstrated
  │     └── NO
  │
[Step 6: Evaluate Documented Limitations]
  │
  ├── Are all T1, T2, T3 criteria satisfied, but with documented non-blocking limitations?
  │     └── YES ──> Issue Verdict: VerifiedWithLimitations
  │     └── NO
  │
[Step 7: Complete Conformance]
  │
  └── All T1, T2, T3 criteria satisfied with zero limitations ──> Issue Verdict: Verified
```

---

## 6. Pre-Registered Substantive Failure Taxonomy (F-01 through F-08)

The occurrence of any of the following conditions constitutes an immediate substantive audit failure, deterministically resulting in verdict **`NotVerified`**:

- **F-01 (Proof Integrity Breach):** Presence of `sorry`, `admit`, or user-declared `axiom` in any `.lean` file.
- **F-02 (Axiom Creep):** Any theorem preregistered in T2.3 as axiom-free (`conditionalComposition`, `verifiedGlobalSupport_implies_originConditions`, `positiveComposable`) reports a non-empty axiom dependency.
- **F-03 (Origin Condition Disconnect):** Theorem `verifiedGlobalSupport_implies_originConditions` fails to conclude `verifiedSem (x0.claim, x0.evidence)` directly about Stage 0 inputs.
- **F-04 (Claim-Boundary Breach):** Any claim-bearing surface in Classes I–V contradicts B-1…B-6, or a mandatory carrier fails to state its assigned boundary.
- **F-05 (Build Non-Determinism):** `lake build` fails to complete with 12/12 jobs, or `#eval` fails to yield `true / true / true` on pinned Lean 4.34.0.
- **F-06 (Adversarial Probe Failure):** Either `reviews/GateProbe_CLAUDE_002_original.lean` or `reviews/GateProbeB.lean` fails to compile with exit code 0 (returns non-zero exit status), or diverges from its published SHA-256 digest.
- **F-07 (Manifest Fracture):** Any file in `manifests/SHA256SUMS_v0.2.2-gateclosure` fails checksum verification.
- **F-08 (Historical Baseline Mutation):** Predecessor archive `baselines/P10-Core-v0.2.0-composition.zip` diverges from `a86501aab0f35d055087d5793b897260635b441fb51d12dc6d99cd0229a0fc89`.

---

## 7. Procedural Errors & Run Invalidation (Protocol Errors)

The following procedural faults do **not** yield an adjudicative verdict ($\mathcal{V}^*$); they immediately halt execution and invalidate the audit run:

1. **`ProtocolError(TargetMutationFault)`:** Any modification to git ref `v0.2.2-gateclosure` (commit `419175726025f2586dbb65ad92ec8812628880b5`) during audit execution $\to$ **HALT**.
2. **`ProtocolError(EnvironmentMismatchFault)`:** Host environment executes a compiler other than Lean 4.34.0 or an unpinned Lake version $\to$ **HALT**.
3. **`ProtocolError(PreregistrationFractureFault)`:** Any modification to this pre-registration document after freeze $\to$ **HALT**.
4. **`ProtocolError(PrematureExecutionFault)`:** Any audit test command or script is executed prior to human freeze sign-off $\to$ **HALT**.
5. **`ProtocolError(SelfApplicationBoundaryFault)`:** The audit report or execution agent asserts that audit success proves global system consistency, meta-theoretical soundness, or ungrounded self-truth $\to$ **HALT**.

---

## 8. Admissibility Policy ($R^*_{\text{adm}}$)

1. **Admissible Evidence ($E^*$):**
   - Byte-exact files checked out from git ref `tags/v0.2.2-gateclosure` (commit `419175726025f2586dbb65ad92ec8812628880b5`);
   - Clean-room container execution logs produced under pinned Lean 4.34.0 / Lake;
   - The official candidate package `P10-Core-v0.2.2-gateclosure.zip` (`96a7e126...ac41c88`);
   - The human-ratified record [`RATIFICATION.md`](RATIFICATION.md) bound to the tagged commit and archive digest;
   - Historical gate review reports (`reviews/GATE_v0.2.0-...`, `reviews/GATE_v0.2.1-...`) as provenance inputs.
2. **Inadmissible Material:**
   - Unrecorded agent chat transcripts, verbal discussions, or uncommitted local scratch scripts;
   - Post-ratification commits on the `p10-core` main branch;
   - Subjective assertions of adequacy unbacked by machine-checked proofs.

---

## 9. Staging Sequence & Freeze Mandate

```text
[Phase 0: Draft Specification Review]
     │
     ▼
[Phase 1: Human Line-by-Line Review & Freeze Authorization (Ivan Nestorov)]
     │
     ▼
[Phase 2: Immutable Freeze — Seal PREREG_MANIFEST.sha256 & Record Git Commit]
     │
     ▼
[Phase 3: S1 Audit Execution against v0.2.2-gateclosure]
     │
     ▼
[Phase 4: Synthesis of S1 Audit Dossier & Algorithmic Verdict Adjudication]
```

> **FREEZE ENFORCEMENT:**  
> In accordance with Section 7 (`PrematureExecutionFault`), no evaluation commands, test harnesses, or verification scripts may be executed until Phase 2 is formally completed and human-authorized.
