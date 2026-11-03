// Xbox fast mixer (TS_SOUND_HW=1, on top of TS_SOUND_NATIVE=1): included at
// the end of xbox_sound_native.inl, whose block-decode cache it keeps and
// whose mix it replaces. The switch is named for the hardware route that was
// evaluated first; it is a software mixer.
//
// Why not the MCPX APU's voice processor: nxdk has no APU driver. The one
// open driver (Ryzee119/nxdk-audio) needs a DSP56300 program for the global
// processor and takes the AC97 output over, so the music stream and the
// current feeder would move onto APU voices too; on xemu its output only
// reaches the AC97 with the DSP emulation turned on (audio.use_dsp), which
// is not the default and costs host time, and it needed local fixes to run
// at all (OpenRedFaction's notes). The voices also do not match the SPU2:
// linear DAHDSR envelopes against the SPU2's exponential rate steps, its own
// resampler against the Gaussian, PCM from memory against ADPCM blocks whose
// flags pick the loop points as they play, and nothing to read the END
// flags, NAX or the IRQ address back from. The CPU would still have to run
// a position and envelope model per voice, which is most of what is left
// here. Not testable without the console; saving at most about 1% more.
//
// What this mixer keeps exact: every register the model reads back (ENVX,
// the current voice and master volumes, NAX, LSA, END flags, IRQs) and every
// voice's position, loop and pitch behaviour, tick for tick, so the sound
// driver sees what the shared model would show it. What it gives up: the
// output samples are no longer bit-identical. Each voice is mixed in spans
// of 32 to 256 output frames with one gain per channel (envelope level x
// voice volume) ramped linearly from the span's start to its end, and the
// Gaussian taps are summed before one shift. A span ends at every phase
// change of the envelope and at the voice's end, so attack, decay and
// release keep their corners; a span whose gain would move more than 1/32
// of full scale is halved (down to one frame), so fast exponential curves
// are followed closely; a sweep's first tick (its jump) is a frame of its
// own. Inside a span the envelope runs exactly (its level only, step by step
// or in closed form), and only the gain the samples are scaled with is the
// straight line between the exact end points. A span whose gains all stay
// below 4 (at most 3 of 32,767 per sample) only advances the voice.
// src/xbox/test/test_sound_hw.py checks the read-back exactly and the output
// against the shared model by signal-to-error ratio (about 65 dB on random
// scripts, 61-67 dB and at most 39 off on a match-like load).
//
// Per output frame and playing voice the work is the Gaussian (4 multiplies),
// two gain multiplies and the pitch step; the envelope costs per step, not
// per frame, and nothing else runs per frame. No reverb: the game keeps its
// return volume at 0 (runtime/ps2_spu2.h).

namespace
{
    // Frames a voice is mixed with one gain ramp: from kSpanMin, doubled
    // while the gain stays flat, back to kSpanMin when it moves.
    constexpr unsigned kSpanMin = 32;
    constexpr unsigned kSpanMax = 256;
    // The most a span's gain may move (1/32 of full scale); a span that
    // would move it more is halved until it does not, down to one frame.
    constexpr int32_t kSpanMaxGainChange = 0x400;

    // The counter of an envelope whose level cannot move (saturated) after
    // `ticks` more ticks: it still steps (and resets to 0) every period.
    inline uint32_t hwCounterAfter(uint32_t counter, uint32_t increment, unsigned ticks)
    {
        const unsigned quiet = quietTicks(counter, increment);
        if (ticks <= quiet)
            return counter + ticks * increment;
        const unsigned period = quietTicks(0u, increment) + 1u;
        return ((ticks - quiet - 1u) % period) * increment;
    }

