"""Connect the native model cache (src/xbox/xbox_model_cache.*) to Xbox copies.

patch_native_models.py memory|vif|game SOURCE OUTPUT

- memory: the VIF1 DMA walker (ps2_memory.cpp) asks the cache at each
  zero-QWC CALL, appends its 16-byte marker pieces, and reports the chain's
  tags and pieces for the capture's source hash;
- vif: the segmented decoder (ps2_vif1_interpreter.cpp) hands markers to the
  cache and reports MSCAL/MSCNT, non-native runs, DIRECT and MPG inside a
  capture;
- game: the native VU1 program (vu1_native_ts.cpp) reports each draw's
  strips and state block inside a capture, and exports its material and
  constant caches for the replay.

Only generated copies are written; the shared sources are never edited.
Every anchor must match exactly once (in the decoder: inside
decodeVIF1Pieces), or the patch fails without writing output.
"""
from __future__ import annotations

import os
import sys
import tempfile
from pathlib import Path

GENERATED = '// Xbox build copy made by src/xbox/tools/patch_native_models.py; do not edit.\n'
INCLUDE = '#include "xbox_model_cache.h"\n'


def replace_once(text: str, anchor: str, replacement: str, label: str) -> str:
    count = text.count(anchor)
    if count != 1:
        raise ValueError(f'{label}: expected one anchor, found {count}')
    return text.replace(anchor, replacement)


def patch_memory(s: str) -> str:
    a = '''                    auto addSegment = [&](const uint8_t *data, uint32_t bytes) TS_WALK_INLINE
                    {
'''
    s = replace_once(s, a, a + '''#if TS_NATIVE_MODELS
                        xboxModelWalkPiece(data, bytes);
#endif
''', 'addSegment')
    a = '                        const uint8_t *tp = tagBase + physTag;\n'
    s = replace_once(s, a, a + '''#if defined(PLATFORM_XBOX) && TS_NATIVE_MODELS
                        if (recordSegments)
                            xboxModelWalkTag(tp);
#endif
''', 'tag pointer')
    a = '''                        case 5:
                            dataAddr = tagAddr + 16;
'''
    s = replace_once(s, a, '''                        case 5:
#if defined(PLATFORM_XBOX) && TS_NATIVE_MODELS
                            // A model's precalculated chain (partGfx): the
                            // cache may replay it, or capture this walk of it.
                            if (recordSegments && tagQwc == 0u && !transferTagData)
                            {
                                const uint8_t *xboxModelMarker = nullptr;
                                const XboxModelWalk xboxModelAct =
                                    xboxModelWalkCall(m_rdram, addr, asp, xboxModelMarker);
                                if (xboxModelAct == XboxModelWalkReplay)
                                {
                                    addSegment(xboxModelMarker, 16u);
                                    dataAddr = tagAddr + 16;
                                    tagAddr = dataAddr; // as if it had returned at once
                                    hasPayload = false;
                                    break;
                                }
                                if (xboxModelAct == XboxModelWalkCapture)
                                    addSegment(xboxModelMarker, 16u);
                            }
#endif
                            dataAddr = tagAddr + 16;
''', 'CALL')
    a = '''                        if (irq && tieEnabled)
                            endChain = true;
'''
    s = replace_once(s, a, '''#if defined(PLATFORM_XBOX) && TS_NATIVE_MODELS
                        if (id == 6u && recordSegments)
                            if (const uint8_t *xboxModelEnd = xboxModelWalkAfterRet(asp))
                                addSegment(xboxModelEnd, 16u);
#endif
''' + a, 'RET')
    a = '                    if (tagsProcessed > 4096 && std::getenv("PS2X_TRACE_DMA_CHAIN"))\n'
    s = replace_once(s, a, '''#if defined(PLATFORM_XBOX) && TS_NATIVE_MODELS
                    if (recordSegments)
                        xboxModelWalkChainEnd();
#endif
''' + a, 'chain end')
    return s


