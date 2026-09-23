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
        auto readF32 = [&](uint32_t addr) {
            float value = 0.0f;
            if (addr <= PS2_RAM_SIZE - sizeof(value))
                std::memcpy(&value, rt.memory().getRDRAM() + addr, sizeof(value));
            return value;
        };
        auto logOriginalState = [&](const char *tag, double elapsed) {
            const uint32_t player = readU32(0x003afa20u);
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
                     <<" dma="<<rt.memory().dmaStartCount()
                     <<" gif="<<rt.memory().gifCopyCount()
                     <<" vif="<<rt.memory().vifWriteCount();
            for (uint32_t i = 0; i < 4; ++i) {
                const uint32_t front = 0x00352da0u + i * 0x2cu;
                std::cout<<" front"<<i<<"={v0=0x"<<std::hex<<readU32(front)
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
            stateWatch = std::thread([&, intervalSeconds]{
                const auto start=std::chrono::steady_clock::now();
                auto next=start;
                while(!done.load()) {
                    const auto now=std::chrono::steady_clock::now();
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
