"""Observe completed partGfx precalc/Dbuf CALLs in an Xbox-only source copy.

No guest list byte, register, scheduler step or original statement changes.
Production precalc and Dbuf paths meet at their checked final QWC stores. The
observer may decline and the original DMA/VIF path still has its full list.
Compose this copy before patch_native_calls.py for ts_native_game2.cpp.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import tempfile


GENERATED = '// Xbox build copy made by src/xbox/tools/patch_draw_record_game.py; do not edit.\n'
INCLUDE = '#include "ps2_runtime.h"\n'
ADAPTER = '#include "xbox_draw_record.h"\n'
PRECALC = '''    L_261c38:
        TS_RENDER_COUNT(++g_renderCounters.partPrecalc);
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v0));               // 261c38 sw $v0, -0x6C60($gp)
        // 261c3c b . + 4 + (0xC3 << 2)
        WRITE16(lo32(r.v1), static_cast<uint16_t>(0u));          // 261c40 sh $zero, 0x0($v1)
        goto L_261f4c;
'''
OBSERVE = '''#if TS_DRAW_RECORDS && TS_RENDER_COUNTERS < 2
        xboxDrawRecordNotePrecalc(rdram, lo32(r.v1));
#endif
'''
DBUF = '''    L_261c74:
        TS_RENDER_COUNT(++g_renderCounters.partDbuf);
        r.a0 = LW(lo32(r.v1));                                   // 261c74 lw $a0, 0x0($v1)
        WRITE8(lo32(r.a1) + 0x3u, static_cast<uint8_t>(r.a2));   // 261c78 sb $a2, 0x3($a1)
        r.v0 = LW(lo32(r.gp) - 0x6c60u);                         // 261c7c lw $v0, -0x6C60($gp)
        r.v1 = addiu(r.v0, 16);                                  // 261c80 addiu $v1, $v0, 0x10
        WRITE32(lo32(r.v0) + 0x4u, lo32(r.a0));                  // 261c84 sw $a0, 0x4($v0)
        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261c88 sw $v1, -0x6C60($gp)
        // 261c8c b . + 4 + (0xAF << 2)
        WRITE16(lo32(r.v0), static_cast<uint16_t>(0u));          // 261c90 sh $zero, 0x0($v0)
        goto L_261f4c;
'''
OBSERVE_DBUF = '''#if TS_DRAW_RECORDS && TS_RENDER_COUNTERS < 2
        xboxDrawRecordNoteDbuf(rdram, lo32(r.v0));
#endif
'''


def patch_source(source: str) -> str:
    newline = '\r\n' if '\r\n' in source else '\n'
    text = source.replace('\r\n', '\n')
    if '\r' in text or (newline == '\r\n' and '\n' in source.replace('\r\n', '')):
        raise ValueError('mixed or unsupported source line endings')
    if '\x00' in source or source.startswith('\ufeff'):
        raise ValueError('unsupported source encoding')
    if any(marker in text for marker in (GENERATED, ADAPTER, 'xboxDrawRecordNotePrecalc(',
                                        'xboxDrawRecordNoteDbuf(')):
        raise ValueError('source already observes Xbox draw records')
    for name, anchor in (('runtime include', INCLUDE), ('complete precalc CALL', PRECALC),
                          ('complete Dbuf CALL', DBUF)):
        if text.count(anchor) != 1:
            raise ValueError('expected exactly one ' + name + ' anchor')
    text = text.replace(INCLUDE, INCLUDE + ADAPTER)
    text = text.replace(PRECALC, PRECALC.replace('        goto L_261f4c;\n',
                                               OBSERVE + '        goto L_261f4c;\n'))
    text = text.replace(DBUF, DBUF.replace('        goto L_261f4c;\n',
                                         OBSERVE_DBUF + '        goto L_261f4c;\n'))
    return (GENERATED + text).replace('\n', newline)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    temporary = None
    try:
        if args.source.resolve() == args.output.resolve() or (
                args.output.exists() and args.source.samefile(args.output)):
            raise ValueError('output must not alias its source')
        result = patch_source(args.source.read_bytes().decode('utf-8'))
        args.output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile(mode='wb', dir=args.output.parent,
                                         prefix='.xbox-draw-record-', delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(result.encode('utf-8'))
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, f'patch_draw_record_game: {error}\n')
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
