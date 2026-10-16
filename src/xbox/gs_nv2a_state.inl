    // ---- gs_nv2a_state.inl: the renderer's state half (src/xbox/PUSH-BC-PLAN.md
    // W0-S; owned by B-GS): the texture cache and its lookups, CLUT loads and
    // palettes, texture encoding, the draw key (blendState, clipFor, keyFor)
    // and applyState. Part of struct GSNv2aBackend::Impl in
    // gs_nv2a_backend.cpp (one translation unit; included once, there).

    // The draw paths this half implements (GSNv2aBackend::DrawPaths):
    // kGSDrawPathNativeRun once phase 2 lands (TS_GS_NATIVE_RUN).
    static constexpr uint32_t kStateDrawPaths = 0u;

    // A native run with a bound material (GSRasterBackend::BeginNativeRun,
    // B-GS phase 2). Not implemented yet: Unsupported, and the caller opens
    // the run with BeginXfRun as before.
    GSNativeRunResult beginNativeRun(const GSNativeRun &, GSXfCursor &) { return GSNativeRunResult::Unsupported; }

    // ---------------------------------------------------------- textures
    struct Texture
    {
        uint32_t tbp0, tbw, psm, width, height, cpsm, csm, csa, texa;
        uint64_t clutHash, versions, lastUse;
        GSCpuBackend::VramRange range;
        void *texels = nullptr; // swizzled, GPU memory
        uint32_t format = 0;    // NV097_SET_TEXTURE_FORMAT_COLOR_SZ_*
        uint32_t gpuWidth = 0, gpuHeight = 0; // stored size (large textures are halved)
        size_t bytes = 0;
        uint32_t lastFrame = 0;
        bool unitAlpha = false; // one alpha bit whose 1.0 is GS 0x80 (selects the pixel program)
        // Texture pack: the entry with this texture's key (-1: none). Pooled
        // textures are the pack's copy in its pool (bytes 0: the pack owns
        // the memory); others are drawn from the runtime path while the
        // entry is not in the pool (on its way from the disc, or no room for
        // it), and try again from packRetryFrame on.
        int packEntry = -1;
        bool pooled = false;
        bool forceLinear = false; // HD replacement: always filtered, as on the PC
        uint32_t levels = 1;      // mip levels (pack textures only have more than one)
        uint32_t packRetryFrame = 0;
        uint32_t indexTag = 0;    // its key's hash (textureIndex)
    };
    uint32_t frameNumber = 1, frameTextures = 0, frameTextureBytes = 0, frameFills = 0;
#if TS_NV2A_MISS_KEYS_FIXED
    // Address/size keys of this and last frame's misses (statistics:
    // missEvicted), in two fixed tables rather than sets that allocated a
    // node per miss and freed them every frame. Past 192 misses in a frame
    // (fills are a few a frame) a key goes unrecorded.
    struct KeySet
    {
        static constexpr uint32_t kSlots = 256u;
        std::array<uint64_t, kSlots> keys{}; // 0: empty (a key holds the size, never 0)
        uint32_t count = 0;
        static uint32_t slot(uint64_t key) { return uint32_t((key * 0x9E3779B97F4A7C15ull) >> 56); }
        bool contains(uint64_t key) const
        {
            for (uint32_t i = slot(key);; i = (i + 1u) % kSlots)
            {
                if (keys[i] == key)
                    return true;
                if (keys[i] == 0u)
                    return false;
            }
        }
        void insert(uint64_t key)
        {
            if (count >= kSlots * 3u / 4u)
                return;
            uint32_t i = slot(key);
            for (; keys[i] != 0u; i = (i + 1u) % kSlots)
                if (keys[i] == key)
                    return;
            keys[i] = key;
            ++count;
        }
        void clear()
        {
            if (count != 0u)
                keys.fill(0u);
            count = 0;
        }
    };
    KeySet missKeys[2];
    uint32_t missKeysThis = 0; // missKeys[this] is this frame's, the other last frame's
    KeySet &frameKeys() { return missKeys[missKeysThis]; }
    const KeySet &lastFrameKeys() const { return missKeys[missKeysThis ^ 1u]; }
#else
    std::set<uint64_t> frameKeys, lastFrameKeys; // address/size keys drawn this and last frame (statistics)
#endif
    size_t retiredBytes = 0;
    static constexpr size_t kRetiredLimit = 768u * 1024u; // beyond this, wait and free at once
    size_t textureBudget = kTextureBudget; // lower while the pack carries the world (kTextureBudgetWithPack)
#if TS_NV2A_MP_TEXTURE_BUDGET
    // Split screen (the guest's local player count, read once a frame by
    // updateSplitScreen): the lower limits of TS_NV2A_MP_TEXTURE_BUDGET.
    bool splitScreen = false;
    uint32_t localPlayers = 0;
    size_t retiredLimit() const { return splitScreen ? kMultiplayerRetiredLimit : kRetiredLimit; }
    size_t effectiveBudget() const
    {
        return splitScreen && pack.enabled() && packQuietFrames >= kMultiplayerQuietFrames
                   ? std::min(textureBudget, kTextureBudgetWithPack)
                   : textureBudget;
    }
    void updateSplitScreen()
    {
        uint32_t players = 0;
        if (const uint8_t *ram = g_nv2aGuestRam)
            std::memcpy(&players, ram + kLocalPlayersAddress, sizeof(players));
        if (players == localPlayers)
            return;
        localPlayers = players;
        const bool split = players > 1u && players <= 4u;
        if (split == splitScreen)
            return;
        splitScreen = split;
        std::cout << "[TS:mem] split-screen textures " << (split ? "on" : "off") << " (" << players
                  << " players): retired limit " << retiredLimit() / 1024u << " KB" << std::endl;
    }
    // Drops what the cache holds over the budget, least recently used
    // first, of what the last frame did not draw. At the frame's start,
    // with the last frame done on the GPU: freed at once.
    void trimCache()
    {
        while (textureBytes > effectiveBudget())
        {
            auto oldest = textures.end();
            for (auto it = textures.begin(); it != textures.end(); ++it)
                if (!it->pooled && it->lastFrame + 1u < frameNumber && (oldest == textures.end() || it->lastUse < oldest->lastUse))
                    oldest = it;
            if (oldest == textures.end())
                break;
            retireTexture(oldest);
        }
        freeRetired();
    }
#else
    static constexpr size_t retiredLimit() { return kRetiredLimit; }
    size_t effectiveBudget() const { return textureBudget; }
#endif
    uint32_t packQuietFrames = 0;          // frames in a row the runtime path stayed under half of that
    // A list: draw keys hold pointers into it across insertions and removals.
    // One record a key (a lookup that finds a record retires it before a new
    // decode adds another), so a key finds at most one (textureIndex).
    std::list<Texture> textures;
    std::list<Texture> retired; // dropped textures the GPU may still read; freed at the frame's end
    size_t textureBytes = 0;
    uint64_t textureTick = 0;
    uint64_t clutHash = 0;
#if !TS_NV2A_TEXTURE_STREAM || TS_NV2A_TEXTURE_SELFCHECK
    std::vector<uint32_t> decoded;
    std::vector<uint8_t> swizzled;
    std::vector<uint32_t> spreadU, spreadV;
#endif
#if TS_NV2A_TEXTURE_STREAM
    // TS_NV2A_TEXTURE_STREAM: a whole texture of up to kScratchTexels, or a
    // band of rows of a bigger one (decoded RGBA; halved in place), and the
    // encoded texels on their way to GPU memory.
    alignas(16) uint32_t texScratch[kScratchTexels];
    alignas(16) uint8_t texStage[kStageBytes];
#endif

    void refreshClutHash() { clutHash = cpu.ClutHash(); }

    // TEXFLUSH reaches the CPU renderer (its texture page cache) just before
    // the renderer is next used, not at once: every native draw run's
    // render-state block flushes, and the CPU renderer is used rarely in
    // between.
    bool textureFlushPending = false;
    GSCpuBackend &cpuFlushed()
    {
        if (textureFlushPending)
        {
            textureFlushPending = false;
            cpu.TextureFlush();
        }
        return cpu;
    }

    // Full CLUT loads (8-bit indices, a 32-bit CSM1 palette from CSA 0: all
    // 512 halfwords replaced) cached by source address and format and the
    // version of its GS-memory pages. The game loads ~590 palettes a frame,
    // a few dozen distinct; a hit skips the row reads, the unswizzle and
    // the rehash.
    struct Palette
    {
        uint32_t cbp = UINT32_MAX, cpsm = 0;
        uint64_t versions = 0, hash = 0;
        std::array<uint16_t, 512> clut;
    };
    static constexpr uint32_t kPalettes = 128u; // direct-mapped by address
    std::vector<Palette> palettes;              // allocated at the first load
    static bool fullClutLoad(const GSTex0Reg &t)
    {
        return (t.psm == GS_PSM_T8 || t.psm == GS_PSM_T8H) && t.csm == 0u &&
               (t.cpsm == GS_PSM_CT32 || t.cpsm == GS_PSM_CT24) && (t.csa & 0x0Fu) == 0u;
    }