    // Runs up to `ticks` ticks of an envelope at one rate and direction, as
    // that many calls of Spu2::Envelope::tick would. With a limit (the level
    // its phase ends at: reached at or below it when decreasing, at or above
    // it when increasing), it stops right after the tick that reaches it and
    // sets `reached`. Returns the ticks run. The caller has checked that the
    // limit is not met already.
    template <class Env>
    unsigned hwRunEnvelope(Env &e, uint32_t rate, bool decreasing, bool exponential, unsigned ticks, bool hasLimit,
                           int32_t limit, bool &reached)
    {
        reached = false;
        rate &= 0x7Fu;
        unsigned done = 0;
        while (done < ticks)
        {
            const bool high = !decreasing && exponential && e.level >= 0x6000;
            const EnvelopeRate &r = kEnvelopeRates.rates[decreasing ? kDecrease : high ? kExponentialHigh : kIncrease][rate];
            const uint32_t increment = r.increment;
            const unsigned left = ticks - done;
            if (increment == 0u)
                return ticks; // never steps: the counter stays
            if (decreasing ? e.level == 0 : e.level == 0x7FFF)
            {
                // Saturated: the steps no longer move the level.
                e.counter = hwCounterAfter(e.counter, increment, left);
                return ticks;
            }
            const unsigned quiet = quietTicks(e.counter, increment);
            if (left <= quiet)
            {
                e.counter += left * increment;
                return ticks;
            }
            if (decreasing && exponential)
            {
                // The step scales with the level: one step at a time.
                done += quiet + 1u;
                e.counter = 0;
                e.level = std::max(e.level + ((r.step * e.level) >> 15), 0);
            }
            else
            {
                // Equal steps until the level reaches its bound, the limit,
                // or (exponential increase) 0x6000, where the rate changes.
                const int32_t step = r.step;
                int32_t target;
                if (decreasing)
                    target = hasLimit ? std::max(limit, 0) : 0;
                else
                {
                    target = exponential && !high ? 0x6000 : 0x7FFF;
                    if (hasLimit && limit < target)
                        target = limit;
                }
                const int32_t distance = decreasing ? e.level - target : target - e.level;
                const int32_t magnitude = step < 0 ? -step : step;
                const unsigned need = distance > 0 ? static_cast<unsigned>((distance + magnitude - 1) / magnitude) : 1u;
                const unsigned period = quietTicks(0u, increment) + 1u;
                const unsigned available = 1u + (left - quiet - 1u) / period;
                const unsigned steps = std::min(need, available);
                e.level = std::clamp(e.level + step * static_cast<int32_t>(steps), 0, 0x7FFF);
                const unsigned used = quiet + 1u + (steps - 1u) * period;
                done += used;
                if (steps < need)
                {
                    // Out of ticks before the target: the ones after the
                    // last step only count.
                    e.counter = (left - used) * increment;
                    return ticks;
                }
                e.counter = 0;
            }
            if (hasLimit && (decreasing ? e.level <= limit : e.level >= limit))
            {
                reached = true;
                return done;
            }
        }
        return done;
    }

    // `ticks` calls of Spu2::Volume::tick.
    template <class Vol>
    void hwRunSweep(Vol &volume, unsigned ticks)
    {
        if ((volume.reg & 0x8000u) == 0u || ticks == 0u)
            return;
        bool reached = false;
        hwRunEnvelope(volume.sweep, volume.reg & 0x7Fu, (volume.reg & 0x2000u) != 0u, (volume.reg & 0x4000u) != 0u, ticks,
                      false, 0, reached);
        volume.current = (volume.reg & 0x1000u) ? -volume.sweep.level : volume.sweep.level;
    }

    // Whether the volume's next tick replaces its current value by the
    // sweep's (a sweep set since the last tick).
    template <class Vol>
    bool hwSweepJumps(const Vol &volume)
    {
        return (volume.reg & 0x8000u) != 0u &&
               volume.current != ((volume.reg & 0x1000u) ? -volume.sweep.level : volume.sweep.level);
    }

    // The voice's gain on one side: envelope level x volume, as one factor.
    inline int32_t hwGain(int32_t level, int32_t volume) { return (level * volume) >> 15; }

    // A gain below this adds at most 3 to a sample (of 32,767, -80 dB): a
    // span whose gains all stay below it only advances the voice.
    constexpr int32_t kInaudibleGain = 4;

