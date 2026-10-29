#include "windows.h"
#include "../../xbox_texture_pack.h"
#include <algorithm>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <string>

namespace
{
    using Pack = XboxTexturePack;
    void check(bool ok, const char *why) { if (!ok) throw std::runtime_error(why); }
    alignas(128) uint8_t pool[2048];
    std::vector<int> evicted;

    uint8_t *ready(Pack &pack, int index, uint32_t frame)
    {
        const auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(2);
        while (std::chrono::steady_clock::now() < deadline)
        {
            Pack::Status status;
            uint8_t *p = pack.acquire(index, frame, evicted, status);
            if (p) { check(status == Pack::kReady, "ready status"); return p; }
            check(status == Pack::kLoading, "load refused");
            Sleep(1);
        }
        throw std::runtime_error("loader timed out");
    }
    void payload(Pack &pack, int index, uint32_t frame)
    {
        const uint8_t *p = ready(pack, index, frame);
        const uint8_t value = uint8_t(pack.entry(index).key);
        check(std::all_of(p, p + pack.entry(index).size, [=](uint8_t v) { return v == value; }), "payload differs");
    }
    void requireStatus(Pack &pack, int index, uint32_t frame, Pack::Status expected)
    {
        Pack::Status status;
        check(pack.acquire(index, frame, evicted, status) == nullptr && status == expected, "unexpected acquire result");
    }
    void start(Pack &pack, const char *path, uint32_t bytes)
    {
        check(pack.open(path), "open valid pack");
        check(pack.attachPool(pool, bytes), "attach pool");
    }
    void closed(Pack &pack)
    {
        check(!pack.enabled() && pack.count() == 0 && pack.find(0x10) == -1, "closed state retained");
        check(pack.stats().usedBytes == 0 && pack.stats().loads == 0, "closed counters retained");
        check(texture_pack_host::handles.load() == 0, "handles leaked");
    }

    void run(const std::string &mode, const char *path, const char *other)
    {
        Pack pack;
        if (mode == "reject")
        {
            check(!pack.open(path), "malformed pack accepted");
            closed(pack);
            return;
        }
        if (mode == "load")
        {
            start(pack, path, 1024);
            check(pack.count() == 4 && pack.find(0x12) == 2 && pack.find(999) == -1, "index lookup");
            for (int i = 0; i != 4; ++i) payload(pack, i, 10);
            check(pack.stats().loads == 4 && pack.stats().usedBytes == 896, "load accounting");
        }
        else if (mode == "reopen" || mode == "missing")
        {
            start(pack, path, 1024);
            payload(pack, 0, 10);
            if (mode == "missing")
            {
                check(!pack.open(other), "missing pack accepted");
                closed(pack);
            }
            else
            {
                check(pack.open(other), "reopen valid pack");
                check(!pack.enabled() && pack.count() == 1 && pack.stats().loads == 0, "reopen stale state");
                check(pack.find(0x10) == -1 && pack.find(0x80) == 0, "old index retained");
                check(pack.attachPool(pool, 1024), "reattach pool");
                payload(pack, 0, 20);
                check(pack.stats().loads == 1, "fresh loader did not run");
            }
        }
        else if (mode == "admission")
        {
            check(pack.open(path), "open valid pack");
            check(!pack.attachPool(pool + 1, 1024), "unaligned pool accepted");
            check(!pack.attachPool(pool, 127), "undersized pool accepted");
            check(pack.attachPool(pool, 128), "valid pool refused");
            check(!pack.attachPool(pool, 1024), "second attachment accepted");
            requireStatus(pack, -1, 1, Pack::kUnavailable);
            requireStatus(pack, int(pack.count()), 1, Pack::kUnavailable);
            const int reads = texture_pack_host::reads.load();
            for (uint32_t frame = 1; frame != 1001; ++frame)
                requireStatus(pack, 2, frame, Pack::kUnavailable);
            check(texture_pack_host::reads.load() == reads, "oversized entry issued reads");
            check(evicted.empty() && pack.stats().usedBytes == 0 && pack.stats().busy == 0, "oversized entry disturbed pool");
            payload(pack, 0, 1001);
        }
        else if (mode == "wrap")
        {
            start(pack, path, 128);
            payload(pack, 0, UINT32_MAX);
            requireStatus(pack, 1, UINT32_MAX, Pack::kNoRoom);
            requireStatus(pack, 1, 0, Pack::kNoRoom);
            check(evicted.empty(), "current/previous frame entry evicted");
            payload(pack, 1, 1);
            check(evicted.size() == 1 && evicted[0] == 0, "old entry not evicted after wrap");
        }
        else if (mode == "thread-fail")
        {
            check(pack.open(path), "open valid pack");
            texture_pack_host::failNextThread = true;
            check(!pack.attachPool(pool, 1024), "failed thread accepted");
            closed(pack);
            start(pack, path, 1024);
            payload(pack, 0, 5);
        }
        else if (mode == "pending-close" || mode == "failed-room" || mode == "completed-room")
        {
            start(pack, path, 384);
            if (mode != "pending-close") payload(pack, 0, 1);
            struct ResumeReads { ~ResumeReads() { texture_pack_host::resumeReads(); } } resume;
            texture_pack_host::pauseReads = true;
            requireStatus(pack, 1, mode == "completed-room" ? 1u : 40u, Pack::kLoading);
            const auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(2);
            while (!texture_pack_host::blockedReads.load() && std::chrono::steady_clock::now() < deadline) Sleep(1);
            if (!texture_pack_host::blockedReads.load())
            {
                texture_pack_host::resumeReads();
                throw std::runtime_error("read did not start");
            }
            if (mode == "pending-close")
            {
                std::atomic<bool> done{false};
                std::thread closing([&] { pack.close(); done = true; });
                Sleep(10);
                const bool premature = done.load();
                texture_pack_host::resumeReads();
                closing.join();
                check(!premature, "close did not wait for in-flight read");
                closed(pack);
                start(pack, path, 1024);
                payload(pack, 0, 50);
            }
            else
            {
                // A stale resident, a pending read, and a current-frame
                // entry tile the pool. Read completion makes a two-block
                // run available: either the read failed and freed it, or
                // its old request became resident and is now evictable.
                requireStatus(pack, 2, 40, Pack::kLoading);
                requireStatus(pack, 3, 40, Pack::kNoRoom);
                texture_pack_host::failNextRead = mode == "failed-room";
                texture_pack_host::resumeReads();
                payload(pack, 2, 40);
                check(pack.stats().failures == uint32_t(mode == "failed-room"), "read result not collected");
                payload(pack, 3, 40);
                const size_t victims = mode == "failed-room" ? 1u : 2u;
                check(evicted.size() == victims && evicted[0] == 0 &&
                      (victims == 1u || evicted[1] == 1), "stale no-room result blocked allocation");
            }
        }
        else throw std::runtime_error("unknown test");
        pack.close();
        closed(pack);
    }
}

int main(int argc, char **argv)
{
    try
    {
        check(argc >= 3, "arguments");
        run(argv[1], argv[2], argc > 3 ? argv[3] : "");
        check(texture_pack_host::handles.load() == 0, "destructor leaked handles");
        std::cout << "texture pack host check passed\n";
        return 0;
    }
    catch (const std::exception &error)
    {
        texture_pack_host::resumeReads();
        std::cerr << error.what() << '\n';
        return 1;
    }
}