#if TS_CLUT_IDENTITY
    // Full CLUT loads by identity (TS_CLUT_IDENTITY): source address and
    // format, the version of its GS-memory pages, and the content hash of
    // the CLUT buffer the load leaves. No buffer: the CPU renderer fills
    // its own from local memory only if something reads it (DeferClutLoad),
    // and a miss reads the source once, in a fixed order (ReadFullClut).
    // 64 sets of four, the least recently used out.
    struct PaletteId
    {
        uint32_t key = UINT32_MAX; // cbp | cpsm << 16 (UINT32_MAX: free)
        uint32_t lastUse = 0;
        uint64_t versions = 0, hash = 0;
    };
    static constexpr uint32_t kPaletteSets = 64u, kPaletteWays = 4u;
    std::array<PaletteId, kPaletteSets * kPaletteWays> paletteIds{};
    uint32_t paletteTick = 0;
    bool clutIdentity = true;  // false: the boot self-test found the load order wrong
    bool clutOrderChecked = false;
    // The palette cache this replaces, as tags only (1 KB): what it would
    // have done with each full load, so the [TS:tex] line tells whether its
    // misses were slot conflicts or GS pages changing (old hit/new/conf/ver).
    struct OldPaletteTag
    {
        uint32_t key = UINT32_MAX, versions = 0; // (versions: the sum's low half)
    };
    std::array<OldPaletteTag, kPalettes> oldPaletteTags{};

    // Loads that take this path: full loads whose source is contiguous.
    bool identityLoad(const GSTex0Reg &t) const
    {
        return clutIdentity && vram && GSCpuBackend::FullClutLoad(t) && t.cbp <= GSCpuBackend::kLastContiguousClutCbp;
    }

    void loadFullClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut)
    {
        const uint32_t key = tex0.cbp | (uint32_t(tex0.cpsm) << 16);
        const uint64_t versions = versionSum(GSCpuBackend::ClutRange(tex0));
        OldPaletteTag &old = oldPaletteTags[(tex0.cbp ^ (tex0.cbp >> 7)) % kPalettes]; // (its slot)
        if (old.key != key)
            ++(old.key == UINT32_MAX ? s_lookupStats.oldNew : s_lookupStats.oldConflicts);
        else
            ++(old.versions != uint32_t(versions) ? s_lookupStats.oldVersions : s_lookupStats.oldHits);
        old = {key, uint32_t(versions)};
        PaletteId *const set = &paletteIds[((tex0.cbp * 0x9E3779B1u) >> 26) * kPaletteWays];
        PaletteId *entry = nullptr, *victim = set;
        for (uint32_t way = 0; way < kPaletteWays; ++way)
        {
            if (set[way].key == key)
            {
                entry = &set[way];
                break;
            }
            if (set[way].lastUse < victim->lastUse)
                victim = &set[way];
        }
        if (entry && entry->versions == versions)
        {
            ++s_lookupStats.clutHits;
            ++g_nv2aTextureStats.paletteHits;
        }
        else
        {
            if (entry)
                ++s_lookupStats.clutVersions;
            else
            {
                ++(victim->key == UINT32_MAX ? s_lookupStats.clutNew : s_lookupStats.clutConflicts);
                entry = victim;
                entry->key = key;
            }
            uint16_t clut[512];
            cpu.ReadFullClut(tex0.cbp, tex0.cpsm, clut); // (identityLoad: the source is contiguous)
            entry->versions = versions;
            entry->hash = GSCpuBackend::HashClut(clut);
        }
        entry->lastUse = ++paletteTick;
        cpu.DeferClutLoad(tex0, entry->hash);
        clutHash = entry->hash;
#if TS_NV2A_SELFCHECK
        // The CPU renderer's own load over the deferred one: the same buffer
        // and hash (DebugClutState's parts; the CLD mirrors are shared).
        std::array<uint16_t, 512> fast, full;
        std::array<uint32_t, 2> mirror;
        cpu.GetClutState(fast, mirror);
        cpu.LoadClutAgain(tex0, texclut);
        cpu.GetClutState(full, mirror);
        const uint64_t fullHash = cpu.ClutHash();
        if (fast != full || fullHash != clutHash)
        {
            ++s_lookupStats.clutDiffs;
            noteDrawDiff("CLUT identity", clutHash, fullHash);
            clutHash = entry->hash = fullHash;
        }
#else
        (void)texclut;
#endif
    }
#endif

    // The GS's CLUT-load decision (TEX0/TEX2 CLD), mirrored so that only
    // real loads cost a read-back check, a lock and a rehash.
    uint32_t clutCbp[2] = {UINT32_MAX, UINT32_MAX};
    bool clutLoads(const GSTex0Reg &t)
    {
        if (!isIndexed(t.psm))
            return false;
        switch (t.cld)
        {
        case 1u: return true;
        case 2u: clutCbp[0] = t.cbp; return true;
        case 3u: clutCbp[1] = t.cbp; return true;
        case 4u:
            if (clutCbp[0] == t.cbp)
                return false;
            clutCbp[0] = t.cbp;
            return true;
        case 5u:
            if (clutCbp[1] == t.cbp)
                return false;
            clutCbp[1] = t.cbp;
            return true;
        default: return false;
        }
    }

    // Drops a texture from the cache. Its memory is released only once the
    // GPU has finished the frame (finishFrame), so no stall here.
    void retireTexture(std::list<Texture>::iterator it)
    {
        if (lastTexture == &*it)
            lastTexture = nullptr;
        if (batchCount && batchKey.texture == &*it)
            flushBatch();
        if (applied.texture == &*it)
            stateValid = false; // the address may be reused by a new texture
#if TS_TEXTURE_INDEX
        indexRemove(it);
#endif
        if (it->pooled)
        {
            // The texels belong to the pack, which keeps them while a frame
            // in flight may read them: only the record goes, and with it
            // the recent table's entries for it (they would point at freed
            // memory, or at a new record in its place).
            forgetRecent(&*it);
            textures.erase(it);
            return;
        }
        textureBytes -= it->bytes;
        retiredBytes += it->bytes;
        retired.splice(retired.end(), textures, it);
        if (retiredBytes > retiredLimit())
        {
            ++g_nv2aTextureStats.waitRetire;
            waitIdle();
            freeRetired();
        }
    }

    void freeRetired()
    {
        lastTexture = nullptr; // may be a one-frame texture
        if (batchCount)
            flushBatch(); // a one-frame texture may be the batch's
        if (!retired.empty())
            recentTextures.fill({}); // may point at them
        for (Texture &t : retired)
            if (!t.pooled) // pool memory is the pack's
                MmFreeContiguousMemory(t.texels);
        retired.clear();
        retiredBytes = 0;
        stateValid = false; // a bound one-frame texture's address may be reused
        g_nv2aTextureStats.residentBytes = uint32_t(textureBytes);
        g_nv2aTextureStats.resident = uint32_t(textures.size());
    }

    // Recent lookups by TEX0: the texture an address, format, TEXA and CLUT
    // resolved to. One stands while no GS memory page changed since
    // (pageEpoch) or, after a change, while the texture's own pages still
    // have the versions it was decoded from - lookupTexture's own test.
    // Native draws alternate between a few dozen textures, which the single
    // last-texture check below misses. Sets of kRecentWays (most recent
    // first; TS_TEXTURE_RECENT_WAYS) chosen by address and format (and, with
    // more than one way, the CLUT). Cleared when retired textures are freed
    // (the pointers die).
    struct RecentTexture
    {
        uint64_t tex0 = 0, clut = 0;
        uint32_t texa = 0, size = 0, epoch = 0;
        Texture *texture = nullptr;
    };
    static constexpr uint32_t kRecentSets = 64u, kRecentWays = TS_TEXTURE_RECENT_WAYS;
    static_assert(kRecentWays >= 1u && kRecentWays <= 8u, "recent-texture ways");
    std::array<RecentTexture, kRecentSets * kRecentWays> recentTextures{};
    bool checkRun = false; // TS_NATIVE_DRAW_SELFCHECK: also take the full lookup and compare

    RecentTexture *recentSet(const GSTex0Reg &tex, uint64_t clut)
    {
        uint32_t set = tex.tbp0 ^ (tex.tbp0 >> 6) ^ (uint32_t(tex.psm) << 3);
        if (kRecentWays > 1u)
            set ^= uint32_t(clut) ^ uint32_t(clut >> 32);
        return &recentTextures[(set % kRecentSets) * kRecentWays];
    }
    // The set's entry for this key (its way, if any) becomes the first, as
    // `entry`; the others move down one, the last one out.
    static RecentTexture &rememberRecent(RecentTexture *set, uint32_t way, const RecentTexture entry)
    {
        for (; way > 0u; --way)
            set[way] = set[way - 1u];
        set[0] = entry;
        return set[0];
    }
    void forgetRecent(const Texture *t)
    {
        for (RecentTexture &recent : recentTextures)
            if (recent.texture == t)
                recent = {};
    }

    const Texture *texture(const GSDrawState &state)
    {
#if TS_MEASURE_PUSHBC
        MeasureTimer measureTexture(g_measure.textureCycles, g_measure.textures);
#endif
        const GSTex0Reg &tex = state.context.tex0;
        const uint32_t w = std::max<uint32_t>(state.textureWidth, 1u), h = std::max<uint32_t>(state.textureHeight, 1u);
        if (w > 1024u || h > 1024u)
            return nullptr;
        ++s_lookupStats.textures;
        const uint32_t texa = uint32_t(state.texa.ta0) | (uint32_t(state.texa.ta1) << 8) | (state.texa.aem ? 0x10000u : 0u);
        const uint64_t hash = isIndexed(tex.psm) ? clutHash : 0u;
        const uint64_t tex0Bits = uint64_t(tex.tbp0) | (uint64_t(tex.tbw) << 32) | (uint64_t(tex.psm) << 40) |
                                  (uint64_t(tex.cpsm) << 48) | (uint64_t(tex.csm) << 54) | (uint64_t(tex.csa & 0x1Fu) << 56);
        const uint32_t size = w | (h << 16);
        RecentTexture *const set = recentSet(tex, hash);
        uint32_t way = 0;
        while (way < kRecentWays && !(set[way].texture && set[way].tex0 == tex0Bits && set[way].texa == texa &&
                                      set[way].clut == hash && set[way].size == size))
            ++way;
        if (way < kRecentWays)
        {
            Texture &t = *set[way].texture;
            // The same range as the full path's (the same address, format and size).
            if (screenGpuNewer && overlaps(t.range, gpuRange()))
            {
                ++g_nv2aTextureStats.wbTexture;
                writeBackScreen();
            }
            // A runtime-path texture whose pack entry may be in the pool by now
            // takes the full lookup, which swaps the pack's copy in (the
            // self-check found the fast path keeping the fallback).
            const bool packDue = t.packEntry >= 0 && !t.pooled && frameNumber >= t.packRetryFrame;
            if (!packDue && (set[way].epoch == pageEpoch || versionSum(t.range) == t.versions))
            {
                RecentTexture &recent = way ? rememberRecent(set, way, set[way]) : set[0];
                recent.epoch = pageEpoch;
                t.lastUse = ++textureTick;
                noteUse(t);
                ++g_nv2aTextureStats.textureFast;
                if (!checkRun)
                    return &t;
                const uint32_t fastTbp0 = t.tbp0; // (the lookup may free retired textures)
                Texture *full = textureLookup(state);
                if (full != &t)
                {
                    noteDrawDiff("texture", fastTbp0, full ? full->tbp0 : UINT32_MAX);
                    recent = {tex0Bits, hash, texa, size, pageEpoch, full};
                }
                return full;
            }
        }
        Texture *found = textureLookup(state);
        if (found)
            rememberRecent(set, way < kRecentWays ? way : kRecentWays - 1u, {tex0Bits, hash, texa, size, pageEpoch, found});
        return found;
    }

    // A difference the self-check found (TS_NATIVE_DRAW_SELFCHECK); the first
    // few are logged.
    static void noteDrawDiff(const char *what, uint64_t fast, uint64_t full)
    {
        if (++g_nv2aTextureStats.drawDiffs <= 16u)
            std::cout << "[TS:drawcheck] " << what << " differs: fast 0x" << std::hex << fast << ", full 0x" << full
                      << std::dec << std::endl;
    }

    // The lookup without the recent table: the last texture, else the cache.
    Texture *textureLookup(const GSDrawState &state)
    {
        const GSTex0Reg &tex = state.context.tex0;
        const uint32_t w = std::max<uint32_t>(state.textureWidth, 1u), h = std::max<uint32_t>(state.textureHeight, 1u);
        if (w > 1024u || h > 1024u)
            return nullptr;
        GSDrawState full = state;
        full.context.clamp = 0; // the decode covers the whole texture
        const GSCpuBackend::VramRange range = GSCpuBackend::TextureRange(full);
        // Render-to-texture from the screen: local memory needs the GPU's pixels.
        if (screenGpuNewer && overlaps(range, gpuRange()))
        {
            ++g_nv2aTextureStats.wbTexture;
            writeBackScreen();
        }
        const bool indexed = isIndexed(tex.psm);
        const uint32_t texa = uint32_t(state.texa.ta0) | (uint32_t(state.texa.ta1) << 8) | (state.texa.aem ? 0x10000u : 0u);
        const uint64_t hash = indexed ? clutHash : 0u;
        const uint64_t versions = versionSum(range);
        // Consecutive draws mostly share a texture: remember the last hit.
        const uint64_t tex0Bits = uint64_t(tex.tbp0) | (uint64_t(tex.tbw) << 32) | (uint64_t(tex.psm) << 40) |
                                  (uint64_t(tex.cpsm) << 48) | (uint64_t(tex.csm) << 54) | (uint64_t(tex.csa & 0x1Fu) << 56);
        if (lastTexture && lastTex0 == tex0Bits && lastTexa == texa && lastClut == hash && lastVersions == versions &&
            lastTexture->width == w && lastTexture->height == h)
        {
            lastTexture->lastUse = ++textureTick;
            noteUse(*lastTexture);
            return lastTexture;
        }
        Texture *found = lookupTexture(state, w, h, texa, hash, versions, range);
        lastTexture = found;
        lastTex0 = tex0Bits;
        lastTexa = texa;
        lastClut = hash;
        lastVersions = versions;
        return found;
    }

    Texture *lastTexture = nullptr;
    uint64_t lastTex0 = 0, lastClut = 0, lastVersions = 0;
    uint32_t lastTexa = 0;

