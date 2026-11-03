"""REF-origin source checks and deferred draw-record transport probes.

DrawRecordRefPatcherTests uses Python source adapters only. Selecting the
separate DrawRecordRefRuntimeTests class compiles a host C++ probe; that
class is reserved for the later verification stage under the build hold.
Neither class runs an Xbox title or measures game performance.
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
SOURCE = ROOT / 'project/game/ts_native_game2.cpp'


def load_tool(name):
    spec = importlib.util.spec_from_file_location(name, XBOX / 'tools' / (name + '.py'))
    module = importlib.util.module_from_spec(spec)
    sys.path.insert(0, str(XBOX / 'tools'))
    try:
        spec.loader.exec_module(module)
    finally:
        sys.path.pop(0)
    return module


class DrawRecordRefPatcherTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.patcher = load_tool('patch_draw_record_game')
        cls.calls = load_tool('patch_native_calls')
        cls.original = SOURCE.read_bytes().decode('utf-8').replace('\r\n', '\n')

    def test_all_three_completed_iterations_preserve_every_original_statement(self):
        p = self.patcher
        result = p.patch_source(self.original)
        self.assertEqual(result.count('xboxDrawRecordNoteRefs('), 3)
        self.assertEqual(result.count(p.REF_LOCAL), 1)
        self.assertEqual(result.count(p.REF_BEGIN), 3)
        restored = result.removeprefix(p.GENERATED).replace(p.ADAPTER, '', 1)
        for inserted in p.INSERTIONS:
            restored = restored.replace(inserted, '')
        self.assertEqual(restored, self.original)
        self.assertLess(result.index(p.REF_LOCAL), result.index(p.REF_STARTS[0]))
        for start, end, observer in zip(p.REF_STARTS, p.REF_ENDS, p.REF_OBSERVATIONS):
            self.assertIn(start + p.REF_BEGIN, result)
            self.assertIn(end + observer + '        if (t)\n', result)
            self.assertLess(result.index(start), result.index(end))
            self.assertLess(result.index(observer), result.index('loopCheckpoint(', result.index(end)))
            self.assertIn('#if TS_DRAW_RECORDS && TS_RENDER_COUNTERS < 2', observer)

    def test_guest_call_slot_stage_keeps_all_origins(self):
        slots = {int(match['target'][:-1], 16): index
                 for index, match in enumerate(self.calls.CALL.finditer(self.original))}
        observed = self.patcher.patch_source(self.original)
        composed = self.calls.patch_source(observed, 'ts_native_game2.cpp', slots)
        for inserted in self.patcher.INSERTIONS:
            self.assertEqual(composed.count(inserted), observed.count(inserted))
        self.assertIn('xboxNativeGuestCall<', composed)

    def test_missing_duplicate_or_reordered_ref_anchors_decline(self):
        p = self.patcher
        for anchor in (p.REF_FUNCTION, *p.REF_STARTS, *p.REF_ENDS):
            for changed in (self.original.replace(anchor, '// upstream drift\n', 1),
                            self.original + '\n' + anchor):
                with self.subTest(anchor=anchor[:45]), self.assertRaises(ValueError):
                    p.patch_source(changed)
        moved = self.original.replace(p.REF_ENDS[0], '', 1)
        moved = moved.replace(p.REF_STARTS[0], p.REF_ENDS[0] + p.REF_STARTS[0], 1)
        with self.assertRaises(ValueError):
            p.patch_source(moved)

    def test_new_yield_call_exit_or_interior_entry_cannot_reuse_host_capture(self):
        p = self.patcher
        additions = (
            '        if (loopCheckpoint(ctx, runtime, 0u)) return false;\n',
            '        if (!guestCall(G_PASS, 0u, 0u, 0u)) return false;\n',
            '        goto L_261f50;\n',
        )
        for start in p.REF_STARTS:
            for addition in additions:
                with self.subTest(start=start[:20], addition=addition), self.assertRaises(ValueError):
                    p.patch_source(self.original.replace(start, start + addition, 1))
        injected_entry = self.original.replace(p.REF_FUNCTION,
                                                p.REF_FUNCTION + '        goto L_2613bc;\n', 1)
        with self.assertRaises(ValueError):
            p.patch_source(injected_entry)

    def test_encoding_duplicate_insertion_and_failed_cli_preserve_inputs(self):
        p = self.patcher
        windows = self.original.replace('\n', '\r\n')
        patched = p.patch_source(windows)
        self.assertNotIn('\n', patched.replace('\r\n', ''))
        self.assertEqual(patched.replace('\r\n', '\n'), p.patch_source(self.original))
        for changed in (windows + '\n', '\ufeff' + self.original,
                        self.original + '\x00', p.patch_source(self.original)):
            with self.assertRaises(ValueError):
                p.patch_source(changed)
        with tempfile.TemporaryDirectory(prefix='ts-ref-source-') as directory:
            source, output = Path(directory) / 'source.cpp', Path(directory) / 'generated.cpp'
            source.write_text(self.original)
            command = [sys.executable, str(XBOX / 'tools/patch_draw_record_game.py'), str(source), str(output)]
            success = subprocess.run(command, capture_output=True, text=True, timeout=10)
            self.assertEqual(success.returncode, 0, success.stderr)
            previous = output.read_bytes()
            source.write_text('// incompatible input\n')
            failure = subprocess.run(command, capture_output=True, text=True, timeout=10)
            self.assertEqual(failure.returncode, 2)
            self.assertEqual(output.read_bytes(), previous)
            self.assertEqual(source.read_text(), '// incompatible input\n')
            alias = subprocess.run(command[:-1] + [str(source)], capture_output=True, text=True, timeout=10)
            self.assertEqual(alias.returncode, 2)
            self.assertEqual(source.read_text(), '// incompatible input\n')


REF_PROBE = r'''
#include "xbox_draw_record.h"
#include <cstdint>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
using Chain = XboxDrawRecordChain;
std::vector<uint8_t> ram(Chain::kRamBytes);
void require(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}
void word(uint32_t address, uint32_t value) { std::memcpy(ram.data() + address, &value, 4u); }
void tag(uint32_t address, uint32_t id, uint32_t qwc, uint32_t payload) {
    word(address, (id << 28u) | qwc); word(address + 4u, payload);
    word(address + 8u, 0u); word(address + 12u, 0u);
}
void refs(uint32_t begin, uint32_t first, uint32_t second) {
    tag(begin, 3u, 1u, first); tag(begin + 16u, 3u, 1u, second);
}
struct Expected {
    uint32_t origin;
    std::vector<Chain::Piece> pieces;
    uint32_t calls = 0u, accepts = 0u;
    uint64_t generation = 0u;
    bool checkWord = false;
    uint32_t liveOffset = 0u, liveWord = 0u;
};
Expected expected(uint32_t origin, uint32_t first, uint32_t second, bool tte, bool ret = false) {
    Expected result{origin, {}};
    if (tte) result.pieces.push_back({origin + 8u, 8u});
    result.pieces.push_back({first, 16u});
    if (tte) result.pieces.push_back({origin + 24u, 8u});
    result.pieces.push_back({second, 16u});
    if (tte && ret) result.pieces.push_back({origin + 40u, 8u});
    return result;
}
bool match(const Chain &chain, const uint8_t *current, void *opaque) {
    auto &want = *static_cast<Expected *>(opaque);
    ++want.calls;
    if (current != ram.data() || chain.chainAddress != want.origin ||
        chain.pieceCount != want.pieces.size()) return false;
    for (uint32_t i = 0; i < chain.pieceCount; ++i)
        if (chain.pieces[i].offset != want.pieces[i].offset ||
            chain.pieces[i].bytes != want.pieces[i].bytes) return false;
    if (want.checkWord) {
        uint32_t value;
        std::memcpy(&value, current + want.liveOffset, 4u);
        if (value != want.liveWord) return false;
    }
    ++want.accepts;
    want.generation = chain.generation;
    return true;
}
bool consume(uint32_t address, Expected &want) {
    return xboxDrawRecordWithChain(ram.data(), ram.data() + address, match, &want);
}
void refModes() {
    xboxDrawRecordReset();
    XboxDrawRecordStats before{}, after{};
    require(xboxDrawRecordGetStats(before), "stats before");
    for (uint32_t variant = 0; variant < 3u; ++variant) {
        const uint32_t begin = 0x10000u + variant * 0x100u;
        const uint32_t first = 0x20000u + variant * 0x100u, second = first + 0x40u;
        refs(begin, first, second);
        xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, variant);
        Expected off = expected(begin, first, second, false);
        Expected on = expected(begin, first, second, true);
        require(consume(first, off), "REF payload-only entry");
        require(consume(begin + 8u, on), "REF TTE entry");
        require(consume(first, off), "REF mode alternation");
        word(second, variant + 0xAABBCC00u);
        off.checkWord = true; off.liveOffset = second; off.liveWord = variant + 0xAABBCC00u;
        require(consume(first, off), "live payload remains usable");
    }
    require(xboxDrawRecordGetStats(after), "stats after");
    for (uint32_t variant = 0; variant < 3u; ++variant)
        require(after.notesRef[variant] == before.notesRef[variant] + 1u, "REF variant counter");
    require(after.transportAccepted[0] >= before.transportAccepted[0] + 9u, "payload-mode counters");
    require(after.transportAccepted[1] >= before.transportAccepted[1] + 3u, "TTE counters");
}
void callModes() {
    xboxDrawRecordReset();
    const uint32_t caller = 0x8000u, begin = 0x10000u, first = 0x20000u, second = 0x30000u;
    tag(caller, 5u, 0u, begin); refs(begin, first, second); tag(begin + 32u, 6u, 0u, 0u);
    xboxDrawRecordNotePrecalc(ram.data(), caller);
    Expected off = expected(begin, first, second, false, true);
    Expected on = expected(begin, first, second, true, true);
    require(consume(first, off), "CALL payload-only entry");
    require(consume(begin + 8u, on), "CALL TTE entry");
    require(consume(first, off), "CALL mode alternation");
    xboxDrawRecordReset();
    xboxDrawRecordNoteDbuf(ram.data(), caller);
    word(begin + 4u, first + 0x100u);
    Expected changed = expected(begin, first + 0x100u, second, false, true);
    require(!consume(first, changed) && changed.calls == 0u, "old payload index cannot authorize changed first tag");
    require(!consume(first + 0x100u, changed), "unindexed new payload stays original");
    xboxDrawRecordNoteDbuf(ram.data(), caller);
    require(consume(first + 0x100u, changed), "fresh observation reindexes payload");
}
void sharedStarts() {
    xboxDrawRecordReset();
    const uint32_t shared = 0x50000u;
    for (uint32_t i = 0; i < 24u; ++i) {
        const uint32_t begin = 0x10000u + i * 0x40u;
        refs(begin, shared, 0x200000u + i * 0x20u);
        xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, i % 3u);
    }
    uint64_t firstGeneration = 0u;
    for (uint32_t i = 0; i < 24u; ++i) {
        Expected want = expected(0x10000u + i * 0x40u, shared, 0x200000u + i * 0x20u, false);
        require(consume(shared, want), "shared start follows observation order beyond16 records");
        require(want.calls == 1u, "ordered cursor avoids earlier shared-start candidates");
        if (!i) firstGeneration = want.generation;
    }
    Expected first = expected(0x10000u, shared, 0x200000u, false);
    require(consume(shared, first), "evicted earliest origin reconstructs");
    require(first.generation != firstGeneration, "reconstruction has new generation");
    Expected outOfOrder = expected(0x10000u + 19u * 0x40u, shared, 0x200000u + 19u * 0x20u, false);
    require(consume(shared, outOfOrder), "out-of-order shared origin remains findable within cap");
    require(outOfOrder.calls > 1u && outOfOrder.calls <= 24u, "out-of-order candidates bounded");
}
void capProgress() {
    xboxDrawRecordReset();
    const uint32_t shared = 0x50000u;
    for (uint32_t i = 0; i < 40u; ++i) {
        const uint32_t begin = 0x10000u + i * 0x40u;
        refs(begin, shared, 0x200000u + i * 0x20u);
        xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
    }
    Expected last = expected(0x10000u + 39u * 0x40u, shared, 0x200000u + 39u * 0x20u, false);
    XboxDrawRecordStats before{}, after{};
    require(xboxDrawRecordGetStats(before), "cap stats before");
    const auto unchanged = ram;
    require(!consume(shared, last), "candidate33+ declines first bounded lookup");
    require(last.calls == 32u && last.accepts == 0u && ram == unchanged, "cap declines without effects");
    require(xboxDrawRecordGetStats(after) && after.candidateLimits == before.candidateLimits + 1u,
            "cap exhaustion observable");
    require(consume(shared, last), "later lookup reaches remaining shared origins");
    require(last.calls == 40u && last.accepts == 1u, "cursor advances at cap instead of starving");
}
void collisions() {
    xboxDrawRecordReset();
    const uint32_t a = 0x10000u, b = 0x12000u, shared = a + 8u;
    refs(a, 0x40000u, 0x40040u); refs(b, shared, 0x50040u);
    xboxDrawRecordNoteRefs(ram.data(), a, a + 32u, 0u);
    xboxDrawRecordNoteRefs(ram.data(), b, b + 32u, 1u);
    Expected payload = expected(b, shared, 0x50040u, false);
    require(consume(shared, payload), "TTE address collision does not hide payload origin");
    require(payload.calls == 2u && payload.accepts == 1u, "rejected TTE candidate leaves next mode viable");
    Expected tte = expected(a, 0x40000u, 0x40040u, true);
    require(consume(shared, tte), "same byte address can return to TTE mode");
}
void freshProbe() {
    xboxDrawRecordReset();
    const uint32_t a = 0x10000u, b = 0x10040u, shared = 0x50000u;
    refs(a, shared, 0x60000u); refs(b, shared, 0x60040u);
    xboxDrawRecordNoteRefs(ram.data(), a, a + 32u, 0u);
    xboxDrawRecordNoteRefs(ram.data(), b, b + 32u, 1u);
    struct Reader {
        Chain::Piece pieces[2];
        uint32_t position = 0u, attempts = 0u, partialFailures = 0u;
    } reader{{{shared, 16u}, {0x60040u, 16u}}};
    const auto consumeWithFreshProbe = [](const Chain &chain, const uint8_t *, void *opaque) {
        auto &input = *static_cast<Reader *>(opaque);
        ++input.attempts;
        uint32_t probe = input.position; // copy rebuilt on EVERY callback
        for (uint32_t i = 0; i < chain.pieceCount; ++i) {
            if (probe >= 2u || chain.pieces[i].offset != input.pieces[probe].offset ||
                chain.pieces[i].bytes != input.pieces[probe].bytes) {
                if (probe) ++input.partialFailures;
                return false;
            }
            ++probe;
        }
        if (probe != 2u) return false;
        input.position = probe;
        return true;
    };
    require(xboxDrawRecordWithChain(ram.data(), ram.data() + shared, consumeWithFreshProbe, &reader),
            "later candidate starts from untouched live reader");
    require(reader.attempts == 2u && reader.partialFailures == 1u && reader.position == 2u,
            "partly advanced rejected private probe does not leak");
}
void modeBudget() {
    xboxDrawRecordReset();
    const uint32_t caller = 0x8000u, begin = 0x10000u, payload = 0x200000u;
    tag(caller, 5u, 0u, begin);
    tag(begin, 3u, Chain::kMaxBytes / 16u, payload);
    tag(begin + 16u, 6u, 0u, 0u);
    xboxDrawRecordNotePrecalc(ram.data(), caller);
    Expected want{begin, {{payload, Chain::kMaxBytes}}};
    require(!consume(begin + 8u, want) && want.calls == 0u, "extra TTE bytes exceed one mode's budget");
    require(consume(payload, want), "TTE budget failure does not remove valid payload-only origin");
}
void rejectedAndUnlinked() {
    xboxDrawRecordReset();
    const uint32_t a = 0x10000u, b = 0x10040u, shared = 0x50000u;
    refs(a, shared, 0x60000u); refs(b, shared, 0x60040u);
    xboxDrawRecordNoteRefs(ram.data(), a, a + 32u, 0u);
    xboxDrawRecordNoteRefs(ram.data(), b, b + 32u, 1u);
    Expected absent = expected(0x14000u, shared, 0x90000u, false);
    require(!consume(shared, absent), "all callbacks can decline");
    Expected second = expected(b, shared, 0x60040u, false);
    require(consume(shared, second), "consumer rejection never memoizes pointer-only miss");
    xboxDrawRecordReset();
    xboxDrawRecordNoteRefs(ram.data(), a, a + 32u, 0u);
    xboxDrawRecordNoteRefs(ram.data(), b, b + 32u, 1u);
    word(a, 5u << 28u); // invalidates and unlinks the original cursor/head
    XboxDrawRecordStats before{}, after{};
    require(xboxDrawRecordGetStats(before), "unlink stats before");
    absent.calls = 0u;
    require(!consume(shared, absent), "changed head origin declines");
    require(absent.calls == 1u, "remaining hint visited once after head unlinks");
    require(xboxDrawRecordGetStats(after) && after.candidateLimits == before.candidateLimits,
            "unlink does not spin into candidate cap");
}
void boundsAndChanges() {
    xboxDrawRecordReset();
    const uint32_t begin = 0x10000u, first = 0x50000u, second = 0x60000u;
    refs(begin, first, second);
    Expected want = expected(begin, first, second, false);
    for (uint32_t end : {begin, begin - 16u, begin + 513u, begin + 528u})
        xboxDrawRecordNoteRefs(ram.data(), begin, end, 0u);
    xboxDrawRecordNoteRefs(ram.data(), begin + 1u, begin + 32u, 0u);
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 3u);
    require(!consume(first, want) && want.calls == 0u, "invalid span observations never admit");
    tag(begin + 16u, 1u, 1u, second);
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
    require(!consume(first, want) && want.calls == 0u, "linear REF descriptor rejects control/inline tags");
    refs(begin, first, second);
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
    require(consume(first, want), "valid REF span after fresh Note");
    word(begin + 20u, second + 0x100u);
    Expected changed = expected(begin, first, second + 0x100u, false);
    require(!consume(first, changed) && changed.calls == 0u, "changed resident leaf declines once");
    require(consume(first, changed), "unchanged first REF permits later live reconstruction");
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + 16u, 0u);
    Expected shorter{begin, {{first, 16u}}};
    require(consume(first, shorter), "changed explicit end cannot inherit old span");
    xboxDrawRecordReset();
    refs(begin, first, second); word(begin, 3u << 28u);
    xboxDrawRecordNoteRefs(ram.data(), begin, begin + 32u, 0u);
    Expected zeroLeading{begin, {{second, 16u}}};
    require(!consume(second, zeroLeading) && zeroLeading.calls == 0u,
            "zero-QWC leading tag has no guessed payload entry");
}
void disabled() {
    refs(0x10000u, 0x50000u, 0x60000u);
    xboxDrawRecordNoteRefs(ram.data(), 0x10000u, 0x10020u, 0u);
    Expected want = expected(0x10000u, 0x50000u, 0x60000u, false);
    require(!consume(0x50000u, want) && want.calls == 0u, "disabled REF path");
}
}
int main(int argc, char **argv) {
    require(argc == 2, "one probe name required");
    const std::string name = argv[1];
    if (name == "ref_modes") refModes();
    else if (name == "call_modes") callModes();
    else if (name == "shared") sharedStarts();
    else if (name == "cap") capProgress();
    else if (name == "collision") collisions();
    else if (name == "fresh_probe") freshProbe();
    else if (name == "mode_budget") modeBudget();
    else if (name == "reject") rejectedAndUnlinked();
    else if (name == "bounds") boundsAndChanges();
    else if (name == "disabled") disabled();
    else require(false, "unknown probe");
    std::cout << "ok " << name << '\n';
}
'''


class DrawRecordRefRuntimeTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        compiler = shlex.split(os.environ.get('CXX', 'c++'))
        if not compiler or shutil.which(compiler[0]) is None:
            raise unittest.SkipTest('host C++ compiler unavailable')
        cls.directory = tempfile.TemporaryDirectory(prefix='ts-ref-probe-')
        directory = Path(cls.directory.name)
        source = directory / 'probe.cpp'
        source.write_text(REF_PROBE)
        cls.probes = {}
        for enabled in (0, 1):
            output = directory / f'probe-{enabled}'
            command = compiler + ['-std=c++17', '-O2', '-Wall', '-Wextra', '-Werror',
                                  f'-DTS_DRAW_RECORDS={enabled}', '-I', str(XBOX)]
            command += shlex.split(os.environ.get('TS_DRAW_RECORD_CXXFLAGS', ''))
            subprocess.run(command + [str(source), str(XBOX / 'xbox_draw_record.cpp'),
                                       '-o', str(output)], check=True)
            cls.probes[enabled] = output

    @classmethod
    def tearDownClass(cls):
        cls.directory.cleanup()

    def test_ref_transport_variants_and_live_payloads(self):
        self.run_probe('ref_modes')

    def test_call_transport_and_changed_initial_payload(self):
        self.run_probe('call_modes')

    def test_shared_start_order_eviction_and_non_list_order(self):
        self.run_probe('shared')

    def test_candidate_cap_advances_without_effects(self):
        self.run_probe('cap')

    def test_tte_payload_address_collision_and_mode_toggle(self):
        self.run_probe('collision')

    def test_rejected_callback_and_unlinked_head_do_not_stick(self):
        self.run_probe('reject')

    def test_partial_private_probe_is_fresh_for_the_next_candidate(self):
        self.run_probe('fresh_probe')

    def test_one_transport_budget_failure_retains_the_other(self):
        self.run_probe('mode_budget')

    def test_span_bounds_mutation_and_zero_qwc(self):
        self.run_probe('bounds')

    def test_disabled_ref_observation(self):
        self.run_probe('disabled', 0)

    def run_probe(self, name, enabled=1):
        result = subprocess.run([str(self.probes[enabled]), name], capture_output=True,
                                text=True, timeout=20)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == '__main__':
    unittest.main()
