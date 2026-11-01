"""Connect the native model cache (src/xbox/xbox_model_cache.*) to Xbox copies.

patch_native_models.py memory|vif|game|partgfx SOURCE OUTPUT

- memory: the VIF1 DMA walker (ps2_memory.cpp) asks the cache at each
  zero-QWC CALL, appends its 16-byte marker pieces, and reports the chain's
  tags and pieces for the capture's source hash; it also expands partGfx's
  list tokens (with TS_NATIVE_REPLAY a model prologue's token becomes one
  marker piece the decoder runs natively, xbox_part_prologue.cpp);
- partgfx: partGfx (ts_native_game2.cpp) writes one list token in place of
  each of its REF runs (xbox_part_prologue.cpp): the three prologues of
  header, matrix and light REFs before a model's CALL (precalc or Dbuf) or
  REF loop, and the three REF loops (one token a loop, split past
  4,096 REFs, closed at a yield);
- vif: the segmented decoder (ps2_vif1_interpreter.cpp) hands markers to the
  cache (with its own MSCAL, native-run and MSKPATH3 steps for the replay)
  and reports inside a capture every command the replay must reproduce:
  UNPACK, MSCAL/MSCNT, non-native runs, DIRECT and its IMAGE data, MPG, and
  the register commands;
- game: the native VU1 program (vu1_native_ts.cpp) reports each draw's
  strips, state block and CPU-path strips inside a capture, and exports its
  material and constant caches and its constant entries' rows for the
  replay.

Only generated copies are written; the shared sources are never edited.
Every anchor must match exactly once (in the decoder: inside
decodeVIF1Pieces), or the patch fails without writing output.
"""
from __future__ import annotations

