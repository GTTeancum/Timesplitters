# Xbox source-layout expansion checkpoint

Date: 2026-10-30 Eastern. Baseline: `0dad8238d6229a90363610d718bff3029793fed4`.
This supersedes the remaining Lit/Skinned and compact-row work noted in
[VIF-FINAL-STATE-CHECKPOINT.md](VIF-FINAL-STATE-CHECKPOINT.md), for the
qualifying source uploads described below. It does not supersede the
no-build instruction or claim full graphics-pipeline completion.

## Publication retry — source accepted

The original publication attempt accepted the header blob and rejected the
complete C++ source upload with this generic message:

> This tool call was blocked by OpenAI's safety checks. Please double check what you are sending.

The user requested investigation and publication. A normal retry of the
same, unchanged C++ file through `GitHub.create_blob` succeeded, returning
`c651ffd99a1d2f74c4a147996c2b17cbd69f0a93`, which matches the saved source
patch. The previously accepted header remains
`6bce1f685360cfa2c242f75b297a9f4166acad82`. No source obfuscation, alternative
upload route, permission change, or security-setting change was required.

The original denial supplied no policy category, flagged passage, request
ID or diagnostic ID. Its internal cause is not exposed by the available
tools. A nonreproducing false positive is plausible, but not an established
internal diagnosis. Successful-call null error/classification fields do not
diagnose the earlier blocked invocation.

This publication contains the complete eleven-file source batch, based on
`0dad8238d6229a90363610d718bff3029793fed4`. Code and test blob identities
were checked against the saved patch before assembling the commit. This
checkpoint's publication account is updated; implementation and test code
are unchanged from the prepared batch. Publication uses a non-forced,
expected-parent update of `main`, after reviewing the complete file list.

The verification results below belong to the original implementation
session, not the publication retry. The retry did not compile or execute
native code, run the game, or create a build/package. It verified source
identities and repository state. No Codex service, Dot, sub-agent, or
user-PC operation was used.

## Implemented and connected in source

The existing Xbox source bridge now admits all five native draw entries:
Plain (`0x0000`), EnvMap (`0x0d20`), Lit (`0x1ae0` and `0x3520`), and
Skinned (`0x2800`). Both Lit entries share a layout, but a permit must still
match the exact recorded PC; one cannot claim the other's permit. Strip
writers also require the requested layout to match the active native entry.
Constant, packet-only, unknown and high-alias entries retain the old path.

Each layout obtains its actual offsets from the unchanged production
`vu1_native_xf.h` table. Separate proofs cover positions, colors, texture
coordinates, normals and (when required) bone indices. Lit/Skinned need
both STQ and normals; neither is substituted for the other. Position,
normal and STQ arrays accept contiguous V3/V4-32 uploads. Colors accept
V4-8/16/32. Bone selection accepts all standard mode-0 widths, including
scalar broadcasts and packed V4-5, reads lane zero, masks to 16 bits, then
clamps to the same three-bone range as the production decoder.

The output remains the existing 44-byte vertex layout, in original field
order. Floating-point payloads are copied without arithmetic; only the
existing signed-zero-Q normalization and exact 0/4/8 bone selection apply.
Lighting and animation calculations, shader programs, transform constants,
material order, clipping, flat provoking vertices, ring joins and fences
are unchanged. Complete group admission still precedes every output write.

The prefix executor now records the actual UNPACK USN bit with each source
upload. It reuses the previous descriptor's reserved byte; the scope still
has the existing 4 KiB compile-time ceiling. New group admission storage
has a separate 2 KiB compile-time ceiling. These are source assertions,
not measurements of target stack use.

The native row reader can now reconstruct standard S/V2/V3/V4-32/16/8 and
V4-5 rows from source. Compact values follow their recorded signed or
unsigned extension rule. Scalars broadcast; V2/V3 preserve upper lanes
from the fully materialized VU image. Packed V4-5 retains the original
unscaled 5/5/5/1 values. No row reads beyond its source payload, and the
local result is committed only after a final lifetime check. Failed reads
leave output bytes unchanged. Diagnostic reader bypasses remain unchanged.

## Boundaries deliberately retained