#if TS_TEXTURE_INDEX
    // The records in `textures` by their whole key (TS_TEXTURE_INDEX): open
    // addressing with linear probing, 1,024 slots (8 KB, part of the Impl,
    // allocated with the renderer), each slot the key's hash and the record.
    // A match keeps about 200 records. Past kIndexFull (a cache of tiny
    // textures) the index is left (indexValid false) and lookups walk the
    // list until the cache is back under kIndexRefill, when finishFrame
    // builds it again.
    struct IndexSlot
    {
        uint32_t tag = 0; // the key's hash, never 0 (0: a free slot)
        std::list<Texture>::iterator texture;
    };
    static constexpr uint32_t kIndexSlots = 1024u, kIndexFull = 768u, kIndexRefill = 512u;
    std::array<IndexSlot, kIndexSlots> textureIndex{};
    uint32_t indexCount = 0;
    bool indexValid = true;

    // The hash of a whole key (CLUT fields 0 for formats without one, as
    // lookupTexture's match ignores them there).
    static uint32_t keyTag(uint32_t tbp0, uint32_t tbw, uint32_t psm, uint32_t w, uint32_t h, uint32_t texa,
                           uint64_t clut, uint32_t cpsm, uint32_t csm, uint32_t csa)
    {
        uint32_t x = 0x9E3779B9u;
        const uint32_t words[5] = {tbp0 | (tbw << 14) | (psm << 20) | (csm << 26) | (cpsm << 27),
                                   w | (h << 11) | (csa << 22), texa, uint32_t(clut), uint32_t(clut >> 32)};
        for (const uint32_t word : words)
        {
            x = (x ^ word) * 0x85EBCA6Bu;
            x ^= x >> 13;
        }
        x *= 0xC2B2AE35u;
        x ^= x >> 16;
        return x ? x : 1u;
    }

    template <typename Matches>
    std::list<Texture>::iterator indexFind(uint32_t tag, const Matches &matches)
    {
        for (uint32_t i = tag & (kIndexSlots - 1u);; i = (i + 1u) & (kIndexSlots - 1u))
        {
            const IndexSlot &slot = textureIndex[i];
            if (!slot.tag)
                return textures.end();
            if (slot.tag == tag && matches(*slot.texture))
                return slot.texture;
        }
    }

    void indexAdd(std::list<Texture>::iterator it)
    {
        if (!indexValid)
            return;
        if (indexCount >= kIndexFull)
        {
            indexValid = false;
            ++s_lookupStats.indexOverflows;
            return;
        }
        uint32_t i = it->indexTag & (kIndexSlots - 1u);
        while (textureIndex[i].tag)
            i = (i + 1u) & (kIndexSlots - 1u);
        textureIndex[i] = {it->indexTag, it};
        ++indexCount;
    }

    void indexRemove(std::list<Texture>::iterator it)
    {
        if (!indexValid)
            return;
        constexpr uint32_t mask = kIndexSlots - 1u;
        uint32_t i = it->indexTag & mask;
        while (textureIndex[i].tag && textureIndex[i].texture != it)
            i = (i + 1u) & mask;
        if (!textureIndex[i].tag)
            return;
        // Backward shift: a later record of the run moves into the hole
        // unless its home slot lies after the hole (cyclically, up to it).
        for (uint32_t j = (i + 1u) & mask; textureIndex[j].tag; j = (j + 1u) & mask)
        {
            const uint32_t home = textureIndex[j].tag & mask;
            const bool stays = i <= j ? (home > i && home <= j) : (home > i || home <= j);
            if (!stays)
            {
                textureIndex[i] = textureIndex[j];
                i = j;
            }
        }
        textureIndex[i] = IndexSlot{};
        --indexCount;
    }

    void rebuildIndex()
    {
        textureIndex.fill(IndexSlot{});
        indexCount = 0;
        indexValid = true;
        for (auto it = textures.begin(); it != textures.end(); ++it)
            indexAdd(it);
    }