import os
import re
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
                            // cache may replay it, or capture this walk of it
                            // (not a CALL that itself ends the chain).
                            if (recordSegments && tagQwc == 0u && !transferTagData && !(irq && tieEnabled))
                            {
                                const uint8_t *xboxModelMarker = nullptr;
                                const XboxModelWalk xboxModelAct =
                                    xboxModelWalkCall(m_rdram, addr, tagAddr, asp, tieEnabled, xboxModelMarker);
                                if (xboxModelAct == XboxModelWalkReplay)
                                {
                                    addSegment(xboxModelMarker, 16u);
                                    dataAddr = tagAddr + 16;
                                    tagAddr = dataAddr; // as if it had returned at once
                                    hasPayload = false;
                                    break;
                                }
                                if (xboxModelAct == XboxModelWalkReplayEnd)
                                {
                                    // The chain ended inside it: the walk ends
                                    // where and as that one did.
                                    addSegment(xboxModelMarker, 16u);
                                    xboxModelWalkReplayEnd(tagAddr, asp, asr0, asr1, lastTagUpper);
                                    hasPayload = false;
                                    endChain = true;
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
                        // partGfx's list token (xbox_part_prologue.cpp): the
                        // payloads of the REFs it stands for, in their order,
                        // after its own upper half (theirs are left out).
                        if (id == 3u && tagQwc == 0u)
                        {
#if TS_NATIVE_REPLAY
                            // A model prologue: one marker piece, which the
                            // decoder runs natively at this stream position.
                            const uint8_t *xboxPrologueMarker = recordSegments ? xboxPrologueNative(addr) : nullptr;
                            if (xboxPrologueMarker)
                                addSegment(xboxPrologueMarker, 16u);
                            else
#endif
                            {
                                uint32_t xboxPrologueCount = 0u;
                                if (const XboxPrologueRef *xboxPrologueRefs = xboxPrologueExpand(addr, xboxPrologueCount))
                                    for (uint32_t k = 0; k < xboxPrologueCount; ++k)
                                        appendData(xboxPrologueRefs[k].addr, xboxPrologueRefs[k].qwc);
                            }
                        }
                        if (id == 6u && recordSegments)
                            if (const uint8_t *xboxModelEnd = xboxModelWalkAfterRet(asp))
                                addSegment(xboxModelEnd, 16u);
#endif
''' + a, 'RET')
    a = '                    if (tagsProcessed > 4096 && std::getenv("PS2X_TRACE_DMA_CHAIN"))\n'
    s = replace_once(s, a, '''#if defined(PLATFORM_XBOX) && TS_NATIVE_MODELS
                    // A chain that ended inside a captured CALL closes the
                    // capture with the walk's state there.
                    if (recordSegments)
                        if (const uint8_t *xboxModelEnd =
                                xboxModelWalkChainEnd(tagAddr, asp, asr0, asr1, lastTagUpper))
                            addSegment(xboxModelEnd, 16u);
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
            // The decoder's own steps for the replay (xbox_model_cache.h's
            // XboxModelVif): an MSCAL or MSCNT as the branch below runs it
            // after its register steps, what its native run leaves in the
            // VU1 state, MSKPATH3. (Lambdas here may reach PS2Memory's own
            // members.)
            static const XboxModelVif xboxModelVif{
                [](PS2Memory *self, uint32_t startPC, uint32_t runTop, uint32_t runItop, bool mscnt) {
                    if (mscnt)
                    {
                        TS_RENDER_COUNT(++g_renderCounters.mscnt);
                        if (self->m_vu1MscntCallback)
                            self->m_vu1MscntCallback(runTop, runItop);
                        return;
                    }
                    renderCountMscal(startPC);
#if TS_MSCAL_FAST
                    Vu1MscalFast &fast = self->m_vu1MscalFast;
                    if (fast.owner)
                    {
                        if (!fast.fbrst || fast.generation != self->getVU1CodeGeneration())
                            fast.lookup(fast.owner, fast);
                        if (fast.native)
                        {
                            TS_RENDER_COUNT(++g_renderCounters.mscalFast);
                            const uint32_t fbrst = *fast.fbrst;
                            fast.vu1->dBitEnabled = (fbrst & (1u << 10)) != 0u;
                            fast.vu1->tBitEnabled = (fbrst & (1u << 11)) != 0u;
                            if (fast.native(startPC, self->m_vu1Data, PS2_VU1_DATA_SIZE, runTop, self, *fast.gs))
                            {
                                fast.vu1->top = runTop;
                                fast.vu1->itop = runItop;
                                fast.vu1->stoppedByD = false;
                                fast.vu1->stoppedByT = false;
                                *fast.vpuStat &= ~0x0600u; // VPU_STAT: no D/T stop
                            }
                            else
                                fast.interpret(fast.owner, fast, startPC, runTop, runItop);
                            return;
                        }
                    }
#endif
                    if (self->m_vu1MscalCallback)
                        self->m_vu1MscalCallback(startPC, runTop, runItop);
                },
                [](PS2Memory *self, uint32_t runTop, uint32_t runItop) {
#if TS_MSCAL_FAST
                    Vu1MscalFast &fast = self->m_vu1MscalFast;
                    if (fast.owner && fast.native && fast.fbrst && fast.vpuStat && fast.vu1)
                    {
                        const uint32_t fbrst = *fast.fbrst;
                        fast.vu1->dBitEnabled = (fbrst & (1u << 10)) != 0u;
                        fast.vu1->tBitEnabled = (fbrst & (1u << 11)) != 0u;
                        fast.vu1->top = runTop;
                        fast.vu1->itop = runItop;
                        fast.vu1->stoppedByD = false;
                        fast.vu1->stoppedByT = false;
                        *fast.vpuStat &= ~0x0600u;
                    }
#else
                    (void)self;
                    (void)runTop;
                    (void)runItop;
#endif
                },
                [](PS2Memory *self, uint32_t mskImm) {
                    const bool wasMasked = self->m_path3Masked;
                    self->m_path3Masked = (mskImm & 0x8000u) != 0u;
                    if (wasMasked && !self->m_path3Masked)
                        self->flushMaskedPath3Packets();
                }};
            xboxModelDecodeMarker(xboxModelWords, m_vu1Data, vif1_regs, this, xboxModelGs,
                                  PS2Memory::onVif1Worker(), xboxModelVif);
            continue;
        }
#endif
''', 'decoder command')

    def command_hook(opcode: str, indent: str = '            ') -> str:
        return (f'#if TS_NATIVE_MODELS\n{indent}if (xboxModelCapturing())\n'
                f'{indent}    xboxModelCaptureCommand({opcode}, imm, vif1_regs);\n#endif\n')

    a = '''        if ((cmd & 0x80000000u) != 0u)
            vif1_regs.stat |= (1u << 11); // INT
'''
    body = replace_once(body, a, a + command_hook('kXboxModelIBit', '        '), 'I bit')
    a = '''            // (The span needs a division; nothing to note without watched rows.)
'''
    body = replace_once(body, a, '''#if TS_NATIVE_MODELS
            if (xboxModelCapturing())
                xboxModelCaptureUnpack(vuAddr, writeVectorCount, cl, wl, opcode, imm, vif1_regs);
#endif
''' + a, 'UNPACK')
    # Registers the chain's end state and the replay's steps follow.
    for label, a, after in (
            ('STCYCL', '            vif1_regs.cycle = imm;\n', True),
            ('OFFSET', '            vif1_regs.stat &= ~(1u << 7); // clear DBF\n', True),
            ('BASE', '            vif1_regs.base = imm & 0x3FFu;\n', True),
            ('ITOP', '            vif1_regs.itops = imm & 0x3FFu;\n', True),
            ('STMOD', '            vif1_regs.mode = imm & 3u;\n', True),
            ('MSKPATH3', '            const bool wasMasked = m_path3Masked;\n', False),
            ('MARK', '            vif1_regs.stat |= (1u << 6); // MRK\n', True),
            ('STMASK', '''            if (!in.word(vif1_regs.mask))
            {
                leave(4u);
                break;
            }
''', True),
            ('STROW/STCOL',
             '            std::memcpy(opcode == VIF_STROW ? vif1_regs.row : vif1_regs.col, in.take(16u, split), 16u);\n',
             True)):
        body = replace_once(body, a, a + command_hook('opcode') if after else command_hook('opcode') + a, label)
    a = '            vif1_regs.stat ^= (1u << 7); // toggle DBF\n'
    body = replace_once(body, a, a + '''#if TS_NATIVE_MODELS
            if (xboxModelCapturing())
                xboxModelCaptureMscal(static_cast<uint32_t>(imm) * 8u, opcode == VIF_MSCNT, vif1_regs, m_vu1Data);
#endif
''', 'MSCAL')
    a = '''                        else
                            fast.interpret(fast.owner, fast, startPC, runTop, runItop);
'''
    body = replace_once(body, a, '''                        else
                        {
#if TS_NATIVE_MODELS
                            xboxModelCaptureInterpreted();
#endif
                            fast.interpret(fast.owner, fast, startPC, runTop, runItop);
                        }
''', 'interpreted MSCAL')
    a = '''                if (m_vu1MscalCallback)
                    m_vu1MscalCallback(startPC, runTop, runItop);
'''
    body = replace_once(body, a, '''#if TS_NATIVE_MODELS
                xboxModelCaptureInterpreted();
#endif
''' + a, 'MSCAL callback')
    a = '                    in.read(m_vu1Code + destAddr, copyBytes);\n'
    body = replace_once(body, a, a + '''#if TS_NATIVE_MODELS
                    if (xboxModelCapturing())
                        xboxModelCaptureMpg(destAddr, m_vu1Code + destAddr, copyBytes);
#endif
''', 'MPG')
    a = '                const uint8_t *packet = takeBlock(qwCount * 16u);\n'
    body = replace_once(body, a, a + '''#if TS_NATIVE_MODELS
                if (xboxModelCapturing())
                    xboxModelCaptureGif(packet, qwCount * 16u, directHl);
#endif
''', 'DIRECT')
    a = ('            submitGifPacket(GifPathId::Path2, takeBlock(chunkQw * 16u), chunkQw * 16u, true, '
         'm_vif1PendingPath2DirectHl);\n')
    body = replace_once(body, a, '''            const uint8_t *xboxModelImage = takeBlock(chunkQw * 16u);
#if TS_NATIVE_MODELS
            if (xboxModelCapturing())
                xboxModelCaptureGif(xboxModelImage, chunkQw * 16u, m_vif1PendingPath2DirectHl);
#endif
            submitGifPacket(GifPathId::Path2, xboxModelImage, chunkQw * 16u, true, m_vif1PendingPath2DirectHl);
''', 'DIRECT image')
    return head + body


def patch_game(s: str) -> str:
    a = '''        if (stripCount == 0u)
            return false; // nothing at all: not even the state block
'''
    s = replace_once(s, a, a + '''#if TS_NATIVE_MODELS
        if (xboxModelCapturing())
            xboxModelCaptureDraw(static_cast<uint32_t>(&L - ts_native_xf::kLayouts), data, top, stateBlock,
                                 stateBytes, material != nullptr, &strips[0].tag[0], sizeof(Strip) / 4u, stripCount);
#endif
''', 'draw strips')
    a = '            TS_RENDER_COUNT(++g_renderCounters.cpuStrips);\n'
    s = replace_once(s, a, a + '''#if TS_NATIVE_MODELS
            if (xboxModelCapturing())
                xboxModelCaptureCpuStrip();
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
    // (runDraw takes state blocks of up to 32 qwords.)
    constexpr uint32_t kDecodable = (1u + GS::StateBlock::kMaxWrites) * 16u + 16u;
    static uint8_t s_buffer[kDecodable > 33u * 16u ? kDecodable : 33u * 16u];
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

// What runInner's constant and kick entries read and write (their
// copyQwords, modelViewProjection and kickPacket), for the model cache's
// replay steps.
bool xboxNativeEntryRows(uint32_t pc, const uint8_t *data, uint32_t top, uint32_t reads[2][2], uint32_t &readCount,
                         uint32_t writes[2][2], uint32_t &writeCount, bool &kicks)
{
    top &= kDataQwords - 1u;
    readCount = writeCount = 0u;
    kicks = false;
    auto read = [&](uint32_t from, uint32_t count) {
        reads[readCount][0] = from;
        reads[readCount++][1] = count;
    };
    auto write = [&](uint32_t from, uint32_t count) {
        writes[writeCount][0] = from;
        writes[writeCount++][1] = count;
    };
    switch (pc & 0x3FFFu)
    {
    case 0x3af8: read(top + 22u, 4u); write(106u, 4u); return true;
    case 0x3b50: read(top + 26u, 4u); write(110u, 4u); return true;
    case 0x3ba8: read(top + 30u, 4u); write(114u, 4u); return true;
    case 0x3c00: read(top + 34u, 4u); write(118u, 4u); return true;
    case 0x3c58: read(top + 16u, 4u); write(20u, 4u); return true;
    case 0x3cb0: read(top + 20u, 2u); write(24u, 2u); return true;
    case 0x3ce8: read(top, 4u); write(0u, 4u); return true;
    case 0x3d40: read(top + 4u, 4u); read(0u, 4u); write(4u, 4u); write(8u, 4u); return true;
    case 0x3e20: read(0u, 4u); read(top + 8u, 4u); write(12u, 4u); return true;
    case 0x3f00: read(0u, 4u); read(top + 12u, 4u); write(16u, 4u); return true;
    case 0x3fe0:
    {
        // kickPacket's length: tags up to EOP (a packet it refuses runs on the interpreter).
        uint32_t qwords = 0;
        for (int tags = 0; tags < 256; ++tags)
        {
            if (top + qwords >= kDataQwords)
                return false;
            uint32_t w[4];
            std::memcpy(w, data + (top + qwords) * 16u, 16);
            const uint32_t nloop = w[0] & 0x7FFFu, flg = (w[1] >> 26) & 3u, nreg = (w[1] >> 28) ? (w[1] >> 28) : 16u;
            qwords += 1u;
            if (flg == 0u)
                qwords += nloop * nreg;
            else if (flg == 1u)
                qwords += (nloop * nreg + 1u) / 2u;
            else
                qwords += nloop;
            if (w[0] & 0x8000u)
                break;
        }
        if (top + qwords > kDataQwords)
            return false;
        read(top, qwords);
        kicks = true;
        return true;
    }
    default: return false;
    }
}
#endif
'''
    return s


PROLOGUE_TOKEN = '''    L_261048:
        {
            // Xbox (patch_native_models.py): one QWC-0 REF token in place of
            // the header, matrix and light REFs (xbox_part_prologue.cpp; the
            // walker expands it). The registers end as the original's, but
            // for list pointers, which every path from here reloads.
            const uint32_t xboxSlot = LW(lo32(r.gp) - 0x6c60u);
            r.t2 = addiu(0u, 1);                                 // 26104c
            r.t3 = addiu(0u, 4);                                 // 261058
            r.a1 = 0x358ff0u;                                    // 261064
            r.t4 = LW(lo32(r.sp) + 0x2b8u);                      // 261094
            r.v1 = LW(lo32(r.t4));                               // 26109c
            r.a0 = LW(lo32(r.v1) + 0x8u);                        // 2610a8
            uint32_t xboxLightA = 0u, xboxLightB = 0u;
            if (r.a0 != 0u && LW(lo32(r.t4) + 0x18u) != 0u && LW(lo32(r.t4) + 0x1cu) != 0u)
            {
                xboxLightA = LW(lo32(r.t4) + 0x18u);
                xboxLightB = LW(lo32(r.t4) + 0x1cu);
            }
            WRITE8(xboxSlot + 0x3u, static_cast<uint8_t>(r.t1));
            WRITE32(xboxSlot + 0x4u, xboxPrologueRecord(lo32(r.s2), xboxLightA, xboxLightB));
            WRITE16(xboxSlot, static_cast<uint16_t>(0u));
            WRITE32(lo32(r.gp) - 0x6c60u, xboxSlot + 16u);
            r.v0 = xboxSlot;
            r.a2 = xboxSlot + 16u;
            if (xboxLightA == 0u)
                WRITE8(xboxSlot + 16u + 0x3u, static_cast<uint8_t>(r.t1)); // 261090: the next tag's ID
            else
            {
                r.t0 = xboxLightA;                               // 2610e4
                r.a0 = xboxLightB;                               // 261140
                r.a1 = 0x358f90u;                                // 2610e0
                r.a2 = 0x358f70u;                                // 2610f8
                r.a3 = 0x358f80u;                                // 261108
                r.v1 = xboxSlot + 16u;
            }
        }
'''


# --- partGfx's other REF runs (the generic list-token transform) ---------
#
# A run is a stretch of partGfx (no calls, no returns but a loop's yield)
# that writes REF tags at the list pointer gp-0x6C60. Inside it every
# statement stays as translated except the list's own: the pointer's loads
# and stores follow a host copy (`xboxRun.virt`), the tags' QWC and ADDR
# stores become one xboxPrologueRef each, and their ID bytes are noted. So
# every register takes the original's value, list positions included (as
# positions in the list the original would have written). Each way out of
# the run closes it (xboxRunClose: the token at the run's slot, the list
# pointer after it, the next tag's ID byte if the original wrote it) and
# moves the registers that hold list positions by what the list shrank, so
# they stand where the original's stand relative to the list pointer. A loop
# run's yield closes it the same way before the state is stored: the
# original then resumes at the loop head and writes its REFs after the token.

PART_RUN_HELPERS = '''    // Xbox (patch_native_models.py): an open list-token run of partGfx
    // (xbox_part_prologue.cpp): the slot its token takes, the list pointer as
    // the original would have it, the last ID byte the original wrote and
    // the tag being recorded.
    struct XboxPartRun
    {
        uint32_t slot, virt, idAt, addr, qwc;
        uint8_t id;
    };

    TS_INL void xboxRunOpen(G_ARGS, XboxPartRun &run, uint32_t listAddress)
    {
        run.slot = run.virt = READ32(listAddress);
        run.idAt = 1u; // none yet (slots are 16-byte aligned)
        xboxPrologueOpen();
    }

    // The token at the run's slot (when it took any REF) and the list
    // pointer after it; returns what the list position registers move by.
    TS_INL uint32_t xboxRunClose(G_ARGS, XboxPartRun &run, uint32_t listAddress)
    {
        const uint32_t token = xboxPrologueClose();
        uint32_t end = run.slot;
        if (token != 0u)
        {
            WRITE8(end + 0x3u, static_cast<uint8_t>(0x30u)); // REF
            WRITE32(end + 0x4u, token);
            WRITE16(end, static_cast<uint16_t>(0u));
            end += 16u;
            WRITE32(listAddress, end);
        }
        if (run.idAt == run.virt)
            WRITE8(end + 0x3u, run.id); // the original's next tag ID at its list pointer
        return end - run.virt;
    }

    // A long run (xboxPrologueFull): its token now, the rest after it.
    TS_INL void xboxRunSplit(G_ARGS, XboxPartRun &run, uint32_t listAddress)
    {
        xboxRunClose(G_PASS, run, listAddress);
        run.slot = READ32(listAddress);
        xboxPrologueOpen();
    }

'''

LIST_ADDRESS = 'lo32(r.gp) - 0x6c60u'
# The order the shifted registers are listed in (MIPS numbering).
GPR_ORDER = ('at', 'v0', 'v1', 'a0', 'a1', 'a2', 'a3', 't0', 't1', 't2', 't3', 't4', 't5', 't6', 't7', 's0', 's1',
             's2', 's3', 's4', 's5', 's6', 's7', 't8', 't9', 'gp', 'sp', 'fp', 'ra')

RX_COMMENT = r'(\s*//.*)?'
RX_LIST_LOAD = re.compile(r'(\s*)r\.(\w+) = LW\(lo32\(r\.gp\) - 0x6c60u\);' + RX_COMMENT + '$')
RX_LIST_STORE = re.compile(r'(\s*)WRITE32\(lo32\(r\.gp\) - 0x6c60u, lo32\(r\.(\w+)\)\);' + RX_COMMENT + '$')
RX_TAG_ID = re.compile(r'(\s*)WRITE8\(lo32\(r\.(\w+)\) \+ 0x3u, static_cast<uint8_t>\(r\.(\w+)\)\);' + RX_COMMENT + '$')
RX_TAG_QWC = re.compile(r'(\s*)WRITE16\(lo32\(r\.(\w+)\), static_cast<uint16_t>\(r\.(\w+)\)\);' + RX_COMMENT + '$')
RX_TAG_ADDR = re.compile(r'(\s*)WRITE32\(lo32\(r\.(\w+)\) \+ 0x4u, lo32\(r\.(\w+)\)\);' + RX_COMMENT + '$')
RX_STEP = re.compile(r'\s*r\.(\w+) = addiu\(r\.(\w+), 16\);' + RX_COMMENT + '$')
RX_LABEL = re.compile(r'    L_([0-9a-f]+):$')
RX_GOTO = re.compile(r'(\s*)goto L_([0-9a-f]+);$')
RX_IF_GOTO = re.compile(r'(\s*)if \(t\) goto L_([0-9a-f]+);$')
RX_CHECKPOINT = re.compile(r'(\s*)if \(loopCheckpoint\(ctx, runtime, 0x([0-9a-f]+)u\)\) \{ (.*) return false; \}$')
RX_MOVZ = re.compile(r'\s*if \((.*)\) \{ r\.(\w+) = (.*); zeroHigh\(ctx, \d+\); \}' + RX_COMMENT + '$')
RX_IF = re.compile(r'\s*if \((.*)\)' + RX_COMMENT + '$')
RX_ASSIGN = re.compile(r'\s*r\.(\w+) = (.*);' + RX_COMMENT + '$')
RX_TEST = re.compile(r'\s*t = (.*);' + RX_COMMENT + '$')
RX_COUNTER = re.compile(r'\s*TS_RENDER_COUNT\(.*\);$')
RX_ONLY_COMMENT = re.compile(r'\s*//.*$')
RX_REG = re.compile(r'\br\.([a-z][a-z0-9]*)\b')
RX_INSN = re.compile(r'// ([0-9a-f]{6}) ')

NO = frozenset(('no',))
IN = frozenset(('in',))  # the list pointer at the run's start (the same in both lists)
YES = frozenset(('yes',))  # a list position inside the run


def _code(indent: str, text: str, comment: str | None) -> str:
    line = indent + text
    if comment:
        line = line.ljust(65) + comment.strip() if len(line) < 65 else line + ' ' + comment.strip()
    return line


class _Run:
    """One run's analysis (and, on the last pass, its replacement text)."""

    def __init__(self, name: str, lines: list[str], head: str | None, entry: tuple[str, ...]):
        self.name, self.lines, self.head = name, lines, head
        self.entry = {reg: IN for reg in entry}
        self.labels = [m.group(1) for m in (RX_LABEL.match(line) for line in lines) if m]
        if head is not None and (not self.labels or self.labels[0] != head or not RX_LABEL.match(lines[0])):
            raise ValueError(f'{name}: the run must start at its loop head L_{head}')
        if len(set(self.labels)) != len(self.labels):
            raise ValueError(f'{name}: a label repeats')

    def fail(self, index: int, why: str):
        raise ValueError(f'{self.name}: {why} at {self.lines[index].strip()!r}')

    @staticmethod
    def merge(a, b):
        """Two paths' states (None: unreachable); registers absent are NO."""
        if a is None or b is None:
            one = a if b is None else b
            return None if one is None else {reg: st for reg, st in one.items() if st != NO}
        merged = {reg: a.get(reg, NO) | b.get(reg, NO) for reg in set(a) | set(b)}
        return {reg: st for reg, st in merged.items() if st != NO}

    @staticmethod
    def status(state, reg: str):
        return state.get(reg, NO)

    def pointer(self, state, reg: str, index: int) -> bool:
        st = self.status(state, reg)
        if st == NO:
            return False
        if 'no' in st:
            self.fail(index, f'r.{reg} holds a list position on some paths only')
        return True

    def reads(self, state, text: str, index: int, written: str | None = None):
        regs = RX_REG.findall(text)
        if written is not None:
            regs.remove(written)  # the assignment's own target (its first mention)
        for reg in regs:
            if self.status(state, reg) != NO:
                self.fail(index, f'r.{reg} (a list position) is read')

    def exit_code(self, indent: str, state, own_block: bool = False) -> list[str]:
        """Closing the run on a way out (own_block: the caller's block holds it)."""
        moved = []
        for reg in sorted(state, key=lambda reg: GPR_ORDER.index(reg) if reg in GPR_ORDER else 99):
            st = self.status(state, reg)
            if st == NO or st == IN:
                continue  # IN: the run's own slot, where the original's is too
            if st != YES:
                raise ValueError(f'{self.name}: r.{reg} holds mixed list positions at a way out')
            moved.append(reg)
        if not moved:
            return [f'{indent}xboxRunClose(G_PASS, xboxRun, {LIST_ADDRESS});']
        inner = indent if own_block else indent + '    '
        out = [f'{inner}const uint32_t xboxShift = xboxRunClose(G_PASS, xboxRun, {LIST_ADDRESS});']
        out += [f'{inner}r.{reg} = sext32(lo32(r.{reg}) + xboxShift);' for reg in moved]
        return out if own_block else [f'{indent}{{'] + out + [f'{indent}}}']

    def walk(self, head_in):
        """One pass; returns the state the back edge carries to the head."""
        out: list[str] = []
        state = dict(self.entry)
        pending: dict[str, dict] = {}
        if self.head is not None:
            pending[self.head] = head_in
        back = None
        blocks: list[dict | None] = []
        field = None  # (base register, 'qwc' | 'addr') of a tag's first store
        self.refs = self.stores = 0
        seen_t1 = False
        seen: set[str] = set()
        i = 0
        lines = self.lines
        while i < len(lines):
            line = lines[i]
            m = RX_LABEL.match(line)
            if m:
                if field is not None:
                    self.fail(i, 'a tag is split across a label')
                label = m.group(1)
                seen.add(label)
                incoming = pending.pop(label, None)
                if label == self.head:
                    state = self.merge(self.entry, incoming)
                else:
                    state = self.merge(state, incoming)
                if state is None:
                    self.fail(i, 'unreachable label')
                out.append(line)
                i += 1
                continue
            if state is None:
                # After a goto or return only a label or a closing brace follows.
                if line.strip() == '}' and blocks:
                    state = self.merge(None, blocks.pop())
                    out.append(line)
                    i += 1
                    continue
                if RX_ONLY_COMMENT.match(line):
                    out.append(line)
                    i += 1
                    continue
                self.fail(i, 'unreachable statement')
            m = RX_GOTO.match(line) or RX_IF_GOTO.match(line)
            if m:
                if field is not None:
                    self.fail(i, 'a tag is split across a branch')
                indent, label = m.group(1), m.group(2)
                conditional = RX_IF_GOTO.match(line) is not None
                if label == self.head:
                    if conditional:
                        self.fail(i, 'a conditional back edge')
                    back = self.merge(back, state)
                    out.append(f'{indent}if (xboxPrologueFull())')
                    out.append(f'{indent}    xboxRunSplit(G_PASS, xboxRun, {LIST_ADDRESS});')
                    out.append(line)
                elif label in self.labels:
                    if label in seen:
                        self.fail(i, 'a backward branch')
                    pending[label] = self.merge(pending.get(label), state)
                    out.append(line)
                elif conditional:
                    out.append(f'{indent}if (t)')
                    out.append(f'{indent}{{')
                    out += self.exit_code(indent + '    ', state, own_block=True)
                    out.append(f'{indent}    goto L_{label};')
                    out.append(f'{indent}}}')
                else:
                    out += self.exit_code(indent, state)
                    out.append(line)
                if not conditional:
                    state = None
                i += 1
                continue
            m = RX_CHECKPOINT.match(line)
            if m:
                if self.head is None or m.group(2) != self.head:
                    self.fail(i, 'a yield to another head')
                indent, stores = m.group(1), m.group(3)
                if field is not None:
                    self.fail(i, 'a tag is split across a yield')
                out.append(f'{indent}if (loopCheckpoint(ctx, runtime, 0x{m.group(2)}u))')
                out.append(f'{indent}{{')
                out += self.exit_code(indent + '    ', state, own_block=True)
                out.append(f'{indent}    {stores}')
                out.append(f'{indent}    return false;')
                out.append(f'{indent}}}')
                i += 1
                continue
            if 'return' in line or 'guestCall' in line or 'switch' in line or 'LOAD_GPR' in line:
                self.fail(i, 'the run must not call or return')
            m = RX_MOVZ.match(line)
            if m:
                self.reads(state, m.group(1) + ' ' + m.group(3), i)
                if self.status(state, m.group(2)) != NO:
                    self.fail(i, 'a conditional move over a list position')
                out.append(line)
                i += 1
                continue
            m = RX_IF.match(line)
            if m and line.strip().startswith('if ('):
                if i + 1 >= len(lines) or lines[i + 1].strip() != '{':
                    self.fail(i, 'an if without a block')
                if field is not None:
                    self.fail(i, 'a tag is split across a branch')
                self.reads(state, m.group(1), i)
                out.append(line)
                out.append(lines[i + 1])
                blocks.append(dict(state))
                i += 2
                continue
            if line.strip() == '}':
                if not blocks:
                    self.fail(i, 'an unmatched brace')
                if field is not None:
                    self.fail(i, 'a tag is split across a branch')
                state = self.merge(state, blocks.pop())
                out.append(line)
                i += 1
                continue
            if RX_ONLY_COMMENT.match(line) or RX_COUNTER.match(line):
                out.append(line)
                i += 1
                continue
            m = RX_LIST_LOAD.match(line)
            if m:
                out.append(_code(m.group(1), f'r.{m.group(2)} = sext32(xboxRun.virt);', m.group(3)))
                state[m.group(2)] = YES
                if field is not None and field[0] == m.group(2):
                    self.fail(i, 'a tag base is reloaded mid-tag')
                i += 1
                continue
            m = RX_LIST_STORE.match(line)
            if m:
                if not self.pointer(state, m.group(2), i):
                    self.fail(i, 'the list pointer is stored from a non-position')
                out.append(_code(m.group(1), f'xboxRun.virt = lo32(r.{m.group(2)});', m.group(3)))
                self.stores += 1
                i += 1
                continue
            m = RX_TAG_ID.match(line)
            if m:
                if not self.pointer(state, m.group(2), i):
                    self.fail(i, 'a byte store not at a list position')
                if m.group(3) != 't1' or not seen_t1:
                    self.fail(i, 'a tag ID not from r.t1 = 0x30')
                out.append(_code(m.group(1), f'xboxRun.idAt = lo32(r.{m.group(2)});', m.group(4)))
                out.append(f'{m.group(1)}xboxRun.id = static_cast<uint8_t>(r.t1);')
                i += 1
                continue
            m = RX_TAG_QWC.match(line) or RX_TAG_ADDR.match(line)
            if m:
                kind = 'qwc' if RX_TAG_QWC.match(line) else 'addr'
                base, value = m.group(2), m.group(3)
                if not self.pointer(state, base, i):
                    self.fail(i, 'a tag store not at a list position')
                if self.status(state, value) != NO:
                    self.fail(i, 'a list position stored into a tag')
                cast = f'static_cast<uint16_t>(r.{value})' if kind == 'qwc' else f'lo32(r.{value})'
                if field is None:
                    field = (base, kind)
                    out.append(_code(m.group(1), f'xboxRun.{kind} = {cast};', m.group(4)))
                else:
                    if field != (base, 'addr' if kind == 'qwc' else 'qwc'):
                        self.fail(i, 'tag stores do not pair')
                    addr = cast if kind == 'addr' else 'xboxRun.addr'
                    qwc = cast if kind == 'qwc' else 'xboxRun.qwc'
                    out.append(_code(m.group(1), f'xboxPrologueRef({addr}, {qwc});', m.group(4)))
                    field = None
                    self.refs += 1
                i += 1
                continue
            if 'WRITE' in line or 'READ' in line or '0x6c60u' in line:
                self.fail(i, 'an unexpected memory access')
            m = RX_STEP.match(line)
            if m and self.pointer(state, m.group(2), i):
                # The next tag's position (the run's slot plus 16 is a
                # position inside the run too).
                state[m.group(1)] = YES
                if field is not None and field[0] == m.group(1):
                    self.fail(i, 'a tag base changes mid-tag')
                out.append(line)
                i += 1
                continue
            m = RX_ASSIGN.match(line)
            if m:
                reg = m.group(1)
                self.reads(state, line.split('//')[0], i, written=reg)
                if reg == 't1':
                    if m.group(2) != 'addiu(0u, 48)':
                        self.fail(i, 'r.t1 is not 0x30')
                    seen_t1 = True
                if field is not None and field[0] == reg:
                    self.fail(i, 'a tag base changes mid-tag')
                state[reg] = NO
                out.append(line)
                i += 1
                continue
            m = RX_TEST.match(line)
            if m:
                self.reads(state, m.group(1), i)
                out.append(line)
                i += 1
                continue
            self.fail(i, 'an unrecognised statement')
        if blocks or pending or field is not None:
            raise ValueError(f'{self.name}: the run ends inside a block, a tag or before a label it branches to')
        if state is not None:
            out += self.exit_code('        ', state)
        self.output = out
        return back


def tokenize_run(s: str, name: str, start: str, end: str, head: str | None, entry: tuple[str, ...],
                 first: str, last: str, instructions: int, stores: int, refs: int,
                 expected: tuple[str, ...]) -> str:
    """One of partGfx's REF runs becomes list tokens; every check must hold."""
    if s.count(start) != 1 or s.count(end) != 1:
        raise ValueError(f'{name}: anchors not found once')
    a = s.index(start)
    b = s.index(end) + len(end)
    if b <= a:
        raise ValueError(f'{name}: anchors out of order')
    block = s[a:b]
    insns = RX_INSN.findall(block)
    if len(insns) != instructions or insns[0] != first or insns[-1] != last:
        raise ValueError(f'{name}: expected {instructions} instructions {first}-{last}, found {len(insns)} '
                         f'{insns[0] if insns else "-"}-{insns[-1] if insns else "-"}')
    for e in expected:
        if e not in block:
            raise ValueError(f'{name}: block lacks {e!r}')
    run = _Run(name, block.rstrip('\n').split('\n'), head, entry)
    # The back edge's state flows into the loop head until it settles; the
    # last pass's text is the replacement.
    head_in = None
    for _ in range(8):
        merged = run.merge(head_in, run.walk(head_in))
        if merged == head_in:
            break
        head_in = merged
    else:
        raise ValueError(f'{name}: no fixed point at the loop head')
    if run.stores != stores or run.refs != refs:
        raise ValueError(f'{name}: expected {stores} list-pointer stores and {refs} REFs, '
                         f'found {run.stores} and {run.refs}')
    opening = (f'        // Xbox (patch_native_models.py): {name} goes to one list token\n'
               f'        // (xbox_part_prologue.cpp); see PART_RUN_HELPERS.\n'
               f'        xboxRunOpen(G_PASS, xboxRun, {LIST_ADDRESS});\n')
    return s[:a] + opening + '\n'.join(run.output) + '\n' + s[b:]


# The runs after the first prologue: (name, first line, last lines, loop head,
# registers holding the list pointer on entry, first and last instruction,
# instruction count, list-pointer stores, REFs, strings the block must hold).
PART_RUNS = (
    ('the second prologue (L_26145c)',
     '        r.v1 = LW(lo32(r.gp) - 0x6c60u);                         // 261468 lw $v1, -0x6C60($gp)\n',
     '        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 2615d0 sw $v1, -0x6C60($gp)\n',
     None, (), '261468', '2615d0', 91, 9, 9,
     ('// 2614a0 lb $v0, 0x1($v1)', '// 2614e4 beqz $a0', '// 2614f4 beql $v0, $zero',
      '// 261524 lw $t0, 0x18($a0)', '// 2615a0 lw $a0, 0x1C($a1)', 'goto L_2615d4;', 'goto L_2615d8;')),
    ('the third prologue (L_2618ac)',
     '        r.t1 = addiu(0u, 48);                                    // 2618c0 addiu $t1, $zero, 0x30\n',
     '        WRITE32(lo32(r.gp) - 0x6c60u, lo32(r.v1));               // 261c08 sw $v1, -0x6C60($gp)\n',
     None, ('v0',), '2618c0', '261c08', 211, 21, 21,
     ('// 261908 lb $v0, 0x2($v1)', '// 2619b8 bltz $v0', '// 261a30 beqz $v1', '// 261b34 bltz $v0',
      '// 261bc8 lw $a2, 0x1C($a0)', 'goto L_261a24;', 'goto L_261ba8;', 'goto L_261c0c;')),
    ('REF loop [0] (L_261200)',
     '    L_261200:\n',
     '        r.t4 = LW(lo32(r.sp) + 0x2c0u);                          // 261458 lw $t4, 0x2C0($sp)\n'
     '        goto L_261f50;\n',
     '261200', (), '261200', '261458', 151, 12, 12,
     ('// 261230 madd $t0, $s4, $v0', '// 26135c bne $a1, $a3', '// 2613c0 bltz $v1', '// 26144c bgez $a1',
      'loopCheckpoint(ctx, runtime, 0x261200u)', 'goto L_2613bc;', 'goto L_261418;')),
    ('REF loop [1] (L_261650)',
     '    L_261650:\n',
     '        r.t4 = LW(lo32(r.sp) + 0x2c0u);                          // 2618a8 lw $t4, 0x2C0($sp)\n'
     '        goto L_261f50;\n',
     '261650', (), '261650', '2618a8', 151, 12, 12,
     ('// 261680 madd $t0, $s4, $v0', '// 2617ac bne $a1, $a3', '// 261810 bltz $v1', '// 26189c bgez $a1',
      'loopCheckpoint(ctx, runtime, 0x261650u)', 'goto L_26180c;', 'goto L_261868;')),
    ('REF loop [2] (L_261ca8)',
     '    L_261ca8:\n',
     '            goto L_261ca8;\n'
     '        }\n',
     '261ca8', (), '261ca8', '261f48', 169, 14, 14,
     ('// 261cd8 madd $t0, $s4, $v0', '// 261e54 bne $a1, $a3', '// 261eb8 bltz $v1', '// 261f44 bgez $a1',
      'loopCheckpoint(ctx, runtime, 0x261ca8u)', 'goto L_261eb4;', 'goto L_261f10;')),
)


def patch_partgfx(s: str) -> str:
    """partGfx's REF runs become list tokens: the first prologue
    (0x261048-0x261180) by PROLOGUE_TOKEN, the other two prologues and the
    three REF loops by the generic transform (tokenize_run)."""
    start = '    L_261048:\n'
    end_line = '// 261180 sw $v1, -0x6C60($gp)\n'
    if s.count(start) != 1 or s.count(end_line) != 1:
        raise ValueError('partGfx prologue: anchors not found once')
    a = s.index(start)
    b = s.index(end_line) + len(end_line)
    block = s[a:b]
    # The block must be the one this replacement was written from.
    expected = ('// 261050 sb $t1, 0x3($v0)', '// 2610b0 beqz $a0', '// 2610e4 lw $t0, 0x18($t4)',
                '// 261140 lw $a0, 0x1C($t4)', 'goto L_261184;', 'goto L_261188;')
    for e in expected:
        if e not in block:
            raise ValueError(f'partGfx prologue: block lacks {e!r}')
    if block.count('WRITE32(lo32(r.gp) - 0x6c60u') != 9:
        raise ValueError('partGfx prologue: expected nine list-pointer stores')
    s = s[:a] + PROLOGUE_TOKEN + s[b:]
    for spec in PART_RUNS:
        s = tokenize_run(s, *spec)
    # The run helpers before partGfx, its open run among its locals.
    a = '    // A level of partGfx_0x260ae0: true when it returned to its caller, false when it\n'
    s = replace_once(s, a, PART_RUN_HELPERS + a, 'partGfx helpers')
    a = '''    bool nativePartGfxLevel(G_ARGS, uint32_t depth)
    {
        PartGfxRegs r;
        bool t;
        uint32_t jt;
'''
    s = replace_once(s, a, a + '        XboxPartRun xboxRun{}; // Xbox: the open list-token run (patch_native_models.py)\n',
                     'partGfx locals')
    return s


def main() -> int:
    if len(sys.argv) != 4 or sys.argv[1] not in ('memory', 'vif', 'game', 'partgfx'):
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
        text = {'memory': patch_memory, 'vif': patch_vif, 'game': patch_game, 'partgfx': patch_partgfx}[mode](text)
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
