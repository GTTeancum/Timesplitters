# TimeSplitters (PS2 USA v2.00) — initial binary analysis

**Date:** September 22, 2026  
**Project stage:** analyzed original disc; dependency collector prepared.  
**Target:** native Linux x86-64 game execution through PS2Recomp, then discussion
of Windows native builds. No native game executable has been built or run yet.

## 1. Verified input identity

These observations come from programmatically extracting and reading the uploaded
archive, not from substituting a different regional executable or a web listing.

| Item | Observed value |
|---|---|
| Upload | `TimeSplitters (USA) (v2.00).7z` |
| Upload bytes | 386,251,149 |
| Disc layout | One BIN/CUE track, MODE2/2352; ISO9660 data at byte 24 within each sector |
| BIN bytes | 719,502,672 |
| ISO volume label | `SLUS_20090` |
| Files in ISO filesystem | 49 |
| Boot executable | `SLUS_200.90` |
| SYSTEM.CNF version/video | `VER = 2.00`, `VMODE = NTSC` |
| ELF bytes | 2,606,981 |
| ELF identity | ELF32, little-endian, MIPS; flags `0x20924001` identify R5900-specific characteristics |
| ELF entry | `0x00200008` |

SHA256s:

```text
Uploaded 7z:
beb36e65408aacfb735fd0801dc77d69388d51101a6b8341c16c799d3202bb73

Disc BIN:
e845ad76532dfaf890def246ee8a9cd0e96afe7ed14531580213f3a5d298b3d3

SLUS_200.90:
19f3adca55a338d75ec7acbf56a808ec1a3e62eb567971867a7d38e1e39938c2
```

`SYSTEM.CNF` names `cdrom0:\SLUS_200.90;1`. The image is a raw-sector BIN, not an
ISO with 2048-byte sectors. Any extraction/asset loader must account for that
rather than applying ISO byte offsets directly to the BIN.

## 2. Particularly useful: retained symbols and debug information

The main executable has **6,254 symbol-table entries**, including **2,669 defined
function symbols**. The function symbols have nonzero sizes and distinct starting
addresses in `.text`. This is much more useful for function-boundary recovery
than starting from an executable with its symbol table removed. It is not proof
that every possible indirect entry or code/data boundary has already been found.

| Section/feature | Size / observation |
|---|---|
| `.text` | 978,924 bytes at `0x00200000` |
| `.vutext` | 15,312 bytes at `0x002EEFF0` |
| `.mdebug` | 616,584 bytes |
| `.stab` | 23,376 bytes |
| `.stabstr` | 428 bytes |
| `.symtab` | 100,064 bytes |
| `.strtab` | 74,869 bytes |
| `.DVP.overlay...` sections | 20 |
| `.DVP.ovlytab` | 240 bytes |

`.mdebug` is ECOFF-style debug information, **not DWARF**. A DWARF-only pass should
not be treated as proof that this executable lacks debug information. The
selected Ghidra Emotion Engine extension documents STABS/ECOFF recovery of data
types, globals and functions from `.mdebug`, as well as R5900 instruction support.
This is why a matched Ghidra/extension pair is included. [1]

**Not yet done:** importing this ELF into that extension, validating recovered
types, recovering every indirect call target, or generating/building game C++.
The retained symbol names are verified; recovery of the full original source or
original developer comments is not being claimed.

## 3. Memory image

There is one PT_LOAD segment:

```text
File offset:       0x00001000
Guest address:     0x00200000
File-backed bytes: 1,768,852
Memory bytes:      31,413,136
Exclusive end:     0x01FF5390
Flags:             read/write/execute
Alignment:         4096
```

The `.bss` section alone is **29,643,152 bytes**, beginning at `0x003B0200`.
The loader must faithfully allocate and zero-fill the declared memory extent;
using only the on-disc file length would leave a very large part of the game's
expected writable memory absent. Conversely, debug-only sections are analysis
inputs, not additional guest load segments. The size does not by itself tell us
which portions of BSS are game arenas or how every allocator behaves.

