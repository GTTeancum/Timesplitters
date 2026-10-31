"""Observed REF DMA source checks and deferred native descriptor probes.

DrawRecordDmaPatcherTests runs Python source adapters only. The separate
DrawRecordDmaRuntimeTests class compiles native probe code and is reserved
for the verification stage after the user's build hold is lifted. Neither
class runs an Xbox title or establishes target coverage/performance.
"""
from __future__ import annotations

import importlib.util
import os
from pathlib import Path
import shlex
import shutil
import subprocess
import sys
import tempfile
import unittest


ROOT = Path(__file__).resolve().parents[3]
XBOX = ROOT / 'src/xbox'
SOURCE = ROOT / 'source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory.cpp'


def load_tool(name):
    spec = importlib.util.spec_from_file_location(name, XBOX / 'tools' / (name + '.py'))
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


class DrawRecordDmaPatcherTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.patcher = load_tool('patch_draw_record_dma')
        cls.bg = load_tool('patch_bg_runtime')
        cls.leaf = load_tool('patch_dma_chain')
        cls.original = SOURCE.read_bytes().decode('utf-8').replace('\r\n', '\n')

    def assert_restores(self, source, patched):
        restored = patched.removeprefix(self.patcher.GENERATED)
        for insertion in self.patcher.INSERTIONS:
            self.assertEqual(restored.count(insertion), 1)
            restored = restored.replace(insertion, '', 1)
        self.assertEqual(restored, source)

    def test_untouched_tag_entry_preserves_all_original_statements(self):
        p = self.patcher
        result = p.patch_source(self.original)
        self.assert_restores(self.original, result)
        self.assertIn(p.LOOP_HEAD + p.HOOK, result)
        self.assertLess(result.index(p.HOOK), result.index('if (++chainTags > kMaxDmaControlStates)'))
        self.assertLess(result.index(p.HOOK), result.index('const uint32_t currentTagAddr = tagAddr;'))
        self.assertEqual(result.count(p.END_STATE), 1)
        self.assertIn('defined(PLATFORM_XBOX) && TS_DRAW_RECORDS && !TS_WALK_SKIP_ZERO_TTE && TS_RENDER_COUNTERS < 2',
                      p.HOOK)
        self.assertIn('s_vif1Segments.size() <= kVif1BatchPieces', p.HOOK)
        self.assertIn('2u * xboxRecordSpan.chain.tagCount <=', p.HOOK)
        self.assertIn('kVif1BatchPieces - s_vif1Segments.size()', p.HOOK)
        self.assertNotIn('TS_DMA_CHAIN_CACHE', p.HOOK)

    def test_composes_with_all_bg_and_leaf_adapter_choices(self):
        for bg in (False, True):
            for leaf in (False, True):
                with self.subTest(bg=bg, leaf=leaf):
                    source = self.bg.patch_source('memory', self.original) if bg else self.original
                    if leaf:
                        source = self.leaf.patch_source(source)
                    patched = self.patcher.patch_source(source)
                    self.assert_restores(source, patched)
                    if leaf:
                        self.assertEqual(patched.count(self.leaf.SPLICE), 1)
                        self.assertLess(patched.index(self.patcher.HOOK), patched.index(self.leaf.SPLICE))

    def test_missing_duplicate_and_reordered_semantic_anchors_decline(self):
        p = self.patcher
        anchors = (p.INCLUDE, p.BATCH_CAPACITY, p.BATCH_APPEND, p.BATCH_EXTEND,
                   p.BUDGETS, p.SEGMENT_HEAD, p.SEGMENT_APPEND, p.TRANSPORT,
                   p.LOOP_HEAD, p.AFTER_LOOP, p.END_STATE)
        for anchor in anchors:
            for changed in (self.original.replace(anchor, '// upstream drift\n', 1),
                            self.original + '\n' + anchor):
                with self.subTest(anchor=anchor[:45]), self.assertRaises(ValueError):
                    p.patch_source(changed)
        moved = self.original.replace(p.TRANSPORT, '', 1)
        moved = moved.replace(p.SEGMENT_HEAD, p.TRANSPORT + p.SEGMENT_HEAD, 1)
        with self.assertRaises(ValueError):
            p.patch_source(moved)

    def test_any_new_per_tag_effect_requires_review(self):
        p = self.patcher
        additions = (
            ('                        const uint32_t currentTagAddr = tagAddr;\n',
             '                        observeNewDmaEffect(tagAddr);\n'),
            ('                        case 3:\n', '                            ++newRefCounter;\n'),
            ('                        if (irq && tieEnabled)\n', '                        updateNewTransferState();\n'),
        )
        for anchor, addition in additions:
            for source in (self.original, self.leaf.patch_source(self.original)):
                with self.subTest(anchor=anchor), self.assertRaisesRegex(ValueError, 'per-tag semantics'):
                    p.patch_source(source.replace(anchor, addition + anchor, 1))
        changed_leaf = self.leaf.patch_source(self.original).replace(
            '                                --asp;\n', '                                asp = 0u;\n', 1)
        with self.assertRaisesRegex(ValueError, 'per-tag semantics'):
            p.patch_source(changed_leaf)

    def test_line_endings_encoding_and_duplicate_application(self):
        p = self.patcher
        windows = self.original.replace('\n', '\r\n')
        patched = p.patch_source(windows)
        self.assertNotIn('\n', patched.replace('\r\n', ''))
        self.assertEqual(patched.replace('\r\n', '\n'), p.patch_source(self.original))
        for changed in (windows + '\n', '\ufeff' + self.original,
                        self.original + '\x00', p.patch_source(self.original)):
            with self.subTest(prefix=changed[:32]), self.assertRaises(ValueError):
                p.patch_source(changed)

    def test_cli_failed_output_and_source_alias_are_unchanged(self):
        with tempfile.TemporaryDirectory(prefix='ts-ref-dma-source-') as directory:
            source, output = Path(directory) / 'source.cpp', Path(directory) / 'generated.cpp'
            source.write_text(self.original)
            command = [sys.executable, str(XBOX / 'tools/patch_draw_record_dma.py'), str(source), str(output)]
            success = subprocess.run(command, capture_output=True, text=True, timeout=10)
            self.assertEqual(success.returncode, 0, success.stderr)
            previous = output.read_bytes()
            self.assertEqual(source.read_text(), self.original)
            alias = subprocess.run(command[:-1] + [str(source)], capture_output=True, text=True, timeout=10)
            self.assertEqual(alias.returncode, 2)
            self.assertEqual(source.read_text(), self.original)
            hardlink = Path(directory) / 'same-source.cpp'
            os.link(source, hardlink)
            linked = subprocess.run(command[:-1] + [str(hardlink)], capture_output=True, text=True, timeout=10)
            self.assertEqual(linked.returncode, 2)
            self.assertEqual(source.read_text(), self.original)
            source.write_text('// incompatible input\n')
            failure = subprocess.run(command, capture_output=True, text=True, timeout=10)
            self.assertEqual(failure.returncode, 2)
            self.assertEqual(output.read_bytes(), previous)
            self.assertEqual(source.read_text(), '// incompatible input\n')


