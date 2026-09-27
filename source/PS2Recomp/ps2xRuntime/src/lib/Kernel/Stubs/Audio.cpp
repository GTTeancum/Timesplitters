#include "Common.h"
#include "Audio.h"
#include "runtime/ps2_spu2.h"
#include <cstring>

namespace ps2_stubs
{
    namespace
    {
        constexpr uint32_t kLibSdCmdSetParam = 0x8010u;
        constexpr uint32_t kLibSdCmdVoiceTrans = 0x80D0u;
        constexpr uint32_t kLibSdCmdBlockTrans = 0x80E0u;
        constexpr uint32_t kLibSdCmdVoiceTransStatus = 0x80F0u;
        constexpr uint32_t kLibSdCmdBlockTransStatus = 0x8100u;
        constexpr uint32_t kAudioPositionMask = 0x00FFFFFFu;
        constexpr uint32_t kAudioTransferUnit = 1024u;
        constexpr uint32_t kLibSdCoreCount = 2u;
        constexpr uint32_t kLibSdTransModeIo = 0x08u;
        constexpr uint32_t kLibSdTransDirectionMask = 0x03u;
        constexpr uint32_t kLibSdTransStop = 0x02u;
        constexpr uint32_t kLibSdTransLoop = 0x10u;

        struct VoiceTransferState
        {
            uint32_t sourceAddress = 0u;
            uint32_t destinationAddress = 0u;
            uint32_t size = 0u;
            uint16_t mode = 0u;
            bool completed = true;
        };

        struct BlockTransferState
        {
            uint32_t base = 0u;
            uint32_t size = 0u;
            uint32_t pauseBase = 0u;
            uint32_t offset = 0u;
            uint32_t statusTraceCount = 0u;
            uint16_t mode = 0u;
            bool active = false;
            bool loop = false;
        };

        struct AudioStubState
        {
            bool initialized = false;
            std::array<VoiceTransferState, kLibSdCoreCount> voiceTransfers{};
            std::array<BlockTransferState, kLibSdCoreCount> blockTransfers{};
        };

        std::mutex g_audio_stub_mutex;
        AudioStubState g_audio_stub_state;

        void resetAudioStubStateUnlocked()
        {
            g_audio_stub_state = {};
        }