## 4. Named startup, graphics and streaming paths

| Function | Address | Useful observation |
|---|---|---|
| `_start` | `0x00200008` | Direct calls to `FlushCache` and `main` |
| `main` | `0x002013B0` | Calls `CreateThread` twice, `StartThread` twice, GS synchronization and interrupt APIs, then includes `SleepThread` |
| `cpuMain` | `0x00200C48` | Level/game reset and preload functions, `bossMainLoop`, `WaitSema`, i.Link functions |
| `gsMain` | `0x00200F20` | `WaitSema`, `SignalSema`, `SetAlarm`, `ReleaseAlarm`, `FlushCache`, `sceDmaSend` and Z-buffer test functions |
| `stream_RPCinit` | `0x00205D88` | Calls `sceSifBindRpc` |
| `stream_RPC` | `0x00205DE8` | Calls `sceSifCallRpc` |
| `bgLoad` | `0x00253B88` | Calls preload/object-relocation/bounds/graphics-precalculation and room setup functions |
| `fileLoad` | `0x0021A3F8` | Calls `fileSize`, aligned allocation and `fileLoadTo` |

Method: these are decoded direct JAL instruction encodings within the recorded
function-symbol ranges. They are static evidence, **not an execution trace** or
proof that every call executes in every mode. The complete inspected call lists
and instruction addresses are in `analysis/key_function_calls.json`.

This suggests three early integration priorities: correct thread/semaphore/alarm
behavior; DMA/GS/VU coordination; and actual SIF/IOP streaming rather than dummy
success returns. The vector-program/overlay metadata must be kept distinct from
ordinary EE functions; its existence alone does not establish dynamic EE overlays.

## 5. IOP modules and asset layout

The disc includes `SIO2MAN.IRX`, `MTAPMAN.IRX`, `PADMAN.IRX`, `MCMAN.IRX`,
`MCSERV.IRX`, `LIBSD.IRX`, `SDRDRV.IRX`, `IOP.IMG` and **`STREAM.IRX`**.

`STREAM.IRX` is 56,312 bytes. It retains 114 symbols, including 26 defined function
symbols, and a 33,072-byte `.mdebug` section. Useful names include
`BackgroundLoadInitialise`, `StartBackgroundLoad`, `BackgroundLoadTick`,
`StreamLoadFinishedCallBack`, `StreamDmaInt`, `StreamSpu2Int`, `StreamPreLoad`,
`StreamStart`, `StreamStop`, `StreamGetStatus`, `dispatch`, and `stream_loop`.

These are good leads for recovering the game's custom background-loading/audio
RPC contract. The module has not been executed and its full wire protocol or
DMA/interrupt behavior has not yet been reconstructed.

The filesystem also has six main PAK files (`ANIM`, `FRONTEND`, `BG`, `OB`, `MISC`,
`SFX`), 27 `.MSC` music files, and five large root files. The PAK and music formats
have **not** been decoded in this pass. File extensions are not being treated as
proof of an audio codec, compression scheme or proprietary container layout.

## 6. Toolchain selection and what the collector covers

PS2Recomp's inspected root build uses CMake 3.21 and the project uses C++20. Its
recompiler/runtime/analyzer obtain several libraries through FetchContent rather
than containing all dependency source in a single repository ZIP. The collector
reads declarations from the acquired snapshot and caches those repositories. [2]

PCSX2 is included as a separately identified hardware/IOP/VU/GS/debugging reference.
Its official Linux dependency script supplies explicit archive URLs and SHA256s
for its third-party build inputs. The collector downloads that exact script's
listed inputs, including the applicable Qt/SDL/shader/image/audio-video versions,
rather than guessing those versions from an old PCSX2 build guide. [3]

The upstream PS2Recomp README describes experimental/partial hardware coverage.
That means this is a game-specific integration project, not a promise that merely
feeding the ELF to the tool will produce a working game. PCSX2 source can inform
hardware-facing implementation and comparison, but its standalone executable is
not a replacement for native EE recompilation. [4]

