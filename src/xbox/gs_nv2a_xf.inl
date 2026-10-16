    // ---- gs_nv2a_xf.inl: the native transform half (src/xbox/PUSH-BC-PLAN.md
    // W0-S; owned by C-XF): the vertex programs and attributes, the transform
    // constants, the transform ring's segments (nextXfSegment, reserveXf) and
    // the xf runs (beginXfRun, the cursor, emitXfStrip, endXfRun). Part of
    // struct GSNv2aBackend::Impl in gs_nv2a_backend.cpp (one translation
    // unit; included once, there).

    // All vertex programs stay resident (78 of 136 slots); a mode switch is
    // one PROGRAM_START write. Loaded once, with the first frame's setup
    // (nothing else touches the GPU's program memory, the literals or the
    // semaphore context).
    uint32_t programStart[5] = {};
    bool programsLoaded = false;
    uint64_t waitCycles = 0, readbackCycles = 0;

    uint32_t *uploadVertexProgram(uint32_t *p)
    {
        p = push1(p, NV097_SET_TRANSFORM_EXECUTION_MODE,
                  NV097_SET_TRANSFORM_EXECUTION_MODE_MODE_PROGRAM |
                      (NV097_SET_TRANSFORM_EXECUTION_MODE_RANGE_MODE_PRIV << 2));
        p = push1(p, NV097_SET_TRANSFORM_PROGRAM_CXT_WRITE_EN, 0);
        p = push1(p, NV097_SET_TRANSFORM_PROGRAM_LOAD, 0);
        uint32_t slot = 0;
        for (int m = 0; m < 5; ++m)
        {
            programStart[m] = slot;
            const VertexProgram &vp = kVertexPrograms[m];
            for (uint32_t i = 0; i < vp.count; i += 4)
            {
                p = pushMethod(p, NV097_SET_TRANSFORM_PROGRAM, 4);
                std::memcpy(p, vp.words + i, 16);
                p += 4;
            }
            slot += vp.count / 4;
        }
        p = push1(p, NV097_SET_TRANSFORM_PROGRAM_START, 0);
        // Fences go through their own DMA object (pushFence).
        p = push1(p, NV097_SET_CONTEXT_DMA_SEMAPHORE, kFenceDma);
        // The compiler's literals (c[34] = 0, 1, 0.5).
        p = push1(p, NV097_SET_TRANSFORM_CONSTANT_LOAD, kConstantBase + 34u);
        p = pushMethod(p, NV097_SET_TRANSFORM_CONSTANT, 4);
        const float literals[4] = {0.0f, 1.0f, 0.5f, 0.0f};
        std::memcpy(p, literals, 16);
        p += 4;
        return p;
    }

    // Vertex array formats for a vertex mode (0: GpuVertex, else GSXfVertex).
    uint32_t *setAttributes(uint32_t *p, uint32_t mode)
    {
        p = pushMethod(p, NV097_SET_VERTEX_DATA_ARRAY_FORMAT, 16);
        for (int i = 0; i < 16; ++i)
            *p++ = NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F; // size 0: disabled
        struct Attribute
        {
            uint32_t index, type, components, offset;
        };
        static const Attribute screen[] = {
            {0, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F, 4, 0},
            {3, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_UB_D3D, 4, 16},
            {9, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F, 4, 20},
        };
        static const Attribute raw[] = {
            {0, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F, 3, 0},
            {2, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F, 3, 12},
            {3, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_UB_D3D, 4, 24},
            {9, NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F, 4, 28},
        };
        const Attribute *list = mode ? raw : screen;
        const int count = mode ? 4 : 3;
        const uint32_t stride = mode ? uint32_t(sizeof(GSXfVertex)) : uint32_t(sizeof(GpuVertex));
        const uint8_t *base = mode ? reinterpret_cast<const uint8_t *>(xfVertices) : reinterpret_cast<const uint8_t *>(vertices);
        for (int i = 0; i < count; ++i)
        {
            const Attribute &a = list[i];
            p = push1(p, NV097_SET_VERTEX_DATA_ARRAY_FORMAT + 4 * a.index, a.type | (a.components << 4) | (stride << 8));
            p = push1(p, NV097_SET_VERTEX_DATA_ARRAY_OFFSET + 4 * a.index, physical(base + a.offset));
        }
        return p;
    }

    void setAttributes()
    {
        uint32_t *p = pb_begin();
        p = setAttributes(p, 0);
        pb_end(p);
    }

    // ------------------------------------------- native transform (GPU)
    GSXfVertex *xfVertices = nullptr;
    uint32_t xfUsed = 0, xfSerial = 0;
    float xfK[kXfConstantRegs - 1][4] = {}; // k[0..33]; c[34] is loaded with the programs

    // What the GPU's constant registers hold: only rows that differ are sent
    // (an object changes its matrix rows; lights and viewport rarely change),
    // which keeps ~900 objects a frame from filling the push buffer.
