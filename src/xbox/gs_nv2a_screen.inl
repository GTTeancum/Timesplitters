    // ---- gs_nv2a_screen.inl: the screen-vertex half (src/xbox/PUSH-BC-PLAN.md
    // W0-S; owned by C-EMIT): the screen vertex ring (reserve) and
    // submitScreenVerts, the GS front end's primitives on the GPU. Part of
    // struct GSNv2aBackend::Impl in gs_nv2a_backend.cpp (one translation
    // unit; included once, there).

    // The draw paths this half implements (GSNv2aBackend::DrawPaths):
    // kGSDrawPathSubmitPrimitives once Tier 0 lands (TS_NATIVE_EMIT_TIER0).
    static constexpr uint32_t kScreenDrawPaths = 0u;

    // Tier 0's decoded primitives of one PRIM in one call (GSRasterBackend::
    // SubmitPrimitives). Not implemented yet: false, and the front end kicks
    // them one by one as before.
    bool submitPrimitives(const GSDrawState &, uint32_t /*prim*/, const GSVertex *, uint32_t /*count*/) { return false; }

    // ------------------------------------------------------------ drawing
    GpuVertex *vertices = nullptr;
    uint32_t verticesUsed = 0;

    // Room for count more vertices in the current batch (waits for the GPU
    // to finish the frame's earlier vertices when the buffer is full).
    GpuVertex *reserve(const DrawKey &key, uint32_t count)
    {
        if (!sameRun(key))
            flushBatch();
        if (verticesUsed + count > kMaxVertices)
        {
            ++g_nv2aTextureStats.waitVb;
            waitIdle();
            verticesUsed = 0;
            batchFirst = 0;
        }
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

    // A primitive from the GS front end (count = its vertices) or a whole
    // triangle strip from the native vertex pipeline (SubmitStrip).
    void submitScreenVerts(const GSDrawState &state, const GSVertex *verts, uint32_t count)
    {
        if (frameOpen && state.context.frame.fbp != frameFbp)
            finishFrame();
        if (!frameOpen)
            beginFrame(state);
        else if (screenVramNewer)
            loadScreenFromVram();

        const Texture *tex = state.prim.tme ? texture(state) : nullptr;
        const DrawKey key = keyFor(state, tex);
        const auto &ctx = state.context;
        const float ofx = float(ctx.xyoffset.ofx >> 4), ofy = float(ctx.xyoffset.ofy >> 4);
        const float sx = float(kScreenWidth) / float(frameFbw * 64u);
        const float sy = float(kScreenHeight) / float(frameHeight);
        const uint32_t zpsm = ctx.zbuf.psm;
        const float texW = tex ? float(tex->width) : 1.0f, texH = tex ? float(tex->height) : 1.0f;
        g_nv2aTextureStats.zpsm = zpsm;
        g_nv2aTextureStats.test = uint32_t(ctx.test >> 16) & 0xFu;
        g_nv2aTextureStats.zmask = ctx.zbuf.zmask ? 1u : 0u;
        if (((ctx.test >> 17) & 3u) >= 2u) // depth-compared draws only
            for (uint32_t i = 0; i < count && i < 3u; ++i)
            {
                const uint32_t z = uint32_t(std::min(verts[i].z, 4294967295.0));
                if (g_nv2aTextureStats.zmax == 0u || z > g_nv2aTextureStats.zmax) g_nv2aTextureStats.zmax = z;
                if (g_nv2aTextureStats.zmin == 0u || z < g_nv2aTextureStats.zmin) g_nv2aTextureStats.zmin = z;
            }

        auto emit = [&](GpuVertex &o, const GSVertex &v, const GSVertex &colorSource, float x, float y) {
            o.x = (x - ofx) * sx;
            o.y = (y - ofy) * sy;
            // Only the displayed rows count: the game clears all 512 rows of
            // the frame region but keeps CLUTs below row 448 and uploads them
            // after the clear, so local memory is the newer copy there.
            const float row = y - ofy + 1.0f;
            const uint32_t limit = std::min<uint32_t>(frameHeight, kDisplayRows);
            if (row > float(gpuRows))
                gpuRows = row >= float(limit) ? limit : uint32_t(row);
            o.z = depth24(v.z, zpsm);
            o.w = 1.0f;
            o.color = d3dColor(colorSource.r, colorSource.g, colorSource.b, colorSource.a);
            if (state.prim.fst)
            {
                o.s = float(v.u) / 16.0f / texW;
                o.t = float(v.v) / 16.0f / texH;
                o.q = 1.0f;
            }
            else
            {
                o.s = v.s;
                o.t = v.t;
                o.q = v.q != 0.0f ? v.q : 1.0f;
            }
            o.r = 0.0f;
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
                GpuVertex *out = reserve(key, 3);
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
            GpuVertex *out = reserve(key, 3u * (n - 2u)); // one key check per strip
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
            GSVertex corners[4] = {a, a, a, a};
            corners[1].x = b.x; corners[1].u = b.u; corners[1].s = b.s;
            corners[2].x = b.x; corners[2].y = b.y; corners[2].u = b.u; corners[2].v = b.v; corners[2].s = b.s; corners[2].t = b.t;
            corners[3].y = b.y; corners[3].v = b.v; corners[3].t = b.t;
            for (GSVertex &c : corners)
            {
                c.z = b.z;
                c.q = b.q;
            }
            // Perspective-correct s/t use q per corner; sprites take the second's.
            corners[0].q = corners[1].q = corners[2].q = corners[3].q = b.q;
            static const int kOrder[6] = {0, 1, 2, 0, 2, 3};
            GpuVertex *out = reserve(key, 6);
            for (int i = 0; i < 6; ++i)
            {
                const GSVertex &c = corners[kOrder[i]];
                emit(out[i], c, b, c.x, c.y);
            }
            break;
        }
        default:
            return; // points and lines: not drawn on the GPU yet
        }
        screenGpuNewer = true;
    }