        // libsd register commands (sdrdrv numbering) and batches, applied to
        // the SPU2 emulation. Returns false for commands handled elsewhere.
        bool handleSpu2Command(PS2Runtime *runtime, R5900Context *ctx, Spu2 &spu, uint32_t cmd, uint32_t a0,
                               uint32_t a1, uint32_t a2, uint32_t a3)
        {
            auto apply = [&spu](uint32_t func, uint32_t entry, uint32_t value) -> uint32_t {
                switch (func)
                {
                case 0x01: spu.setParam(entry, value); return 0;
                case 0x02: spu.setSwitch(entry, value); return 0;
                case 0x03: spu.setAddr(entry, value); return 0;
                case 0x04: spu.setCoreAttr(entry, value); return 0;
                case 0x10: return spu.getParam(entry);
                case 0x12: return spu.getSwitch(entry);
                case 0x13: return spu.getAddr(entry);
                case 0x14: return spu.getCoreAttr(entry);
                default: return 0;
                }
            };
            switch (cmd)
            {
            case 0x8010: spu.setParam(a0, a1); setReturnU32(ctx, 0); return true;
            case 0x8020: setReturnU32(ctx, spu.getParam(a0)); return true;
            case 0x8030: spu.setSwitch(a0, a1); setReturnU32(ctx, 0); return true;
            case 0x8040: setReturnU32(ctx, spu.getSwitch(a0)); return true;
            case 0x8050: spu.setAddr(a0, a1); setReturnU32(ctx, 0); return true;
            case 0x8060: setReturnU32(ctx, spu.getAddr(a0)); return true;
            case 0x8070: spu.setCoreAttr(a0, a1); setReturnU32(ctx, 0); return true;
            case 0x8080: setReturnU32(ctx, spu.getCoreAttr(a0)); return true;
            case 0x80B0: // ProcBatch(batch, returns, count)
            case 0x80C0: // ProcBatchEx(batch, returns, count, voice mask)
            {
                static const bool trace = std::getenv("TS_SPU2_TRACE") != nullptr;
                const uint32_t count = std::min<uint32_t>(a2, 512u);
                uint32_t done = 0;
                for (uint32_t i = 0; i < count; ++i)
                {
                    // The batch lives in IOP memory (the EE sent it there).
                    uint8_t item[8];
                    if (!runtime->readIopMemory(a0 + i * 8u, item, sizeof(item)))
                        break;
                    uint16_t func, entry;
                    uint32_t value;
                    std::memcpy(&func, item, 2);
                    std::memcpy(&entry, item + 2, 2);
                    std::memcpy(&value, item + 4, 4);
                    if (trace)
                        std::cerr << "[TS:sd-batch] func=" << std::hex << func << " entry=" << entry
                                  << " value=" << value << std::dec << '\n';
                    uint32_t result = 0;
                    if (cmd == 0x80C0 && (func & 0xF0u) == 0u && func <= 4u)
                    {
                        for (uint32_t voice = 0; voice < 24; ++voice)
                            if (a3 & (1u << voice))
                                apply(func, (entry & ~0x3Eu) | (voice << 1), value);
                    }
                    else
                        result = apply(func, entry, value);
                    if (a1)
                        (void)runtime->writeIopMemory(a1 + i * 4u, &result, sizeof(result));
                    ++done;
                }
                setReturnU32(ctx, done);
                return true;
            }
            default:
                return false;
            }
        }

        uint32_t currentBlockStatus(const BlockTransferState &transfer)
        {
            const uint32_t position = (transfer.base + transfer.offset) & kAudioPositionMask;
            const uint32_t halfSize = transfer.size / 2u;
            const uint32_t bank = (transfer.loop && halfSize != 0u && transfer.offset >= halfSize) ? 1u : 0u;
            return (bank << 24u) | position;
        }
    }

    void resetAudioStubState()
    {
        std::lock_guard<std::mutex> lock(g_audio_stub_mutex);
        resetAudioStubStateUnlocked();
    }

    void sceSdCallBack(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSdCallBack", rdram, ctx, runtime);
    }

