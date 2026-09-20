# P10-audit-P10-s1: Formal Preregistration Freeze Record

**Record Identifier:** `P10-AUDIT-P10-S1-FREEZE-RECORD-001`  
**Date & Timestamp:** 2026-09-20T10:28:07+02:00  
**Principal Investigator / Ratifier:** Ivan Nestorov (ORCID: [`0009-0006-7940-9539`](https://orcid.org/0009-0006-7940-9539))  
**Organization:** VolMax Studio Lab  
**Status:** **IMMUTABLY FROZEN** (Execution Authorized)  

---

## 1. Human Freeze Authorization

Human authorization to freeze the pre-registration specification and commence $S_1$ execution has been formally **GRANTED** by Ivan Nestorov on 2026-09-20.

---

## 2. Cryptographic Bindings of Frozen Artifacts

| Component | Formal Value / Cryptographic Digest |
|---|---|
| **Frozen Preregistration Specification** | [`P10-AUDIT-P10-S1_PREREG.md`](P10-AUDIT-P10-S1_PREREG.md) |
| **Preregistration SHA-256 Digest** | `4ff99c98ef2a043c726a93e15ebe6a7a40737bf1225826f9c88a8ce181e9eec2` |
| **Preregistration Manifest** | [`PREREG_MANIFEST.sha256`](PREREG_MANIFEST.sha256) |
| **Target Public Repository** | `https://github.com/VolMax-Studio/p10-core` (Public) |
| **Target Release Ref & Tag** | `tags/v0.2.2-gateclosure` |
| **Target Git Commit SHA (40-hex)** | `419175726025f2586dbb65ad92ec8812628880b5` |
| **Target Candidate Archive** | `P10-Core-v0.2.2-gateclosure.zip` |
| **Candidate Archive SHA-256 Digest** | `96a7e126068d35d29776a785d6581ef07c12f66a52d4a850b8464bf96ac41c88` |
| **Public Release URL** | [`https://github.com/VolMax-Studio/p10-core/releases/tag/v0.2.2-gateclosure`](https://github.com/VolMax-Studio/p10-core/releases/tag/v0.2.2-gateclosure) |
| **Public Release Binary Asset URL** | [`https://github.com/VolMax-Studio/p10-core/releases/download/v0.2.2-gateclosure/P10-Core-v0.2.2-gateclosure.zip`](https://github.com/VolMax-Studio/p10-core/releases/download/v0.2.2-gateclosure/P10-Core-v0.2.2-gateclosure.zip) |
| **GitHub Asset Verification State** | `uploaded`, size: `748543 bytes`, matching sha256 `96a7e126...` |

---

## 3. Execution Mandate & Discipline

1. **Invariance:** `P10-AUDIT-P10-S1_PREREG.md` SHALL NOT be modified under any circumstances.
2. **Commit Binding:** This freeze record, the preregistration document, and its manifest are committed to git prior to executing any evaluation commands.
3. **Execution Scope:** Only preregistered checks ($T_1, T_2, T_3$) and tests ($F\text{-}01 \dots F\text{-}08$) may be run.
4. **Evidence Layer Discipline:** All raw outputs, command execution logs, environment dumps, checksums, and probe runs shall be recorded in `run-001/` prior to synthesizing findings.
5. **Fail-Closed Precedence:** Any §7 ProtocolError immediately triggers HALT (zero verdict). Adjudication of substantive findings strictly follows the 7-step precedence ladder defined in Section 5 of the frozen preregistration.