def patch_vif(s: str) -> str:
    start = s.index('uint32_t PS2Memory::decodeVIF1Pieces(')
    head, body = s[:start], s[start:]
    a = '        TS_RENDER_COUNT2(++commands);\n'
    body = replace_once(body, a, a + '''#if TS_NATIVE_MODELS
        if (opcode == kXboxModelMarkerOpcode)
        {
            // A native model marker (the DMA walker's own 16-byte piece).
            uint32_t xboxModelWords[4] = {cmd, 0u, 0u, 0u};
            if (in.left() < 12u)
            {
                leave(4u);
                break;
            }
            in.word(xboxModelWords[1]);
            in.word(xboxModelWords[2]);
            in.word(xboxModelWords[3]);
            GS *xboxModelGs = nullptr;
#if TS_MSCAL_FAST
            {
                Vu1MscalFast &fast = m_vu1MscalFast;
                if (fast.owner && (!fast.fbrst || fast.generation != getVU1CodeGeneration()))
                    fast.lookup(fast.owner, fast);
                if (fast.native)
                    xboxModelGs = fast.gs;
            }
#endif
            xboxModelDecodeMarker(xboxModelWords, m_vu1Data, vif1_regs, this, xboxModelGs,
                                  PS2Memory::onVif1Worker());
            continue;
        }
#endif
''', 'decoder command')
    a = '            vif1_regs.stat ^= (1u << 7); // toggle DBF\n'
    body = replace_once(body, a, a + '''#if TS_NATIVE_MODELS
            xboxModelCaptureMscal(static_cast<uint32_t>(imm) * 8u, opcode == VIF_MSCNT);
#endif
''', 'MSCAL')
    a = '''                        else
                            fast.interpret(fast.owner, fast, startPC, runTop, runItop);
'''
    body = replace_once(body, a, '''                        else
                        {
#if TS_NATIVE_MODELS
                            xboxModelCaptureFail(3u);
#endif
                            fast.interpret(fast.owner, fast, startPC, runTop, runItop);
                        }
''', 'interpreted MSCAL')
    a = '''                if (m_vu1MscalCallback)
                    m_vu1MscalCallback(startPC, runTop, runItop);
'''
    body = replace_once(body, a, '''#if TS_NATIVE_MODELS
                xboxModelCaptureFail(3u);
#endif
''' + a, 'MSCAL callback')
    for label, a in (('MPG', '        else if (opcode == VIF_MPG)\n        {\n'),
                     ('DIRECT', '        else if (opcode == VIF_DIRECT || opcode == VIF_DIRECTHL)\n        {\n')):
        body = replace_once(body, a, a + '''#if TS_NATIVE_MODELS
            xboxModelCaptureUnsupported();
#endif
''', label)
    return head + body


def patch_game(s: str) -> str:
    a = '''        if (stripCount == 0u)
            return false; // nothing at all: not even the state block
'''
    s = replace_once(s, a, a + '''#if TS_NATIVE_MODELS
        if (xboxModelCapturing())
            xboxModelCaptureDraw(static_cast<uint32_t>(&L - ts_native_xf::kLayouts), data, stateBlock, stateBytes,
                                 material != nullptr, &strips[0].tag[0], sizeof(Strip) / 4u, stripCount);
#endif
''', 'draw strips')
    a = '            TS_RENDER_COUNT(++g_renderCounters.cpuStrips);\n'
    s = replace_once(s, a, a + '''#if TS_NATIVE_MODELS
            xboxModelCaptureFail(6u);
#endif
''', 'CPU strip')
    s += '''
#if TS_NATIVE_MODELS
// The native model cache's replay uses this file's caches (xbox_model_cache.cpp).
const void *xboxNativeMaterialFor(const uint8_t *block, uint32_t size)
{
    bool found;
    return materialFor(block, size, found);
}

GSXfConstants &xboxNativeTransformConstants(const uint8_t *data)
{
    return transformConstants(data, false);
}

bool xboxNativeApplyMaterial(const void *material, GS &gs)
{
    return gs.applyStateBlock(*static_cast<const GS::StateBlock *>(material)) != GS::StateBlockResult::NotApplied;
}

void xboxNativeSubmitState(const uint8_t *block, uint32_t bytes, PS2Memory *memory, GS &gs)
{
    static uint8_t s_buffer[(1u + GS::StateBlock::kMaxWrites) * 16u + 16u];
    if (bytes > sizeof(s_buffer))
        return;
    Packet packet{s_buffer, sizeof(s_buffer), 0, 0, memory, &gs};
    std::memcpy(packet.buf, block, bytes);
    packet.used = bytes;
    packet.lastTag = 0;
    packet.submit();
}

void xboxNativeDrainArbiter(PS2Memory *memory)
{
    if (memory && memory->gifArbiter() && !memory->gifArbiter()->empty())
        memory->gifArbiter()->drain();
}
#endif
'''
    return s


def main() -> int:
    if len(sys.argv) != 4 or sys.argv[1] not in ('memory', 'vif', 'game'):
        print(__doc__, file=sys.stderr)
        return 2
    mode, source, output = sys.argv[1], Path(sys.argv[2]), Path(sys.argv[3])
    try:
        if output.exists() and source.resolve() == output.resolve():
            raise ValueError('output must not alias its input source')
        raw = source.read_bytes().decode('utf-8')
        newline = '\r\n' if '\r\n' in raw else '\n'
        text = raw.replace('\r\n', '\n')
        if INCLUDE in text:
            raise ValueError('source already contains the model cache')
        text = {'memory': patch_memory, 'vif': patch_vif, 'game': patch_game}[mode](text)
        # The include goes first: the inserted calls precede most of the file.
        text = GENERATED + INCLUDE + text
        output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile('wb', dir=output.parent, prefix='.xbox-models-', delete=False) as f:
            temporary = Path(f.name)
            f.write(text.replace('\n', newline).encode('utf-8'))
        os.replace(temporary, output)
    except (OSError, ValueError) as error:
        print(f'patch_native_models: {error}', file=sys.stderr)
        return 2
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
