# Xbox VIF final-state integration checkpoint

Date: 2026-10-30 Eastern. This supplements the historical
[NATIVE-GEOMETRY-CHECKPOINT.md](NATIVE-GEOMETRY-CHECKPOINT.md); it does not
replace that record or its remaining full-pipeline work.

## Recovery and scope

Published starting point: `4152f1b884a3d3e3dc661663efa1953b60ca501a`.
Recovered unpublished tree: `2a228499b8ca9cc9392a4bacce18eb4c4c9eeb4e`,
preserved as commit `605ed9f29fac130cdafb43bf260d3a52cea13c30` before this
follow-up integration. Comparing that actual tree to the starting point
found exactly three changed files: `xbox_vif_record.cpp`,
`xbox_vif_record.h`, and `xbox_vif_write_plan.h`. It did not contain the
clipping-reader or cursor-guard changes mentioned in conversational recovery
notes. Those changes are implemented in this follow-up instead.

All publication remains under `src/xbox/`, on `main` only. Shared game
sources, PC builds, private game data and previous work remain unchanged.
No Codex service, Dot, user-PC operation or sub-agent was used this session.
The no-interim-build instruction remains in force.

## Connected implementation

### Superseded uploads

The recovered backward lane-coverage proof is now selected explicitly by
the stock segmented-VIF observer through `XboxVifRecordWritePolicy::FinalState`.
This observer updates watched-row and source-provenance metadata only. It
must not inspect intermediate VU values, mutate input/registers, invoke
native/GS callbacks, or permit concurrent VU readers. Other API callers
still default to `Preserve`, including custom diagnostic observers.

A whole upload is omitted only when every lane it would write is replaced
by later uploads before this prefix's terminal MSCAL/MSCALF. Scalar uploads
cover four lanes; V2/V3 preserve their upper lanes. Skip cycles, row wrap,
NUM zero, relative addressing, and live BASE/TOPS are part of the proof.
Unrecognized or invalid metadata keeps all stores. The proof is cached
against live BASE/TOPS as well as the parent plan's exact command and
initial mode/cycle identity. Aliased VU/source or VU/register storage keeps
all stores. Complete live-reader admission still precedes all effects.

Every logical command, register update, watched-row notification and source
observation still executes. Only superseded memory stores and their
unnecessary decoding are omitted. The full VU image is current before the
original MSCAL branch, native callback, interpreter fallback or later reader;
there is no deferred restoration debt. Logical vector counters still count
all uploads. `XboxVifRecordStats` separately exposes omitted upload/vector/
store-byte counts and write-plan reuse; these are not FPS measurements.
`TS_DRAW_RECORDS=0` restores the entire original prefix route. No additional
Makefile switch was introduced for this policy.

### Native read contract

`xboxVifSourceTryReadRow` lends one exact current source row to the native
`loadV` and `loadI` helpers in an Xbox-generated source copy. A complete
V4-32 row comes from source. V3-32 supplies XYZ while its untouched W lane
comes from the materialized VU image; the following source record is never
mistaken for W. No floating-point conversion or zero normalization occurs.

Reads require the existing synchronous Plain/EnvMap native claim and exact
latest-writer ownership. Unsupported compact/partial formats, missing rows,
skips, wrap, foreign ownership and revoked loans retain the original VU
reader. Compact color sign extension is deliberately not guessed. A failed
read leaves the caller's 16 output bytes unchanged. The serial is rechecked
before committing the local row, and no borrowed pointer escapes.

Draw self-check, ring self-check and native-capture configurations retain
the original readers. The original strip/state ordering, GPU eligibility,
clipping arithmetic, CPU fallback and ring ownership remain unchanged.
The source patcher now validates both complete original reader definitions;
missing, duplicated or changed definitions fail before replacing output.
`XboxVifSourceStats::readRows` records accepted source reads.

This read contract is groundwork, not removal of surviving VU uploads or
all VU reads. Matrices, unsupported inputs, compact colors and the V3 W lane
can still require the original image. No performance gain is claimed.

### Cursor guards

Both the single joined-strip and complete-group source writers reject
32-bit strip/vertex counter overflow before output. Direct groups also
retain the original first-strip reservation of `n + 2`, even when that
first strip has no join. A short tail falls back to the original growth
path instead of silently changing its segment boundary. Rejection leaves
cursor fields and ring bytes untouched; no new fence or allocation is added.

## Verification actually performed

The cloud container could not clone/download the repository directly.
Relevant source was read through the connected GitHub tool. The six files
materialized for editing or focused checks were matched against their
Git blob SHA before modification. The work area is a scoped source mirror,
not a complete checkout, and no clean-full-checkout claim is made.

Executed during this session:

- Eight compiler-free tests in `test_vif_final_source.py`. They execute the
  actual Python adapters against focused source-shaped fixtures, check exact
  restoration, diagnostic gates, semantic drift rejection, line endings,
  atomic output protection and source guard placement. A 4,096-case arithmetic
  model compares grouped reservations to the original per-strip reservations.
- Six tests in `test_vif_write_plan_model.py`. The backward algorithm model
  matched an independent forward last-writer oracle and complete final
  images/registers/observer traces for 4,096 seeded prefixes, plus targeted
  width, partial-lane, union-overwrite, skip/wrap, NUM-zero, BASE/OFFSET and
  invalid-command cases. The seeded model omitted 16,593 redundant uploads.
  This is a synthetic algorithm result, not executed C++ or game coverage.
- AST parsing of all six new/changed Python files and whitespace checks.

Reproduction of these compiler-free checks from a repository checkout:

```sh
python -B src/xbox/test/test_vif_final_source.py -v
python -B src/xbox/test/test_vif_write_plan_model.py -v
```

Authored but NOT executed:

- `vif_write_plan_test.cpp`: calls the actual C++ proof and compares masks
  and final images with an independent forward oracle, including 4,096
  generated prefixes and rejection/boundary cases.
- `vif_source_read_test.cpp`: reruns the existing bridge fixture, then checks
  exact V3/V4 reads, compact fallback, end-of-RAM V3 bounds, revoked loans,
  counter overflow, first-strip reservations, and real prefix execution under
  Preserve versus FinalState with identical final state and logical events.
- `test_vif_final_native.py`: deferred compiler/runner for those probes.
- The updated existing full-source composition suite
  `test_vif_source_patch.py`; only the focused fixtures ran in this session.

No compiler, make invocation, native test executable, emulator, Xbox title,
XBE/ISO, or download package was run or produced. AST parsing and the model
checks do not establish C++ compilation, ABI correctness, GPU behavior,
actual game coverage, memory headroom, or measured speed.

## Next concrete blocker

Omitting *surviving* geometry uploads still needs a complete materialization
contract for every later VU reader/writer and fallback. Do not remove them
just because a current GPU write can use source arrays. Lit/Skinned source
support, complete graphics-command replacement and direct NV2A fetching
remain unfinished. Continue bounded source work and compiler-free checks;
do not lift the build hold based on this batch's model results.