    void sceSdRemote(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        // The original EE caller supplies all seven arguments in r4..r10.
        // Zero is a valid address/size; do not replace it with O32 stack words.
        const uint32_t cmd = getRegU32(ctx, 5);
        const uint32_t cmdArg0 = getRegU32(ctx, 6);
        const uint32_t cmdArg1 = getRegU32(ctx, 7);
        const uint32_t arg4 = getRegU32(ctx, 8);
        const uint32_t arg5 = getRegU32(ctx, 9);
        const uint32_t arg6 = getRegU32(ctx, 10);

        if (runtime && handleSpu2Command(runtime, ctx, runtime->audioBackend().spu2(), cmd, cmdArg0, cmdArg1, arg4, arg5))
            return;

        std::lock_guard<std::mutex> lock(g_audio_stub_mutex);
        g_audio_stub_state.initialized = true;
        const uint32_t core = cmdArg0 & (kLibSdCoreCount - 1u);
        VoiceTransferState &voiceTransfer = g_audio_stub_state.voiceTransfers[core];
        BlockTransferState &blockTransfer = g_audio_stub_state.blockTransfers[core];
        uint32_t returnValue = 0u;

        if (cmd == kLibSdCmdVoiceTrans)
        {
            voiceTransfer.sourceAddress = arg4;
            voiceTransfer.destinationAddress = arg5;
            voiceTransfer.size = arg6;
            voiceTransfer.mode = static_cast<uint16_t>(cmdArg1);
            voiceTransfer.completed = false;

            // The supplied libsd driver programs 16-word DMA blocks, rounded
            // up to 64 bytes; programmed IO writes 16-bit words. Its DMA return
            // value is the requested size, not the rounded physical byte count.
            // This is a synchronous HLE data path, NOT SPU DMA timing/interrupt
            // emulation or a mixer. Copy actual IOP bytes even without a device.
            const bool ioMode = (voiceTransfer.mode & kLibSdTransModeIo) != 0u;
            const uint32_t direction = voiceTransfer.mode & kLibSdTransDirectionMask;
            const uint64_t unit = ioMode ? 2u : 64u;
            const uint64_t physicalBytes = (uint64_t(voiceTransfer.size) + unit - 1u) & ~(unit - 1u);
            const bool supported = direction <= 1u && !(ioMode && direction == 1u);
            bool copied = false;
            if (runtime && supported && physicalBytes <= PS2AudioBackend::SpuRamBytes &&
                runtime->isIopMemoryRange(arg4, static_cast<size_t>(physicalBytes)))
            {
                if (physicalBytes == 0u)
                {
                    copied = true;
                }
                else
                {
                    std::vector<uint8_t> bytes(static_cast<size_t>(physicalBytes));
                    if (direction == 0u)
                    {
                        copied = runtime->readIopMemory(arg4, bytes.data(), bytes.size()) &&
                                 runtime->audioBackend().writeSpuMemory(arg5, bytes.data(), bytes.size());
                    }
                    else
                    {
                        // Entire destination validated before any copy. Failed
                        // destinations must not leave partial IOP writes.
                        copied = runtime->audioBackend().readSpuMemory(arg5, bytes.data(), bytes.size()) &&
                                 runtime->writeIopMemory(arg4, bytes.data(), bytes.size());
                    }
                }
            }
            voiceTransfer.completed = copied;
            returnValue = copied ? (ioMode ? 0u : voiceTransfer.size)
                                 : std::numeric_limits<uint32_t>::max();
            if (!copied)
                std::cerr << "[Audio:VoiceTrans:rejected] core=" << core
                          << " direction=" << direction << " requested=" << voiceTransfer.size
                          << " physical=" << physicalBytes << '\n';

            PS2_IF_AGRESSIVE_LOGS({
                std::cerr << "[Audio:VoiceTrans] core=" << core
                          << " src=0x" << std::hex << voiceTransfer.sourceAddress
                          << " dest=0x" << voiceTransfer.destinationAddress
                          << " size=0x" << voiceTransfer.size
                          << " mode=0x" << voiceTransfer.mode
                          << std::dec << " copied=" << copied << " physical=" << physicalBytes << std::endl;
            });
        }
        else if (cmd == kLibSdCmdBlockTrans)
        {
            const uint32_t direction = cmdArg1 & kLibSdTransDirectionMask;
            if (direction == kLibSdTransStop)
            {
                returnValue = currentBlockStatus(blockTransfer);
                blockTransfer = {};
            }
            else if (arg4 != 0u && arg5 != 0u)
            {
                blockTransfer.base = arg4 & kAudioPositionMask;
                blockTransfer.size = arg5;
                blockTransfer.pauseBase =
                    ((arg6 != 0u) ? arg6 : arg4) & kAudioPositionMask;
                blockTransfer.mode = static_cast<uint16_t>(cmdArg1);
                blockTransfer.loop = (cmdArg1 & kLibSdTransLoop) != 0u;

                const uint32_t pauseOffset =
                    (blockTransfer.pauseBase - blockTransfer.base) & kAudioPositionMask;
                blockTransfer.offset = (pauseOffset < blockTransfer.size) ? pauseOffset : 0u;
                blockTransfer.statusTraceCount = 0u;
                blockTransfer.active = true;
                returnValue = 0u;
            }
            else
            {
                returnValue = std::numeric_limits<uint32_t>::max();
            }

            PS2_IF_AGRESSIVE_LOGS({
                std::cerr << "[Audio:BlockTrans] core=" << core
                          << " active=" << blockTransfer.active
                          << " base=0x" << std::hex << blockTransfer.base
                          << " size=0x" << blockTransfer.size
                          << " pause=0x" << blockTransfer.pauseBase
                          << " offset=0x" << blockTransfer.offset
                          << std::dec << std::endl;
            });
        }
        else if (cmd == kLibSdCmdVoiceTransStatus)
        {
            returnValue = voiceTransfer.completed ? 1u : 0u;
        }
        else if (cmd == kLibSdCmdBlockTransStatus)
        {
            if (blockTransfer.active && blockTransfer.size != 0u)
            {
                blockTransfer.offset = (blockTransfer.offset + kAudioTransferUnit) % blockTransfer.size;
                if (blockTransfer.statusTraceCount < 32u)
                {
                    PS2_IF_AGRESSIVE_LOGS({
                        std::cerr << "[Audio:BlockStatus] core=" << core
                                  << " status=0x" << std::hex << currentBlockStatus(blockTransfer)
                                  << " offset=0x" << blockTransfer.offset
                                  << " size=0x" << blockTransfer.size
                                  << std::dec << std::endl;
                    });
                    ++blockTransfer.statusTraceCount;
                }
            }
            returnValue = currentBlockStatus(blockTransfer);
        }
        else if (cmd == kLibSdCmdSetParam)
        {
            (void)cmdArg0;
            (void)cmdArg1;
            returnValue = 0u;
        }

        setReturnU32(ctx, returnValue);
    }