#endif

    // The first record of `textures` with this key (the old lookup's walk).
    template <typename Matches>
    std::list<Texture>::iterator walkTextures(const Matches &matches)
    {
        for (auto it = textures.begin(); it != textures.end(); ++it)
            if (matches(*it))
                return it;
        return textures.end();
    }

    // A record joins the cache (and its index).
    Texture &addTexture(const Texture &t)
    {
        textures.push_back(t);
#if TS_TEXTURE_INDEX
        indexAdd(std::prev(textures.end()));
#endif
        return textures.back();
    }

    Texture *lookupTexture(const GSDrawState &state, uint32_t w, uint32_t h, uint32_t texa, uint64_t hash,
                           uint64_t versions, const GSCpuBackend::VramRange &range)
    {
        ++s_lookupStats.textureSlow;
        const GSTex0Reg &tex = state.context.tex0;
        const bool indexed = isIndexed(tex.psm);
        auto matches = [&](const Texture &t) {
            return t.tbp0 == tex.tbp0 && t.tbw == tex.tbw && t.psm == tex.psm && t.width == w && t.height == h &&
                   t.texa == texa && t.clutHash == hash &&
                   (!indexed || (t.cpsm == tex.cpsm && t.csm == tex.csm && t.csa == tex.csa));
        };
#if TS_TEXTURE_INDEX
        const uint32_t tag = keyTag(tex.tbp0, tex.tbw, tex.psm, w, h, texa, hash, indexed ? tex.cpsm : 0u,
                                    indexed ? tex.csm : 0u, indexed ? tex.csa : 0u);
        auto it = indexValid ? indexFind(tag, matches) : walkTextures(matches);
#if TS_NV2A_SELFCHECK
        if (indexValid)
        {
            const auto walked = walkTextures(matches);
            if (walked != it)
            {
                ++s_lookupStats.indexDiffs;
                noteDrawDiff("texture index", tex.tbp0, walked != textures.end() ? walked->tbp0 : UINT32_MAX);
                it = walked;
            }
        }
#endif
        if (it != textures.end())
        {
            Texture &t = *it;
            if (t.versions == versions)
            {
                t.lastUse = ++textureTick;
                if (t.packEntry >= 0 && !t.pooled && frameNumber >= t.packRetryFrame)
                    if (Texture *pooled = retryPack(it))
                        return pooled;
                noteUse(t);
                return &t;
            }
            retireTexture(it); // changed contents: decoded afresh below
        }
#else
        for (auto it = textures.begin(); it != textures.end(); ++it)
        {
            Texture &t = *it;
            if (!matches(t))
                continue;
            if (t.versions == versions)
            {
                t.lastUse = ++textureTick;
                if (t.packEntry >= 0 && !t.pooled && frameNumber >= t.packRetryFrame)
                    if (Texture *pooled = retryPack(it))
                        return pooled;
                noteUse(t);
                return &t;
            }
            retireTexture(it); // changed contents: decoded afresh below
            break;
        }
#endif
        // One-frame textures (and evicted ones not yet freed) are reused
        // until the frame ends rather than decoded again at each use.
        for (Texture &t : retired)
            if (t.versions == versions && matches(t))
            {
                t.lastUse = ++textureTick;
                noteUse(t);
                return &t;
            }
        {
            // Why this is a miss (development statistics).
            bool sameAddress = false, sameVersion = false;
            for (const Texture &t : textures)
                if (t.tbp0 == tex.tbp0 && t.psm == tex.psm && t.width == w && t.height == h)
                {
                    sameAddress = true;
                    if (t.versions == versions)
                        sameVersion = true;
                }
            for (const Texture &t : retired)
                if (t.tbp0 == tex.tbp0 && t.psm == tex.psm && t.width == w && t.height == h)
                {
                    sameAddress = true;
                    if (t.versions == versions)
                        sameVersion = true;
                }
            const uint64_t key = uint64_t(tex.tbp0) | (uint64_t(tex.psm) << 16) | (uint64_t(w) << 24) | (uint64_t(h) << 40);
            if (sameVersion)
                ++g_nv2aTextureStats.missClut;
            else if (sameAddress)
                ++g_nv2aTextureStats.missVersion;
#if TS_NV2A_MISS_KEYS_FIXED
            else if (lastFrameKeys().contains(key))
#else
            else if (lastFrameKeys.count(key))
#endif
                ++g_nv2aTextureStats.missEvicted;
            else
                ++g_nv2aTextureStats.missNew;
#if TS_NV2A_MISS_KEYS_FIXED
            frameKeys().insert(key);
#else
            frameKeys.insert(key);
#endif
        }
        Texture t{tex.tbp0, tex.tbw, tex.psm, w, h, tex.cpsm, tex.csm, tex.csa, texa, hash, versions, ++textureTick, range};
#if TS_TEXTURE_INDEX
        t.indexTag = tag;
#endif
#if TS_NV2A_TEXTURE_STREAM
        // Decoded once when it fits the scratch (TexelPlan), else streamed.
        const bool packed = pack.enabled() && !renderTarget(range);
        TexelPlan plan;
        beginTexels(state, t, packed, plan);
        // The pack's copy when it has this texture (render targets and
        // screen copies are never looked up, as on the PC).
        if (packed)
            if (Texture *pooled = packTexture(t, plan.key))
                return pooled;
        // The CPU renderer's texture flush where the second decode took it.
        (void)cpuFlushed();
        planTexels(t, state, plan); // sets format and bytes; the texels are written once allocated
#else
        cpu.DecodeTexture(state, decoded);
        const bool whole = decoded.size() >= size_t(w) * h;
        if (!whole)
            decoded.assign(size_t(w) * h, 0u);
        // The pack's copy when it has this texture (render targets and
        // screen copies are never looked up, as on the PC).
        if (whole && pack.enabled() && !renderTarget(range))
            if (Texture *pooled = packTexture(t))
                return pooled;
        encodeTexture(t, state); // sets format and bytes; the texels wait in `swizzled`
#endif
        // Room in the cache: textures not used in this or the last frame
        // go first. When a frame's textures exceed the budget the cache
        // keeps what it has (LRU would cycle the whole set every frame)
        // and the newcomer lives in a one-frame slot (the retired list).
        // Pack textures cost the cache nothing and stay.
        bool cached = true;
        while (textureBytes + t.bytes > effectiveBudget())
        {
            auto oldest = textures.end();
            for (auto it = textures.begin(); it != textures.end(); ++it)
                if (!it->pooled && it->lastFrame + 1u < frameNumber && (oldest == textures.end() || it->lastUse < oldest->lastUse))
                    oldest = it;
            if (oldest == textures.end())
            {
                cached = false;
                break;
            }
            retireTexture(oldest);
        }
        if (!cached && retiredBytes + t.bytes > retiredLimit())
        {
            ++g_nv2aTextureStats.waitRetire;
            waitIdle();
            freeRetired();
        }
        t.texels = allocGpu(t.bytes);
        if (!t.texels)
            return nullptr;
#if TS_NV2A_TEXTURE_STREAM
        writeTexels(t, state, plan);
#if TS_NV2A_TEXTURE_SELFCHECK
        checkTexels(t, state, plan);
#endif
#else
        memcpy(t.texels, swizzled.data(), t.bytes);
#endif
        ++g_nv2aTextureStats.fills;
        ++frameFills;
        g_nv2aTextureStats.fillBytes += uint32_t(t.bytes);
        if (cached)
        {
            textureBytes += t.bytes;
            Texture &added = addTexture(t);
            noteUse(added);
            return &added;
        }
        retired.push_back(t);
        retiredBytes += t.bytes;
        noteUse(retired.back());
        return &retired.back();
    }

    void noteUse(Texture &t)
    {
        if (t.lastFrame == frameNumber)
            return;
        t.lastFrame = frameNumber;
        ++frameTextures;
        frameTextureBytes += uint32_t(t.bytes);
        if (t.pooled)
            pack.touch(t.packEntry, frameNumber);
    }

    // ------------------------------------------------------ texture pack
    XboxTexturePack pack;
    uint8_t *packPool = nullptr;
    std::vector<int> packEvicted;

    // Only when Create gives up on the GPU: the software renderer gets the
    // pool's memory back (once the loader has stopped writing into it).
    ~Impl()
    {
        pack.close();
        if (packPool)
            MmFreeContiguousMemory(packPool);
    }

    // Opens the pack and takes its pool: at start-up, while 1.25 MB of
    // contiguous memory is still easy to find. Without the file (or the
    // memory, or the loader) everything runs as before.
    void openTexturePack()
    {
        if (!pack.open(kTexturePackPath))
            return;
        packPool = static_cast<uint8_t *>(allocGpu(kTexturePoolBytes));
        if (!packPool)
        {
            std::cout << "[TS:xbox] texture pack: no memory for its pool, not used" << std::endl;
            pack.close();
            return;
        }
        if (!pack.attachPool(packPool, kTexturePoolBytes))
        {
            MmFreeContiguousMemory(packPool);
            packPool = nullptr;
        }
    }

    // Once a frame: the loader's finished reads, the counters, and the
    // runtime path's budget (kTextureBudgetWithPack). frameTextureBytes is
    // what the runtime path drew this frame (pack textures count nothing).
    void packFrameEnd()
    {
        if (!pack.enabled())
            return;
        pack.poll();
        updatePackStats();
        packQuietFrames = frameTextureBytes > kTextureBudgetWithPack / 2u ? 0u : std::min(packQuietFrames + 1u, kPackTrialFrames);
        if (frameTextureBytes > kTextureBudgetWithPack * 3u / 4u)
            textureBudget = kTextureBudget;
        else if (packQuietFrames >= kPackTrialFrames)
            textureBudget = kTextureBudgetWithPack;
        g_nv2aTextureStats.textureBudgetKB = uint32_t(effectiveBudget() / 1024u);
    }

    void updatePackStats()
    {
        const XboxTexturePack::Stats &s = pack.stats();
        g_nv2aTextureStats.packLoads = s.loads;
        g_nv2aTextureStats.packEvictions = s.evictions;
        g_nv2aTextureStats.packMostVictims = s.mostVictims;
        g_nv2aTextureStats.packBusy = s.busy;
        g_nv2aTextureStats.packPoolBytes = s.usedBytes;
        g_nv2aTextureStats.packLoadMs = uint32_t(s.loadMicroseconds / 1000u);
        g_nv2aTextureStats.packLongestMs = (s.longestMicroseconds + 999u) / 1000u;
    }

    // Records still pointing at entries the pack evicted.
    void dropEvicted()
    {
        for (int entry : packEvicted)
            for (auto it = textures.begin(); it != textures.end();)
            {
                const auto next = std::next(it);
                if (it->pooled && it->packEntry == entry)
                    retireTexture(it);
                it = next;
            }
        packEvicted.clear();
    }

    // Makes t the pack's copy of entry `index` when that is in the pool.
    // Otherwise t keeps the runtime path for now and remembers when to try
    // again: next frame while the entry is on its way from the disc (or the
    // loader is busy), later when the pool had no room, never when the
    // entry cannot be read.
    bool usePack(Texture &t, int index)
    {
        XboxTexturePack::Status status = XboxTexturePack::kUnavailable;
        uint8_t *texels = pack.acquire(index, frameNumber, packEvicted, status);
        if (!packEvicted.empty())
            dropEvicted();
        if (!texels)
        {
            switch (status)
            {
            case XboxTexturePack::kLoading:
            case XboxTexturePack::kBusy:
                ++g_nv2aTextureStats.packWaits;
                t.packEntry = index;
                t.packRetryFrame = frameNumber + 1u;
                break;
            case XboxTexturePack::kNoRoom:
                ++g_nv2aTextureStats.packNoRoom;
                t.packEntry = index;
                t.packRetryFrame = frameNumber + kPackRetryFrames;
                break;
            default:
                t.packEntry = -1;
                break;
            }
            return false;
        }
        static const uint32_t kFormats[4] = {
            NV097_SET_TEXTURE_FORMAT_COLOR_L_DXT1_A1R5G5B5, NV097_SET_TEXTURE_FORMAT_COLOR_L_DXT45_A8R8G8B8,
            NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A8R8G8B8, NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A1R5G5B5};
        const XboxTexturePack::Entry &e = pack.entry(index);
        t.texels = texels;
        t.format = kFormats[e.format]; // checked when the pack was opened
        t.gpuWidth = e.width;
        t.gpuHeight = e.height;
        t.levels = e.levels;
        t.unitAlpha = (e.flags & XboxTexturePack::kUnitAlpha) != 0u;
        t.forceLinear = (e.flags & XboxTexturePack::kReplacement) != 0u;
        t.bytes = 0;
        t.packEntry = index;
        t.pooled = true;
        return true;
    }

    // A cache miss whose decoded texels (in `decoded`; with
    // TS_NV2A_TEXTURE_STREAM their key) may be in the pack. Null when they
    // are not, or not in the pool yet: then t remembers the entry and the
    // caller encodes the texture as before.