This is still an immediate-prefix, synchronous source loan. Every requested
row must share an admitted latest writer. Missing inputs, unsupported
field formats, skip cycles, wrapped arrays, workers, reentry, revoked
ownership and incomplete groups fall back before output. The source
loan assumes the existing synchronous runtime and does not synchronize
arbitrary concurrent guest-RAM mutation.

The complete VU image is still materialized before MSCAL and every fallback.
Only the previously implemented, proven superseded stores may be omitted.
This batch does not remove surviving geometry uploads, fetch arrays directly
on NV2A, change DMA/VIF command order, or establish a faster frame rate.
`TS_VIF_SOURCE=0` retains the existing disabled route. No new build switch,
asset format, game-data requirement or shared/PC source change is introduced.

## Checks executed during the original implementation session

The cloud filesystem began without the previous checkout. A fresh direct
GitHub clone/raw request failed DNS resolution; connected GitHub reads
worked. The working area is a scoped source mirror, not a full checkout.
Every replaced existing file was checked against its Git blob identity
before editing; the production layout header was also verified and remains
read-only. Publication is restricted to `src/xbox/` and `main`.

Eleven new compiler-free checks in `test_vif_source_layouts.py` passed:

- An independent signed-integer materialization oracle versus source-value
  decoding for all 131,584 signed/unsigned 8/16-bit scalar cases, all 65,536
  packed V4-5 words, and 3,328 additional mixed-width row cases.
- Complete 44-byte output comparisons for 12,090 modeled vertices across
  all five entries, three color widths, thirteen bone formats and both USN
  choices. Layout constants are read from the verified production header.
- Joined/flat ordering, missing inputs, wrong-layout rejection, partial
  overwrites, source bounds, skipped/wrapped arrays and revoked loans.
- Source-contract checks for exact PCs, separate fields, USN propagation,
  proof-before-output ordering and bounded admission storage.

Three existing self-contained methods from `test_vif_final_source.py` also
passed: row-read rejection ordering, cursor guard ordering, and the 4,096-
case reservation/counter model. They ran in isolation from their real Python
AST because this mirror lacks the unmodified adapter modules imported by
the other methods. The complete adapter suite was not rerun.

Six deliberate temporary C++ text mutations were rejected by the source
checks: a missing Lit entry, missing layout guard, swapped normal source,
dropped USN flag, wrong preserved-lane source, and missing latest-writer
check. Original source bytes were restored afterward. These are source
contract checks, not execution of mutated native code.

All three new/changed Python files passed AST parsing. Changed/new source
and documentation passed whitespace checks. None of these checks compiles
or executes C++; models cannot establish ABI, GPU behavior, live game
coverage, total target memory use, or performance.

Compiler-free reproduction from a complete repository checkout:

```sh
python -B src/xbox/test/test_vif_source_layouts.py -v
```

## Native regressions authored, not executed

The existing source bridge and row-read probes now cover four layouts and
compact signed rows instead of expecting Lit/Skinned or compact formats to
be unsupported. Unknown-entry, cross-thread, reentry, overflow and fence-
reservation checks remain. The source-shape row check was updated for the
new typed source view.

`vif_source_layouts_test.cpp` adds exact entry/layout admission, both Lit
PCs, compact bone formats, end-of-RAM row decoding, atomic missing-field
rejection, and real prefix-to-source integration with USN on/off under both
Preserve and FinalState policies. Its independent oracle compares the actual
bridge to the unchanged production vertex reference. The deferred runner
is `test_vif_source_layouts_native.py`.

No native compiler, make, native probe, emulator, title build, XBE/ISO or
package was run or produced. No sub-agent, Codex service, Dot or user-PC
operation was used. Native compilation and execution remain required once
the planned implementation is complete and the build hold is lifted.

## Next concrete work

The source-backed read/write route now covers qualifying Lit/Skinned draws,
but removing surviving geometry uploads still needs a complete contract for
all readers and writers, including cached constants, raw state-block copies,
unsupported draws, interpreter fallback, and later commands. Do not infer
permission to skip those writes from a successful source vertex copy.
Complete command-pipeline replacement and direct NV2A fetch remain open.