DMA_PROBE = r'''
#include "xbox_draw_record.h"
#include <algorithm>
#include <array>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace {
using Chain = XboxDrawRecordChain;
using Span = XboxDrawRecordDmaSpan;
constexpr uint32_t begin = 0x10000u, payloadA = 0x50000u, payloadB = 0x60000u;
std::vector<uint8_t> ram(Chain::kRamBytes);
void require(bool value, const char *message) {
    if (!value) throw std::runtime_error(message);
}
void word(uint32_t address, uint32_t value) { std::memcpy(ram.data() + address, &value, 4u); }
uint32_t word(uint32_t address) {
    uint32_t value; std::memcpy(&value, ram.data() + address, 4u); return value;
}
void tag(uint32_t address, uint32_t low, uint32_t payload) {
    word(address, low); word(address + 4u, payload);
    word(address + 8u, 0x01000101u); word(address + 12u, 0u);
}
void fixture(bool note = true) {
    xboxDrawRecordReset();
    tag(begin, 0x30000001u, payloadA);
    tag(begin + 16u, 0x305A0001u, payloadB);
    if (note) xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
}
bool prepare(Span &out, bool tte = false, uint32_t tags = Chain::kMaxTags,
             uint32_t bytes = Chain::kMaxBytes, uint32_t first = begin) {
    return xboxDrawRecordPrepareRefs(ram.data(), Chain::kRamBytes, first, tte, tags, bytes, out);
}
template<class F> void refused(F operation, const char *message) {
    Span out{};
    auto *raw = reinterpret_cast<uint8_t *>(&out);
    std::fill(raw, raw + sizeof(out), uint8_t(0xA5u));
    std::array<uint8_t, sizeof(Span)> before{};
    std::memcpy(before.data(), &out, sizeof(out));
    require(!operation(out), message);
    require(std::memcmp(before.data(), &out, sizeof(out)) == 0, "false changed output bytes");
}
void check(const Span &out, bool tte) {
    require(out.chain.callAddress == begin && out.chain.chainAddress == begin, "exact REF origin");
    require(out.endAddress == begin + 32u && out.chain.tagCount == 2u, "exclusive span and tag count");
    require(out.lastTagUpper == 0x305Au, "last REF upper bits");
    require(out.chain.totalBytes == (tte ? 48u : 32u), "CHCR-selected stream bytes");
    const Chain::Piece expected[] = {{begin + 8u, 8u}, {payloadA, 16u},
                                    {begin + 24u, 8u}, {payloadB, 16u}};
    require(out.chain.pieceCount == (tte ? 4u : 2u), "raw nonempty pieces");
    for (uint32_t i = 0; i < out.chain.pieceCount; ++i) {
        const auto &want = expected[tte ? i : i * 2u + 1u];
        require(out.chain.pieces[i].offset == want.offset && out.chain.pieces[i].bytes == want.bytes,
                "raw TTE/payload append order");
    }
}
void modesAndReuse() {
    fixture();
    for (bool tte : {false, true}) {
        Span out{}; require(prepare(out, tte), "transport admitted"); check(out, tte);
        const uint64_t generation = out.chain.generation;
        word(payloadA, 0x12345678u);
        require(prepare(out, tte), "mutable payload remains live");
        require(out.chain.generation == generation && word(out.chain.pieces[tte ? 1u : 0u].offset) == 0x12345678u,
                "payload edit does not rebuild metadata");
        XboxDrawRecordStats before{}, after{};
        require(xboxDrawRecordGetStats(before), "stats before shared lookup");
        const auto consumer = [](const Chain &chain, const uint8_t *current, void *opaque) {
            const auto &expected = *static_cast<const Span *>(opaque);
            return current == ram.data() && chain.generation == expected.chain.generation &&
                   chain.pieceCount == expected.chain.pieceCount &&
                   chain.totalBytes == expected.chain.totalBytes;
        };
        require(xboxDrawRecordWithChain(ram.data(), ram.data() + (tte ? begin + 8u : payloadA),
                                        consumer, &out), "VIF lookup reuses DMA descriptor");
        require(xboxDrawRecordGetStats(after) && after.created == before.created,
                "one shared descriptor cache");
    }
}
void boundsAndOrigins() {
    fixture(false);
    refused([](Span &out) { return prepare(out); }, "unobserved REF span");
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
    refused([](Span &out) { return prepare(out, false, 0u); }, "zero tag budget");
    refused([](Span &out) { return prepare(out, false, 1u); }, "partial tag budget");
    refused([](Span &out) { return prepare(out, false, 2u, 31u); }, "partial byte budget");
    refused([](Span &out) { return prepare(out, true, 2u, 47u); }, "TTE byte budget");
    refused([](Span &out) { return prepare(out, false, 2u, 32u, begin + 16u); }, "unobserved interior tag");
    refused([](Span &out) { return prepare(out, false, 2u, 32u, begin + 1u); }, "unaligned origin");
    refused([](Span &out) { return prepare(out, false, 2u, 32u, Chain::kRamBytes); }, "outside RAM");
    refused([](Span &out) {
        return xboxDrawRecordPrepareRefs(nullptr, Chain::kRamBytes, begin, false, 2u, 32u, out);
    }, "null RAM");
    refused([](Span &out) {
        return xboxDrawRecordPrepareRefs(ram.data(), Chain::kRamBytes - 16u, begin, false, 2u, 32u, out);
    }, "RAM layout mismatch");
    Span out{};
    require(prepare(out, false, 2u, 32u), "exact payload budget");
    require(prepare(out, true, 2u, 48u), "exact TTE budget");
    fixture(false);
    tag(begin - 16u, 0x50000000u, begin);
    tag(begin + 16u, 0x60000000u, 0u);
    xboxDrawRecordNotePrecalc(ram.data(), begin - 16u);
    refused([](Span &value) { return prepare(value); }, "CALL leaf is not a linear REF observation");
    std::vector<uint8_t> other(Chain::kRamBytes);
    fixture();
    refused([&](Span &value) {
        return xboxDrawRecordPrepareRefs(other.data(), Chain::kRamBytes, begin, false, 2u, 32u, value);
    }, "allocation identity");
    require(prepare(out), "foreign lookup does not evict the observed owner");
}
void liveChanges() {
    fixture(); Span out{};
    require(prepare(out), "first resident descriptor");
    const uint64_t oldGeneration = out.chain.generation;
    word(begin + 20u, payloadB + 64u);
    refused([](Span &value) { return prepare(value); }, "changed resident leaf declines current lookup");
    require(prepare(out) && out.chain.generation != oldGeneration &&
            out.chain.pieces[1].offset == payloadB + 64u, "exact origin permits later reconstruction");
    require(prepare(out, true), "both transports resident before origin retirement");
    word(begin + 4u, payloadA + 64u);
    refused([](Span &value) { return prepare(value); }, "changed first origin retires its hint");
    word(begin + 4u, payloadA);
    refused([](Span &value) { return prepare(value); }, "restoring bytes cannot manufacture a fresh Note");
    uint32_t consumers = 0;
    const auto accept = [](const Chain &, const uint8_t *, void *opaque) {
        ++*static_cast<uint32_t *>(opaque); return true;
    };
    require(!xboxDrawRecordWithChain(ram.data(), ram.data() + payloadA, accept, &consumers) &&
            !xboxDrawRecordWithChain(ram.data(), ram.data() + begin + 8u, accept, &consumers) &&
            consumers == 0u, "DMA origin retirement cannot revive either VIF descriptor without a Note");
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
    require(prepare(out), "fresh origin can return");
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + 16u, 0u);
    require(prepare(out) && out.chain.tagCount == 1u && out.endAddress == begin + 16u,
            "changed explicit end invalidates a previous longer descriptor");
}
void unsupportedAndZero() {
    for (uint32_t low : {0x00000001u, 0x10000001u, 0x20000001u, 0x40000001u,
                         0x50000001u, 0x60000001u, 0x70000001u, 0xB0000001u}) {
        fixture(false); word(begin + 16u, low);
        xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
        refused([](Span &out) { return prepare(out); }, "non-REF/control/IRQ tag");
    }
    for (uint32_t address : {0x20050000u, 0x70000000u, Chain::kRamBytes - 8u}) {
        fixture(false); word(begin + 20u, address);
        xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
        refused([](Span &out) { return prepare(out); }, "nonempty alias/scratch/wrapping payload");
    }
    fixture(false);
    tag(begin, 0x30000000u, 0x7FFFFFFFu);
    tag(begin + 16u, 0x30000000u, 0x70000000u);
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
    Span out{};
    require(prepare(out, false, 2u, 0u) && out.chain.pieceCount == 0u && out.chain.totalBytes == 0u,
            "zero-QWC REF targets are unused and zero-byte spans still advance tags");
    require(prepare(out, true, 2u, 16u) && out.chain.pieceCount == 2u,
            "zero-QWC TTE pieces remain present");
    fixture(false);
    tag(begin, 0x30000000u, 0x70000000u);
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
    require(prepare(out) && out.chain.pieceCount == 1u && out.chain.pieces[0].offset == payloadB,
            "exact DMA origin supports a zero-length first payload");
}
void vifOriginRetirement() {
    for (bool evictHint : {false, true}) {
        fixture(); Span out{};
        require(prepare(out) && prepare(out, true), "both VIF transport descriptors resident");
        uint32_t consumers = 0;
        const auto accept = [](const Chain &, const uint8_t *, void *opaque) {
            ++*static_cast<uint32_t *>(opaque); return true;
        };
        if (evictHint) {
            const uint32_t wanted = ((begin >> 4u) ^ (begin >> 11u)) & 127u;
            uint32_t noted = 0u;
            for (uint32_t address = 0x20000u; noted < 2u; address += 16u)
                if ((((address >> 4u) ^ (address >> 11u)) & 127u) == wanted) {
                    tag(address, 0x30000001u, payloadB + 0x1000u + noted * 16u);
                    xboxDrawRecordNoteRefs(ram.data(), address, address + 16u, 0u);
                    ++noted;
                }
            require(xboxDrawRecordWithChain(ram.data(), ram.data() + payloadA, accept, &consumers),
                    "ordinary hint eviction preserves exact resident descriptors");
        }
        consumers = 0u;
        const uint32_t original = word(begin + 8u);
        word(begin + 8u, original ^ 1u);
        require(!xboxDrawRecordWithChain(ram.data(), ram.data() + payloadA, accept, &consumers) &&
                consumers == 0u, "VIF origin/query lookup detects changed origin before callback");
        word(begin + 8u, original);
        require(!xboxDrawRecordWithChain(ram.data(), ram.data() + begin + 8u, accept, &consumers) &&
                !xboxDrawRecordWithChain(ram.data(), ram.data() + payloadA, accept, &consumers) &&
                consumers == 0u, "neither VIF transport revives restored origin bytes without Note");
        xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
        require(xboxDrawRecordWithChain(ram.data(), ram.data() + payloadA, accept, &consumers) &&
                xboxDrawRecordWithChain(ram.data(), ram.data() + begin + 8u, accept, &consumers),
                "fresh Note revives both VIF transport entries");
    }
}
void limits() {
    xboxDrawRecordReset();
    for (uint32_t i = 0; i < Chain::kMaxTags; ++i)
        tag(begin + i * 16u, 0x30000001u, payloadA + i * 16u);
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + Chain::kMaxTags * 16u, 0u);
    Span out{};
    require(prepare(out, true) && out.chain.tagCount == Chain::kMaxTags &&
            out.chain.pieceCount == Chain::kMaxPieces, "bounded maximum raw piece count");
    xboxDrawRecordReset();
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + (Chain::kMaxTags + 1u) * 16u, 0u);
    refused([](Span &value) { return prepare(value); }, "oversized observed range");
    fixture(false);
    tag(begin, 0x30000000u | (Chain::kMaxBytes / 16u), 0x200000u);
    tag(begin + 16u, 0x30000000u, 0u);
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
    refused([](Span &value) { return prepare(value, true); }, "descriptor byte cap includes TTE");
    require(prepare(out) && out.chain.totalBytes == Chain::kMaxBytes,
            "failed opposite transport cannot discard exact origin");
    xboxDrawRecordReset();
    tag(Chain::kRamBytes - 16u, 0x30000000u, 0u);
    xboxDrawRecordNoteRefs(ram.data(), Chain::kRamBytes - 16u, Chain::kRamBytes, 0u);
    require(prepare(out, true, 1u, 8u, Chain::kRamBytes - 16u) && out.endAddress == Chain::kRamBytes,
            "exclusive end may equal RAM bound");
}
void owningAndReentrant() {
    fixture(); Span saved{};
    require(prepare(saved, true), "owning first descriptor");
    for (uint32_t i = 0; i < 20u; ++i) {
        const uint32_t at = begin + 0x1000u + i * 64u;
        tag(at, 0x30000001u, payloadA + i * 16u);
        xboxDrawRecordNoteRefs(ram.data(), at, at + 16u, 0u);
        Span replacement{};
        require(prepare(replacement, false, 1u, 16u, at), "evicting descriptor");
    }
    check(saved, true);
    fixture();
    const auto consume = [](const Chain &, const uint8_t *, void *) {
        refused([](Span &out) { return prepare(out); }, "lease remains nonblocking during VIF callback");
        return true;
    };
    require(xboxDrawRecordWithChain(ram.data(), ram.data() + payloadA, consume, nullptr), "outer lease completes");
    Span out{}; require(prepare(out), "cache available after callback");
}

// Exercise the actual generated hook without an emulator. A controlled
// append callback models the existing fixed-batch boundary and can mutate a
// later tag, making stale admission across an unexpected flush detectable.
struct WalkResult {
    using Piece = std::pair<uint32_t, uint32_t>;
    std::vector<Piece> raw, pending;
    uint32_t tags = 0, bytes = 0, next = 0, upper = 0, flushes = 0;
    uint32_t asp = 2u, asr0 = 0xA000u, asr1 = 0xB000u;
};
WalkResult walk(bool accelerated, bool tte, uint32_t initialPieces, bool mutateOnFlush) {
    constexpr uint32_t PS2_RAM_SIZE = Chain::kRamBytes;
    constexpr uint32_t kMaxDmaControlStates = 1u << 20, kMaxBufferedDmaBytes = 64u * 1024u * 1024u;
    constexpr uint32_t kVif1BatchPieces = 4096u;
    const uint8_t *m_rdram = ram.data();
    const bool recordSegments = true, transferTagData = tte;
    uint32_t chainTags = 0u, segmentBytes = 0u, lastTagUpper = 0u;
    uint32_t tagAddr = begin, asp = 2u, asr0 = 0xA000u, asr1 = 0xB000u;
    int tagsProcessed = 0;
    (void)PS2_RAM_SIZE; (void)kMaxBufferedDmaBytes;
    (void)recordSegments; (void)transferTagData;
    WalkResult result;
    std::vector<WalkResult::Piece> s_vif1Segments(initialPieces, {0u, 1u});
    const size_t firstSegment = s_vif1Segments.size();
    auto addSegment = [&](const uint8_t *data, uint32_t bytes) {
        const uint32_t offset = uint32_t(data - m_rdram);
        result.raw.emplace_back(offset, bytes);
        segmentBytes += bytes;
        if (s_vif1Segments.size() > firstSegment &&
            s_vif1Segments.back().first + s_vif1Segments.back().second == offset)
            s_vif1Segments.back().second += bytes;
        else {
            if (s_vif1Segments.size() == kVif1BatchPieces) {
                ++result.flushes;
                // An incomplete prior command leaves one piece behind.
                const auto carry = s_vif1Segments.back();
                s_vif1Segments.assign(1u, carry);
                if (mutateOnFlush) word(begin + 36u, payloadB + 0x400u);
            }
            s_vif1Segments.emplace_back(offset, bytes);
        }
    };
    while (tagAddr != begin + 48u) {
        if (asp > 2u) throw std::runtime_error("invalid return stack");
        if (accelerated) {
@@HOOK@@
        }
        require(++chainTags <= kMaxDmaControlStates, "walk control budget");
        const uint32_t low = word(tagAddr);
        require(((low >> 28u) & 7u) == 3u && !(low & 0x80000000u), "fixture contains only REF");
        lastTagUpper = (low >> 16u) & 0xFFFFu;
        ++tagsProcessed;
        const uint32_t payload = word(tagAddr + 4u) & 0x7FFFFFFFu;
        const uint32_t count = (low & 0xFFFFu) * 16u;
        if (tte) addSegment(m_rdram + tagAddr + 8u, 8u);
        if (count) addSegment(m_rdram + payload, count);
        tagAddr += 16u;
    }
    require(uint32_t(tagsProcessed) == chainTags, "tag counters agree");
    result.pending = s_vif1Segments; result.tags = chainTags; result.bytes = segmentBytes;
    result.next = tagAddr; result.upper = lastTagUpper; result.asp = asp;
    result.asr0 = asr0; result.asr1 = asr1;
    return result;
}
void hookOrdering() {
    for (bool tte : {false, true})
        for (uint32_t initial : {0u, 4090u, 4095u})
            for (bool mutate : {false, true}) {
                const auto setup = [] {
                    fixture(false);
                    tag(begin + 32u, 0x30650001u, payloadB + 16u);
                    xboxDrawRecordNoteRefs(ram.data(), begin, begin + 48u, 0u);
                };
                setup(); const auto baseline = walk(false, tte, initial, mutate);
                setup(); const auto adapted = walk(true, tte, initial, mutate);
                require(baseline.raw == adapted.raw && baseline.pending == adapted.pending,
                        "raw appends, original coalescing and carried pieces match");
                require(baseline.tags == adapted.tags && baseline.bytes == adapted.bytes &&
                        baseline.next == adapted.next && baseline.upper == adapted.upper &&
                        baseline.flushes == adapted.flushes && baseline.asp == adapted.asp &&
                        baseline.asr0 == adapted.asr0 && baseline.asr1 == adapted.asr1,
                        "transfer state and batch boundaries match");
            }
}
void disabled() {
    fixture();
    refused([](Span &out) { return prepare(out); }, "disabled producer");
    XboxDrawRecordStats stats{};
    require(xboxDrawRecordGetStats(stats) && stats.dmaLookups == 0u && stats.dmaAccepted == 0u,
            "disabled counters");
}
}
int main(int argc, char **argv) {
    require(argc == 2, "one probe name required");
    const std::string name = argv[1];
    if (name == "modes") modesAndReuse();
    else if (name == "bounds") boundsAndOrigins();
    else if (name == "changes") liveChanges();
    else if (name == "unsupported") unsupportedAndZero();
    else if (name == "vif_retirement") vifOriginRetirement();
    else if (name == "limits") limits();
    else if (name == "owning") owningAndReentrant();
    else if (name == "hook") hookOrdering();
    else if (name == "disabled") disabled();
    else require(false, "unknown probe");
    std::cout << "ok " << name << '\n';
}
'''


class DrawRecordDmaRuntimeTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        compiler = shlex.split(os.environ.get('CXX', 'c++'))
        if not compiler or shutil.which(compiler[0]) is None:
            raise unittest.SkipTest('host C++ compiler unavailable')
        cls.directory = tempfile.TemporaryDirectory(prefix='ts-ref-dma-probe-')
        directory = Path(cls.directory.name)
        source = directory / 'probe.cpp'
        source.write_text(DMA_PROBE.replace('@@HOOK@@', load_tool('patch_draw_record_dma').HOOK))
        cls.probes = {}
        for enabled in (0, 1):
            output = directory / f'probe-{enabled}'
            command = compiler + ['-std=c++17', '-O2', '-Wall', '-Wextra', '-Werror',
                                  '-DPLATFORM_XBOX=1', '-DTS_VIF1_BATCH=1',
                                  '-DTS_WALK_SKIP_ZERO_TTE=0', '-DTS_RENDER_COUNTERS=0',
                                  f'-DTS_DRAW_RECORDS={enabled}', '-I', str(XBOX)]
            command += shlex.split(os.environ.get('TS_DRAW_RECORD_CXXFLAGS', ''))
            subprocess.run(command + [str(source), str(XBOX / 'xbox_draw_record.cpp'),
                                       '-o', str(output)], check=True)
            cls.probes[enabled] = output

    @classmethod
    def tearDownClass(cls):
        cls.directory.cleanup()

    def run_probe(self, name, enabled=1):
        completed = subprocess.run([str(self.probes[enabled]), name],
                                   capture_output=True, text=True, timeout=10)
        self.assertEqual(completed.returncode, 0, completed.stderr)
        self.assertIn('ok ' + name, completed.stdout)

    def test_transport_live_payload_and_shared_vif_descriptor(self):
        self.run_probe('modes')

    def test_exact_origins_budgets_output_and_ram_identity(self):
        self.run_probe('bounds')

    def test_changed_leaf_origin_and_explicit_end(self):
        self.run_probe('changes')

    def test_unsupported_tags_payloads_and_zero_length(self):
        self.run_probe('unsupported')

    def test_vif_origin_change_retires_both_modes_even_after_hint_eviction(self):
        self.run_probe('vif_retirement')

    def test_metadata_limits_and_independent_transport_budget(self):
        self.run_probe('limits')

    def test_owning_output_and_nonblocking_reentrancy(self):
        self.run_probe('owning')

    def test_actual_hook_preserves_batch_order_and_transfer_state(self):
        self.run_probe('hook')

    def test_disabled_path_has_no_effects(self):
        self.run_probe('disabled', enabled=0)


if __name__ == '__main__':
    unittest.main()