    // Plays `run` ticks inside one block: Gaussian, gain, pitch step. Gains
    // are in 14 fractional bits; Ramp adds the deltas every tick, Same mixes
    // a voice whose two gains are equal with one multiply.
    template <bool Ramp, bool Same>
    inline void hwPlay(const int16_t *samples, unsigned &position, uint32_t &counter, uint32_t step, int32_t *pl,
                       int32_t *pr, unsigned run, int32_t &gainL, int32_t &gainR, int32_t deltaL, int32_t deltaR)
    {
        unsigned p = position;
        uint32_t c = counter;
        int32_t aL = gainL, aR = gainR;
        const int32_t fixedL = aL >> 14, fixedR = aR >> 14;
        for (unsigned t = 0; t < run; ++t)
        {
            // The taps sum to under 0x8000: the four products fit 31 bits
            // together.
            const GaussTaps &g = kGaussTaps.phase[(c >> 4) & 0xFFu];
            const int16_t *s = samples + p;
            const int32_t sample = (g.t[0] * s[0] + g.t[1] * s[1] + g.t[2] * s[2] + g.t[3] * s[3]) >> 15;
            int32_t gl = fixedL, gr = fixedR;
            if constexpr (Ramp)
            {
                aL += deltaL;
                gl = aL >> 14;
                if constexpr (!Same)
                {
                    aR += deltaR;
                    gr = aR >> 14;
                }
            }
            if constexpr (Same)
            {
                const int32_t o = (sample * gl) >> 15;
                pl[t] += o;
                pr[t] += o;
            }
            else
            {
                pl[t] += (sample * gl) >> 15;
                pr[t] += (sample * gr) >> 15;
            }
            c += step;
            p += c >> 12;
            c &= 0xFFFu;
        }
        position = p;
        counter = c;
        gainL = aL;
        gainR = Same ? aL : aR;
    }
}