    void sceSdRemoteInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;

        std::lock_guard<std::mutex> lock(g_audio_stub_mutex);
        resetAudioStubStateUnlocked();
        g_audio_stub_state.initialized = true;
        setReturnS32(ctx, 0);
    }

    void sceSdTransToIOP(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSdTransToIOP", rdram, ctx, runtime);
    }

    void sceSSyn_BreakAtick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_BreakAtick", rdram, ctx, runtime);
    }

    void sceSSyn_ClearBreakAtick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_ClearBreakAtick", rdram, ctx, runtime);
    }

    void sceSSyn_SendExcMsg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_SendExcMsg", rdram, ctx, runtime);
    }

    void sceSSyn_SendNrpnMsg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_SendNrpnMsg", rdram, ctx, runtime);
    }

    void sceSSyn_SendRpnMsg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_SendRpnMsg", rdram, ctx, runtime);
    }

    void sceSSyn_SendShortMsg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_SendShortMsg", rdram, ctx, runtime);
    }

    void sceSSyn_SetChPriority(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_SetChPriority", rdram, ctx, runtime);
    }

    void sceSSyn_SetMasterVolume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_SetMasterVolume", rdram, ctx, runtime);
    }

    void sceSSyn_SetOutPortVolume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_SetOutPortVolume", rdram, ctx, runtime);
    }

    void sceSSyn_SetOutputAssign(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_SetOutputAssign", rdram, ctx, runtime);
    }

    void sceSSyn_SetOutputMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 0);
    }

    void sceSSyn_SetPortMaxPoly(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_SetPortMaxPoly", rdram, ctx, runtime);
    }

    void sceSSyn_SetPortVolume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_SetPortVolume", rdram, ctx, runtime);
    }

    void sceSSyn_SetTvaEnvMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSSyn_SetTvaEnvMode", rdram, ctx, runtime);
    }

    void sceSynthesizerAmpProcI(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerAmpProcI", rdram, ctx, runtime);
    }

    void sceSynthesizerAmpProcNI(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerAmpProcNI", rdram, ctx, runtime);
    }

    void sceSynthesizerAssignAllNoteOff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerAssignAllNoteOff", rdram, ctx, runtime);
    }

    void sceSynthesizerAssignAllSoundOff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerAssignAllSoundOff", rdram, ctx, runtime);
    }

    void sceSynthesizerAssignHoldChange(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerAssignHoldChange", rdram, ctx, runtime);
    }

    void sceSynthesizerAssignNoteOff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerAssignNoteOff", rdram, ctx, runtime);
    }

    void sceSynthesizerAssignNoteOn(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerAssignNoteOn", rdram, ctx, runtime);
    }

    void sceSynthesizerCalcEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerCalcEnv", rdram, ctx, runtime);
    }

    void sceSynthesizerCalcPortamentPitch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerCalcPortamentPitch", rdram, ctx, runtime);
    }

    void sceSynthesizerCalcTvfCoefAll(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerCalcTvfCoefAll", rdram, ctx, runtime);
    }

    void sceSynthesizerCalcTvfCoefF0(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerCalcTvfCoefF0", rdram, ctx, runtime);
    }

    void sceSynthesizerCent2PhaseInc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerCent2PhaseInc", rdram, ctx, runtime);
    }

    void sceSynthesizerChangeEffectSend(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangeEffectSend", rdram, ctx, runtime);
    }

    void sceSynthesizerChangeHsPanpot(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangeHsPanpot", rdram, ctx, runtime);
    }

    void sceSynthesizerChangeNrpnCutOff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangeNrpnCutOff", rdram, ctx, runtime);
    }

    void sceSynthesizerChangeNrpnLfoDepth(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangeNrpnLfoDepth", rdram, ctx, runtime);
    }

    void sceSynthesizerChangeNrpnLfoRate(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangeNrpnLfoRate", rdram, ctx, runtime);
    }

    void sceSynthesizerChangeOutAttrib(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangeOutAttrib", rdram, ctx, runtime);
    }

    void sceSynthesizerChangeOutVol(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangeOutVol", rdram, ctx, runtime);
    }

    void sceSynthesizerChangePanpot(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangePanpot", rdram, ctx, runtime);
    }

    void sceSynthesizerChangePartBendSens(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangePartBendSens", rdram, ctx, runtime);
    }

    void sceSynthesizerChangePartExpression(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangePartExpression", rdram, ctx, runtime);
    }

    void sceSynthesizerChangePartHsExpression(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangePartHsExpression", rdram, ctx, runtime);
    }

    void sceSynthesizerChangePartHsPitchBend(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangePartHsPitchBend", rdram, ctx, runtime);
    }

    void sceSynthesizerChangePartModuration(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangePartModuration", rdram, ctx, runtime);
    }

    void sceSynthesizerChangePartPitchBend(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangePartPitchBend", rdram, ctx, runtime);
    }

    void sceSynthesizerChangePartVolume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangePartVolume", rdram, ctx, runtime);
    }

    void sceSynthesizerChangePortamento(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangePortamento", rdram, ctx, runtime);
    }

    void sceSynthesizerChangePortamentoTime(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerChangePortamentoTime", rdram, ctx, runtime);
    }

    void sceSynthesizerClearKeyMap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerClearKeyMap", rdram, ctx, runtime);
    }

    void sceSynthesizerClearSpr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerClearSpr", rdram, ctx, runtime);
    }

    void sceSynthesizerCopyOutput(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerCopyOutput", rdram, ctx, runtime);
    }

    void sceSynthesizerDmaFromSPR(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerDmaFromSPR", rdram, ctx, runtime);
    }

    void sceSynthesizerDmaSpr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerDmaSpr", rdram, ctx, runtime);
    }

    void sceSynthesizerDmaToSPR(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerDmaToSPR", rdram, ctx, runtime);
    }

    void sceSynthesizerGetPartial(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerGetPartial", rdram, ctx, runtime);
    }

    void sceSynthesizerGetPartOutLevel(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerGetPartOutLevel", rdram, ctx, runtime);
    }

    void sceSynthesizerGetSampleParam(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerGetSampleParam", rdram, ctx, runtime);
    }

    void sceSynthesizerHsMessage(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerHsMessage", rdram, ctx, runtime);
    }

    void sceSynthesizerLfoNone(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerLfoNone", rdram, ctx, runtime);
    }

    void sceSynthesizerLfoProc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerLfoProc", rdram, ctx, runtime);
    }

    void sceSynthesizerLfoSawDown(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerLfoSawDown", rdram, ctx, runtime);
    }

    void sceSynthesizerLfoSawUp(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerLfoSawUp", rdram, ctx, runtime);
    }

    void sceSynthesizerLfoSquare(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerLfoSquare", rdram, ctx, runtime);
    }

    void sceSynthesizerReadNoise(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerReadNoise", rdram, ctx, runtime);
    }

    void sceSynthesizerReadNoiseAdd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerReadNoiseAdd", rdram, ctx, runtime);
    }

    void sceSynthesizerReadSample16(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerReadSample16", rdram, ctx, runtime);
    }

    void sceSynthesizerReadSample16Add(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerReadSample16Add", rdram, ctx, runtime);
    }

    void sceSynthesizerReadSample8(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerReadSample8", rdram, ctx, runtime);
    }

    void sceSynthesizerReadSample8Add(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerReadSample8Add", rdram, ctx, runtime);
    }

    void sceSynthesizerResetPart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerResetPart", rdram, ctx, runtime);
    }

    void sceSynthesizerRestorDma(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerRestorDma", rdram, ctx, runtime);
    }

    void sceSynthesizerSelectPatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSelectPatch", rdram, ctx, runtime);
    }

    void sceSynthesizerSendShortMessage(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSendShortMessage", rdram, ctx, runtime);
    }

    void sceSynthesizerSetMasterVolume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSetMasterVolume", rdram, ctx, runtime);
    }

    void sceSynthesizerSetRVoice(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSetRVoice", rdram, ctx, runtime);
    }

    void sceSynthesizerSetupDma(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSetupDma", rdram, ctx, runtime);
    }

    void sceSynthesizerSetupLfo(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSetupLfo", rdram, ctx, runtime);
    }

    void sceSynthesizerSetupMidiModuration(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSetupMidiModuration", rdram, ctx, runtime);
    }

    void sceSynthesizerSetupMidiPanpot(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSetupMidiPanpot", rdram, ctx, runtime);
    }

    void sceSynthesizerSetupNewNoise(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSetupNewNoise", rdram, ctx, runtime);
    }

    void sceSynthesizerSetupReleaseEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSetupReleaseEnv", rdram, ctx, runtime);
    }

    void sceSynthesizerSetuptEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSetuptEnv", rdram, ctx, runtime);
    }

    void sceSynthesizerSetupTruncateTvaEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSetupTruncateTvaEnv", rdram, ctx, runtime);
    }

    void sceSynthesizerSetupTruncateTvfPitchEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerSetupTruncateTvfPitchEnv", rdram, ctx, runtime);
    }

    void sceSynthesizerTonegenerator(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerTonegenerator", rdram, ctx, runtime);
    }

    void sceSynthesizerTransposeMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerTransposeMatrix", rdram, ctx, runtime);
    }

    void sceSynthesizerTvfProcI(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerTvfProcI", rdram, ctx, runtime);
    }

    void sceSynthesizerTvfProcNI(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerTvfProcNI", rdram, ctx, runtime);
    }

    void sceSynthesizerWaitDmaFromSPR(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerWaitDmaFromSPR", rdram, ctx, runtime);
    }

    void sceSynthesizerWaitDmaToSPR(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthesizerWaitDmaToSPR", rdram, ctx, runtime);
    }

    void sceSynthsizerGetDrumPatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthsizerGetDrumPatch", rdram, ctx, runtime);
    }

    void sceSynthsizerGetMeloPatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthsizerGetMeloPatch", rdram, ctx, runtime);
    }

    void sceSynthsizerLfoNoise(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthsizerLfoNoise", rdram, ctx, runtime);
    }

    void sceSynthSizerLfoTriangle(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSynthSizerLfoTriangle", rdram, ctx, runtime);
    }
}
