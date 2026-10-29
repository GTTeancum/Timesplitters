# Private geometry capture workflow

`tools/xmeshcapture.py` reads the **existing PC runtime's VCU1 input recording**
or an **Xbox native TSVUCAP recording** and converts a selected draw through
the unchanged raw `xmeshbuild.py` converter. It also reports repeated
decoded geometry separately from changed constants, material-state inputs and
GIF tags. This is offline validation tooling. It does not install a renderer,
prove static-asset identity, or predict an FPS gain.

## Inputs and commands

Requires Python 3.9+. No third-party Python packages are needed for the tools.
Keep recordings, generated packs and reports **outside the public checkout**.
The filename extension is arbitrary; the header identifies VCU1 or TSVUCAP.
Formats are detected automatically; a stream must contain only one format.
`--format vcu1` or `--format native-capture` can require a specific format.
A PS2 ISO, PAK, raw VU RAM image or replay output is not either input format.

```sh
# Summarize every record; report contains metadata/hashes, not vertex payloads.
python src/xbox/tools/xmeshcapture.py inspect /private/inputs.vucapture \
  --output /private/geometry-report.json

# Select a 0-based record whose report status is "converted".
python src/xbox/tools/xmeshcapture.py extract /private/inputs.vucapture \
  /private/draw.xmesh --record 17
```

The Python tools do not launch the game or capture data. The pre-existing PC recorder
is controlled by `TS_VU_CAPTURE_FILE`, `TS_VU_CAPTURE_AFTER` (seconds, default
130) and `TS_VU_CAPTURE_LIMIT` (1..8192, default 128). Its call site in
`ps2_vu1_core.cpp` is excluded under `PLATFORM_XBOX`. Setting these variables on
Xbox will not enable a recording. The separate opt-in Xbox recorder below
observes the existing native callback instead.
No user PC or console was accessed during this work.

The existing raw-RAM converter remains available with `--kind` and `--top`.
For recorded inputs, these values come from the microprogram identity and
recorded PC/TOP; there is deliberately no CLI override for an unknown program.

## Optional Xbox native recorder

In an existing configured nxdk/MSYS2 checkout:

```sh
bash src/xbox/build.sh TS_NATIVE_CAPTURE=1
```

Only the native game's registration call is wrapped; the real registry and
original callback remain in use. The observer forwards the original arguments
exactly once and returns the original result, including fallback. Normal builds
default to `TS_NATIVE_CAPTURE=0` and register the original callback directly.
The build stamp rebuilds both sides when the switch or sampling settings change.

Make arguments control the capture: `TS_NATIVE_CAPTURE_DELAY_MS=5000`,
`TS_NATIVE_CAPTURE_STRIDE=64`, `TS_NATIVE_CAPTURE_LIMIT=128` are the defaults.
Delay begins with the first recognized draw, including menus; choose a longer
delay when capturing a match. The first eligible draw of each of the five PCs
is captured after the delay, then every stride for that PC. The record limit is
1..4096; the default output is at most 2,103,296 bytes.

Output is a new `E:\TimeSplitters\vu1-NNN.tsvucap` (000..999), created without
overwriting any previous file. The title already creates this writable
directory. Recording stops at the limit or after an I/O failure and closes on
normal early shutdown. Logs start with `[TS:vu-capture]`. Abrupt termination or
power-loss durability has not been tested. Capturing performs synchronous
diagnostic writes, so measure frame rate with capture disabled.

After privately retrieving the file, use the same inspection/extraction tool:

```sh
python src/xbox/tools/xmeshcapture.py inspect /private/vu1-000.tsvucap \
  --output /private/geometry-report.json
python src/xbox/tools/xmeshcapture.py extract /private/vu1-000.tsvucap \
  /private/draw.xmesh --record 0
bash src/xbox/build.sh TS_NATIVE_CAPTURE=0
```

These are build/use instructions, not a claim of a target build or console run
in this session. The original PC-recording route remains supported.

## What is accepted

### Existing VCU1 recordings

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

For VCU1, identity is computed from the recorded microcode by `hashVu1Code`.
The native container below carries the registry identity observed by its
writer; no microcode bytes are available to hash again. The report identifies
which source supplied the identity. Neither identity is authentication.
The raw converter's supported-strip checks remain in force. Original renderer
fallback remains unchanged; an unsupported recording is not forcibly rendered.

Extraction checks the **whole** container, including records after the selected
one, before atomically replacing the output. A malformed tail or write failure
does not replace an existing output. Input/output path aliasing through a
symlink is rejected by resolved-path comparison. No partial packs are published.

Neither container has a global record count or checksum: an exact record-boundary truncation
cannot be detected, nor can arbitrary data corruption always be distinguished
from valid vertex values. A successful parse is not proof of a complete run.

### Native TSVUCAP version 1

Each record is a 48-byte little-endian `<8s6I2Q` header followed by exactly
16,384 bytes of VU data RAM, captured before the native callback mutates it.

| Offset | Field |
| --- | --- |
| 0..7 | `TSVUCAP\0` |
| 8 | uint32 version = 1 |
| 12 | uint32 record bytes = 16432 |
| 16 | uint32 data bytes = 16384 |
| 20 | uint32 original entry PC |
| 24 | uint32 effective TOP (0..1023) |
| 28 | uint32 reserved = 0 |
| 32 | uint64 registered program hash |
| 40 | uint64 observed draw ordinal |

The native callback provides neither VU1State nor code. Accordingly, those
fields are absent, and state byte count, ITOP and cycle budget are null in the
report. This is not an interpreter replay. Draw ordinals increase, can have
sampling gaps, and are not frame/object IDs. Mixed formats, bad native headers,
invalid TOP and repeated/decreasing ordinals reject the whole input.

Native PC classification uses the same low 14 bits as the native runtime;
the original PC remains recorded. Existing VCU1 strict-PC behavior is retained.
Both inputs use the same geometry, constant, state-block and tag comparisons.

## Reading the report

`status_counts` distinguishes converted draws, known non-draw entries, unknown
programs and unsupported draws. Record indices and byte offsets identify inputs;
there are no inferred frame numbers, view IDs or object IDs.

`geometry_sha256` covers the entry PC (effective PC for native captures),
layout, strip lengths/order and every
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

Shared source contracts remain unchanged at the reconciled baseline
`406f2e45fbeabf2c37b2ce23c34beb26f6e046f6`:
- `source/PS2Recomp/ps2xRuntime/src/lib/vu/ps2_vu_capture.h`
  (blob `15319d283b15a463bc96a2b6213ac51797079364`).
- `source/PS2Recomp/ps2xRuntime/src/lib/vu/ps2_vu1_jit.cpp`
  (blob `1ae0b469b245325f7ba7d06f2dd0bbf36b018f1b`).
- `source/PS2Recomp/ps2xRuntime/src/lib/vu/ps2_vu1_core.cpp`
  (blob `dc5ba9b5508e493ca12771d0aaebc9bade12eeee`), capture before native dispatch.
- Native draw/decoder contracts already listed in `NATIVE-GEOMETRY-CHECKPOINT.md`.