void Spu2::mix(int16_t *out, unsigned frames)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    constexpr unsigned kChunk = 256;
    int32_t dry[2][2][kChunk];
    unsigned long long voiceSamples = 0;

    // Runs the voice's envelope for up to `ticks` ticks within its current
    // phase; returns the ticks run, fewer when the phase changes (the tick
    // that changes it included). Never 0 for a playing voice.
    auto runAdsr = [](Voice &v, unsigned ticks) -> unsigned
    {
        uint32_t rate = 0;
        bool decreasing = false, exponential = false, hasLimit = true;
        int32_t limit = 0;
        Phase next = Phase::Off;
        switch (v.phase)
        {
        case Phase::Attack:
            rate = (v.adsr1 >> 8) & 0x7Fu;
            exponential = (v.adsr1 & 0x8000u) != 0u;
            limit = 0x7FFF;
            next = Phase::Decay;
            break;
        case Phase::Decay:
            rate = ((v.adsr1 >> 4) & 0x0Fu) << 2;
            decreasing = exponential = true;
            limit = std::min<int32_t>(((v.adsr1 & 0x0Fu) + 1) * 0x800, 0x7FFF);
            next = Phase::Sustain;
            break;
        case Phase::Sustain:
            rate = (v.adsr2 >> 6) & 0x7Fu;
            decreasing = (v.adsr2 & 0x4000u) != 0u;
            exponential = (v.adsr2 & 0x8000u) != 0u;
            hasLimit = false;
            next = Phase::Sustain;
            break;
        case Phase::Release:
            rate = (v.adsr2 & 0x1Fu) << 2;
            decreasing = true;
            exponential = (v.adsr2 & 0x20u) != 0u;
            limit = 0;
            next = Phase::Off;
            break;
        default:
            return 0;
        }
        if (hasLimit && (decreasing ? v.env.level <= limit : v.env.level >= limit))
        {
            // The end condition holds already: the next tick ends the phase.
            v.env.tick(rate, decreasing, exponential);
            v.phase = next;
            return 1;
        }
        bool reached = false;
        const unsigned done = hwRunEnvelope(v.env, rate, decreasing, exponential, ticks, hasLimit, limit, reached);
        if (reached)
            v.phase = next;
        return done;
    };

    // Plays `ticks` ticks of the voice into l/r with the gains ramped from
    // g0 to g1 (the gain of tick t is g0 + (g1 - g0) * t / ticks), crossing
    // blocks as tickVoice does. Returns the ticks played: fewer when the
    // voice reached an end block without a loop (the tick that did included).
    auto render = [this](Core &core, unsigned index, Voice &v, int32_t *l, int32_t *r, unsigned ticks, int32_t g0L,
                         int32_t g1L, int32_t g0R, int32_t g1R) -> unsigned
    {
        const uint32_t step = std::min<uint32_t>(v.pitch, 0x3FFFu);
        const int32_t loudest = std::max(std::max(std::abs(g0L), std::abs(g1L)), std::max(std::abs(g0R), std::abs(g1R)));
        const bool silent = loudest < kInaudibleGain;
        // Gains in 14 fractional bits: (g1 - g0) is at most 0xFFFF.
        int32_t gainL = g0L * 16384, gainR = g0R * 16384;
        const int32_t deltaL = (g1L - g0L) * 16384 / static_cast<int32_t>(ticks);
        const int32_t deltaR = (g1R - g0R) * 16384 / static_cast<int32_t>(ticks);
        const bool ramp = (deltaL | deltaR) != 0;
        const bool same = g0L == g0R && deltaL == deltaR;
        unsigned done = 0;
        while (done < ticks)
        {
            const unsigned toEnd = ticksToBlockEnd(v.index, v.counter, step);
            const unsigned run = std::min(ticks - done, toEnd);
            if (silent)
            {
                // The position after `run` ticks is the counter's total.
                const uint32_t total = v.counter + run * step;
                v.index += total >> 12;
                v.counter = total & 0xFFFu;
            }
            else
            {
                const int16_t *samples = v.samples.data();
                int32_t *pl = l + done, *pr = r + done;
                if (ramp)
                {
                    if (same)
                        hwPlay<true, true>(samples, v.index, v.counter, step, pl, pr, run, gainL, gainR, deltaL, deltaR);
                    else
                        hwPlay<true, false>(samples, v.index, v.counter, step, pl, pr, run, gainL, gainR, deltaL, deltaR);
                }
                else if (same)
                    hwPlay<false, true>(samples, v.index, v.counter, step, pl, pr, run, gainL, gainR, deltaL, deltaR);
                else
                    hwPlay<false, false>(samples, v.index, v.counter, step, pl, pr, run, gainL, gainR, deltaL, deltaR);
            }
            done += run;
            if (run == toEnd)
            {
                // An end block without loop stops the voice (nextBlock turns
                // it off). Read from the flags: the envelope may have turned
                // the phase off for the span's last tick already.
                const bool stops = (v.blockFlags & 3u) == 1u;
                nextBlock(core, index, v);
                if (stops)
                    return done;
            }
        }
        return done;
    };

    struct Saved
    {
        Envelope env;
        Volume volL, volR;
        Phase phase;
    };

    // Plays voice `index` for frames [0, n) or until it stops, adding its
    // output to dryL/dryR; returns the frames it played.
    auto runVoice = [&](Core &core, unsigned index, Voice &v, int32_t *dryL, int32_t *dryR, unsigned n) -> unsigned
    {
        const uint32_t bit = 1u << index;
        const bool mixL = (core.vmixL & bit) != 0u, mixR = (core.vmixR & bit) != 0u;
        int32_t g0L = mixL ? hwGain(v.env.level, v.volL.current) : 0;
        int32_t g0R = mixR ? hwGain(v.env.level, v.volR.current) : 0;
        unsigned f = 0, span = kSpanMin;
        while (f < n)
        {
            const Saved saved{v.env, v.volL, v.volR, v.phase};
            // A volume just switched to a sweep jumps to the sweep's level
            // and sign on its first tick (Volume::tick): that tick is a span
            // of its own, so the jump is not ramped.
            const bool jump = hwSweepJumps(v.volL) || hwSweepJumps(v.volR);
            unsigned want = jump ? 1u : std::min(span, n - f);
            unsigned ticks;
            int32_t g1L, g1R;
            for (;;)
            {
                ticks = runAdsr(v, want);
                hwRunSweep(v.volL, ticks);
                hwRunSweep(v.volR, ticks);
                g1L = mixL ? hwGain(v.env.level, v.volL.current) : 0;
                g1R = mixR ? hwGain(v.env.level, v.volR.current) : 0;
                // A fast envelope or sweep (an exponential one halves the
                // level every tick at its fastest rates) is followed in
                // shorter spans: a straight line is close to it only over a
                // small change. Rerun from the span's start with half.
                if (ticks <= 1u || (std::abs(g1L - g0L) <= kSpanMaxGainChange && std::abs(g1R - g0R) <= kSpanMaxGainChange))
                    break;
                v.env = saved.env;
                v.volL = saved.volL;
                v.volR = saved.volR;
                v.phase = saved.phase;
                want = ticks / 2u;
            }
            if (ticks == 0u)
            {
                v.phase = Phase::Off;
                core.playing &= ~bit;
                break;
            }
            const unsigned played = render(core, index, v, dryL + f, dryR + f, ticks, g0L, g1L, g0R, g1R);
            if (played < ticks)
            {
                // The voice ended at an end block part-way: its envelope and
                // sweeps stop at that tick, then it is off at level 0.
                v.env = saved.env;
                v.volL = saved.volL;
                v.volR = saved.volR;
                v.phase = saved.phase;
                for (unsigned run = 0; run < played;)
                    run += runAdsr(v, played - run);
                hwRunSweep(v.volL, played);
                hwRunSweep(v.volR, played);
                v.phase = Phase::Off;
                v.env.level = 0;
            }
            f += played;
            if (v.phase == Phase::Off)
            {
                core.playing &= ~bit;
                break;
            }
            span = (g1L == g0L && g1R == g0R && v.phase == saved.phase) ? std::min(span * 2u, kSpanMax) : kSpanMin;
            g0L = g1L;
            g0R = g1R;
        }
        return f;
    };

    for (unsigned base = 0; base < frames; base += kChunk)
    {
        const unsigned n = std::min(frames - base, kChunk);
        for (unsigned c = 0; c < 2; ++c)
        {
            Core &core = m_cores[c];
            int32_t *dryL = dry[c][0], *dryR = dry[c][1];
            std::fill(dryL, dryL + n, 0);
            std::fill(dryR, dryR + n, 0);
            for (uint32_t playing = core.playing; playing != 0u; playing &= playing - 1u)
            {
                const unsigned i = static_cast<unsigned>(std::countr_zero(playing));
                voiceSamples += runVoice(core, i, core.voices[i], dryL, dryR, n);
            }
        }
        Core &core0 = m_cores[0], &core1 = m_cores[1];
        int16_t *o = out + size_t(base) * 2u;
        if (((core0.mvolL.reg | core0.mvolR.reg | core1.mvolL.reg | core1.mvolR.reg) & 0x8000u) == 0u)
        {
            // Fixed master volumes (the game's case): Volume::tick does nothing.
            const int32_t m0L = core0.mvolL.current, m0R = core0.mvolR.current;
            const int32_t m1L = core1.mvolL.current, m1R = core1.mvolR.current;
            const int32_t *d0L = dry[0][0], *d0R = dry[0][1], *d1L = dry[1][0], *d1R = dry[1][1];
            for (unsigned f = 0; f < n; ++f)
            {
                // Core 0's output feeds core 1's input.
                const int32_t outL = (clamp16(d0L[f]) * m0L) >> 15, outR = (clamp16(d0R[f]) * m0R) >> 15;
                o[f * 2] = clamp16((clamp16(d1L[f] + outL) * m1L) >> 15);
                o[f * 2 + 1] = clamp16((clamp16(d1R[f] + outR) * m1R) >> 15);
            }
        }
        else
        {
            for (unsigned f = 0; f < n; ++f)
            {
                int32_t coreOutL = 0, coreOutR = 0;
                for (unsigned c = 0; c < 2; ++c)
                {
                    Core &core = m_cores[c];
                    core.mvolL.tick();
                    core.mvolR.tick();
                    const int32_t inL = clamp16(dry[c][0][f] + coreOutL), inR = clamp16(dry[c][1][f] + coreOutR);
                    coreOutL = (inL * core.mvolL.current) >> 15;
                    coreOutR = (inR * core.mvolR.current) >> 15;
                }
                o[f * 2] = clamp16(coreOutL);
                o[f * 2 + 1] = clamp16(coreOutR);
            }
        }
    }
#if defined(PLATFORM_XBOX)
    g_spu2VoiceSamples += voiceSamples;
#else
    (void)voiceSamples;
#endif
}
