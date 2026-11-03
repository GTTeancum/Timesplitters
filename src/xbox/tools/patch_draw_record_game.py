"""Observe completed partGfx CALLs and per-frame REF groups in an Xbox copy.

No guest list byte, register, scheduler step or original statement changes.
Production precalc and Dbuf paths meet at their checked final QWC stores.
Three REF loops are observed after each iteration's final list-pointer store
and before its possible scheduler checkpoint. The observer may decline;
the original DMA/VIF path still has its full list.
Compose this copy before patch_native_calls.py for ts_native_game2.cpp.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import re
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
REF_FUNCTION = '''    bool nativePartGfxLevel(G_ARGS, uint32_t depth)
    {
        PartGfxRegs r;
'''
REF_LOCAL = '''#if TS_DRAW_RECORDS && TS_RENDER_COUNTERS < 2
        uint32_t xboxRecordRefBegin = 0u;
#endif
'''
REF_STARTS = (
    '''    L_261200:
        TS_RENDER_COUNT(++g_renderCounters.partRefBatches);
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261200 lw $v1, -0x6C60($gp)
''',
    '''    L_261650:
        TS_RENDER_COUNT(++g_renderCounters.partRefBatches);
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261650 lw $v1, -0x6C60($gp)
''',
    '''    L_261ca8:
        TS_RENDER_COUNT(++g_renderCounters.partRefBatches);
        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261ca8 lw $v1, -0x6C60($gp)
''',
)
REF_BEGIN = '''#if TS_DRAW_RECORDS && TS_RENDER_COUNTERS < 2
        xboxRecordRefBegin = lo32(r.v1);
#endif
'''
REF_ENDS = (
    '''        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261450 sw $a0, -0x6C60($gp)
''',
    '''        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 2618a0 sw $a0, -0x6C60($gp)
''',
    '''        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.a0));               // 261f48 sw $a0, -0x6C60($gp)
''',
)
REF_OBSERVATIONS = tuple(
    '#if TS_DRAW_RECORDS && TS_RENDER_COUNTERS < 2\n'
    f'        xboxDrawRecordNoteRefs(rdram, xboxRecordRefBegin, lo32(r.a0), {variant}u);\n'
    '#endif\n' for variant in range(3)
)
# Removing these exact blocks plus ADAPTER and GENERATED restores the input.
INSERTIONS = (OBSERVE, OBSERVE_DBUF, REF_LOCAL, REF_BEGIN, *REF_OBSERVATIONS)


def patch_source(source: str) -> str:
    newline = '\r\n' if '\r\n' in source else '\n'
    text = source.replace('\r\n', '\n')
    if '\r' in text or (newline == '\r\n' and '\n' in source.replace('\r\n', '')):
        raise ValueError('mixed or unsupported source line endings')
    if '\x00' in source or source.startswith('\ufeff'):
        raise ValueError('unsupported source encoding')
    if any(marker in text for marker in (GENERATED, ADAPTER, 'xboxDrawRecordNotePrecalc(',
                                        'xboxDrawRecordNoteDbuf(', 'xboxDrawRecordNoteRefs(',
                                        'xboxRecordRefBegin')):
        raise ValueError('source already observes Xbox draw records')
    required = [('runtime include', INCLUDE), ('complete precalc CALL', PRECALC),
                ('complete Dbuf CALL', DBUF), ('partGfx local scope', REF_FUNCTION)]
    required += [(f'REF {variant} start', anchor) for variant, anchor in enumerate(REF_STARTS)]
    required += [(f'REF {variant} completion', anchor) for variant, anchor in enumerate(REF_ENDS)]
    for name, anchor in required:
        if text.count(anchor) != 1:
            raise ValueError('expected exactly one ' + name + ' anchor')
    for start, end in zip(REF_STARTS, REF_ENDS):
        begin_at, end_at = text.index(start), text.index(end)
        if not text.index(REF_FUNCTION) < begin_at < end_at:
            raise ValueError('unexpected REF observation scope/order')
        # The host-only begin value is never required across a yield, call,
        # or source-level resume entry. Each completed iteration consumes it
        # before the original loop checkpoint can return to the scheduler.
        body = text[begin_at:end_at]
        if any(marker in body for marker in ('loopCheckpoint(', 'NATIVE_CALL(',
                                             'guestCall(', 'xboxNativeGuestCall<',
                                             'callTranslated(', 'return ', 'return;')):
            raise ValueError('REF iteration acquired an unsupported yield/call')
        labels = set(re.findall(r'^    (L_[0-9a-f]+):', body, re.MULTILINE))
        targets = set(re.findall(r'\bgoto (L_[0-9a-f]+);', body))
        if not targets <= labels:
            raise ValueError('REF iteration acquired an unsupported branch exit')
        first_label = next(iter(re.findall(r'^    (L_[0-9a-f]+):', start, re.MULTILINE)))
        outside = text[:begin_at] + text[end_at:]
        if any(re.search(r'\bgoto ' + re.escape(label) + ';', outside)
               for label in labels - {first_label}):
            raise ValueError('REF iteration acquired an unsupported interior entry')
    text = text.replace(INCLUDE, INCLUDE + ADAPTER)
    text = text.replace(PRECALC, PRECALC.replace('        goto L_261f4c;\n',
                                               OBSERVE + '        goto L_261f4c;\n'))
    text = text.replace(DBUF, DBUF.replace('        goto L_261f4c;\n',
                                         OBSERVE_DBUF + '        goto L_261f4c;\n'))
    text = text.replace(REF_FUNCTION, REF_FUNCTION + REF_LOCAL)
    for start, end, observe in zip(REF_STARTS, REF_ENDS, REF_OBSERVATIONS):
        text = text.replace(start, start + REF_BEGIN)
        text = text.replace(end, end + observe)
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
