#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"
#include <chrono>
#include <cstring>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <thread>
#include <atomic>
#include <stdexcept>
#include <cstdlib>
#include "native_self_test.h"
#include "native_mc_test.h"
#include "native_image_test.h"
#include "native_math_test.h"
#include "native_matrix_test.h"
#include "native_format_test.h"
#include "native_audio_memory_test.h"
#include "../../source/PS2Recomp/ps2xRuntime/src/lib/Kernel/Stubs/MemoryCard.h"

int main(int argc, char** argv) {
    std::cout << std::unitbuf; std::cerr << std::unitbuf;
    if (argc < 2 || argc > 4) {std::cerr << "Usage: timesplitters SLUS_200.90 [seconds=15] [data-sector.iso]\n";return 2;}
    try {
        if(argc==3 && std::string(argv[1])=="--self-test") return nativeSelfTest(argv[2]);
        if(argc==3 && std::string(argv[1])=="--mc-self-test") return nativeMcTest(argv[2]);
        if(argc==3 && std::string(argv[1])=="--image-self-test") return nativeImageTest(argv[2]);
        if(argc==3 && std::string(argv[1])=="--audio-memory-self-test") return nativeAudioMemoryTest(argv[2]);
        if(argc==3 && std::string(argv[1])=="--format-self-test") return nativeFormatTest(argv[2]);
        if(argc==3 && std::string(argv[1])=="--matrix-self-test") return nativeMatrixTest(argv[2]);
        if(argc==3 && std::string(argv[1])=="--math-self-test") return nativeMathTest(argv[2]);
        const int seconds = argc >= 3 ? std::stoi(argv[2]) : 15;
        if (seconds < 1 || seconds > 3600) throw std::runtime_error("seconds must be 1..3600");
        PS2Runtime rt;
        rt.setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Stop);
        std::cout << "[TS:native] original-EE AOT via PS2Recomp; missing functions STOP; no EE interpreter fallback\n";
        if (!rt.initialize("TimeSplitters — native Linux bring-up")) return 3;
        if (!rt.loadELF(argv[1])) return 4;
        rt.gs().setHostPresentationMode(GS::HostPresentationMode::Signal);
        rt.setHostAspectRatio(4.0f / 3.0f);
        rt.padBackend().setKeyboardAnalogEnabled(true);
        if (const char* padScript=std::getenv("TS_PAD_SCRIPT"); padScript && *padScript) {
            std::string error;
            if (!rt.padBackend().loadScriptFile(padScript, &error))
                throw std::runtime_error("pad script load failed: " + error);
            if (const char* scaleText=std::getenv("TS_PAD_TIME_SCALE"); scaleText && *scaleText)
                rt.padBackend().setScriptTimeScale(std::stod(scaleText));
            std::cout<<"[TS:pad-script] "<<std::filesystem::absolute(padScript).string()<<'\n';
        }
        if (const char* cardRoot=std::getenv("TS_MC_ROOT"); cardRoot && *cardRoot) {
            auto paths=PS2Runtime::getIoPaths(); paths.mcRoot=std::filesystem::absolute(cardRoot);
            PS2Runtime::setIoPaths(paths);
            std::cout<<"[TS:card-root] "<<paths.mcRoot.string()<<'\n';
        }
        if (argc >= 4) {auto paths=PS2Runtime::getIoPaths();paths.cdImage=std::filesystem::absolute(argv[3]);PS2Runtime::setIoPaths(paths);}
        std::atomic<bool> done=false, limit=false;
        auto readU32 = [&](uint32_t addr) {
            uint32_t value = 0;
            if (addr <= PS2_RAM_SIZE - sizeof(value))
                std::memcpy(&value, rt.memory().getRDRAM() + addr, sizeof(value));
            return value;
        };
        auto validRamRange = [](uint32_t addr, uint32_t size) {
            return size <= PS2_RAM_SIZE && addr <= PS2_RAM_SIZE - size;
        };
        auto logWords = [&](uint32_t addr, uint32_t bytes) {
            std::cout<<"0x"<<std::hex<<addr<<"[";
            for (uint32_t offset = 0; offset < bytes; offset += 4u) {
                if (offset != 0)
                    std::cout<<",";
                std::cout<<"0x"<<readU32(addr + offset);
            }
            std::cout<<std::dec<<"]";
        };
        auto readF32 = [&](uint32_t addr) {
            float value = 0.0f;
            if (addr <= PS2_RAM_SIZE - sizeof(value))
                std::memcpy(&value, rt.memory().getRDRAM() + addr, sizeof(value));
            return value;
        };
        rt.padBackend().setScriptU32Reader(readU32);
        auto logOriginalState = [&](const char *tag, double elapsed) {
            const auto mcSnapshot = ps2_stubs::getMemoryCardDebugSnapshot();
            const uint32_t player = readU32(0x003afa20u);
            const uint32_t currentFront = readU32(0x003ae7f4u);
            const uint32_t mcseqState = readU32(0x003ae898u);
            const uint32_t mcardResult = readU32(0x003ae3d8u);
            const uint32_t mcardState = readU32(0x003ae3dcu);
            const uint32_t mcardPort = readU32(0x003ae3e0u);
            const uint32_t mcardSlot = readU32(0x003ae3e4u);
            const uint32_t checkcardsPort = readU32(0x003ae3e8u);
            const uint32_t checkcardsSlot = readU32(0x003ae3ecu);
            const uint32_t checkcardsType = readU32(0x003ae3f0u);
            const uint32_t checkcardsFree = readU32(0x003ae3f4u);
            const uint32_t checkcardsFormat = readU32(0x003ae3f8u);
            const uint32_t mkdirOverwriteOk = readU32(0x003ae3fcu);
            const uint32_t menuSelection = readU32(0x003adb44u);
            uint32_t prop = 0;
            float health = 0.0f;
            bool propValid = false;
            if (player != 0 && player <= PS2_RAM_SIZE - 0x184u) {
                prop = readU32(player + 0x180u);
                propValid = prop != 0 && prop <= PS2_RAM_SIZE - 0x20cu;
                if (propValid)
                    health = readF32(prop + 0x208u);
            }
            std::cout<<"[TS:state] tag="<<tag<<" elapsed="<<elapsed
                     <<" pc=0x"<<std::hex<<rt.cpu().pc<<std::dec
                     <<" local_players="<<readU32(0x003ae764u)
                     <<" active_characters="<<readU32(0x003afd8cu)
                     <<" player=0x"<<std::hex<<player
                     <<" prop=0x"<<prop<<std::dec
                     <<" prop_valid="<<(propValid ? 1 : 0)
                     <<" health="<<health
                     <<" mcseq_state="<<mcseqState
                     <<" mcard_state="<<mcardState
                     <<" mcard_result="<<mcardResult
                     <<" mcard_port="<<mcardPort
                     <<" mcard_slot="<<mcardSlot
                     <<" checkcards={port="<<checkcardsPort
                     <<",slot="<<checkcardsSlot
                     <<",type="<<checkcardsType
                     <<",free="<<checkcardsFree
                     <<",format="<<checkcardsFormat
                     <<"}"
                     <<" mkdir_overwriteok="<<mkdirOverwriteOk
                     <<" menu_selection="<<menuSelection
                     <<" mcseq_globals=[0x"<<std::hex<<readU32(0x003affbcu)
                     <<",0x"<<readU32(0x003affc4u)
                     <<",0x"<<readU32(0x003affc8u)
                     <<",0x"<<readU32(0x003affd4u)
                     <<",0x"<<readU32(0x003affd8u)<<std::dec<<"]"
                     <<" mc_last_cmd="<<mcSnapshot.lastCmd
                     <<" mc_last_result="<<mcSnapshot.lastResult
                     <<" mc_last_port="<<mcSnapshot.lastPort
                     <<" mc_last_slot="<<mcSnapshot.lastSlot
                     <<" mc_last_flags=0x"<<std::hex<<mcSnapshot.lastFlags<<std::dec
                     <<" mc_last_raw='"<<mcSnapshot.lastRawPath<<"'"
                     <<" mc_last_guest='"<<mcSnapshot.lastGuestPath<<"'"
                     <<" mc_last_host='"<<mcSnapshot.lastHostPath.string()<<"'"
                     <<" mc_open_files="<<mcSnapshot.openFiles.size()
                     <<" mc0={fmt="<<(mcSnapshot.ports[0].formatted ? 1 : 0)
                     <<",cwd='"<<mcSnapshot.ports[0].currentDir<<"'}"
                     <<" mc1={fmt="<<(mcSnapshot.ports[1].formatted ? 1 : 0)
                     <<",cwd='"<<mcSnapshot.ports[1].currentDir<<"'}"
                     <<" current_front=0x"<<std::hex<<currentFront<<std::dec;
            if (currentFront >= 0x00352da0u && currentFront < 0x00352da0u + 4u * 0x2cu && ((currentFront - 0x00352da0u) % 0x2cu) == 0u) {
                const uint32_t currentIndex = (currentFront - 0x00352da0u) / 0x2cu;
                const uint32_t pageBase = readU32(currentFront + 0x4u);
                const uint32_t boxBase = readU32(currentFront + 0x8u);
                const uint32_t pageIndex = readU32(currentFront + 0x14u);
                uint32_t pageBoxBase = 0;
                std::cout<<" current_front_index="<<currentIndex
                         <<" current_front_words=[";
                for (uint32_t word = 0; word < 0x2cu; word += 4u) {
                    if (word != 0)
                        std::cout<<",";
                    std::cout<<"0x"<<std::hex<<readU32(currentFront + word);
                }
                std::cout<<std::dec<<"]"
                         <<" current_front_f14=0x"<<std::hex<<readU32(currentFront + 0x14u)
                         <<" current_front_f18=0x"<<std::hex<<readU32(currentFront + 0x18u)
                         <<" current_front_f1c=0x"<<readU32(currentFront + 0x1cu)<<std::dec;
                if (validRamRange(pageBase, 0x10u) && pageIndex < 1024u) {
                    const uint32_t pageAddr = pageBase + pageIndex * 0x10u;
                    if (validRamRange(pageAddr, 0x10u)) {
                        std::cout<<" current_page=";
                        logWords(pageAddr, 0x10u);
                        pageBoxBase = readU32(pageAddr + 0x8u);
                        const uint32_t pageBoxCount = readU32(pageAddr + 0xcu);
                        const uint32_t boxesToLog = pageBoxCount < 3u ? pageBoxCount : 3u;
                        std::cout<<" current_page_boxbase=0x"<<std::hex<<pageBoxBase<<std::dec
                                 <<" current_page_boxcount="<<pageBoxCount;
                        if (validRamRange(pageBoxBase, boxesToLog * 0x18u) && boxesToLog > 0u) {
                            std::cout<<" current_page_boxes=[";
                            for (uint32_t box = 0; box < boxesToLog; ++box) {
                                if (box != 0)
                                    std::cout<<";";
                                logWords(pageBoxBase + box * 0x18u, 0x18u);
                            }
                            std::cout<<"]";
                        }
                    }
                }
                if (boxBase != 0 && boxBase != pageBoxBase)
                    std::cout<<" current_front_boxbase=0x"<<std::hex<<boxBase<<std::dec;
            } else {
                std::cout<<" current_front_index=-1";
            }
            std::cout
                     <<" dma="<<rt.memory().dmaStartCount()
                     <<" gif="<<rt.memory().gifCopyCount()
                     <<" vif="<<rt.memory().vifWriteCount();
            for (uint32_t i = 0; i < 4; ++i) {
                const uint32_t front = 0x00352da0u + i * 0x2cu;
                std::cout<<" front"<<i<<"={v0=0x"<<std::hex<<readU32(front)
                         <<" f14=0x"<<readU32(front + 0x14u)
                         <<" f18=0x"<<readU32(front + 0x18u)
                         <<" f1c=0x"<<readU32(front + 0x1cu)<<std::dec<<"}";
            }
            std::cout<<'\n';
        };
        std::thread stateWatch;
        if (const char* watchInterval=std::getenv("TS_WATCH_STATE_INTERVAL"); watchInterval && *watchInterval) {
            const double intervalSeconds = std::stod(watchInterval);
            if (intervalSeconds <= 0.0 || intervalSeconds > 300.0)
                throw std::runtime_error("TS_WATCH_STATE_INTERVAL must be 0..300 seconds");
            const bool traceMcseqTransitions = [] {
                const char* enabled = std::getenv("TS_WATCH_MCSEQ_TRANSITIONS");
                return enabled && *enabled && std::string(enabled) != "0";
            }();
            stateWatch = std::thread([&, intervalSeconds]{
                const auto start=std::chrono::steady_clock::now();
                auto next=start;
                uint32_t lastMcseqState = readU32(0x003ae898u);
                uint32_t lastMcardState = readU32(0x003ae3dcu);
                uint32_t lastMcardResult = readU32(0x003ae3d8u);
                while(!done.load()) {
                    const auto now=std::chrono::steady_clock::now();
                    if (traceMcseqTransitions) {
                        const uint32_t mcseqState = readU32(0x003ae898u);
                        const uint32_t mcardState = readU32(0x003ae3dcu);
                        const uint32_t mcardResult = readU32(0x003ae3d8u);
                        if (mcseqState != lastMcseqState || mcardState != lastMcardState || mcardResult != lastMcardResult) {
                            logOriginalState("mcseq-change", std::chrono::duration<double>(now-start).count());
                            lastMcseqState = mcseqState;
                            lastMcardState = mcardState;
                            lastMcardResult = mcardResult;
                        }
                    }
                    if(now>=next) {
                        logOriginalState("watch", std::chrono::duration<double>(now-start).count());
                        next=now+std::chrono::duration_cast<std::chrono::steady_clock::duration>(std::chrono::duration<double>(intervalSeconds));
                    }
                    std::this_thread::sleep_for(std::chrono::milliseconds(20));
                }
            });
        }
        std::thread watchdog([&]{
          const auto end=std::chrono::steady_clock::now()+std::chrono::seconds(seconds);
          while(!done.load()) { if(std::chrono::steady_clock::now()>=end) {limit=true;rt.requestStop();break;} std::this_thread::sleep_for(std::chrono::milliseconds(20)); }
        });
        std::exception_ptr failure;
        try { rt.run(); } catch(...) {failure=std::current_exception();}
        done=true;watchdog.join();if(stateWatch.joinable()) stateWatch.join();
        logOriginalState("stopped", static_cast<double>(seconds));
        const auto snapshot=rt.eeScheduler().snapshot();
        std::cout << "[TS:stopped] timeout=" << limit.load() << " pc=0x" << std::hex << rt.cpu().pc << std::dec
                  << " dma=" << rt.memory().dmaStartCount() << " gif=" << rt.memory().gifCopyCount()
                  << " gs=" << rt.memory().gsWriteCount() << " vif=" << rt.memory().vifWriteCount()
                  << " threads=" << snapshot.threads.size() << '\n';
        std::cout << "[TS:kernel] cycles=" << snapshot.eeCycle << " running=" << snapshot.runningThreadId << '\n';
        for (const auto &th:snapshot.threads)
            std::cout << "[TS:thread] id=" << th.id << " status=" << static_cast<int>(th.status)
                      << " wait=" << static_cast<int>(th.waitReason) << " waitid=" << th.waitId
                      << " depth=" << th.invocationDepth << " pc=0x" << std::hex << th.pc
                      << " ra=0x" << th.ra << " sp=0x" << th.sp << " entry=0x" << th.entry << std::dec << '\n';
        for (const auto &sem:snapshot.semaphores)
            std::cout << "[TS:semaphore] id=" << sem.id << " count=" << sem.count << " max=" << sem.maxCount << " waiters=" << sem.waiters << '\n';
        // Full stopped-thread registers are diagnostics only, after EE execution joined.
        for(const auto &state:snapshot.threads) {
            if(const auto* th=rt.eeScheduler().thread(state.id)) {
                const auto& c=th->activeContext();
                std::cout<<"[TS:registers] thread="<<state.id<<" pc=0x"<<std::hex<<c.pc<<std::dec<<'\n';
                for(unsigned i=0;i<32;++i) {
                    uint64_t g[2];uint32_t f;std::memcpy(g,&c.r[i],16);std::memcpy(&f,&c.f[i],4);
                    std::cout<<"[TS:reg] t="<<state.id<<" n="<<i<<" lo=0x"<<std::hex<<g[0]<<" hi=0x"<<g[1]
                        <<" fbits=0x"<<f<<std::dec<<" f="<<c.f[i]<<'\n';
                }
            }
        }
        // The legacy dma_regs array is not the active source-chain state.
        // A normal readIORegister(CHCR) clears STR in this runtime; diagnostics
        // must instead inspect the I/O map without inserting/mutating entries.
        const auto& io = rt.memory().m_ioRegisters;
        const auto peek = [&](uint32_t addr) { auto it=io.find(addr);return it==io.end()?0u:it->second; };
        constexpr uint32_t dmaBases[]{0x10008000,0x10009000,0x1000a000,0x1000b000,0x1000b400,
                                     0x1000c000,0x1000c400,0x1000c800,0x1000d000,0x1000d400};
        for(unsigned i=0;i<10;++i) {auto base=dmaBases[i];std::cout<<"[TS:DMA] ch="<<i
            <<" chcr=0x"<<std::hex<<peek(base)<<" madr=0x"<<peek(base+0x10)<<" qwc=0x"<<peek(base+0x20)
            <<" tadr=0x"<<peek(base+0x30)<<" sadr=0x"<<peek(base+0x80)<<std::dec<<'\n';}
        uint32_t originalDmaFailures=0;
        std::memcpy(&originalDmaFailures,rt.memory().getRDRAM()+0x003adb54,sizeof(originalDmaFailures));
        std::cout<<"[TS:original] numdmafail="<<originalDmaFailures<<'\n';
        for(unsigned i=0;i<2;++i){const auto& v=i?rt.memory().vif1_regs:rt.memory().vif0_regs;std::cout<<"[TS:VIF] unit="<<i
            <<" stat=0x"<<std::hex<<v.stat<<" code=0x"<<v.code<<" err=0x"<<v.err<<" cycle=0x"<<v.cycle
            <<" num=0x"<<v.num<<" top=0x"<<v.top<<" tops=0x"<<v.tops<<std::dec<<'\n';}
        const auto iop=rt.iopDebugSnapshot();
        std::cout << "[TS:IOP] cycles=" << iop.emulatorCycles << " instructions=" << iop.emulatorInstructions
                  << " modules=" << iop.emulatorLoadedModules << " threads=" << iop.emulatorThreads
                  << " rpcservers=" << iop.emulatorRpcServers << '\n';
        for(const auto &service:iop.services) {
            std::cout << "[TS:IOP-service] " << service.name << " active=" << service.active;
            for(const auto &m:service.metrics) std::cout << ' ' << m.name << '=' << m.value;
            std::cout << '\n';
        }
        for(const auto &d:iop.diagnostics) std::cout << "[TS:IOP-diagnostic] " << d << '\n';
        const auto sound=rt.audioBackend().spuMemoryStats();
        std::cout<<"[TS:sound-memory] writes="<<sound.writeTransfers<<" bytes_written="<<sound.bytesWritten
                 <<" reads="<<sound.readTransfers<<" bytes_read="<<sound.bytesRead
                 <<" note=memory-transfers-not-mixed-audio"<<'\n';
        if (rt.padBackend().scriptActive())
            std::cout<<"[TS:pad-script] reads="<<rt.padBackend().scriptReadCount()
                     <<" exhausted="<<rt.padBackend().scriptExhausted()
                     <<" timed="<<rt.padBackend().scriptTimed()
                     <<" time_scale="<<rt.padBackend().scriptTimeScale()<<'\n';
        // Save memory only after run() has joined its EE worker.
        const char* dump=std::getenv("TS_DUMP_RAM");
        if(dump && *dump) {std::ofstream f(dump,std::ios::binary);f.write(reinterpret_cast<char*>(rt.memory().getRDRAM()),PS2_RAM_SIZE);if(!f)throw std::runtime_error("RAM dump write failed");}
        if(dump && *dump) {std::vector<uint8_t> bytes(2u*1024u*1024u);if(rt.readIopMemory(0u,bytes.data(),bytes.size())) {std::ofstream f(std::string(dump)+".iop.bin",std::ios::binary);f.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());if(!f)throw std::runtime_error("IOP dump write failed");}}
        // Graphics state for timesplitters_dma_replay's frame benchmark.
        if(dump && *dump) {
            auto write=[&](const char* suffix,const void* data,size_t size){
                std::ofstream f(std::string(dump)+suffix,std::ios::binary);
                f.write(reinterpret_cast<const char*>(data),static_cast<std::streamsize>(size));
                if(!f)throw std::runtime_error(std::string("graphics dump write failed: ")+suffix);
            };
            write(".vu1code.bin",rt.memory().getVU1Code(),PS2_VU1_CODE_SIZE);
            write(".vu1data.bin",rt.memory().getVU1Data(),PS2_VU1_DATA_SIZE);
            write(".vu1state.bin",&rt.vu1().state(),sizeof(VU1State));
            {
                uint64_t regs[20];
                std::memcpy(regs,&rt.memory().gs(),sizeof(regs));
                write(".gspriv.bin",regs,sizeof(regs));
            }
            rt.gs().refreshDisplaySnapshot();
            uint32_t size=0;
            const uint8_t* vram=rt.gs().lockDisplaySnapshot(size);
            if(vram && size) write(".gsvram.bin",vram,size);
            rt.gs().unlockDisplaySnapshot();
        }
        if(dump && *dump) {
            std::vector<uint8_t> bytes(PS2AudioBackend::SpuRamBytes);
            if(!rt.audioBackend().readSpuMemory(0,bytes.data(),bytes.size()))throw std::runtime_error("SPU dump read failed");
            std::ofstream f(std::string(dump)+".spu.bin",std::ios::binary);
            f.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());
            if(!f)throw std::runtime_error("SPU dump write failed");
        }
        // This executable is a bounded diagnostic run, not a declaration of successful gameplay.
        if(failure) std::rethrow_exception(failure);
        return limit ? 10 : 20; // 20 = diagnostic stop, never a gameplay-success code
    } catch(const std::exception& e) { std::cerr << "[TS:fatal] " << e.what() << '\n'; return 1; }
}
