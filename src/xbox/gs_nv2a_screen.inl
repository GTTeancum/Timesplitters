    // ---- gs_nv2a_screen.inl: the screen-vertex half (src/xbox/PUSH-BC-PLAN.md
    // W0-S; owned by C-EMIT): the screen vertex ring (reserve) and
    // submitScreenVerts, the GS front end's primitives on the GPU, and the
    // Tier 0 bulk path (submitPrimitives, section 3.2 item 1). Part of
    // struct GSNv2aBackend::Impl in gs_nv2a_backend.cpp (one translation
    // unit; included once, there). The vertex arithmetic is shared with the
    // host test through gs_nv2a_screen_math.h.

    // The draw paths this half implements (GSNv2aBackend::DrawPaths):
    // kGSDrawPathSubmitPrimitives with the bulk path (TS_NATIVE_EMIT_BULK).
    static constexpr uint32_t kScreenDrawPaths = TS_NATIVE_EMIT_BULK ? kGSDrawPathSubmitPrimitives : 0u;

    // ------------------------------------------------------------ drawing
    GpuVertex *vertices = nullptr;
    uint32_t verticesUsed = 0;

#if TS_NV2A_SCREEN_SEGMENTS
    // The screen vertex ring as two fenced segments (section 5.10): a
    // segment is closed by a fence (after the draws that use its vertices)
    // and handed to the GPU, and the ring continues in the other one,
    // waiting only until that one's fence has passed, instead of draining
    // the whole GPU when the ring is full (waitIdle). Both segments start
    // fresh with the frame (beginFrame).
    static constexpr uint32_t kScreenSegments = 2u, kScreenSegment = kMaxVertices / kScreenSegments;
    uint32_t screenSegment = 0, screenFence[kScreenSegments] = {};
    void resetScreenSegments()
    {
        screenSegment = 0u;
        for (uint32_t &f : screenFence)
            f = 0u;
    }
    void nextScreenSegment()
    {
        flushBatch(); // the segment's last draws, then its fence
        screenFence[screenSegment] = ++fenceSerial;
        cursor = pushFence(openCursor(), fenceSerial);
        closeBlock(); // hand the segment to the GPU now
        ++g_nv2aTextureStats.screenSegments;
        screenSegment = (screenSegment + 1u) % kScreenSegments;
        verticesUsed = screenSegment * kScreenSegment;
        batchFirst = verticesUsed;
        const uint32_t needed = screenFence[screenSegment];
        if (needed != 0u && int32_t(*fence - needed) < 0)
        {
            ++g_nv2aTextureStats.waitScreen;
            const uint64_t start = cycles();
            // An idle GPU has passed every fence (also covers a semaphore
            // that never arrives).
            while (int32_t(*fence - needed) < 0 && pb_busy())
            {
            }
            waitCycles += cycles() - start;
            g_nv2aTextureStats.kcycWait = uint32_t(waitCycles / 1000u);
        }
    }
#else
    void resetScreenSegments() {}
