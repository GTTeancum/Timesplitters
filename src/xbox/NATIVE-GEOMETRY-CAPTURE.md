# Private geometry capture workflow

`tools/xmeshcapture.py` reads the **existing PC runtime's VCU1 input recording**
and converts a selected draw through `xmeshbuild.py`. It also reports repeated
decoded geometry separately from changed constants, material-state inputs and
GIF tags. This is offline validation tooling. It does not install a renderer,
prove static-asset identity, or predict an FPS gain.

## Inputs and commands

Requires Python 3.9+. No third-party Python packages are needed for the tools.
Keep recordings, generated packs and reports **outside the public checkout**.
The filename extension is arbitrary; the header must be VCU1. A PS2 ISO, PAK,
raw VU RAM image or the replay tool's output is not this input format.

```sh
# Summarize every record; report contains metadata/hashes, not vertex payloads.
python src/xbox/tools/xmeshcapture.py inspect /private/inputs.vucapture \
  --output /private/geometry-report.json

# Select a 0-based record whose report status is "converted".
python src/xbox/tools/xmeshcapture.py extract /private/inputs.vucapture \
  /private/draw.xmesh --record 17
```

The tools do not launch the game or capture data. The pre-existing PC recorder
is controlled by `TS_VU_CAPTURE_FILE`, `TS_VU_CAPTURE_AFTER` (seconds, default
130) and `TS_VU_CAPTURE_LIMIT` (1..8192, default 128). Its call site in
`ps2_vu1_core.cpp` is excluded under `PLATFORM_XBOX`. Setting these variables on
Xbox will not enable a recording; no Xbox capture support was added here.
No user PC or console was accessed during this work.

The existing raw-RAM converter remains available with `--kind` and `--top`.
For VCU1 recordings, these values come from the verified microprogram and the
recorded PC/TOP; there is deliberately no CLI override for an unknown program.

## What is accepted

`ps2_vu_capture.h` writes each record as:

1. Eight little-endian uint32: magic `0x31554356` (bytes `VCU1`), stateBytes,
   codeSize, dataSize, startPC, top, itop, maxCycles.
2. Exactly stateBytes of opaque host `VU1State`.
3. Exactly codeSize of VU microprogram code.
4. Exactly dataSize of VU data RAM.

The reader skips the opaque state by its recorded size, not a guessed C++ ABI.
Tool safety limits: state size 1..65536, code 8..16384 in multiples of 8, data
16..16384 in multiples of 16, at most 8192 records. Empty, truncated, oversized
or bad-magic containers fail instead of silently salvaging a partial recording.
Short reads are supported without requiring seek.

A draw conversion additionally requires the known program's FNV-1a identity
`38ae1e855cd83dee`, full 16384-byte data RAM, valid TOP, a bounded render-state
block, and one of the native draw entries:

| PC (byte address) | Layout |
| --- | --- |
| 0x0000 | Plain |
| 0x0d20 | EnvMap |
| 0x1ae0 | Lit |
| 0x3520 | Lit (kept distinct in geometry observations) |
| 0x2800 | Skinned |

Identity follows `hashVu1Code` and `vu1_native_ts.cpp`, not a filename or caller
assertion. FNV is the project's compatibility identity, not authentication.
The raw converter's supported-strip checks remain in force. Original renderer
fallback remains unchanged; an unsupported recording is not forcibly rendered.

Extraction checks the **whole** container, including records after the selected
one, before atomically replacing the output. A malformed tail or write failure
does not replace an existing output. Input/output path aliasing through a
symlink is rejected by resolved-path comparison. No partial packs are published.

VCU1 has no global record count or checksum: an exact record-boundary truncation
cannot be detected, nor can arbitrary data corruption always be distinguished
from valid vertex values. A successful parse is not proof of a complete run.

## Reading the report

`status_counts` distinguishes converted draws, known non-draw entries, unknown
programs and unsupported draws. Record indices and byte offsets identify inputs;
there are no inferred frame numbers, view IDs or object IDs.

`geometry_sha256` covers the entry PC, layout, strip lengths/order and every
converted vertex byte. It excludes TOP, source qword addresses, unrelated RAM
and the live constants. Separate digests cover complete draw tags, the bounded
render-state block, fixed constant-input rows and the full data image. The
constant digest includes the documented fixed input-row superset, so a change
does not by itself establish a visible lighting/camera change.

`repeated_geometry` lists matching geometry observations and how many distinct
constant inputs, state blocks, tags and source images accompanied them. This
answers **whether decoded vertex payloads repeated in these captures**, not
whether they belong to one static world object or are safe to cache. Dynamic
objects can repeat too. GS history, ordering, side effects, clipping, transforms,
lighting and GPU memory lifetime remain unmodeled. Nothing is deduplicated in
the running game or skipped on the strength of these hashes.

## Verification and source contracts

```sh
python -m unittest discover -s src/xbox/test -p 'test_xmeshcapture.py' -v
CXX=clang++ TS_XMESH_CXXFLAGS='-O1 -fsanitize=address,undefined -fno-sanitize-recover=all -fno-omit-frame-pointer' \
  python -m unittest discover -s src/xbox/test -p 'test_xmeshcapture.py' -v
```

Tests require a C++17 compiler. They compile excerpts of the production capture
header, hash function, vertex declaration and scalar decoder. A synthetic
641-byte state intentionally differs from the real host ABI. All five draw
entries / four layouts are compared end-to-end against the C++ decoder. Fake
microprogram identity is substituted only inside unit tests; the unmodified CLI
is separately checked to reject it. Source extraction fails visibly on drift.
`TS_XMESH_REFERENCE_ROOT` can point at a read-only source tree.

Inspected at `37658ff87311692c36ddee8704870f10c02f325d`:
- `source/PS2Recomp/ps2xRuntime/src/lib/vu/ps2_vu_capture.h`
  (blob `15319d283b15a463bc96a2b6213ac51797079364`).
- `source/PS2Recomp/ps2xRuntime/src/lib/vu/ps2_vu1_jit.cpp`
  (blob `1ae0b469b245325f7ba7d06f2dd0bbf36b018f1b`).
- `source/PS2Recomp/ps2xRuntime/src/lib/vu/ps2_vu1_core.cpp`
  (blob `dc5ba9b5508e493ca12771d0aaebc9bade12eeee`), capture before native dispatch.
- Native draw/decoder contracts already listed in `NATIVE-GEOMETRY-CHECKPOINT.md`.
