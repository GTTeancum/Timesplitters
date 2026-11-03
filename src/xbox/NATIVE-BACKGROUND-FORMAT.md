# Source background geometry: XBG1

XBG1 stores the original background meshes as the Xbox path's 44-byte raw
vertices. Its input is the game's `BG.PAK`, not a draw recording. Stable
identities include the original PAK and raw-file SHA-256 values, level number,
room index, part offset, variant and descriptor offset.

This first version supports class-0 background parts with Plain (source
layout 0) or EnvMap (source layout 2) batches. Unsupported classes, layouts,
compressed entries and inherited texture indices are errors. It preserves
source strip order, full GIF tags and all four texture-record words. Original
room records remain opaque metadata; this is not a replacement for the
game's visibility, collision, material, animation or lighting systems.
Variants 0 and 1 retain their original numbers; no unverified opacity or
visibility meaning is assigned to them.

The mandatory `REQUIRES_LIVE_BINDING` flag is 1. No renderer is activated by
these files. A future adapter must establish the loaded asset generation and
correct source batch, keep live relit/instance vertex attributes, and preserve
texture state, ordering, transforms, clipping and GPU lifetimes. Source colors
in this pack are the original colors, not proof that a live color stream is
unchanged. Geometry equality alone does not authorize dropping a draw.

## Build and inspect

```sh
python src/xbox/tools/xbgbuild.py build /private/PAK/BG.PAK /private/native-bg \
  --misc-pak /private/PAK/MISC.PAK
python src/xbox/tools/xbgbuild.py build /private/PAK/BG.PAK /private/tomb-bg \
  --misc-pak /private/PAK/MISC.PAK --level 26
python src/xbox/tools/xbgbuild.py inspect /private/native-bg/level26.xbg
```

The output contains `levelN.xbg` files and `manifest.json`. Repeat `--level`
to select several source levels. Without that option, all original BG entries
are converted. Source names must be the canonical
`bg/levelN/levelN.raw`, with a positive level number. MISC validation is
optional and its presence is recorded in the manifest; an empty placeholder
entry cannot satisfy a referenced numeric texture.

All selected source levels and all resulting packs pass validation before
any output is replaced. Files are staged, each replacement is atomic, and the
manifest is published last. A filesystem failure during final replacements
is not a whole-directory rollback. The converter keeps selected encoded packs
in host memory until publication. Inputs are capped at 256 MiB per PAK.

The C++ entry point is `ts_xbg::open(bytes, size, view)` in
`xbox_bg_pack.h`. Only `Error::None` exposes borrowed validated tables. Failed
opens clear the entire view, including after a previous successful open.
The caller owns the immutable storage and must keep it alive. The reader
allocates no memory and performs no GPU or renderer action.

## Encoding

All integers and float bit patterns are little endian. Offsets in the header
address this pack. Fields prefixed `source_` address the original raw level
file, except source tag/vertex start fields, which are array indices. Counts
and offsets are unsigned 32-bit values unless explicitly stated otherwise.
Every reader must validate the entire pack before exposing its contents.

The header is 160 bytes. Tables occur in this exact order: header, textures,
rooms, batches, strips, zero padding to a 128-byte boundary, vertices. There
is no trailing padding. The maximum encoded file size is 64 MiB; this is a
format bound, not a claim that the Xbox can allocate a pack of that size.

| Offset | Field |
| --- | --- |
| 0 | Eight bytes `TSXBGP1\0` |
| 8 | Version, 1 |
| 12 | Header bytes, 160 |
| 16 | Flags, exactly 1 (`REQUIRES_LIVE_BINDING`) |
| 20 | Positive source level number |
| 24 | Total pack bytes |
| 28 | Original raw-file bytes |
| 32, 36, 40, 44, 48 | Room, batch, strip, vertex, texture counts |
| 52, 56, 60, 64, 68 | Room, batch, strip, vertex, texture offsets |
| 72, 76, 80, 84 | Source texture-table, room-table, portal-table, volume offsets |
| 88 | Original raw-file SHA-256, 32 bytes |
| 120 | Original BG.PAK SHA-256, 32 bytes |
| 152 | CRC-32 of the entire pack, treating bytes 152..155 as zero |
| 156 | Reserved, zero |

Texture records are 16 bytes: the original four 32-bit words, unchanged.
The first word is the numeric texture ID. With the matching `MISC.PAK`, it
identifies `textures/%04d.qpm`; the other words remain opaque.

Room records are 64 bytes:

| Offset | Field |
| --- | --- |
| 0 | Original room index (the source's sentinel room 0 is excluded) |
| 4 | Source room-record offset |
| 8, 12 | First batch index, batch count |
| 16 | Original 44-byte room record, unchanged |
| 60 | Reserved, zero |

Batch records are 64 bytes:

| Offset | Field |
| --- | --- |
| 0 | Index in this pack's room table |
| 4, 8, 12 | Source model offset, source part offset, source part index |
| 16 | Variant, 0 or 1 |
| 20 | Source descriptor offset |
| 24 | Texture-table index (signed; nonnegative in this version) |
| 28 | Source layout, 0 (Plain) or 2 (EnvMap) |
| 32, 36 | First strip index, strip count |
| 40, 44 | First vertex index, vertex count |
| 48, 52 | Original source tag-start and vertex-start array indices |
| 56, 60 | Original first two 32-bit words of the source part, unchanged |

Each batch contains 1..24 strips and 3..64 vertices, matching the checked
class-0 source batches. Aggregate table counts are nonzero. Batch ranges
partition the strip and vertex tables in order. Room ranges
partition the batch table in order. Empty room ranges are allowed. Source
room indices are strictly increasing. Source descriptor identities within a
room/part/variant must not be duplicated. Batches retain source traversal
order: room, part index, variant, then descriptor offset. Within a populated
part/variant, descriptor offsets advance by 24 bytes.

Strip records are 32 bytes: first global vertex index, vertex count, source
tag offset, reserved zero, then the unchanged 16-byte GIF tag. Strip ranges
partition their batch's vertices in order. Counts are 3..64, and the original
tag must describe a PACKED, PRE, NREG=3 triangle strip with the same count.
EOP is set only on the final strip of each batch. No strip is reordered,
joined, or removed.

Vertices are 44 bytes in the same field order as `GSXfVertex`: position
xyz (offset 0, 12 bytes), normal xyz (offset 12, 12 bytes), packed color
(offset 24, 4 bytes), STQ (offset 28, 12 bytes), and bone4 (offset 40, 4 bytes).
Source float words are copied as bytes. Plain normals are positive zero;
Plain STQ comes from the source vector, with either signed zero Q normalized
to 1. EnvMap normals come from the source vector; STQ is (0, 0, 1). Source
RGBA bytes are reordered into the production packed color, and bone4 is zero.

## Source validation and verification

The converter validates the P4CK directory, bounded source arrays, original
room and part tables, descriptor termination, strip counts, all source ranges,
and complete supported coverage before publishing output. Optional MISC.PAK
validation checks each numeric texture reference without interpreting unknown
texture-record fields. No copyrighted input assets belong in source control.

CRC-32 is a loading-time corruption check, not an authenticity check. The
source digests identify the original inputs; opening a pack does not compare
those digests with a loaded game's files.

The borrowed-memory C++ reader owns no allocations or GPU resources. It
validates canonical table positions, arithmetic, source bounds, hierarchy,
tags, reserved fields and zero padding. Opening a pack does not bind it to a
running level. Decoder agreement and offline source conversion are separate
from target rendering and performance verification.