#endif

    // Room for count more vertices in the current batch (the next segment,
    // or - without segments - a wait for the GPU to finish the frame's
    // earlier vertices when the buffer is full).
    GpuVertex *reserve(const DrawKey &key, uint32_t count)
    {
        if (!sameRun(key))
            flushBatch();
#if TS_NV2A_SCREEN_SEGMENTS
        if (verticesUsed + count > (screenSegment + 1u) * kScreenSegment)
            nextScreenSegment();
#else
        if (verticesUsed + count > kMaxVertices)
        {
            ++g_nv2aTextureStats.waitVb;
            waitIdle();
            verticesUsed = 0;
            batchFirst = 0;
        }
#endif
        if (batchCount == 0)
        {
            batchKey = key;
            batchFirst = verticesUsed;
        }
        GpuVertex *out = vertices + verticesUsed;
        verticesUsed += count;
        batchCount += count;
        return out;
    }

    void submitScreen(const GSPrimitiveBatch &batch)
    {
        submitScreenVerts(batch.state, batch.vertices.data(), batch.vertexCount);
    }

    // The frame and texture handling every screen draw starts with, the
    // key and the mapping of its vertices (shared by the per-primitive and
    // the bulk path): false when the draw cannot go to the GPU.
    struct ScreenDraw
    {
        DrawKey key;
        gs_nv2a_screen::Mapping map;
        uint32_t rowLimit;
    };
    void openScreenDraw(const GSDrawState &state, const GSVertex *verts, uint32_t count, ScreenDraw &out)
    {
        if (frameOpen && state.context.frame.fbp != frameFbp)
            finishFrame();
        if (!frameOpen)
            beginFrame(state);
        else if (screenVramNewer)
            loadScreenFromVram();

        const Texture *tex = state.prim.tme ? texture(state) : nullptr;
        out.key = keyFor(state, tex);
        const auto &ctx = state.context;
        out.map.ofx = float(ctx.xyoffset.ofx >> 4);
        out.map.ofy = float(ctx.xyoffset.ofy >> 4);
        out.map.sx = float(kScreenWidth) / float(frameFbw * 64u);
        out.map.sy = float(kScreenHeight) / float(frameHeight);
        out.map.zpsm = ctx.zbuf.psm;
        out.map.texW = tex ? float(tex->width) : 1.0f;
        out.map.texH = tex ? float(tex->height) : 1.0f;
        out.map.fst = state.prim.fst;
        // Only the displayed rows count: the game clears all 512 rows of
        // the frame region but keeps CLUTs below row 448 and uploads them
        // after the clear, so local memory is the newer copy there.
        out.rowLimit = std::min<uint32_t>(frameHeight, kDisplayRows);
        g_nv2aTextureStats.zpsm = out.map.zpsm;
        g_nv2aTextureStats.test = uint32_t(ctx.test >> 16) & 0xFu;
        g_nv2aTextureStats.zmask = ctx.zbuf.zmask ? 1u : 0u;
        if (((ctx.test >> 17) & 3u) >= 2u) // depth-compared draws only
            for (uint32_t i = 0; i < count && i < 3u; ++i)
            {
                const uint32_t z = uint32_t(std::min(verts[i].z, 4294967295.0));
                if (g_nv2aTextureStats.zmax == 0u || z > g_nv2aTextureStats.zmax) g_nv2aTextureStats.zmax = z;
                if (g_nv2aTextureStats.zmin == 0u || z < g_nv2aTextureStats.zmin) g_nv2aTextureStats.zmin = z;
            }
    }
    // Rows the GPU has drawn this frame (gpuRows), from a vertex's y.
    void noteRow(float y, const ScreenDraw &d)
    {
        const float row = y - d.map.ofy + 1.0f;
        if (row > float(gpuRows))
            gpuRows = row >= float(d.rowLimit) ? d.rowLimit : uint32_t(row);
    }

    // A primitive from the GS front end (count = its vertices) or a whole
    // triangle strip from the native vertex pipeline (SubmitStrip).
    void submitScreenVerts(const GSDrawState &state, const GSVertex *verts, uint32_t count)
    {
        ScreenDraw d;
        openScreenDraw(state, verts, count, d);
        auto emit = [&](GpuVertex &o, const GSVertex &v, const GSVertex &colorSource, float x, float y) {
            gs_nv2a_screen::emit(reinterpret_cast<gs_nv2a_screen::Vertex &>(o), v, colorSource, x, y, d.map);
            noteRow(y, d);
        };

        switch (state.prim.type)
        {
        case GS_PRIM_TRIANGLE:
        case GS_PRIM_TRISTRIP:
        case GS_PRIM_TRIFAN:
        {
            if (count < 3)
                return;
            if (count == 3)
            {
                GpuVertex *out = reserve(d.key, 3);
                for (int i = 0; i < 3; ++i)
                {
                    const GSVertex &v = verts[i];
                    emit(out[i], v, state.prim.iip ? v : verts[2], v.x, v.y);
                }
                break;
            }
            // A whole strip: each vertex converted once, the triangles as a
            // list (flat shading takes each triangle's last vertex colour).
            GpuVertex strip[64];
            const uint32_t n = std::min<uint32_t>(count, 64u);
            for (uint32_t i = 0; i < n; ++i)
                emit(strip[i], verts[i], verts[i], verts[i].x, verts[i].y);
            GpuVertex *out = reserve(d.key, 3u * (n - 2u)); // one key check per strip
            for (uint32_t i = 2; i < n; ++i, out += 3)
            {
                out[0] = strip[i - 2];
                out[1] = strip[i - 1];
                out[2] = strip[i];
                if (!state.prim.iip)
                    out[0].color = out[1].color = strip[i].color;
            }
            break;
        }
        case GS_PRIM_SPRITE:
        {
            if (count < 2)
                return;
            const GSVertex &a = verts[0], &b = verts[1];
            // Two triangles; colour, depth and fog come from the second vertex.
            GSVertex corners[4];
            gs_nv2a_screen::spriteCorners(a, b, corners);
            GpuVertex *out = reserve(d.key, 6);
            for (int i = 0; i < 6; ++i)
            {
                const GSVertex &c = corners[gs_nv2a_screen::kSpriteOrder[i]];
                emit(out[i], c, b, c.x, c.y);
            }
            break;
        }
        default:
            return; // points and lines: not drawn on the GPU yet
        }
        screenGpuNewer = true;
    }

    // Tier 0's decoded primitives of one PRIM in one call (GSRasterBackend::
    // SubmitPrimitives, section 3.2 items 1-3): one texture lookup, one key
    // and one reserve for the run (in chunks when it is very long), the
    // same vertices the per-primitive path would have written. False, and
    // the front end kicks them one by one as before, when the run is not
    // for the screen, draws points or lines, reads a texture from the
    // screen being drawn (the per-primitive path writes the GPU's pixels
    // back before each such read; one lookup for the run could not), or
    // the front end's widescreen HUD narrowing may apply (one view with
    // widescreen on: the per-primitive path moves HUD primitives on
    // copies, which it cannot do here).
    bool submitPrimitives(const GSDrawState &state, uint32_t /*prim*/, const GSVertex *verts, uint32_t count)
    {
        // (Compiled whatever the switch says; off, the old path's answer.)
        if (!TS_NATIVE_EMIT_BULK)
            return false;
        const uint32_t gpuCount = gs_nv2a_screen::gpuVertexCount(state.prim.type, count);
        // The run in chunks the ring takes at once (a strip of 64 is one
        // chunk; only a very long run needs more; a fan longer than a chunk
        // is left to the per-primitive path).
        constexpr uint32_t kChunkGpu = 768u;
        if (gpuCount == 0u || !isScreenTarget(state) || (hostSettings().widescreen && !gsSplitScreen()) ||
            (state.prim.type == GS_PRIM_TRIFAN && gpuCount > kChunkGpu))
        {
            ++g_nv2aTextureStats.bulkDeclined;
            return false;
        }
        if (state.prim.tme)
        {
            const GSCpuBackend::VramRange source = GSCpuBackend::TextureRange(state);
            if ((frameOpen && overlaps(source, screenRange())) || overlaps(source, GSCpuBackend::FrameRange(state)) ||
                (screenGpuNewer && overlaps(source, gpuRange())))
            {
                ++g_nv2aTextureStats.bulkDeclined;
                return false;
            }
        }
        ScreenDraw d;
        openScreenDraw(state, verts, count, d);
        ++g_nv2aTextureStats.bulkCalls;
        g_nv2aTextureStats.bulkPrims += gpuCount / 3u;
        auto note = [&](const GSVertex &v) { noteRow(v.y, d); };
        if (TS_NV2A_SPRITE_QUADS && state.prim.type == GS_PRIM_SPRITE)
        {
            // Four vertices a sprite (TS_NV2A_SPRITE_QUADS), in chunks of
            // whole sprites.
            d.key.topology = 2u;
            for (uint32_t from = 0; from + 1u < count;)
            {
                const uint32_t n = std::min<uint32_t>((count - from) & ~1u, (kChunkGpu / 6u) * 2u);
                GpuVertex *out = reserve(d.key, (n / 2u) * 4u);
                gs_nv2a_screen::convertSpritesQuads(verts + from, n, d.map, reinterpret_cast<gs_nv2a_screen::Vertex *>(out),
                                                    note);
                from += n;
            }
            screenGpuNewer = true;
            return true;
        }
        for (uint32_t from = 0; from < count;)
        {
            uint32_t n = count - from, overlap = 0;
            if (gs_nv2a_screen::gpuVertexCount(state.prim.type, n) > kChunkGpu)
            {
                switch (state.prim.type)
                {
                case GS_PRIM_TRIANGLE: n = kChunkGpu; break;        // whole triangles
                case GS_PRIM_SPRITE: n = kChunkGpu / 3u; break;     // whole sprites
                default: n = kChunkGpu / 3u + 2u; overlap = 2u; break; // a strip: the next chunk repeats two
                }
            }
            const uint32_t gpu = gs_nv2a_screen::gpuVertexCount(state.prim.type, n);
            if (gpu == 0u)
                break;
            GpuVertex *out = reserve(d.key, gpu);
            gs_nv2a_screen::convertRun(state.prim.type, state.prim.iip, verts + from, n, d.map,
                                       reinterpret_cast<gs_nv2a_screen::Vertex *>(out), note);
            from += n - overlap;
        }
        screenGpuNewer = true;
        return true;
    }
