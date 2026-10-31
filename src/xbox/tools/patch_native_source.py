"""Connect immediate VIF source loans to the Xbox native ring writer.

Composes after optional background and native-GIF adapters. XBG remains
the first choice, then exact current-prefix source arrays, then the original
VU decoder. Original GPU eligibility, state/arbiter order and fallback stay
in place. Native capture and sampled ring checks decline the source loan.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import tempfile


GENERATED = '// Xbox build copy made by src/xbox/tools/patch_native_source.py; do not edit.\n'
INCLUDE = '#include "vu1_native_xf.h"\n'
ADAPTER_INCLUDE = '#include "xbox_vif_source.h"\n'
RUN = '''    bool run(uint32_t pc, uint8_t *vuData, uint32_t dataSize, uint32_t top, PS2Memory *memory, GS &gs)
    {
'''
NATIVE_SCOPE = '''#if TS_VIF_SOURCE && TS_DRAW_RECORDS && !TS_NATIVE_CAPTURE
        XboxVifSourceNativeScope xboxSourceNative(pc, memory ? memory->getRDRAM() : nullptr,
                                                  vuData, dataSize, top, PS2Memory::onVif1Worker());
#endif
'''
LOAD_V = '''    inline V4 loadV(const uint8_t *d, uint32_t q)
    {
        V4 v;
        std::memcpy(&v, d + (q & (kDataQwords - 1u)) * 16u, 16);
        return v;
    }
'''
LOAD_I = '''    inline void loadI(const uint8_t *d, uint32_t q, uint32_t out[4]) { std::memcpy(out, d + (q & (kDataQwords - 1u)) * 16u, 16); }
'''
# Keep diagnostic readers independent from the source-backed path. The
# existing source claim already excludes capture; this guard makes all
# three diagnostic selections explicit at both raw read sites as well.
READ_GUARD = '#if TS_VIF_SOURCE && TS_DRAW_RECORDS && !TS_NATIVE_DRAW_SELFCHECK && !TS_NATIVE_RING_SELFCHECK && !TS_NATIVE_CAPTURE\n'
LOAD_V_SOURCE = '''    inline V4 loadV(const uint8_t *d, uint32_t q)
    {
        V4 v;
''' + READ_GUARD + '''        if (xboxVifSourceTryReadRow(d, q & (kDataQwords - 1u), &v))
            return v;
#endif
        std::memcpy(&v, d + (q & (kDataQwords - 1u)) * 16u, 16);
        return v;
    }
'''
LOAD_I_SOURCE = '''    inline void loadI(const uint8_t *d, uint32_t q, uint32_t out[4])
    {
''' + READ_GUARD + '''        if (xboxVifSourceTryReadRow(d, q & (kDataQwords - 1u), out))
            return;
#endif
        std::memcpy(out, d + (q & (kDataQwords - 1u)) * 16u, 16);
    }
'''
JOINED_CALL = 'ts_native_xf::writeJoinedStrip(kind, cursor, data, vi, n);'
FLAT_CALL = 'ts_native_xf::decodeXfStrip(kind, data, vi, n, list);'
GROUP_LINES = ('for (uint32_t k = i; k < j; ++k)', '    gpuStrip(strips[k]);')
ELIGIBILITY = '''        auto gpuEligible = [&](const Strip &s) { return gpuTransform && (s.tag[1] & (1u << 14)) != 0u; };
'''
GROUP_OPEN = '''            packet.submit(); // the state block and anything before go first
            if (memory && memory->gifArbiter() && !memory->gifArbiter()->empty())
                memory->gifArbiter()->drain(); // packets queued behind other paths, in order
            if (ok && gs.beginXfRun(prim, *xc, cursor))
            {
                TS_RENDER_COUNT(++g_renderCounters.gpuRuns);
                TS_RENDER_COUNT(g_renderCounters.flatRuns += cursor.direct ? 0u : 1u);
                TS_RENDER_COUNT(g_renderCounters.mergedRuns += cursor.direct && cursor.join ? 1u : 0u);
'''
GROUP_CLOSE = '''                gs.endXfRun(cursor);
            }
            else
            {
                TS_RENDER_COUNT(g_renderCounters.declinedRuns += ok ? 1u : 0u);
'''


def require_once(source: str, label: str, anchor: str) -> None:
    if source.count(anchor) != 1:
        raise ValueError(f'expected exactly one {label} anchor')


def strip_replacement(indent: str, call: str, attempt: str) -> str:
    return ('#if TS_VIF_SOURCE\n'
            '#if TS_NATIVE_RING_SELFCHECK\n'
            f'{indent}if (ringCheck || !{attempt})\n'
            '#else\n'
            f'{indent}if (!{attempt})\n'
            '#endif\n'
            '#endif\n'
            f'{indent}    {call}\n')


def group_replacement(indent: str) -> str:
    # A block is one statement, so an existing !xboxBgGroupWritten guard
    # still encloses this complete second-choice source admission.
    body = '''{
    bool xboxSourceGroupWritten = false;
#if TS_VIF_SOURCE
#if TS_NATIVE_RING_SELFCHECK
    if (!ringCheck)
#endif
    {
        const uint32_t xboxSourceGroupCount = j - i;
        if (xboxSourceGroupCount <= kXboxVifSourceMaxStrips)
        {
            XboxVifSourceStripSpan xboxSourceSpans[kXboxVifSourceMaxStrips];
            for (uint32_t k = 0; k < xboxSourceGroupCount; ++k)
                xboxSourceSpans[k] = {strips[i + k].vi, strips[i + k].n};
            xboxSourceGroupWritten = xboxVifSourceTryWriteGroup(
                kind, cursor, data, xboxSourceSpans, xboxSourceGroupCount);
        }
    }
#endif
    if (!xboxSourceGroupWritten)
        for (uint32_t k = i; k < j; ++k)
            gpuStrip(strips[k]);
}
'''
    return ''.join(line if line.startswith('#') else indent + line
                   for line in body.splitlines(keepends=True))


def patch_source(source: str) -> str:
    newline = '\r\n' if '\r\n' in source else '\n'
    normalized = source.replace('\r\n', '\n')
    if '\r' in normalized or (newline == '\r\n' and '\n' in source.replace('\r\n', '')):
        raise ValueError('mixed or unsupported source line endings')
    if '\x00' in source or source.startswith('\ufeff'):
        raise ValueError('unsupported source encoding')
    if any(marker in normalized for marker in
           (GENERATED, ADAPTER_INCLUDE, 'xboxSourceNative', 'xboxSourceGroupWritten',
            'xboxVifSourceTryReadRow(')):
        raise ValueError('native source already has the Xbox VIF source adapter')
    require_once(normalized, 'native vertex include', INCLUDE)
    require_once(normalized, 'native entry', RUN)
    require_once(normalized, 'native vector reader', LOAD_V)
    require_once(normalized, 'native integer reader', LOAD_I)
    require_once(normalized, 'GPU eligibility', ELIGIBILITY)
    require_once(normalized, 'ordered accepted GPU run', GROUP_OPEN)
    require_once(normalized, 'GPU run end and original CPU fallback', GROUP_CLOSE)
    background = '#include "xbox_bg_xf.h"' in normalized
    indent = ' ' * (20 if background else 16)
    joined = indent + JOINED_CALL + '\n'
    flat = indent + FLAT_CALL + '\n'
    group = '\n'.join(indent + line for line in GROUP_LINES) + '\n'
    for label, anchor in (('joined-strip fallback', joined), ('flat-strip fallback', flat),
                          ('accepted GPU group fallback', group)):
        require_once(normalized, label, anchor)
    if not (normalized.index(ELIGIBILITY) < normalized.index(GROUP_OPEN) <
            normalized.index(group) < normalized.index(GROUP_CLOSE)):
        raise ValueError('unexpected eligibility/state/arbiter/group/end order')
    if background:
        # Do not infer that arbitrary indentation means the pack path
        # declined. Require the actual first-choice guards as well.
        for label, guard, fallback in (
                ('joined', '                if (!xboxBgTryWriteJoinedStrip(kind, cursor, data, vi, n))\n', joined),
                ('flat', '                if (!xboxBgTryDecodeStrip(kind, data, vi, n, list))\n', flat),
                ('group', '                if (!xboxBgGroupWritten)\n', group)):
            require_once(normalized, f'XBG {label} guard', guard)
            require_once(normalized, f'XBG {label} guarded fallback', guard + fallback)
    normalized = normalized.replace(INCLUDE, INCLUDE + ADAPTER_INCLUDE)
    normalized = normalized.replace(RUN, RUN + NATIVE_SCOPE)
    normalized = normalized.replace(LOAD_V, LOAD_V_SOURCE)
    normalized = normalized.replace(LOAD_I, LOAD_I_SOURCE)
    normalized = normalized.replace(joined, strip_replacement(
        indent, JOINED_CALL, 'xboxVifSourceTryWriteJoinedStrip(kind, cursor, data, vi, n)'))
    normalized = normalized.replace(flat, strip_replacement(
        indent, FLAT_CALL, 'xboxVifSourceTryDecodeStrip(kind, data, vi, n, list)'))
    normalized = normalized.replace(group, group_replacement(indent))
    return (GENERATED + normalized).replace('\n', newline)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    temporary = None
    try:
        if args.source.resolve() == args.output.resolve() or (
                args.output.exists() and args.source.samefile(args.output)):
            raise ValueError('output must not alias the shared native source')
        patched = patch_source(args.source.read_bytes().decode('utf-8'))
        args.output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile(mode='wb', dir=args.output.parent,
                                         prefix='.vif-source-', delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(patched.encode('utf-8'))
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, f'patch_native_source: {error}\n')
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
