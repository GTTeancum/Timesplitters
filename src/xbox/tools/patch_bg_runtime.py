"""Make Xbox-only runtime copies with bounded XBG provenance observations.

Original VIF execution, writes and fallback paths remain unchanged. Every
insertion has one exact source anchor; changed or already-patched inputs fail
before replacing output. The shared runtime source is never modified.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import tempfile


INCLUDE = '#include "runtime/ps2_memory.h"\n'
ADAPTER_INCLUDE = '#include "xbox_bg_runtime.h"\n'
GENERATED = '// Xbox build copy made by src/xbox/tools/patch_bg_runtime.py; do not edit.\n'
LEGACY = (
    'void PS2Memory::processVIF1Data(const uint8_t *data, uint32_t sizeBytes)\n'
    '{\n'
    '    g_vif1LastConsumed = 0;\n'
)
LEGACY_SCOPE = (
    '    XboxBgVuWriteScope xboxBgLegacyWriteScope;\n'
    '    xboxBgInvalidateVu();\n'
)
DECODE = (
    'uint32_t PS2Memory::decodeVIF1Pieces(const Vif1Piece *pieces, size_t count, '
    'uint32_t bytes, bool chainEnd)\n{\n'
)
UNPACK = '''            const uint32_t sourceBytes = sourceVectorCount * bytesPerVector;
            const uint32_t totalBytes = (sourceBytes + 3u) & ~3u;
            if (totalBytes > in.left())
            {
                leave(4u);
#if TS_RENDER_COUNTERS >= 2
                if (!chainEnd) // counted when it is read anew
                {
                    --unpackCount;
                    g_renderCounters.unpackMasked -= (opcode >> 4) & 1u;
                }
#endif
                break;
            }

            uint32_t vuAddr = (uint32_t)imm & 0x3FFu;
            if ((imm & 0x8000u) != 0u)
                vuAddr = (vuAddr + (vif1_regs.tops & 0x3FFu)) & 0x3FFu;

            if (!m_vu1Data)
            {
                in.skip(totalBytes);
                continue;
            }

            // (The span needs a division; nothing to note without watched rows.)
            if (g_vu1WatchedRows.ranges != 0u)
                g_vu1WatchedRows.note(vuAddr, vu1UnpackSpan(writeVectorCount, cl, wl));
            UnpackCursor cursor{vuAddr, 0u, cl, wl};
            const bool maskEnable = (opcode & 0x10u) != 0u;
            const bool zeroExtend = (imm & 0x4000u) != 0u;
'''
UNPACK_NOTE = '''            xboxBgNoteUnpack(m_rdram, m_vu1Data, vuAddr,
                             in.avail() >= sourceBytes ? in.here() : nullptr,
                             writeVectorCount, opcode & 0xFu, cl, wl, vif1_regs.mode,
                             maskEnable, PS2Memory::onVif1Worker());
'''
EXECUTE = (
    '        else if (opcode == VIF_MSCAL || opcode == VIF_MSCALF || opcode == VIF_MSCNT)\n'
    '        {\n'
    '            const uint32_t runTop = vif1_regs.tops & 0x3FFu;\n'
)
EXECUTE_SCOPE = '            XboxBgVuWriteScope xboxBgExecutionWriteScope;\n'
RESET = (
    '        std::memset(m_vu1Data, 0, PS2_VU1_DATA_SIZE);\n'
    '        g_vu1WatchedRows.noteAll();\n'
    '        markVU0CodeModified();\n'
)
MEMORY_TYPES = ('uint8_t', 'uint16_t', 'uint32_t', 'uint64_t', '__m128i')


def require_once(source: str, label: str, anchor: str) -> int:
    if source.count(anchor) != 1:
        raise ValueError(f"expected exactly one {label} anchor")
    return source.index(anchor)


def patch_vif(source: str) -> str:
    positions = [require_once(source, label, anchor) for label, anchor in
                 (("legacy VIF1 entry", LEGACY), ("segmented VIF1 entry", DECODE),
                  ("validated segmented UNPACK", UNPACK), ("segmented VU execution", EXECUTE))]
    if positions != sorted(positions):
        raise ValueError("unexpected VIF1 entry/UNPACK/execution order")
    source = source.replace(LEGACY, LEGACY.replace('    g_vif1LastConsumed',
                                                 LEGACY_SCOPE + '    g_vif1LastConsumed'))
    source = source.replace(UNPACK, UNPACK + UNPACK_NOTE)
    source = source.replace(EXECUTE, EXECUTE.replace('            const uint32_t runTop',
                                                   EXECUTE_SCOPE + '            const uint32_t runTop'))
    return source


def patch_memory(source: str) -> str:
    if source.count('g_vu1WatchedRows.noteBytes(') != 5 or source.count('g_vu1WatchedRows.noteAll(') != 1:
        raise ValueError("expected exactly five VU1 noteBytes sites and one noteAll site")
    reset_at = require_once(source, "VU1 initialization/reset", RESET)
    replacements = []
    previous = reset_at
    for width, kind in zip((8, 16, 32, 64, 128), MEMORY_TYPES):
        signature = f'void PS2Memory::write{width}(uint32_t address, {kind} value)\n{{\n'
        function_at = require_once(source, f"write{width} entry", signature)
        anchor = ('            else if (vuMem == m_vu1Data)\n'
                  f'                g_vu1WatchedRows.noteBytes(vuOffset, sizeof({kind}));\n')
        note_at = require_once(source, f"write{width} VU1 data write", anchor)
        if not previous < function_at < note_at:
            raise ValueError(f"unexpected write{width} VU1 observation order")
        previous = note_at
        replacement = ('            else if (vuMem == m_vu1Data)\n'
                       '            {\n'
                       f'                g_vu1WatchedRows.noteBytes(vuOffset, sizeof({kind}));\n'
                       '                xboxBgInvalidateVu();\n'
                       '            }\n')
        replacements.append((anchor, replacement))
    for anchor, replacement in replacements:
        source = source.replace(anchor, replacement)
    return source.replace(RESET, RESET.replace('        g_vu1WatchedRows.noteAll();\n',
                                               '        g_vu1WatchedRows.noteAll();\n'
                                               '        xboxBgInvalidateVu();\n'))


def patch_source(kind: str, source: str) -> str:
    if kind not in ('vif', 'memory'):
        raise ValueError("kind must be vif or memory")
    # Preserve CRLF build checkouts byte-for-byte outside insertions; mixed or
    # standalone-CR inputs are an unknown source shape, not silently normalized.
    newline = '\r\n' if '\r\n' in source else '\n'
    normalized = source.replace('\r\n', '\n')
    if '\r' in normalized or (newline == '\r\n' and '\n' in source.replace('\r\n', '')):
        raise ValueError("mixed or unsupported source line endings")
    if '\x00' in source or source.startswith('\ufeff'):
        raise ValueError("unsupported source encoding")
    if any(marker in normalized for marker in
           (ADAPTER_INCLUDE, GENERATED, 'XboxBgVuWriteScope', 'xboxBgNoteUnpack(', 'xboxBgInvalidateVu(')):
        raise ValueError("runtime source already has Xbox BG observations")
    require_once(normalized, "runtime memory include", INCLUDE)
    patched = patch_vif(normalized) if kind == 'vif' else patch_memory(normalized)
    patched = patched.replace(INCLUDE, INCLUDE + ADAPTER_INCLUDE)
    return (GENERATED + patched).replace('\n', newline)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("kind", choices=('vif', 'memory'))
    parser.add_argument("source", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args()
    temporary = None
    try:
        if args.source.resolve() == args.output.resolve() or (
                args.output.exists() and args.source.samefile(args.output)):
            raise ValueError("output must not alias the shared runtime source")
        patched = patch_source(args.kind, args.source.read_bytes().decode('utf-8'))
        args.output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile(mode='wb', dir=args.output.parent,
                                         prefix='.xbg-runtime-', delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(patched.encode('utf-8'))
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, f"patch_bg_runtime: {error}\n")
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