#if TS_XF_DIRTY_ROWS
    // The rows of xfK given a new value since they were last sent (all at
    // first): the rows that differ from the GPU's, known without comparing.
    static constexpr uint64_t kAllXfRows = (1ull << (kXfConstantRegs - 1u)) - 1u;
    uint64_t gpuDirty = kAllXfRows;
#endif
#if !TS_XF_DIRTY_ROWS || TS_NV2A_SELFCHECK
    float gpuK[kXfConstantRegs - 1][4]; // (with TS_XF_DIRTY_ROWS: the self-check's copy)
    bool gpuKValid = false;
#endif

    uint32_t *uploadConstants(uint32_t *p)
    {
        constexpr uint32_t rows = kXfConstantRegs - 1u;
#if TS_XF_DIRTY_ROWS
        uint64_t dirty = gpuDirty;
        gpuDirty = 0u;
#if TS_NV2A_SELFCHECK
        // The rows left out must hold the GPU's values already.
        for (uint32_t r = 0; r < rows && gpuKValid; ++r)
            if (!((dirty >> r) & 1u) && std::memcmp(gpuK[r], xfK[r], 16) != 0)
            {
                noteDrawDiff("constant upload", r, xfSerial);
                dirty |= 1ull << r;
            }
#endif
        for (uint32_t r = 0; (dirty >> r) != 0u;)
        {
            if (!((dirty >> r) & 1u))
            {
                ++r;
                continue;
            }
            uint32_t end = r + 1u;
            while (end < rows && ((dirty >> end) & 1u) && end - r < 8u)
                ++end;
            p = push1(p, NV097_SET_TRANSFORM_CONSTANT_LOAD, kConstantBase + r);
            p = pushMethod(p, NV097_SET_TRANSFORM_CONSTANT, (end - r) * 4u);
            std::memcpy(p, xfK[r], (end - r) * 16u);
            p += (end - r) * 4u;
            s_lookupStats.constUploads += end - r;
#if TS_NV2A_SELFCHECK
            std::memcpy(gpuK[r], xfK[r], (end - r) * 16u);
#endif
            r = end;
        }
#if TS_NV2A_SELFCHECK
        gpuKValid = true;
#endif
        return p;
#else
        uint32_t r = 0;
        while (r < rows)
        {
            if (gpuKValid && std::memcmp(gpuK[r], xfK[r], 16) == 0)
            {
                ++r;
                continue;
            }
            uint32_t end = r + 1u;
            while (end < rows && (!gpuKValid || std::memcmp(gpuK[end], xfK[end], 16) != 0) && end - r < 8u)
                ++end;
            p = push1(p, NV097_SET_TRANSFORM_CONSTANT_LOAD, kConstantBase + r);
            p = pushMethod(p, NV097_SET_TRANSFORM_CONSTANT, (end - r) * 4u);
            std::memcpy(p, xfK[r], (end - r) * 16u);
            p += (end - r) * 4u;
            std::memcpy(gpuK[r], xfK[r], (end - r) * 16u);
            r = end;
        }
        gpuKValid = true;
        return p;
#endif
    }

    // The transform buffer is a ring of segments, each closed by a fence:
    // the GPU writes the fence value (back-end semaphore, after the draws
    // before it have rendered) and a segment is reused once its fence has
    // passed, instead of draining the whole GPU when the buffer wraps.
    // Segments of 4,096 vertices: each one closed is a hand-over to the GPU
    // (nextXfSegment), so larger segments mean fewer of them. Two of them
    // (the other gives the GPU 4,096 vertices of lead) keep the ring at
    // 352 KB, leaving memory for triple buffering and the texture pack.
    static constexpr uint32_t kXfSegments = 2u, kXfSegment = kMaxXfVertices / kXfSegments;
    static_assert(kXfSegment == 4096u, "transform ring layout");
    void nextXfSegment()
    {
        flushBatch(); // the segment's last draws, then its fence
        segmentFence[xfSegment] = ++fenceSerial;
        cursor = pushFence(openCursor(), fenceSerial);
        // Hand the segment to the GPU now: held back until the block fills,
        // the GPU starts late and the ring catches up with it (measured:
        // about 4 ms a frame of transform-buffer waits).
        closeBlock();
        xfSegment = (xfSegment + 1u) % kXfSegments;
        xfUsed = xfSegment * kXfSegment;
        const uint32_t needed = segmentFence[xfSegment];
        if (needed != 0u && int32_t(*fence - needed) < 0)
        {
            ++g_nv2aTextureStats.waitXf;
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

    // Room for count more transformed vertices in the batch of `key`, which
    // the caller has already compared with batchKey (beginXfRun: once a run).
    GSXfVertex *reserveXf(const DrawKey &key, uint32_t count)
    {
        if (xfUsed + count > (xfSegment + 1u) * kXfSegment)
            nextXfSegment();
        if (batchCount == 0)
        {
            batchKey = key;
            batchFirst = xfUsed;
        }
        GSXfVertex *out = xfVertices + xfUsed;
        xfUsed += count;
        batchCount += count;
        return out;
    }
    // The transform constants k[0..33]: the native pipeline's rows as they
    // are, its viewport mapped onto this 640x480 screen and depth format,
    // and fixed values (clamp, depth range).
    struct XfMapping
    {
        float sx, sy, dz, ofx, ofy;
    };
    static void buildXfConstants(const GSXfConstants &c, const XfMapping &m, float k[kXfConstantRegs - 1][4])
    {
        std::memcpy(k[0], c.mvp, sizeof(c.mvp));
        std::memcpy(k[12], c.lightDir, sizeof(c.lightDir));
        std::memcpy(k[24], c.lightColour, sizeof(c.lightColour));
        const float scale[4] = {c.scale[0] * m.sx, c.scale[1] * m.sy, c.scale[2] * m.dz, 0.0f};
        const float offset[4] = {(c.offset[0] - m.ofx) * m.sx, (c.offset[1] - m.ofy) * m.sy, c.offset[2] * m.dz, 0.0f};
        std::memcpy(k[28], scale, 16);
        std::memcpy(k[29], offset, 16);
        std::memcpy(k[30], c.model, sizeof(c.model));
        const float clampLit[4] = {127.0f / 255.0f, 0.0f, 0.5f, 16777215.0f}; // .w: depth range
        std::memcpy(k[33], clampLit, 16);
    }
#if TS_XF_DIRTY_ROWS
    // Row r of the same (GSXfConstants is 33 rows of four floats, which are
    // k's rows 0-32: nv2aXfConstantsChanged counts them so).
    static_assert(offsetof(GSXfConstants, lightDir) == 12u * 16u && offsetof(GSXfConstants, lightColour) == 24u * 16u &&
                      offsetof(GSXfConstants, scale) == 28u * 16u && offsetof(GSXfConstants, offset) == 29u * 16u &&
                      offsetof(GSXfConstants, model) == 30u * 16u && offsetof(GSXfConstants, variant) == 33u * 16u,
                  "GSXfConstants rows");
    static void xfRow(const GSXfConstants &c, const XfMapping &m, uint32_t r, float row[4])
    {
        switch (r)
        {
        case 28u:
            row[0] = c.scale[0] * m.sx;
            row[1] = c.scale[1] * m.sy;
            row[2] = c.scale[2] * m.dz;
            row[3] = 0.0f;
            break;
        case 29u:
            row[0] = (c.offset[0] - m.ofx) * m.sx;
            row[1] = (c.offset[1] - m.ofy) * m.sy;
            row[2] = c.offset[2] * m.dz;
            row[3] = 0.0f;
            break;
        case 33u:
            row[0] = 127.0f / 255.0f;
            row[1] = 0.0f;
            row[2] = 0.5f;
            row[3] = 16777215.0f;
            break;
        default:
            std::memcpy(row, reinterpret_cast<const uint8_t *>(&c) + r * 16u, 16);
            break;
        }
    }
#endif

    // A run of strips of raw vertices for the transform programs: the frame
    // and texture handling of submitScreenVerts, then the constants (with
    // this frame's 640x480 mapping and depth format folded in). The strips
    // follow (the run's cursor / emitXfStrip), written into the transform ring
    // by the caller or laid out from its array: one joined strip (gouraud),
    // or a triangle list with each triangle's last vertex first (the GS
    // flat-shades with the last vertex, the NV2A with the first). The caller
    // sends no strip of fewer than three vertices.
    bool beginXfRun(const GSDrawState &state, const GSXfConstants &c, GSXfCursor &cursor)
    {
#if TS_MEASURE_PUSHBC
        MeasureTimer measureXf(g_measure.implBeginXfCycles, g_measure.implBeginXf); // texture() and keyFor included
#endif
        if (state.prim.type != GS_PRIM_TRISTRIP || state.prim.fst || c.variant > 3u || !isScreenTarget(state))
            return false;
        if (frameOpen && state.context.frame.fbp != frameFbp)
            finishFrame();
        if (!frameOpen)
            beginFrame(state);
        else if (screenVramNewer)
            loadScreenFromVram();

        checkRun = c.check != 0u;
        const Texture *tex = state.prim.tme ? texture(state) : nullptr;
        checkRun = false;
        DrawKey key = keyFor(state, tex);
        key.vertexMode = 1u + c.variant;
        key.topology = state.prim.iip ? 1u : 0u; // flat shading needs the list's vertex order
#if TS_NV2A_SCISSOR
        if (c.check)
        {
            // Self-check run: the kept window clip against the run's scissor
            // mapped afresh.
            uint32_t x, y;
            const GSScissorReg &s = state.context.scissor;
            gs_nv2a_clip::windowClip(s.x0, s.x1, s.y0, s.y1, frameFbw * 64u, frameHeight, x, y);
            if (x != key.clipX || y != key.clipY)
            {
                noteDrawDiff("window clip", (uint64_t(key.clipY) << 32) | key.clipX, (uint64_t(y) << 32) | x);
                key.clipX = x;
                key.clipY = y;
            }
        }
#endif

        const auto &ctx = state.context;
        // Constants stay while the native pipeline's do (c.serial: it moves
        // only when their VU1 rows were written) and this frame's mapping
        // does: rebuilt only when either changes.
        const bool mapped = frameFbw == xfBuiltFbw && frameHeight == xfBuiltHeight && ctx.xyoffset.ofx == xfBuiltOfx &&
                            ctx.xyoffset.ofy == xfBuiltOfy && ctx.zbuf.psm == xfBuiltZpsm;
        const bool built = c.serial != 0u && c.serial == xfBuiltSerial && mapped;
        if (!built || c.check)
        {
#if TS_XF_DIRTY_ROWS
            // Only the rows the pipeline named (nv2aXfConstantsChanged) when c
            // is the serial after the one built last, under the same mapping
            // (the other rows hold what they held); else every row. Each is
            // compared with the row it replaces: rows written again with the
            // same values (the viewport, the lights) change nothing.
            const uint32_t next = xfBuiltSerial + 1u ? xfBuiltSerial + 1u : 1u;
            uint64_t rows = kAllXfRows;
            if (built)
                rows = 0u; // a check run: the full rebuild below
            else if (mapped && xfBuiltSerial != 0u && c.serial == next && c.serial == s_xfChangedSerial)
                rows = s_xfChangedRows & kAllXfRows;
#endif
            xfBuiltSerial = c.serial;
            xfBuiltFbw = frameFbw;
            xfBuiltHeight = frameHeight;
            xfBuiltOfx = ctx.xyoffset.ofx;
            xfBuiltOfy = ctx.xyoffset.ofy;
            xfBuiltZpsm = ctx.zbuf.psm;
            const XfMapping map{float(kScreenWidth) / float(frameFbw * 64u), float(kScreenHeight) / float(frameHeight),
                                depthScale(ctx.zbuf.psm), float(ctx.xyoffset.ofx >> 4), float(ctx.xyoffset.ofy >> 4)};
#if TS_XF_DIRTY_ROWS
            bool changed = false;
            for (uint32_t r = 0; (rows >> r) != 0u; ++r)
            {
                if (!((rows >> r) & 1u))
                    continue;
                float row[4];
                xfRow(c, map, r, row);
                if (std::memcmp(row, xfK[r], 16) == 0)
                    continue;
                if (!changed && batchCount)
                    flushBatch(); // the batch so far uses the old constants
                changed = true;
                std::memcpy(xfK[r], row, 16);
                gpuDirty |= 1ull << r;
                ++s_lookupStats.constRows;
            }
            if (changed)
                ++xfSerial;
            if (c.check)
#endif
            {
                float k[kXfConstantRegs - 1][4];
                buildXfConstants(c, map, k);
                if (std::memcmp(k, xfK, sizeof(k)) != 0)
                {
                    if (built || TS_XF_DIRTY_ROWS) // a check run: the rebuild the serial skipped (or the rows rebuilt) left them out
                        noteDrawDiff("constants", c.serial, xfSerial);
                    if (batchCount)
                        flushBatch(); // the batch so far uses the old constants
#if TS_XF_DIRTY_ROWS
                    for (uint32_t r = 0; r < kXfConstantRegs - 1u; ++r)
                        if (std::memcmp(k[r], xfK[r], 16) != 0)
                            gpuDirty |= 1ull << r;
#endif
                    std::memcpy(xfK, k, sizeof(k));
                    ++xfSerial;
                }
            }
        }
        key.constSerial = xfSerial;
        // The run's strips share the key: one comparison for all of them
        // (a batch open after it has this key; a segment change starts a
        // new batch of it).
        if (!sameRun(key))
            flushBatch();
        runKey = key;
        cursor.direct = key.topology == 1u;
        cursor.strips = cursor.vertices = 0u;
        if (cursor.direct)
            openXfCursor(cursor);
        else
            cursor.next = cursor.end = nullptr;
        return true;
    }

    // The joined strips of a direct run are written by the caller (cursor):
    // the ring from xfUsed to the segment's end is the open batch's, and
    // what the caller wrote is taken into the batch when the cursor comes
    // back (growXfCursor, endXfRun). No call per strip, one key comparison
    // per run (beginXfRun), the segment check once per cursor.
    void openXfCursor(GSXfCursor &cursor)
    {
        if (batchCount == 0)
        {
            batchKey = runKey;
            batchFirst = xfUsed;
        }
        cursor.next = xfVertices + xfUsed;
        cursor.end = xfVertices + (xfSegment + 1u) * kXfSegment;
        cursor.join = batchCount != 0u;
        if (cursor.join)
            cursor.last = stripLast;
    }
    void takeXfCursor(GSXfCursor &cursor)
    {
        const uint32_t written = uint32_t(cursor.next - (xfVertices + xfUsed));
        xfUsed += written;
        batchCount += written;
        if (written)
            stripLast = cursor.last;
        g_nv2aTextureStats.xfStrips += cursor.strips;
        g_nv2aTextureStats.xfVertices += cursor.vertices;
        cursor.strips = cursor.vertices = 0u;
    }
    // The next strip (count records with its join) does not fit in the
    // segment: the segment's draws and fence go, and the cursor continues
    // in the next one (a fresh batch: its first strip needs no join).
    void growXfCursor(GSXfCursor &cursor, uint32_t count)
    {
        takeXfCursor(cursor);
        if (xfUsed + count > (xfSegment + 1u) * kXfSegment)
            nextXfSegment();
        openXfCursor(cursor);
    }

    uint32_t xfBuiltSerial = 0, xfBuiltFbw = 0, xfBuiltHeight = 0, xfBuiltOfx = 0, xfBuiltOfy = 0, xfBuiltZpsm = 0;

    DrawKey runKey{};       // the open run's (beginXfRun)
    GSXfVertex stripLast{}; // last vertex of the current strip batch (joins): a cached copy, the ring is write-combined

    // A strip of a run that is not direct (flat shading: a triangle list).
    void emitXfStrip(const GSXfVertex *v, uint32_t n)
    {
        ++g_nv2aTextureStats.xfStrips;
        g_nv2aTextureStats.xfVertices += n;
        // Each triangle's last vertex first: the GS flat-shades with the
        // last vertex, the NV2A with the first.
        GSXfVertex *out = reserveXf(runKey, 3u * (n - 2u));
        for (uint32_t i = 2; i < n; ++i, out += 3)
        {
            out[0] = v[i];
            out[1] = v[i - 2];
            out[2] = v[i - 1];
        }
    }

    void endXfRun(GSXfCursor &cursor)
    {
        if (cursor.direct)
            takeXfCursor(cursor);
        gpuRows = std::min<uint32_t>(frameHeight, kDisplayRows); // where it lands is not known here
        screenGpuNewer = true;
    }

    // The draw paths this half implements (GSNv2aBackend::DrawPaths):
    // kGSDrawPathXfInPlace once M8 lands (TS_NATIVE_INPLACE).
    static constexpr uint32_t kXfDrawPaths = 0u;

    // In-place fetch of a run's prepared strips (GSRasterBackend::XfInPlace,
    // M8). Not implemented yet: nothing, and cursor.inPlaceTaken stays 0, so
    // the caller writes the records into the ring as before.
    void xfInPlace(GSXfCursor &, const GSXfInPlaceStrip *, uint32_t /*count*/) {}