#if TS_NV2A_TEXTURE_STREAM
    Texture *packTexture(Texture &t, uint64_t key)
    {
        const int index = pack.find(key);
#else
    Texture *packTexture(Texture &t)
    {
        const int index = pack.find(gs_texture_hash::hash(decoded.data(), t.width, t.height));
#endif
        if (index < 0)
        {
            ++g_nv2aTextureStats.packMisses;
            return nullptr;
        }
        ++g_nv2aTextureStats.packHits;
        if (!usePack(t, index))
            return nullptr;
        Texture &added = addTexture(t);
        noteUse(added);
        return &added;
    }

    // A texture drawn from the runtime path while its pack entry was not in
    // the pool tries again; once it is, the pack's copy replaces it (its
    // own memory retires as usual).
    Texture *retryPack(std::list<Texture>::iterator it)
    {
        Texture t = *it;
        if (!usePack(t, it->packEntry))
        {
            it->packEntry = t.packEntry;
            it->packRetryFrame = t.packRetryFrame;
            return nullptr;
        }
        retireTexture(it);
        Texture &added = addTexture(t);
        noteUse(added);
        return &added;
    }

    // Render targets and screen copies: GS pages the GPU draws (the
    // display buffers) or that off-screen draws and copies of either wrote,
    // until an upload or a copy of texels replaces them. Their contents are
    // never in the pack, and hashing them would cost time for nothing.
    std::bitset<kPageCount> targetPages;
    GSCpuBackend::VramRange lastTargetMark{}; // consecutive off-screen draws share a target

    void markTargetPages(const GSCpuBackend::VramRange &range, bool target)
    {
        if (range.end == UINT64_MAX || (target && range.begin == lastTargetMark.begin && range.end == lastTargetMark.end))
            return;
        lastTargetMark = target ? range : GSCpuBackend::VramRange{};
        for (uint64_t p = range.begin / kPageBytes; p < (range.end + kPageBytes - 1) / kPageBytes && p < kPageCount; ++p)
            targetPages[p] = target;
    }

    bool renderTarget(const GSCpuBackend::VramRange &range) const
    {
        if (range.end == UINT64_MAX || range.end > kPageCount * kPageBytes)
            return true;
        const uint32_t rows = std::min<uint32_t>(frameHeight, kDisplayRows);
        for (const uint32_t fbp : {displayFbp[0], displayFbp[1], frameFbp})
            if (fbp != UINT32_MAX && overlaps(range, frameRangeExact(framePsm, fbp, frameFbw, rows)))
                return true;
        for (uint64_t p = range.begin / kPageBytes; p < (range.end + kPageBytes - 1) / kPageBytes; ++p)
            if (targetPages[p])
                return true;
        return false;
    }

#if !TS_NV2A_TEXTURE_STREAM || TS_NV2A_TEXTURE_SELFCHECK
    // Encodes the decoded GS texture (`decoded`: CLUT and TEXA applied) into
    // `swizzled`, the layout the NV2A samples with wrapping: DXT1/DXT5 from
    // 8x8 up, else A1R5G5B5 when that loses nothing (16-bit sources,
    // one-bit alpha as below), else A8R8G8B8.
    void encodeTexture(Texture &t, const GSDrawState &state)
    {
        // 2D draws (sprites: HUD, text) keep their texels; the halving is
        // for the world's triangles.
        const bool allowHalf = state.prim.type != GS_PRIM_SPRITE;
        cpuFlushed().DecodeTexture(state, decoded);
        if (decoded.size() < size_t(t.width) * t.height)
            decoded.assign(size_t(t.width) * t.height, 0u);
        // Textures of 256 or more are stored at half size (2x2 average):
        // a match's textures are about 3 MB a frame at full size, three
        // times what 64 MB leaves for the cache.
        t.gpuWidth = t.width;
        t.gpuHeight = t.height;
        if (allowHalf && (t.width >= 256u || t.height >= 256u) && t.width >= 16u && t.height >= 16u)
        {
            const uint32_t w = t.width, gw = w / 2u, gh = t.height / 2u;
            for (uint32_t v = 0; v < gh; ++v)
            {
                const uint32_t *r0 = &decoded[size_t(2u * v) * w], *r1 = r0 + w;
                uint32_t *dst = &decoded[size_t(v) * gw];
                for (uint32_t u = 0; u < gw; ++u)
                {
                    const uint32_t a = r0[2u * u], b = r0[2u * u + 1u], c = r1[2u * u], d = r1[2u * u + 1u];
                    uint32_t out = 0;
                    for (uint32_t shift = 0; shift < 32u; shift += 8u)
                        out |= ((((a >> shift) & 0xFFu) + ((b >> shift) & 0xFFu) + ((c >> shift) & 0xFFu) + ((d >> shift) & 0xFFu) + 2u) / 4u) << shift;
                    dst[u] = out;
                }
            }
            t.gpuWidth = gw;
            t.gpuHeight = gh;
        }
        const uint32_t width = t.gpuWidth, height = t.gpuHeight;
        const size_t count = size_t(width) * height;
        // One alpha bit (texel alpha 0 or not) is enough when every alpha is
        // 0 or the game's opaque 0x7F/0x80: stored 1.0 then stands for 0x80
        // and the unit-alpha pixel programs read it so (0x7F comes out
        // 1/128 high). Alpha only 0 or at least 0x80 also fits one bit, read
        // through the x2 programs as 2.0 (exact for 0xFF; DECAL and
        // HIGHLIGHT clamp any of them to 1).
        bool unitAlpha = true, highAlpha = true, fits16 = true;
        for (size_t i = 0; i < count && (unitAlpha || highAlpha); ++i)
        {
            const uint32_t c = decoded[i], a = c >> 24;
            unitAlpha = unitAlpha && (a == 0u || a == 0x7Fu || a == 0x80u);
            highAlpha = highAlpha && (a == 0u || a >= 0x80u);
            if (c & 0x00070707u)
                fits16 = false;
        }
        const bool binaryAlpha = unitAlpha || highAlpha;
        // Most textures: DXT1 (4 bits a texel) so the cache holds a frame's
        // worth; the alpha bit is the 3-colour mode's transparent entry.
        if (width >= 8u && height >= 8u)
        {
            // Soft alpha: DXT5 (8 bits a texel, alpha interpolated per block).
            t.format = binaryAlpha ? NV097_SET_TEXTURE_FORMAT_COLOR_L_DXT1_A1R5G5B5
                                   : NV097_SET_TEXTURE_FORMAT_COLOR_L_DXT45_A8R8G8B8;
            t.bytes = binaryAlpha ? count / 2u : count;
            t.unitAlpha = unitAlpha;
            swizzled.resize(t.bytes);
            encodeDxt(width, height, !binaryAlpha, swizzled.data());
            return;
        }
        fits16 = fits16 && binaryAlpha;
        t.unitAlpha = fits16 && unitAlpha;
        const Swizzle sw(width, height);
        spreadU.resize(width);
        for (uint32_t u = 0; u < width; ++u)
            spreadU[u] = Swizzle::spread(u, sw.maskU);
        spreadV.resize(height);
        for (uint32_t v = 0; v < height; ++v)
            spreadV[v] = Swizzle::spread(v, sw.maskV);
        t.format = fits16 ? NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A1R5G5B5 : NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A8R8G8B8;
        t.bytes = count * (fits16 ? 2u : 4u);
        swizzled.resize(t.bytes);
        if (fits16)
        {
            uint16_t *dst = reinterpret_cast<uint16_t *>(swizzled.data());
            for (uint32_t v = 0; v < height; ++v)
            {
                const uint32_t *src = &decoded[size_t(v) * width];
                const uint32_t rowBits = spreadV[v];
                for (uint32_t u = 0; u < width; ++u)
                {
                    const uint32_t c = src[u]; // R, G, B, A bytes
                    dst[spreadU[u] | rowBits] = uint16_t(((c >> 24) ? 0x8000u : 0u) | ((c & 0xF8u) << 7) |
                                                         ((c >> 6) & 0x03E0u) | ((c >> 19) & 0x1Fu));
                }
            }
        }
        else
        {
            uint32_t *dst = reinterpret_cast<uint32_t *>(swizzled.data());
            for (uint32_t v = 0; v < height; ++v)
            {
                const uint32_t *src = &decoded[size_t(v) * width];
                const uint32_t rowBits = spreadV[v];
                for (uint32_t u = 0; u < width; ++u)
                {
                    const uint32_t c = src[u];
                    dst[spreadU[u] | rowBits] = (c & 0xFF00FF00u) | ((c & 0xFFu) << 16) | ((c >> 16) & 0xFFu);
                }
            }
        }
    }
#endif

#if TS_NV2A_TEXTURE_STREAM
    // The texture being made (TS_NV2A_TEXTURE_STREAM), with encodeTexture's
    // decisions. Whole: decoded into texScratch at once, halved there; else
    // decoded streamRows() rows at a time, for the key (keyed), to scan, to
    // encode.
    struct TexelPlan
    {
        bool whole = false, halve = false, keyed = false;
        bool unitAlpha = true, highAlpha = true, fits16 = true; // encodeTexture's scan of the stored texels
        bool dxt = false, dxt5 = false;
        uint64_t key = 0; // the pack key (gs_texture_hash), when keyed
    };

    // encodeTexture's 2x2 average: rows 2v and 2v + 1 of src (w wide) into
    // row v of dst (w / 2 wide), for v < outRows; dst may be src.
    static void halveRows(const uint32_t *src, uint32_t w, uint32_t outRows, uint32_t *dst)
    {
        const uint32_t gw = w / 2u;
        for (uint32_t v = 0; v < outRows; ++v)
        {
            const uint32_t *r0 = src + size_t(2u * v) * w, *r1 = r0 + w;
            uint32_t *out = dst + size_t(v) * gw;
            for (uint32_t u = 0; u < gw; ++u)
            {
                const uint32_t a = r0[2u * u], b = r0[2u * u + 1u], c = r1[2u * u], d = r1[2u * u + 1u];
                uint32_t value = 0;
                for (uint32_t shift = 0; shift < 32u; shift += 8u)
                    value |= ((((a >> shift) & 0xFFu) + ((b >> shift) & 0xFFu) + ((c >> shift) & 0xFFu) + ((d >> shift) & 0xFFu) + 2u) / 4u) << shift;
                out[u] = value;
            }
        }
    }

    // encodeTexture's alpha scan, a piece at a time. It stopped once both
    // alpha flags were false; then fits16 is not used, so scanning on
    // changes nothing.
    static void scanAlpha(const uint32_t *texels, size_t count, TexelPlan &plan)
    {
        bool unitAlpha = plan.unitAlpha, highAlpha = plan.highAlpha, fits16 = plan.fits16;
        for (size_t i = 0; i < count && (unitAlpha || highAlpha); ++i)
        {
            const uint32_t c = texels[i], a = c >> 24;
            unitAlpha = unitAlpha && (a == 0u || a == 0x7Fu || a == 0x80u);
            highAlpha = highAlpha && (a == 0u || a >= 0x80u);
            if (c & 0x00070707u)
                fits16 = false;
        }
        plan.unitAlpha = unitAlpha;
        plan.highAlpha = highAlpha;
        plan.fits16 = fits16;
    }

    // Decodes the texture (whole when it fits the scratch) and, for the
    // pack's lookup, its key. A streamed one that is not looked up is
    // scanned on the way; one that is, only once the pack lacks it (a pack
    // hit costs one decode and the key, as before).
    void beginTexels(const GSDrawState &state, const Texture &t, bool keyed, TexelPlan &plan)
    {
        const uint32_t w = t.width, h = t.height;
        // encodeTexture's halving: sprites (HUD, text) keep their texels.
        plan.halve = state.prim.type != GS_PRIM_SPRITE && (w >= 256u || h >= 256u) && w >= 16u && h >= 16u;
        plan.whole = size_t(w) * h <= kScratchTexels;
        plan.keyed = keyed;
        if (plan.whole)
        {
            cpu.DecodeTextureRows(state, 0u, h, texScratch);
            if (keyed)
                plan.key = gs_texture_hash::hash(texScratch, w, h);
            return;
        }
        if (!keyed)
        {
            scanTexels(state, t, plan);
            return;
        }
        // Over 16,384 texels and neither side over 1,024: both powers of two
        // from 32, so every band is a multiple of 8 rows: an even number of
        // texels (the key's pairs) and of rows (the halving's pairs).
        gs_texture_hash::Hasher hasher(w, h);
        const uint32_t band = streamRows(w);
        for (uint32_t y = 0; y < h; y += band)
        {
            const uint32_t rows = std::min(band, h - y);
            cpu.DecodeTextureRows(state, y, rows, texScratch);
            hasher.add(texScratch, size_t(rows) * w);
        }
        plan.key = hasher.value();
    }

    // A streamed texture's alpha scan of the stored (halved) texels, band
    // by band.
    void scanTexels(const GSDrawState &state, const Texture &t, TexelPlan &plan)
    {
        const uint32_t w = t.width, h = t.height, band = streamRows(w);
        for (uint32_t y = 0; y < h; y += band)
        {
            const uint32_t rows = std::min(band, h - y);
            cpu.DecodeTextureRows(state, y, rows, texScratch);
            if (plan.halve)
            {
                halveRows(texScratch, w, rows / 2u, texScratch);
                scanAlpha(texScratch, size_t(rows / 2u) * (w / 2u), plan);
            }
            else
                scanAlpha(texScratch, size_t(rows) * w, plan);
        }
    }

    // encodeTexture's choices for t: stored size, format, bytes, unit alpha.
    void planTexels(Texture &t, const GSDrawState &state, TexelPlan &plan)
    {
        t.gpuWidth = plan.halve ? t.width / 2u : t.width;
        t.gpuHeight = plan.halve ? t.height / 2u : t.height;
        const uint32_t width = t.gpuWidth, height = t.gpuHeight;
        const size_t count = size_t(width) * height;
        if (plan.whole)
        {
            if (plan.halve)
                halveRows(texScratch, t.width, height, texScratch);
            scanAlpha(texScratch, count, plan);
        }
        else if (plan.keyed)
            scanTexels(state, t, plan); // the pack lacks it (beginTexels only keyed it)
        const bool binaryAlpha = plan.unitAlpha || plan.highAlpha;
        if (width >= 8u && height >= 8u)
        {
            t.format = binaryAlpha ? NV097_SET_TEXTURE_FORMAT_COLOR_L_DXT1_A1R5G5B5
                                   : NV097_SET_TEXTURE_FORMAT_COLOR_L_DXT45_A8R8G8B8;
            t.bytes = binaryAlpha ? count / 2u : count;
            t.unitAlpha = plan.unitAlpha;
            plan.dxt = true;
            plan.dxt5 = !binaryAlpha;
            return;
        }
        // Below 8 in a direction: never halved, at most 4 x 1024, so whole.
        plan.fits16 = plan.fits16 && binaryAlpha;
        t.unitAlpha = plan.fits16 && plan.unitAlpha;
        t.format = plan.fits16 ? NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A1R5G5B5 : NV097_SET_TEXTURE_FORMAT_COLOR_SZ_A8R8G8B8;
        t.bytes = count * (plan.fits16 ? 2u : 4u);
    }

    // The encoded texels into t's GPU memory, through texStage: DXT a row
    // of blocks at a time (a streamed texture decoded again for it, band by
    // band), the small swizzled formats whole.
    void writeTexels(Texture &t, const GSDrawState &state, const TexelPlan &plan)
    {
        uint8_t *dst = static_cast<uint8_t *>(t.texels);
        const uint32_t width = t.gpuWidth, height = t.gpuHeight;
        if (plan.dxt)
        {
            size_t staged = 0;
            const size_t blockRowBytes = size_t(width / 4u) * (plan.dxt5 ? 16u : 8u);
            // Rows of texels (width apart, a multiple of 4) as block rows.
            auto encodeRows = [&](const uint32_t *rows, uint32_t count)
            {
                for (uint32_t by = 0; by < count; by += 4u)
                {
                    if (staged + blockRowBytes > kStageBytes)
                    {
                        memcpy(dst, texStage, staged);
                        dst += staged;
                        staged = 0;
                    }
                    staged += encodeDxtBand(rows + size_t(by) * width, width, plan.dxt5, texStage + staged);
                }
            };
            if (plan.whole)
                encodeRows(texScratch, height);
            else
            {
                const uint32_t band = streamRows(t.width);
                for (uint32_t y = 0; y < t.height; y += band)
                {
                    const uint32_t rows = std::min(band, t.height - y);
                    cpu.DecodeTextureRows(state, y, rows, texScratch);
                    if (plan.halve)
                        halveRows(texScratch, t.width, rows / 2u, texScratch);
                    encodeRows(texScratch, plan.halve ? rows / 2u : rows);
                }
            }
            memcpy(dst, texStage, staged);
            return;
        }
        // encodeTexture's swizzle; the spread tables after the texels in
        // the scratch (at most 4,096 texels and 1,028 entries).
        const size_t count = size_t(width) * height;
        const Swizzle sw(width, height);
        uint32_t *const spreadU = texScratch + count, *const spreadV = spreadU + width;
        for (uint32_t u = 0; u < width; ++u)
            spreadU[u] = Swizzle::spread(u, sw.maskU);
        for (uint32_t v = 0; v < height; ++v)
            spreadV[v] = Swizzle::spread(v, sw.maskV);
        if (plan.fits16)
        {
            uint16_t *out = reinterpret_cast<uint16_t *>(texStage);
            for (uint32_t v = 0; v < height; ++v)
            {
                const uint32_t *src = texScratch + size_t(v) * width;
                const uint32_t rowBits = spreadV[v];
                for (uint32_t u = 0; u < width; ++u)
                {
                    const uint32_t c = src[u]; // R, G, B, A bytes
                    out[spreadU[u] | rowBits] = uint16_t(((c >> 24) ? 0x8000u : 0u) | ((c & 0xF8u) << 7) |
                                                         ((c >> 6) & 0x03E0u) | ((c >> 19) & 0x1Fu));
                }
            }
        }
        else
        {
            uint32_t *out = reinterpret_cast<uint32_t *>(texStage);
            for (uint32_t v = 0; v < height; ++v)
            {
                const uint32_t *src = texScratch + size_t(v) * width;
                const uint32_t rowBits = spreadV[v];
                for (uint32_t u = 0; u < width; ++u)
                {
                    const uint32_t c = src[u];
                    out[spreadU[u] | rowBits] = (c & 0xFF00FF00u) | ((c & 0xFFu) << 16) | ((c >> 16) & 0xFFu);
                }
            }
        }
        memcpy(dst, texStage, t.bytes);
    }

#if TS_NV2A_TEXTURE_SELFCHECK
    // The texture made again the old way (two decodes into `decoded`,
    // encodeTexture into `swizzled`) and compared.
    void checkTexels(const Texture &t, const GSDrawState &state, const TexelPlan &plan)
    {
        Texture ref = t;
        cpu.DecodeTexture(state, decoded);
        if (plan.keyed && plan.key != gs_texture_hash::hash(decoded.data(), t.width, t.height))
            noteDrawDiff("texkey", plan.key, gs_texture_hash::hash(decoded.data(), t.width, t.height));
        encodeTexture(ref, state);
        if (ref.format != t.format || ref.bytes != t.bytes || ref.unitAlpha != t.unitAlpha ||
            ref.gpuWidth != t.gpuWidth || ref.gpuHeight != t.gpuHeight)
            noteDrawDiff("texenc", t.format | (uint64_t(t.bytes) << 32), ref.format | (uint64_t(ref.bytes) << 32));
        else if (std::memcmp(t.texels, swizzled.data(), t.bytes) != 0)
            noteDrawDiff("texenc", t.tbp0, t.width | (t.height << 16));
    }
#endif
#endif

    // Nearest 5/6-bit levels (truncation darkened the end points by up to
    // 7 of 255).
    static uint16_t to565(int r, int g, int b)
    {
        return uint16_t((((r * 31 + 127) / 255) << 11) | (((g * 63 + 127) / 255) << 5) | ((b * 31 + 127) / 255));
    }
    static void from565(uint16_t v, int &r, int &g, int &b)
    {
        r = (v >> 11) & 31; r = (r << 3) | (r >> 2);
        g = (v >> 5) & 63;  g = (g << 2) | (g >> 4);
        b = v & 31;         b = (b << 3) | (b >> 2);
    }

    // DXT1 by colour-extent fit: each 4x4 block's colours span a diagonal
    // of the box of its opaque texels; a block with transparent texels
    // (alpha 0: DXT1 textures have one-bit alpha) uses the 3-colour mode
    // (colour0 <= colour1) whose fourth entry is transparent.
    // DXT5: the same colour blocks (every texel coloured) preceded by an
    // 8-byte alpha block (two end points, 3-bit indices into their 8-step
    // interpolation).
#if !TS_NV2A_TEXTURE_STREAM || TS_NV2A_TEXTURE_SELFCHECK
    void encodeDxt(uint32_t w, uint32_t h, bool dxt5, uint8_t *out)
    {
        for (uint32_t by = 0; by < h; by += 4)
            out += encodeDxtBand(&decoded[size_t(by) * w], w, dxt5, out);
    }
#endif

    // One row of blocks: the four texel rows at `rows` (w apart) into
    // w / 4 blocks at out; returns the bytes written.
    uint32_t encodeDxtBand(const uint32_t *rows, uint32_t w, bool dxt5, uint8_t *out)
    {
        uint8_t *const start = out;
        {
            for (uint32_t bx = 0; bx < w; bx += 4, out += 8)
            {
                uint32_t texel[16];
                int minR = 255, minG = 255, minB = 255, maxR = 0, maxG = 0, maxB = 0;
                int n = 0, sumR = 0, sumG = 0, sumB = 0, sumRG = 0, sumRB = 0, sumGB = 0;
                uint32_t clear = 0; // transparent texels (bit i)
                for (uint32_t y = 0; y < 4; ++y)
                    for (uint32_t x = 0; x < 4; ++x)
                    {
                        const uint32_t c = rows[size_t(y) * w + bx + x];
                        texel[y * 4 + x] = c;
                        if (!dxt5 && (c >> 24) == 0u)
                        {
                            clear |= 1u << (y * 4 + x);
                            continue;
                        }
                        const int r = int(c & 0xFFu), g = int((c >> 8) & 0xFFu), b = int((c >> 16) & 0xFFu);
                        minR = std::min(minR, r); maxR = std::max(maxR, r);
                        minG = std::min(minG, g); maxG = std::max(maxG, g);
                        minB = std::min(minB, b); maxB = std::max(maxB, b);
                        ++n;
                        sumR += r; sumG += g; sumB += b;
                        sumRG += r * g; sumRB += r * b; sumGB += g * b;
                    }
                const bool transparent = clear != 0u, opaque = n != 0;
                if (dxt5)
                {
                    uint32_t aMax = 0, aMin = 255;
                    for (int i = 0; i < 16; ++i)
                    {
                        const uint32_t a = texel[i] >> 24;
                        aMax = std::max(aMax, a);
                        aMin = std::min(aMin, a);
                    }
                    out[0] = uint8_t(aMax);
                    out[1] = uint8_t(aMin);
                    uint64_t bits = 0;
                    if (aMax != aMin)
                    {
                        uint32_t steps[8] = {aMax, aMin};
                        for (uint32_t i = 2; i < 8; ++i)
                            steps[i] = ((8u - i) * aMax + (i - 1u) * aMin) / 7u;
                        for (int i = 0; i < 16; ++i)
                        {
                            const int a = int(texel[i] >> 24);
                            uint32_t best = 0, bestD = 1000;
                            for (uint32_t e = 0; e < 8; ++e)
                            {
                                const uint32_t d = uint32_t(std::abs(a - int(steps[e])));
                                if (d < bestD)
                                {
                                    bestD = d;
                                    best = e;
                                }
                            }
                            bits |= uint64_t(best) << (3 * i);
                        }
                    }
                    for (int i = 0; i < 6; ++i)
                        out[2 + i] = uint8_t(bits >> (8 * i));
                    out += 8;
                }
                if (!opaque)
                {
                    memset(out, 0, 4);
                    memset(out + 4, 0xFF, 4); // every texel the transparent entry
                    continue;
                }
                // The end points are opposite corners of the box: the widest
                // channel runs low to high and each other channel with it or
                // against it, by the sign of their covariance (always both
                // rising, as min/max alone gives, shifts the hues of blocks
                // whose channels run against each other).
                const int covRG = n * sumRG - sumR * sumG, covRB = n * sumRB - sumR * sumB,
                          covGB = n * sumGB - sumG * sumB; // n^2 x covariance; fits 32 bits
                const int spanR = maxR - minR, spanG = maxG - minG, spanB = maxB - minB;
                bool flipR = false, flipG = false, flipB = false;
                if (spanG >= spanR && spanG >= spanB)
                {
                    flipR = covRG < 0;
                    flipB = covGB < 0;
                }
                else if (spanR >= spanB)
                {
                    flipG = covRG < 0;
                    flipB = covRB < 0;
                }
                else
                {
                    flipR = covRB < 0;
                    flipG = covGB < 0;
                }
                uint16_t c0 = to565(flipR ? minR : maxR, flipG ? minG : maxG, flipB ? minB : maxB);
                uint16_t c1 = to565(flipR ? maxR : minR, flipG ? maxG : minG, flipB ? maxB : minB);
                if (transparent ? c0 > c1 : c0 < c1)
                    std::swap(c0, c1);
                int pr[4], pg[4], pb[4];
                from565(c0, pr[0], pg[0], pb[0]);
                from565(c1, pr[1], pg[1], pb[1]);
                int entries;
                if (transparent || c0 == c1)
                {
                    pr[2] = (pr[0] + pr[1]) / 2; pg[2] = (pg[0] + pg[1]) / 2; pb[2] = (pb[0] + pb[1]) / 2;
                    entries = c0 == c1 ? 1 : 3;
                }
                else
                {
                    pr[2] = (2 * pr[0] + pr[1]) / 3; pg[2] = (2 * pg[0] + pg[1]) / 3; pb[2] = (2 * pb[0] + pb[1]) / 3;
                    pr[3] = (pr[0] + 2 * pr[1]) / 3; pg[3] = (pg[0] + 2 * pg[1]) / 3; pb[3] = (pb[0] + 2 * pb[1]) / 3;
                    entries = 4;
                }
                uint32_t bits = 0;
                for (int i = 0; i < 16; ++i)
                {
                    const uint32_t c = texel[i];
                    uint32_t index = 3; // transparent
                    if (!(clear & (1u << i)))
                    {
                        const int r = int(c & 0xFFu), g = int((c >> 8) & 0xFFu), b = int((c >> 16) & 0xFFu);
                        int best = INT32_MAX;
                        for (int e = 0; e < entries; ++e)
                        {
                            const int dr = r - pr[e], dg = g - pg[e], db = b - pb[e];
                            const int d = dr * dr + dg * dg + db * db;
                            if (d < best)
                            {
                                best = d;
                                index = uint32_t(e);
                            }
                        }
                    }
                    bits |= index << (2 * i);
                }
                out[0] = uint8_t(c0); out[1] = uint8_t(c0 >> 8);
                out[2] = uint8_t(c1); out[3] = uint8_t(c1 >> 8);
                memcpy(out + 4, &bits, 4);
            }
        }
        return uint32_t(out - start);
    }

    struct DrawKey
    {
        const Texture *texture = nullptr;
        int program = 0;
        uint32_t address = 0, filter = 0, levels = 0; // levels: the texture's mip count (CONTROL0's LOD clamp)
        uint32_t blendEnable = 0, sfactor = 0, dfactor = 0, equation = 0, blendColor = 0;
        uint32_t alphaTest = 0, alphaFunc = 0, alphaRef = 0;
        uint32_t depthTest = 0, depthFunc = 0, depthMask = 0;
        uint32_t colorMask = 0, shade = 0;
        uint32_t vertexMode = 0, constSerial = 0; // transform programs (BeginXfRun)
        uint32_t topology = 0;                    // 0 triangle list, 1 one triangle strip (joined)
#if TS_NV2A_SCISSOR
        uint32_t clipX = 0, clipY = 0; // the GS scissor as window-clip words (clipFor)
#endif
        bool operator==(const DrawKey &) const = default;
    };
    DrawKey applied{};
    bool stateValid = false;
    DrawKey batchKey{};
    uint32_t batchFirst = 0, batchCount = 0;
    int currentProgram = -1;

    // The two comparisons the batching turns on (src/xbox/PUSH-BC-PLAN.md
    // W0-S): whether a draw with `key` continues the open batch (else it
    // is flushed first: reserve, beginXfRun), and whether the GPU already
    // holds the open batch's state (else applyState: flushBatch). B-GS's
    // cached material and environment halves (M4.1) go behind these.
#if TS_MEASURE_PUSHBC
    bool sameRun(const DrawKey &key) const
    {
        MeasureTimer measureCmp(g_measure.keyCmpCycles, g_measure.keyCmps);
        return batchCount == 0u || key == batchKey;
    }
    bool stateMatches() const
    {
        MeasureTimer measureCmp(g_measure.keyCmpCycles, g_measure.keyCmps);
        return stateValid && applied == batchKey;
    }
#else
    bool sameRun(const DrawKey &key) const { return batchCount == 0u || key == batchKey; }
    bool stateMatches() const { return stateValid && applied == batchKey; }
#endif

#if TS_NV2A_SCISSOR
    // The GS scissor on the screen (gs_nv2a_clip.h): the screen pixels whose
    // centre lies in a scissored frame pixel. The words of the last scissor
    // are kept (until beginFrame, which may change the mapping): the game
    // changes the scissor a few dozen times a frame (views, portals,
    // overlays), and the mapping divides.
    uint64_t clipScissor = UINT64_MAX; // UINT64_MAX: none (the registers hold 11-bit fields)
    uint32_t clipWordX = 0, clipWordY = 0;
    uint32_t clipNotes = 0; // clips other than the whole screen (logged, the first few)
    // What the GPU's window clip holds: pbkit sets all eight rectangles to
    // the whole screen, and only pushWindowClip changes them.
    uint32_t gpuClipX = gs_nv2a_clip::kFullClipX, gpuClipY = gs_nv2a_clip::kFullClipY;

    void clipFor(const GSScissorReg &s, uint32_t &x, uint32_t &y)
    {
        static_assert(sizeof(GSScissorReg) == sizeof(uint64_t), "scissor layout");
        uint64_t key;
        std::memcpy(&key, &s, sizeof(key));
        if (key != clipScissor)
        {
            clipScissor = key;
            gs_nv2a_clip::windowClip(s.x0, s.x1, s.y0, s.y1, frameFbw * 64u, frameHeight, clipWordX, clipWordY);
            if ((clipWordX != gs_nv2a_clip::kFullClipX || clipWordY != gs_nv2a_clip::kFullClipY) && ++clipNotes <= 4u)
                std::cout << "[TS:nv2a] window clip x " << (clipWordX & 0xFFFu) << "-" << (clipWordX >> 16) << " y "
                          << (clipWordY & 0xFFFu) << "-" << (clipWordY >> 16) << " (scissor " << s.x0 << "-" << s.x1
                          << ", " << s.y0 << "-" << s.y1 << " of " << frameFbw * 64u << "x" << frameHeight << ")"
                          << std::endl;
        }
        x = clipWordX;
        y = clipWordY;
    }

    // All eight rectangles the same (the clip is inclusive: a pixel is drawn
    // when it is inside any of them).
    uint32_t *pushWindowClip(uint32_t *p, uint32_t x, uint32_t y)
    {
        static_assert(NV097_SET_WINDOW_CLIP_VERTICAL == NV097_SET_WINDOW_CLIP_HORIZONTAL + 32u, "one method");
        p = pushMethod(p, NV097_SET_WINDOW_CLIP_HORIZONTAL, 16);
        for (int i = 0; i < 8; ++i)
            *p++ = x;
        for (int i = 0; i < 8; ++i)
            *p++ = y;
        gpuClipX = x;
        gpuClipY = y;
        return p;
    }
#endif
    static uint32_t blendFactor(uint32_t sel, bool alphaFromDest)
    {
        (void)sel;
        return alphaFromDest ? NV097_SET_BLEND_FUNC_SFACTOR_V_DST_ALPHA : NV097_SET_BLEND_FUNC_SFACTOR_V_SRC_ALPHA;
    }

    // GS blend: ((A - B) * C >> 7) + D, with A, B, D from {Cs, Cd, 0} and C
    // from {As, Ad, FIX}. The common forms map onto the fixed blend unit
    // (alphas already hold a/128 as 0..1).
    void blendState(const GSDrawState &state, DrawKey &k)
    {
        const uint64_t alpha = state.context.alpha;
        const uint32_t a = alpha & 3u, b = (alpha >> 2) & 3u, c = (alpha >> 4) & 3u, d = (alpha >> 6) & 3u;
        const uint32_t fix = uint32_t((alpha >> 32) & 0xFFu);
        k.blendEnable = 0;
        k.equation = NV097_SET_BLEND_EQUATION_V_FUNC_ADD;
        k.sfactor = NV097_SET_BLEND_FUNC_SFACTOR_V_ONE;
        k.dfactor = NV097_SET_BLEND_FUNC_DFACTOR_V_ZERO;
        if (!state.prim.abe)
            return;
        uint32_t factor, inverse;
        if (c == 2u)
        {
            factor = NV097_SET_BLEND_FUNC_SFACTOR_V_CONSTANT_ALPHA;
            inverse = NV097_SET_BLEND_FUNC_SFACTOR_V_ONE_MINUS_CONSTANT_ALPHA;
            k.blendColor = uint32_t(std::min<uint32_t>(fix * 2u, 255u)) << 24;
        }
        else
        {
            factor = c == 0u ? NV097_SET_BLEND_FUNC_SFACTOR_V_SRC_ALPHA : NV097_SET_BLEND_FUNC_SFACTOR_V_DST_ALPHA;
            inverse = c == 0u ? NV097_SET_BLEND_FUNC_SFACTOR_V_ONE_MINUS_SRC_ALPHA
                              : NV097_SET_BLEND_FUNC_SFACTOR_V_ONE_MINUS_DST_ALPHA;
        }
        constexpr uint32_t Cs = 0, Cd = 1, Zero = 2;
        k.blendEnable = 1;
        if (a == Cs && b == Cd && d == Cd) // Cs*C + Cd*(1-C)
        {
            k.sfactor = factor;
            k.dfactor = inverse;
        }
        else if (a == Cd && b == Cs && d == Cs) // Cd*C + Cs*(1-C)
        {
            k.sfactor = inverse;
            k.dfactor = factor;
        }
        else if (a == Cs && b == Zero && d == Cd) // Cs*C + Cd
        {
            k.sfactor = factor;
            k.dfactor = NV097_SET_BLEND_FUNC_DFACTOR_V_ONE;
        }
        else if (a == Zero && b == Cs && d == Cd) // Cd - Cs*C
        {
            k.sfactor = factor;
            k.dfactor = NV097_SET_BLEND_FUNC_DFACTOR_V_ONE;
            k.equation = NV097_SET_BLEND_EQUATION_V_FUNC_REVERSE_SUBTRACT;
        }
        else if (a == Cs && b == Zero && d == Zero) // Cs*C
        {
            k.sfactor = factor;
            k.dfactor = NV097_SET_BLEND_FUNC_DFACTOR_V_ZERO;
        }
        else if (a == Cd && b == Zero && d == Zero) // Cd*C
        {
            k.sfactor = NV097_SET_BLEND_FUNC_SFACTOR_V_ZERO;
            k.dfactor = factor;
        }
        else if (a == Cd && b == Zero && d == Cs) // Cs + Cd*C
        {
            k.sfactor = NV097_SET_BLEND_FUNC_SFACTOR_V_ONE;
            k.dfactor = factor;
        }
        else if (a == b || (a == Zero && b == Zero)) // D only
        {
            k.sfactor = d == Cs ? NV097_SET_BLEND_FUNC_SFACTOR_V_ONE : NV097_SET_BLEND_FUNC_SFACTOR_V_ZERO;
            k.dfactor = d == Cd ? NV097_SET_BLEND_FUNC_DFACTOR_V_ONE : NV097_SET_BLEND_FUNC_DFACTOR_V_ZERO;
        }
        else
        {
            k.blendEnable = 0; // unusual form: drawn opaque
        }
        (void)blendFactor;
    }

    DrawKey keyFor(const GSDrawState &state, const Texture *tex)
    {
#if TS_MEASURE_PUSHBC
        MeasureTimer measureKey(g_measure.keyForCycles, g_measure.keyFors);
#endif
        DrawKey k;
        k.texture = tex;
        k.program = tex ? pixelProgramFor(state, tex->unitAlpha) : 0;
        const uint64_t clamp = state.context.clamp;
        const uint32_t wrapU = (clamp & 3u) == 0u || (clamp & 3u) == 3u ? 1u : 3u; // repeat : clamp to edge
        const uint32_t wrapV = ((clamp >> 2) & 3u) == 0u || ((clamp >> 2) & 3u) == 3u ? 1u : 3u;
        k.address = wrapU | (wrapV << 8) | (3u << 16);
        // Linear : nearest (min/mag), level 0 only. Mipmapped (pack)
        // textures drawn linear also blend between levels (min 6,
        // TENT_TENT_LOD: trilinear), which is what stops the shimmer of
        // distant surfaces; HD replacements are always drawn so, as on the PC.
        const bool linear = state.linearFilter || (tex && tex->forceLinear);
        k.filter = linear ? 0x02022000u : 0x01012000u;
        k.levels = tex ? tex->levels : 0u;
        if (linear && k.levels > 1u)
            k.filter = 0x02062000u;
        blendState(state, k);
        const uint64_t test = state.context.test;
        if (test & 1u)
        {
            static const uint32_t kFuncs[8] = {
                NV097_SET_ALPHA_FUNC_V_NEVER, NV097_SET_ALPHA_FUNC_V_ALWAYS, NV097_SET_ALPHA_FUNC_V_LESS,
                NV097_SET_ALPHA_FUNC_V_LEQUAL, NV097_SET_ALPHA_FUNC_V_EQUAL, NV097_SET_ALPHA_FUNC_V_GEQUAL,
                NV097_SET_ALPHA_FUNC_V_GREATER, NV097_SET_ALPHA_FUNC_V_NOTEQUAL};
            k.alphaTest = 1;
            k.alphaFunc = kFuncs[(test >> 1) & 7u];
            k.alphaRef = std::min<uint32_t>(uint32_t((test >> 4) & 0xFFu) * 2u, 255u);
        }
        // ZTST applies whatever ZTE says, as in the software renderer (the
        // game leaves ZTE clear while relying on the comparison).
        const uint32_t ztst = uint32_t((test >> 17) & 3u);
        k.depthTest = 1u;
        static const uint32_t kDepth[4] = {NV097_SET_DEPTH_FUNC_V_NEVER, NV097_SET_DEPTH_FUNC_V_ALWAYS,
                                           NV097_SET_DEPTH_FUNC_V_GEQUAL, NV097_SET_DEPTH_FUNC_V_GREATER};
        k.depthFunc = kDepth[ztst];
        k.depthMask = state.context.zbuf.zmask ? 0u : 1u;
        const uint32_t fbmsk = state.context.frame.fbmsk;
        const bool sixteen = state.context.frame.psm == GS_PSM_CT16 || state.context.frame.psm == GS_PSM_CT16S;
        const uint32_t rMask = sixteen ? 0x1Fu : 0xFFu, gMask = sixteen ? 0x3E0u : 0xFF00u,
                       bMask = sixteen ? 0x7C00u : 0xFF0000u, aMask = sixteen ? 0x8000u : 0xFF000000u;
        k.colorMask = ((fbmsk & rMask) != rMask ? NV097_SET_COLOR_MASK_RED_WRITE_ENABLE : 0u) |
                      ((fbmsk & gMask) != gMask ? NV097_SET_COLOR_MASK_GREEN_WRITE_ENABLE : 0u) |
                      ((fbmsk & bMask) != bMask ? NV097_SET_COLOR_MASK_BLUE_WRITE_ENABLE : 0u) |
                      ((fbmsk & aMask) != aMask ? NV097_SET_COLOR_MASK_ALPHA_WRITE_ENABLE : 0u);
        k.shade = state.prim.iip ? NV097_SET_SHADE_MODEL_SMOOTH : NV097_SET_SHADE_MODEL_FLAT;
#if TS_NV2A_SCISSOR
        clipFor(state.context.scissor, k.clipX, k.clipY);
#endif
        return k;
    }

    // Pushes only the registers that differ from the applied state.
    // Appends to an open push-buffer block (one block per batch: each
    // pb_end hands the GPU a chunk, and that hand-over was a fifth of a
    // frame's CPU time when done per state change).
    uint32_t *applyState(uint32_t *p, const DrawKey &k)
    {
        const bool all = !stateValid;
        const DrawKey &o = applied;
        if (all || o.vertexMode != k.vertexMode)
        {
            p = setAttributes(p, k.vertexMode);
            p = push1(p, NV097_SET_TRANSFORM_PROGRAM_START, programStart[k.vertexMode]);
        }
        if (k.vertexMode && (all || o.constSerial != k.constSerial || !o.vertexMode))
            p = uploadConstants(p);
        if (k.program != currentProgram)
        {
            p = kPixelPrograms[k.program](p);
            // The untextured program leaves the texture stages as they were;
            // a stage still set to sample with no texture bound is invalid.
            if (k.program == 0)
                p = push1(p, NV097_SET_SHADER_STAGE_PROGRAM, 0);
            currentProgram = k.program;
        }
        if (k.texture)
        {
            const Texture &t = *k.texture;
            if (all || o.texture != k.texture)
            {
                p = push1(p, NV097_SET_TEXTURE_OFFSET, physical(t.texels));
                p = push1(p, NV097_SET_TEXTURE_FORMAT,
                             0x0000002Au | (t.format << 8) | (t.levels << 16) |
                                 (log2u(t.gpuWidth) << 20) | (log2u(t.gpuHeight) << 24));
            }
            // MAX_LOD_CLAMP (4.8 fixed point, bits 6..17) lets the sampler
            // reach the last level; one level leaves it 0, as before.
            if (all || !o.texture || o.levels != k.levels)
                p = push1(p, NV097_SET_TEXTURE_CONTROL0,
                             NV097_SET_TEXTURE_CONTROL0_ENABLE |
                                 (((k.levels - 1u) << 8 << 6) & NV097_SET_TEXTURE_CONTROL0_MAX_LOD_CLAMP));
            if (all || o.address != k.address || !o.texture)
                p = push1(p, NV097_SET_TEXTURE_ADDRESS, k.address);
            if (all || o.filter != k.filter || !o.texture)
                p = push1(p, NV097_SET_TEXTURE_FILTER, k.filter);
        }
        else if (all || o.texture)
            p = push1(p, NV097_SET_TEXTURE_CONTROL0, 0);
#define TS_SET(field, reg)     if (all || o.field != k.field)         p = push1(p, reg, k.field);
        TS_SET(blendEnable, NV097_SET_BLEND_ENABLE)
        TS_SET(sfactor, NV097_SET_BLEND_FUNC_SFACTOR)
        TS_SET(dfactor, NV097_SET_BLEND_FUNC_DFACTOR)
        TS_SET(equation, NV097_SET_BLEND_EQUATION)
        TS_SET(blendColor, NV097_SET_BLEND_COLOR)
        TS_SET(alphaTest, NV097_SET_ALPHA_TEST_ENABLE)
        if (all || o.alphaFunc != k.alphaFunc)
            p = push1(p, NV097_SET_ALPHA_FUNC, k.alphaFunc ? k.alphaFunc : NV097_SET_ALPHA_FUNC_V_ALWAYS);
        TS_SET(alphaRef, NV097_SET_ALPHA_REF)
        TS_SET(depthTest, NV097_SET_DEPTH_TEST_ENABLE)
        TS_SET(depthFunc, NV097_SET_DEPTH_FUNC)
        TS_SET(depthMask, NV097_SET_DEPTH_MASK)
        TS_SET(colorMask, NV097_SET_COLOR_MASK)
        TS_SET(shade, NV097_SET_SHADE_MODEL)
#undef TS_SET
#if TS_NV2A_SCISSOR
        // Against what the GPU holds, not `applied` (beginFrame also sets
        // it): the game's full-screen scissor never pushes it.
        if (k.clipX != gpuClipX || k.clipY != gpuClipY)
            p = pushWindowClip(p, k.clipX, k.clipY);
#endif
        applied = k;
        stateValid = true;
        return p;
    }