The analysis distribution is pinned to **Ghidra 12.1.3 + EE extension v2.1.37**.
The selected Ghidra release specifies JDK 21. Its matching extension binary is
selected deliberately; independently taking the newest Ghidra release and newest
extension could produce an incompatible pair. [5]

The package collector targets the scratch environment's **Debian 13 amd64**
platform and resolves `Depends`/`Pre-Depends` with versioned virtual providers,
alternatives, conflicts and backtracking. It bundles packages for system Python,
Clang/LLVM, CMake/Ninja, debuggers and Linux multimedia/display support. It does
not pretend those Debian packages form an arbitrary-distribution portable SDK.
A full live collection/install/build remains to be verified when the user runs
the collector and uploads the completed bundle.

## 7. Native bring-up sequence and evidence gates

1. **Reproduce tool builds:** verify all returned hashes; prepare exact source
   snapshots; build PS2Recomp tools/runtime without fetching missing libraries.
2. **Recover the executable:** import the retained symbols/debug data, distinguish
   EE and VU ranges, establish indirect entry points, and generate build-specific
   recompilation configuration keyed to the verified ELF hash.
3. **Native startup:** build a host x86-64 executable and prove original EE startup
   progresses through actual initialization. Unresolved calls should produce
   actionable diagnostics, not silently return success to manufacture progress.
4. **Original frontend and input:** show original game-rendered menus and working
   input under Linux, with reproducible logs/screenshots from the native program.
5. **Level progression and subsystems:** validate the CPU/graphics synchronization,
   DMA/VU/GS processing, loading, streaming/audio and saving required by actual
   play. Keep PCSX2 reference runs explicitly separate from native evidence.

A blank host window or a successful compiler exit is not a running-game result.
Windows build planning remains deferred until genuine Linux game execution is
demonstrated. Checkpoints should retain source, config, tests, hashes, logs and
any genuinely tested native binaries so later work does not depend on an
unrecorded scratch-session state.

## 8. What is already saved in this kit

`analysis/input_hashes.json`: original archive/BIN/CUE identities.  
`analysis/disc_analysis.json`: filesystem, ELF/program/section metadata.  
`analysis/SLUS_200.90.symbols.json`: full retained EE symbol metadata.  
`analysis/STREAM.IRX.symbols.json`: retained streaming-module symbol metadata.  
`analysis/key_function_calls.json`: inspected direct-call evidence.

No original executable, module binary, music or game asset is redistributed in
the collector kit. The original upload remains the authoritative game input.

## Primary sources checked

[1] Emotion Engine extension README at the selected release:
https://github.com/chaoticgd/ghidra-emotionengine-reloaded/tree/v2.1.37

[2] PS2Recomp root/recompiler/runtime/analyzer build definitions:
https://github.com/ran-j/PS2Recomp/blob/main/CMakeLists.txt
https://github.com/ran-j/PS2Recomp/blob/main/ps2xRecomp/CMakeLists.txt
https://github.com/ran-j/PS2Recomp/blob/main/ps2xRuntime/CMakeLists.txt
https://github.com/ran-j/PS2Recomp/blob/main/ps2xAnalyzer/CMakeLists.txt

[3] PCSX2 official Linux third-party build script and build documentation:
https://github.com/PCSX2/pcsx2/blob/master/.github/workflows/scripts/linux/build-dependencies-qt.sh
https://pcsx2.net/docs/advanced/building/

[4] PS2Recomp upstream documentation:
https://github.com/ran-j/PS2Recomp

[5] Ghidra release properties and matching extension release assets:
https://github.com/NationalSecurityAgency/ghidra/blob/Ghidra_12.1.3_build/Ghidra/application.properties
https://github.com/chaoticgd/ghidra-emotionengine-reloaded/releases/tag/v2.1.37

URLs above identify the inspected upstream sources; source branch URLs can change.
The collector records the actual immutable commits it acquires on its first run.
