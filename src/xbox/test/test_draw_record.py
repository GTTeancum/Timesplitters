"""Source-authored probes for Xbox draw-record metadata and VIF execution.

These probes are reserved for the later verification stage. Running this file
compiles a host helper; it does not build or execute an Xbox title, render a
frame, establish game coverage, or measure performance.
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


XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]


PRODUCER_PROBE = r'''
#include "xbox_draw_record.h"
#include <algorithm>
#include <array>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

#define CHECK(condition) do { if (!(condition)) { \
    std::cerr << "check failed at " << __LINE__ << ": " #condition "\n"; \
    return false; } } while (0)

namespace {
constexpr uint32_t call = 0x1000u, chain = 0x2000u, external = 0x4000u;
std::vector<uint8_t> ram(XboxDrawRecordChain::kRamBytes);
uint32_t callbacks = 0;

void word(uint32_t address, uint32_t value) {
    std::memcpy(ram.data() + address, &value, sizeof(value));
}

void tag(uint32_t address, uint32_t low, uint32_t target,
         uint32_t vif0 = 0u, uint32_t vif1 = 0u) {
    word(address, low); word(address + 4u, target);
    word(address + 8u, vif0); word(address + 12u, vif1);
}

void fixture() {
    xboxDrawRecordReset();
    callbacks = 0;
    std::fill(ram.begin() + call, ram.begin() + call + 16u, 0);
    std::fill(ram.begin() + chain, ram.begin() + chain + 1024u, 0);
    std::fill(ram.begin() + external, ram.begin() + external + 128u, 0);
    tag(call, 0x50000000u, chain);
    tag(chain, 0x30000002u, external, 0x11111111u, 0x22222222u);
    tag(chain + 16u, 0x10000001u, 0u, 0x33333333u, 0x44444444u);
    tag(chain + 48u, 0x60000001u, 0u, 0x55555555u, 0x66666666u);
    for (uint32_t i = 0; i < 32u; ++i) ram[external + i] = uint8_t(i + 11u);
    for (uint32_t i = 0; i < 16u; ++i) {
        ram[chain + 32u + i] = uint8_t(i + 55u);
        ram[chain + 64u + i] = uint8_t(i + 87u);
    }
}

bool inspect(const XboxDrawRecordChain &record, const uint8_t *currentRam, void *) {
    ++callbacks;
    CHECK(currentRam == ram.data());
    CHECK(record.callAddress == call && record.chainAddress == chain);
    CHECK(record.tagCount == 3u && record.pieceCount == 6u && record.totalBytes == 88u);
    constexpr std::array<std::array<uint32_t, 2>, 6> pieces{{
        {{chain + 8u, 8u}}, {{external, 32u}},
        {{chain + 24u, 8u}}, {{chain + 32u, 16u}},
        {{chain + 56u, 8u}}, {{chain + 64u, 16u}}
    }};
    for (uint32_t i = 0; i < pieces.size(); ++i) {
        CHECK(record.pieces[i].offset == pieces[i][0]);
        CHECK(record.pieces[i].bytes == pieces[i][1]);
    }
    return true;
}

bool admitted() {
    return xboxDrawRecordWithChain(ram.data(), ram.data() + chain + 8u, &inspect, nullptr);
}

bool identityAndPayload() {
    fixture();
    CHECK(!admitted() && callbacks == 0u);
    const std::array<uint8_t, 16> originalCall = [] {
        std::array<uint8_t, 16> bytes{};
        std::memcpy(bytes.data(), ram.data() + call, bytes.size());
        return bytes;
    }();
    xboxDrawRecordNotePrecalc(ram.data(), call);
    CHECK(std::memcmp(originalCall.data(), ram.data() + call, originalCall.size()) == 0);
    CHECK(admitted() && callbacks == 1u);
    // Mutable vertex/color payload does not invalidate structural identity.
    ram[external] ^= 0xA7u;
    ram[chain + 32u] ^= 0x6Bu;
    CHECK(admitted() && callbacks == 2u);
    const uint8_t expected = ram[external];
    auto live = [](const XboxDrawRecordChain &record, const uint8_t *current, void *opaque) {
        ++callbacks;
        return current[record.pieces[1].offset] == *static_cast<uint8_t *>(opaque);
    };
    uint8_t wanted = expected;
    CHECK(xboxDrawRecordWithChain(ram.data(), ram.data() + chain + 8u, live, &wanted));
    CHECK(callbacks == 3u);
    // The original append sequence is retained, including adjacent TTE/data.
    CHECK(admitted());
    return true;
}

bool changedMetadata() {
    for (uint32_t address : {call, call + 4u, call + 8u, call + 12u,
                             chain, chain + 4u, chain + 8u, chain + 12u,
                             chain + 16u, chain + 48u}) {
        fixture();
        xboxDrawRecordNotePrecalc(ram.data(), call);
        CHECK(admitted());
        const uint32_t before = callbacks;
        ram[address] ^= 1u;
        CHECK(!admitted() && callbacks == before);
        if (address >= call && address < call + 16u) {
            // Caller invalidation retires the observation itself. Restoring
            // the bytes cannot resurrect it without a new producer Note.
            ram[address] ^= 1u;
            CHECK(!admitted() && callbacks == before);
            xboxDrawRecordNotePrecalc(ram.data(), call);
            CHECK(admitted() && callbacks == before + 1u);
        }
    }
    fixture();
    xboxDrawRecordNotePrecalc(ram.data(), call);
    xboxDrawRecordReset();
    CHECK(!admitted() && callbacks == 0u);
    return true;
}

bool unsupported() {
    // IRQ and nested/terminating control flow cannot be silently flattened.
    for (uint32_t low : {0xB0000002u, 0x20000000u, 0x50000000u, 0x70000000u, 0u}) {
        fixture(); word(chain, low);
        xboxDrawRecordNotePrecalc(ram.data(), call);
        CHECK(!admitted() && callbacks == 0u);
    }
    for (uint32_t target : {0x70000000u, 0x20004000u,
                            XboxDrawRecordChain::kRamBytes - 16u}) {
        fixture(); word(chain + 4u, target);
        xboxDrawRecordNotePrecalc(ram.data(), call);
        CHECK(!admitted() && callbacks == 0u);
    }
    for (uint32_t low : {0x50000001u, 0xD0000000u, 0x10000000u}) {
        fixture(); word(call, low);
        xboxDrawRecordNotePrecalc(ram.data(), call);
        CHECK(!admitted() && callbacks == 0u);
    }
    fixture(); word(call + 4u, chain + 1u);
    xboxDrawRecordNotePrecalc(ram.data(), call);
    CHECK(!admitted() && callbacks == 0u);
    fixture(); word(chain, 0x3000FFFFu); // Exceeds bounded descriptor byte budget.
    xboxDrawRecordNotePrecalc(ram.data(), call);
    CHECK(!admitted() && callbacks == 0u);
    fixture();
    for (uint32_t i = 0; i < XboxDrawRecordChain::kMaxTags; ++i)
        tag(chain + i * 16u, 0x30000000u, 0u);
    xboxDrawRecordNotePrecalc(ram.data(), call); // No RET within the bound.
    CHECK(!admitted() && callbacks == 0u);
    return true;
}

bool invalidInputs() {
    fixture();
    xboxDrawRecordNotePrecalc(nullptr, call);
    xboxDrawRecordNotePrecalc(ram.data(), XboxDrawRecordChain::kRamBytes - 8u);
    xboxDrawRecordNotePrecalc(ram.data(), call + 1u);
    CHECK(!admitted() && callbacks == 0u);
    xboxDrawRecordNotePrecalc(ram.data(), call);
    CHECK(!xboxDrawRecordWithChain(nullptr, ram.data() + chain + 8u, &inspect, nullptr));
    CHECK(!xboxDrawRecordWithChain(ram.data(), nullptr, &inspect, nullptr));
    CHECK(!xboxDrawRecordWithChain(ram.data(), ram.data() + chain + 8u, nullptr, nullptr));
    CHECK(!xboxDrawRecordWithChain(ram.data(), ram.data() + 0x3000u, &inspect, nullptr));
    CHECK(callbacks == 0u);
    return true;
}

bool leaseAndRejection() {
    fixture();
    xboxDrawRecordNotePrecalc(ram.data(), call);
    auto nested = [](const XboxDrawRecordChain &record, const uint8_t *current, void *) {
        ++callbacks;
        const uint64_t generation = record.generation;
        const uint32_t before = callbacks;
        const bool inner = xboxDrawRecordWithChain(current, current + chain + 8u, &inspect, nullptr);
        return !inner && callbacks == before && record.generation == generation &&
               record.pieces[1].offset == external;
    };
    CHECK(xboxDrawRecordWithChain(ram.data(), ram.data() + chain + 8u, nested, nullptr));
    CHECK(callbacks == 1u);
    auto reject = [](const XboxDrawRecordChain &, const uint8_t *, void *) {
        ++callbacks;
        return false;
    };
    CHECK(!xboxDrawRecordWithChain(ram.data(), ram.data() + chain + 8u, reject, nullptr));
    CHECK(callbacks == 2u);
    CHECK(admitted() && callbacks == 3u); // Consumer rejection does not erase valid metadata.
    return true;
}

bool memoryOwner() {
    fixture();
    xboxDrawRecordNotePrecalc(ram.data(), call);
    std::vector<uint8_t> other = ram;
    CHECK(!xboxDrawRecordWithChain(other.data(), other.data() + chain + 8u, &inspect, nullptr));
    CHECK(callbacks == 0u);
    auto inspectOwner = [](const XboxDrawRecordChain &record, const uint8_t *current, void *owner) {
        ++callbacks;
        return current == owner && record.chainAddress == chain;
    };
    xboxDrawRecordNotePrecalc(other.data(), call);
    CHECK(xboxDrawRecordWithChain(other.data(), other.data() + chain + 8u, inspectOwner, other.data()));
    CHECK(callbacks == 1u);
    return true;
}

bool pointerIdentity() {
    fixture();
    xboxDrawRecordNotePrecalc(ram.data(), call);
    // Observation is cheap. The first TTE builds a resident descriptor;
    // later command boundaries may then reuse its interior source pieces.
    CHECK(admitted() && callbacks == 1u);
    // Decoder prefixes may begin after an earlier MSCAL inside a raw piece.
    CHECK(xboxDrawRecordWithChain(ram.data(), ram.data() + external + 4u, &inspect, nullptr));
    CHECK(callbacks == 2u);
    fixture();
    // The first TTE bytes also occur in the REF payload. Source-pointer
    // identity alone cannot pick one logical occurrence of this address.
    word(chain + 4u, chain + 8u);
    xboxDrawRecordNotePrecalc(ram.data(), call);
    CHECK(!admitted() && callbacks == 0u);
    return true;
}

bool exactLimits() {
    fixture();
    for (uint32_t i = 0; i < XboxDrawRecordChain::kMaxTags; ++i)
        tag(chain + i * 16u, i + 1u == XboxDrawRecordChain::kMaxTags ? 0x60000000u : 0x30000000u, 0u);
    xboxDrawRecordNotePrecalc(ram.data(), call);
    auto checkBound = [](const XboxDrawRecordChain &record, const uint8_t *, void *) {
        ++callbacks;
        return record.tagCount == XboxDrawRecordChain::kMaxTags &&
               record.pieceCount == XboxDrawRecordChain::kMaxTags &&
               record.totalBytes == XboxDrawRecordChain::kMaxTags * 8u;
    };
    CHECK(xboxDrawRecordWithChain(ram.data(), ram.data() + chain + 8u, checkBound, nullptr));
    CHECK(callbacks == 1u);
    return true;
}

bool sharedDbufOrigin() {
    fixture();
    xboxDrawRecordNotePrecalc(ram.data(), call);
    uint64_t firstGeneration = 0u;
    auto remember = [](const XboxDrawRecordChain &record, const uint8_t *, void *opaque) {
        *static_cast<uint64_t *>(opaque) = record.generation;
        return true;
    };
    CHECK(xboxDrawRecordWithChain(ram.data(), ram.data() + chain + 8u, remember, &firstGeneration));
    constexpr uint32_t secondCall = call + 0x100u;
    tag(secondCall, 0x50000000u, chain);
    xboxDrawRecordNoteDbuf(ram.data(), secondCall);
    ram[external] = 0xEAu; // An instance relights its mutable payload in place.
    auto reused = [](const XboxDrawRecordChain &record, const uint8_t *current, void *opaque) {
        ++callbacks;
        return record.callAddress == secondCall && record.chainAddress == chain &&
               record.generation == *static_cast<uint64_t *>(opaque) &&
               current[record.pieces[1].offset] == 0xEAu;
    };
    CHECK(xboxDrawRecordWithChain(ram.data(), ram.data() + chain + 8u, reused, &firstGeneration));
    CHECK(callbacks == 1u);
    word(secondCall + 4u, chain + 16u);
    CHECK(!xboxDrawRecordWithChain(ram.data(), ram.data() + chain + 8u, reused, &firstGeneration));
    CHECK(callbacks == 1u); // Updated provenance is rechecked before its consumer.
    return true;
}

bool changedCallerBeforeConstruction() {
    for (uint32_t address : {call, call + 4u, call + 8u, call + 12u}) {
        fixture();
        xboxDrawRecordNotePrecalc(ram.data(), call);
        // No descriptor has been constructed yet: the full observed CALL
        // must still match before its target can authorize any leaf walk.
        ram[address] ^= 1u;
        CHECK(!admitted() && callbacks == 0u);
        ram[address] ^= 1u;
        CHECK(!admitted() && callbacks == 0u); // A rejected hint stays invalid.
        xboxDrawRecordNotePrecalc(ram.data(), call);
        CHECK(admitted() && callbacks == 1u);
    }
    return true;
}

bool liveLeafBeforeConstruction() {
    fixture();
    xboxDrawRecordNotePrecalc(ram.data(), call);
    constexpr uint32_t changedPayload = external + 64u;
    word(chain + 4u, changedPayload);
    word(changedPayload, 0xEA123456u);
    // Note retained only the completed CALL. Supported leaf tags can change
    // before the first traversal; construction must inspect their live form.
    auto currentLeaf = [](const XboxDrawRecordChain &record, const uint8_t *current, void *) {
        ++callbacks;
        uint32_t value;
        std::memcpy(&value, current + changedPayload, sizeof(value));
        return record.callAddress == call && record.chainAddress == chain &&
               record.pieceCount == 6u && record.pieces[1].offset == changedPayload &&
               value == 0xEA123456u;
    };
    CHECK(xboxDrawRecordWithChain(ram.data(), ram.data() + chain + 8u, currentLeaf, nullptr));
    CHECK(callbacks == 1u);
    return true;
}

bool liveLeafRebuildAfterDecline() {
    fixture();
    xboxDrawRecordNotePrecalc(ram.data(), call);
    uint64_t oldGeneration = 0u;
    auto remember = [](const XboxDrawRecordChain &record, const uint8_t *, void *opaque) {
        ++callbacks;
        *static_cast<uint64_t *>(opaque) = record.generation;
        return true;
    };
    CHECK(xboxDrawRecordWithChain(ram.data(), ram.data() + chain + 8u, remember, &oldGeneration));
    CHECK(callbacks == 1u);
    constexpr uint32_t changedPayload = external + 64u;
    word(changedPayload, 0xDEADBEEFu);
    word(chain + 4u, changedPayload); // Supported REF now points to different live data.
    CHECK(!admitted() && callbacks == 1u);
    // The stale descriptor declined before its callback. Its original CALL
    // is still exact, so a later lookup may construct a new live descriptor
    // without requiring the producer to assemble this CALL a second time.
    auto refreshed = [](const XboxDrawRecordChain &record, const uint8_t *current, void *opaque) {
        ++callbacks;
        uint32_t value;
        std::memcpy(&value, current + changedPayload, sizeof(value));
        return record.generation != *static_cast<uint64_t *>(opaque) &&
               record.callAddress == call && record.chainAddress == chain &&
               record.tagCount == 3u && record.pieceCount == 6u && record.totalBytes == 88u &&
               record.pieces[1].offset == changedPayload && record.pieces[1].bytes == 32u &&
               value == 0xDEADBEEFu;
    };
    CHECK(xboxDrawRecordWithChain(ram.data(), ram.data() + chain + 8u, refreshed, &oldGeneration));
    CHECK(callbacks == 2u);
    return true;
}

bool longObservedList() {
    fixture();
    constexpr uint32_t count = 24u, calls = 0x8000u, targets = 0x10000u;
    // A list can contain more observed leaves than the small resident
    // descriptor cache. Its earliest CALL must still be eligible when
    // traversal finally begins, and after other leaves evict its plan.
    for (uint32_t i = 0; i < count; ++i) {
        tag(calls + i * 16u, 0x50000000u, targets + i * 32u);
        tag(targets + i * 32u, 0x60000001u, 0u);
        word(targets + i * 32u + 16u, 0xABC00000u + i);
        xboxDrawRecordNotePrecalc(ram.data(), calls + i * 16u);
    }
    word(targets + 16u, 0xDEADBEEFu); // Live payload may change before the first traversal.
    struct Expected { uint32_t caller, target, payload; } expected{};
    auto inspectLeaf = [](const XboxDrawRecordChain &record, const uint8_t *current, void *opaque) {
        ++callbacks;
        const auto &wanted = *static_cast<Expected *>(opaque);
        uint32_t live;
        std::memcpy(&live, current + wanted.target + 16u, sizeof(live));
        return record.callAddress == wanted.caller && record.chainAddress == wanted.target &&
               record.generation != 0u && record.tagCount == 1u && record.pieceCount == 2u &&
               record.totalBytes == 24u && record.pieces[0].offset == wanted.target + 8u &&
               record.pieces[0].bytes == 8u && record.pieces[1].offset == wanted.target + 16u &&
               record.pieces[1].bytes == 16u && live == wanted.payload;
    };
    for (uint32_t i = 0; i < count; ++i) {
        expected = {calls + i * 16u, targets + i * 32u, i ? 0xABC00000u + i : 0xDEADBEEFu};
        CHECK(xboxDrawRecordWithChain(ram.data(), ram.data() + expected.target + 8u,
                                      inspectLeaf, &expected));
    }
    CHECK(callbacks == count);
    expected = {calls, targets, 0xDEADBEEFu};
    CHECK(xboxDrawRecordWithChain(ram.data(), ram.data() + targets + 8u, inspectLeaf, &expected));
    CHECK(callbacks == count + 1u);
    return true;
}

bool disabled() {
    fixture();
    xboxDrawRecordNotePrecalc(ram.data(), call);
    CHECK(!admitted() && callbacks == 0u);
    return true;
}
} // namespace

int main(int argc, char **argv) {
    if (argc != 2) return 2;
    const std::string mode = argv[1];
    bool passed = false;
    if (mode == "identity") passed = identityAndPayload();
    else if (mode == "changed") passed = changedMetadata();
    else if (mode == "unsupported") passed = unsupported();
    else if (mode == "invalid") passed = invalidInputs();
    else if (mode == "lease") passed = leaseAndRejection();
    else if (mode == "owner") passed = memoryOwner();
    else if (mode == "pointer") passed = pointerIdentity();
    else if (mode == "limits") passed = exactLimits();
    else if (mode == "dbuf") passed = sharedDbufOrigin();
    else if (mode == "lazy_changed") passed = changedCallerBeforeConstruction();
    else if (mode == "lazy_live_leaf") passed = liveLeafBeforeConstruction();
    else if (mode == "leaf_refresh") passed = liveLeafRebuildAfterDecline();
    else if (mode == "long_list") passed = longObservedList();
    else if (mode == "disabled") passed = disabled();
    else return 2;
    return passed ? 0 : 1;
}
'''


class DrawRecordProducerTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        command = shlex.split(os.environ.get("CXX", "c++"))
        if not command or not shutil.which(command[0]):
            raise unittest.SkipTest("requires a host C++ compiler")
        cls.temporary = tempfile.TemporaryDirectory()
        root = Path(cls.temporary.name)
        source = root / "producer_probe.cpp"
        source.write_text(PRODUCER_PROBE)
        cls.probe = root / "producer_probe"
        command += ["-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror", "-DTS_DRAW_RECORDS=1",
                    "-I", str(XBOX)]
        command += shlex.split(os.environ.get("TS_DRAW_RECORD_CXXFLAGS", ""))
        subprocess.run(command + [str(source), str(XBOX / "xbox_draw_record.cpp"),
                                  "-o", str(cls.probe)], check=True)
        cls.disabled_probe = root / "producer_disabled_probe"
        disabled_command = ["-DTS_DRAW_RECORDS=0" if arg == "-DTS_DRAW_RECORDS=1" else arg
                            for arg in command]
        subprocess.run(disabled_command + [str(source), str(XBOX / "xbox_draw_record.cpp"),
                                           "-o", str(cls.disabled_probe)], check=True)

    @classmethod
    def tearDownClass(cls):
        if hasattr(cls, "temporary"):
            cls.temporary.cleanup()

    def run_probe(self, mode):
        result = subprocess.run([str(self.probe), mode], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        self.assertEqual(result.stderr, "", result.stderr)

    def test_identity_and_live_payload(self):
        self.run_probe("identity")

    def test_changed_metadata_and_reset(self):
        self.run_probe("changed")

    def test_unsupported_leaves(self):
        self.run_probe("unsupported")

    def test_invalid_inputs(self):
        self.run_probe("invalid")

    def test_nonblocking_lease_and_consumer_rejection(self):
        self.run_probe("lease")

    def test_ram_owner_identity(self):
        self.run_probe("owner")

    def test_unique_pointer_occurrence_inside_raw_pieces(self):
        self.run_probe("pointer")

    def test_inclusive_tag_limit(self):
        self.run_probe("limits")

    def test_shared_chain_and_mutable_dbuf_payload(self):
        self.run_probe("dbuf")

    def test_changed_caller_before_lazy_leaf_construction(self):
        self.run_probe("lazy_changed")

    def test_first_leaf_construction_uses_live_tags_after_observation(self):
        self.run_probe("lazy_live_leaf")

    def test_changed_leaf_declines_before_later_live_reconstruction(self):
        self.run_probe("leaf_refresh")

    def test_observed_list_outlives_the_resident_descriptor_capacity(self):
        self.run_probe("long_list")

    def test_disabled_route(self):
        result = subprocess.run([str(self.disabled_probe), "disabled"], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        self.assertEqual(result.stderr, "", result.stderr)


VIF_PROBE = r'''
#include "xbox_vif_record.h"
#include "runtime/ps2_memory.h"
#include <algorithm>
#include <array>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

#define CHECK(condition) do { if (!(condition)) { \
    std::cerr << "check failed at " << __LINE__ << ": " #condition "\n"; \
    return false; } } while (0)

namespace {
constexpr uint32_t sourceBase = 0x6000u;
std::vector<uint8_t> ram(XboxDrawRecordChain::kRamBytes);
std::array<uint8_t, 16384> vu;
XboxDrawRecordChain chain{};
VIFRegisters registers{};

struct Span { uint32_t address, bytes; };
struct Observation { uint32_t dest, vectors, format, cl, wl, mode; const uint8_t *source; };
struct Probe {
    std::vector<Span> pieces;
    std::vector<Observation> observations;
    uint32_t piece = 0, offset = 0;
    bool observerBeforeWrite = true;
};

void put(uint32_t address, uint32_t value) {
    std::memcpy(ram.data() + address, &value, sizeof(value));
}
void putVu(std::array<uint8_t, 16384> &target, uint32_t row, uint32_t lane, uint32_t value) {
    std::memcpy(target.data() + row * 16u + lane * 4u, &value, sizeof(value));
}
void seed(const std::vector<uint32_t> &words) {
    for (uint32_t i = 0; i < words.size(); ++i) put(sourceBase + i * 4u, words[i]);
    std::array<uint32_t, 23> state{};
    for (uint32_t i = 0; i < state.size(); ++i) state[i] = 0x12340000u + i * 17u;
    std::memcpy(&registers, state.data(), sizeof(registers));
    registers.cycle = 0x101u; registers.mode = 0u;
    registers.stat = 0x12340080u; registers.tops = 200u;
    vu.fill(0xA5u);
    chain = {};
    chain.chainAddress = sourceBase - 8u;
    chain.callAddress = 0x1000u;
    chain.generation = 1u;
    chain.pieceCount = chain.tagCount = 1u;
    chain.totalBytes = uint32_t(words.size()) * 4u;
    chain.pieces[0] = {sourceBase, chain.totalBytes};
}
Probe probe() {
    Probe result;
    result.pieces.push_back({sourceBase, chain.totalBytes});
    return result;
}
bool match(void *opaque, const uint8_t *source, uint32_t bytes) {
    auto &p = *static_cast<Probe *>(opaque);
    while (p.piece < p.pieces.size() && p.offset == p.pieces[p.piece].bytes) {
        ++p.piece; p.offset = 0;
    }
    if (p.piece == p.pieces.size()) return false;
    const Span span = p.pieces[p.piece];
    if (source != ram.data() + span.address + p.offset || bytes > span.bytes - p.offset)
        return false;
    p.offset += bytes;
    return true;
}
void observe(void *opaque, uint32_t dest, const uint8_t *source, uint32_t vectors,
             uint32_t format, uint32_t cl, uint32_t wl, uint32_t mode) {
    auto &p = *static_cast<Probe *>(opaque);
    p.observations.push_back({dest, vectors, format, cl, wl, mode, source});
    // These fixtures write each destination once. The observer must receive
    // its source identity before the corresponding VU rows are overwritten.
    for (uint32_t lane = 0; lane < 16u; ++lane)
        if (vu[dest * 16u + lane] != 0xA5u) p.observerBeforeWrite = false;
}
bool run(Probe &p, uint32_t &bytes, uint32_t &vectors, uint32_t &commands) {
    return xboxVifRecordTryPrefix(chain, ram.data(), ram.data() + sourceBase,
                                  registers, vu.data(), &match, &observe, &p,
                                  bytes, vectors, commands);
}
bool unchangedRejection(Probe &p) {
    const VIFRegisters before = registers;
    const auto oldVu = vu;
    uint32_t bytes = 99u, vectors = 99u, commands = 99u;
    CHECK(!run(p, bytes, vectors, commands));
    CHECK(bytes == 0u && vectors == 0u && commands == 0u);
    CHECK(std::memcmp(&before, &registers, sizeof(before)) == 0);
    CHECK(vu == oldVu && p.observations.empty());
    return true;
}

bool eligibilityFilter() {
    // Controls can restore mode/cycle before a later UNPACK. Their cheap
    // eligibility therefore cannot depend on the current unsupported state.
    for (uint32_t opcode : {0x00u, 0x01u, 0x02u, 0x03u, 0x04u, 0x05u,
                            0x07u, 0x10u, 0x11u, 0x13u, 0x20u, 0x30u, 0x31u}) {
        CHECK(xboxVifRecordMayStart(opcode << 24u, 0x0201u, 1u));
        CHECK(xboxVifRecordMayStart((opcode << 24u) | 0x80000000u, 0x101u, 0u));
    }
    for (uint32_t opcode : {0x06u, 0x08u, 0x14u, 0x15u, 0x17u, 0x4Au, 0x50u, 0x51u})
        CHECK(!xboxVifRecordMayStart(opcode << 24u, 0x101u, 0u));
    for (uint32_t opcode : {0x60u, 0x64u, 0x68u, 0x6Cu}) {
        const uint32_t code = (opcode << 24u) | 0x00018007u;
        CHECK(xboxVifRecordMayStart(code, 0x101u, 0u));
        CHECK(xboxVifRecordMayStart(code | 0x80000000u, 0u, 0u));
        CHECK(xboxVifRecordMayStart(code, 0x0204u, 0u)); // CL > WL skips rows.
        CHECK(!xboxVifRecordMayStart(code, 0x0201u, 0u)); // Fill cycles decline.
        CHECK(!xboxVifRecordMayStart(code, 0x101u, 1u));
        CHECK(!xboxVifRecordMayStart(code, 0x101u, 2u));
        CHECK(!xboxVifRecordMayStart(code | 0x10000000u, 0x101u, 0u));
        for (uint32_t width : {1u, 2u, 3u})
            CHECK(!xboxVifRecordMayStart(code | (width << 24u), 0x101u, 0u));
    }
    return true;
}

bool stateAndLanes() {
    const std::vector<uint32_t> words{
        0x03000007u, 0x02000003u, 0x0400022Au, 0x87000055u,
        0x01000101u, 0x05000000u,
        0x20000000u, 0xDEADBEEFu,
        0x30000000u, 1u, 2u, 3u, 4u,
        0x31000000u, 5u, 6u, 7u, 8u,
        0x60010003u, 0x80000000u,
        0x64028010u, 11u, 12u, 13u, 14u,
        0x680103FEu, 21u, 22u, 23u,
        0x6C0203FFu, 31u, 32u, 33u, 34u, 41u, 42u, 43u, 44u,
        0x00001234u, 0x14000000u
    };
    seed(words);
    // Raw TTE and payload spans may be separate while the actual DMA reader
    // has joined their physically contiguous bytes into one source piece.
    chain.pieceCount = 3u;
    chain.pieces[0] = {sourceBase, 32u};
    chain.pieces[1] = {sourceBase + 32u, 52u};
    chain.pieces[2] = {sourceBase + 84u, chain.totalBytes - 84u};
    VIFRegisters expected = registers;
    expected.base = 7u; expected.ofst = 3u; expected.tops = 7u;
    expected.itops = 0x22Au; expected.mark = 0x55u;
    expected.stat = (expected.stat & ~(1u << 7u)) | (1u << 6u) | (1u << 11u);
    expected.cycle = 0x101u; expected.mode = 0u;
    expected.mask = 0xDEADBEEFu; expected.code = 0x1234u; expected.num = 0u;
    for (uint32_t i = 0; i < 4u; ++i) { expected.row[i] = i + 1u; expected.col[i] = i + 5u; }
    auto expectedVu = vu;
    for (uint32_t lane = 0; lane < 4u; ++lane) putVu(expectedVu, 3u, lane, 0x80000000u);
    putVu(expectedVu, 23u, 0u, 11u); putVu(expectedVu, 23u, 1u, 12u);
    putVu(expectedVu, 24u, 0u, 13u); putVu(expectedVu, 24u, 1u, 14u);
    for (uint32_t lane = 0; lane < 3u; ++lane) putVu(expectedVu, 1022u, lane, 21u + lane);
    for (uint32_t lane = 0; lane < 4u; ++lane) {
        putVu(expectedVu, 1023u, lane, 31u + lane);
        putVu(expectedVu, 0u, lane, 41u + lane);
    }
    auto p = probe();
    uint32_t bytes, vectors, commands;
    CHECK(run(p, bytes, vectors, commands));
    CHECK(bytes == chain.totalBytes - 4u && vectors == 6u && commands == 14u);
    CHECK(std::memcmp(&registers, &expected, sizeof(expected)) == 0 && vu == expectedVu);
    CHECK(p.observerBeforeWrite && p.observations.size() == 4u);
    const uint32_t destinations[]{3u, 23u, 1022u, 1023u};
    const uint32_t formats[]{0u, 4u, 8u, 12u};
    for (uint32_t i = 0; i < 4u; ++i) {
        CHECK(p.observations[i].dest == destinations[i] && p.observations[i].format == formats[i]);
        CHECK(p.observations[i].cl == 1u && p.observations[i].wl == 1u && p.observations[i].mode == 0u);
    }
    // MSCAL's DBF toggle, TOP/ITOP assignment and native callback are not
    // performed by the prefix helper; the ordinary decoder does those next.
    CHECK(registers.top == expected.top && registers.itop == expected.itop);
    return true;
}

bool liveStateAndPayload() {
    const std::vector<uint32_t> words{0x20000000u, 0x11223344u,
        0x30000000u, 1u, 2u, 3u, 4u,
        0x31000000u, 5u, 6u, 7u, 8u,
        0x6C018005u, 11u, 12u, 13u, 14u, 0x15000000u};
    seed(words);
    for (uint32_t pass = 0; pass < 2u; ++pass) {
        registers.tops = pass ? 26u : 7u;
        vu.fill(0xA5u);
        put(sourceBase + 4u, 0x11223344u + pass);
        put(sourceBase + 12u, 101u + pass);
        put(sourceBase + 32u, 201u + pass);
        put(sourceBase + 52u, 301u + pass);
        auto p = probe();
        uint32_t bytes, vectors, commands;
        CHECK(run(p, bytes, vectors, commands));
        CHECK(bytes == chain.totalBytes - 4u && vectors == 1u && commands == 4u);
        CHECK(registers.mask == 0x11223344u + pass && registers.row[0] == 101u + pass &&
              registers.col[0] == 201u + pass);
        uint32_t actual;
        std::memcpy(&actual, vu.data() + (registers.tops + 5u) * 16u, sizeof(actual));
        CHECK(actual == 301u + pass);
        CHECK(registers.code == 0x6C018005u && registers.num == 1u);
    }
    return true;
}

bool cycleSkipsAndZeroNum() {
    seed({0x01000204u, 0x640403FEu, 11u, 12u, 21u, 22u, 31u, 32u, 41u, 42u,
          0x14000000u});
    auto expected = vu;
    const uint32_t rows[]{1022u, 1023u, 2u, 3u};
    for (uint32_t i = 0; i < 4u; ++i) {
        putVu(expected, rows[i], 0u, 11u + i * 10u);
        putVu(expected, rows[i], 1u, 12u + i * 10u);
    }
    auto p = probe();
    uint32_t bytes, vectors, commands;
    CHECK(run(p, bytes, vectors, commands) && vu == expected && vectors == 4u);
    CHECK(p.observations.size() == 1u && p.observations[0].cl == 4u && p.observations[0].wl == 2u);

    std::vector<uint32_t> words{0x01000000u, 0x68000384u}; // NUM zero is 256; zero CL/WL normalize to one.
    for (uint32_t i = 0; i < 256u * 3u; ++i) words.push_back(1000u + i);
    words.push_back(0x14000000u);
    seed(words);
    expected = vu;
    for (uint32_t i = 0; i < 256u; ++i)
        for (uint32_t lane = 0; lane < 3u; ++lane)
            putVu(expected, (900u + i) & 1023u, lane, 1000u + i * 3u + lane);
    p = probe();
    CHECK(run(p, bytes, vectors, commands));
    CHECK(vu == expected && vectors == 256u && commands == 2u);
    CHECK(registers.cycle == 0u && registers.num == 0u);
    return true;
}

bool rejectBeforeEffects() {
    const std::vector<uint32_t> legal{0x6C010000u, 1u, 2u, 3u, 4u, 0x14000000u};
    for (uint32_t code : {0x7C010000u, 0x6D010000u, 0x50000001u, 0x4A010000u, 0x17000000u}) {
        seed(legal); put(sourceBase, code); auto p = probe();
        CHECK(unchangedRejection(p));
    }
    seed(legal); registers.mode = 1u; auto p = probe();
    CHECK(unchangedRejection(p));
    seed(legal); registers.cycle = 0x0201u; p = probe();
    CHECK(unchangedRejection(p));
    seed({0x6C010000u, 1u, 2u, 3u, 4u, 0x06000000u, 0x14000000u}); p = probe();
    CHECK(unchangedRejection(p)); // Earlier accepted UNPACK must not escape when a later command rejects.
    seed({0x6C010000u, 1u, 2u, 3u, 4u}); p = probe();
    CHECK(unchangedRejection(p)); // Complete payload, no terminal command.
    seed(legal); p = probe();
    p.pieces = {{sourceBase, 12u}, {sourceBase + 12u, chain.totalBytes - 12u}};
    CHECK(unchangedRejection(p)); // Actual reader splits the UNPACK payload, even though addresses adjoin.
    seed(legal); p = probe(); p.pieces[0].bytes -= 4u;
    CHECK(unchangedRejection(p)); // Terminal MSCAL must be present in the live stream too.
    seed({0x01000101u, 0x14000000u}); p = probe();
    CHECK(unchangedRejection(p)); // No UNPACK offers no useful record prefix.
    return true;
}

bool changedCommands() {
    seed({0x6C010000u, 1u, 2u, 3u, 4u, 0x14000000u});
    auto p = probe(); uint32_t bytes, vectors, commands;
    CHECK(run(p, bytes, vectors, commands));
    vu.fill(0xA5u); put(sourceBase + 20u, 0x06000000u); p = probe();
    CHECK(unchangedRejection(p)); // Cached terminal command cannot authorize a changed path-mask write.
    put(sourceBase + 20u, 0x14000000u);
    put(sourceBase, 0x7C010000u); p = probe();
    CHECK(unchangedRejection(p)); // Cached UNPACK cannot hide a newly enabled mask.
    return true;
}
} // namespace

int main(int argc, char **argv) {
    if (argc != 2) return 2;
    const std::string mode = argv[1];
    bool passed = false;
    if (mode == "filter") passed = eligibilityFilter();
    else if (mode == "state") passed = stateAndLanes();
    else if (mode == "live") passed = liveStateAndPayload();
    else if (mode == "cycles") passed = cycleSkipsAndZeroNum();
    else if (mode == "reject") passed = rejectBeforeEffects();
    else if (mode == "changed") passed = changedCommands();
    else return 2;
    return passed ? 0 : 1;
}
'''


class DrawRecordVifTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        command = shlex.split(os.environ.get("CXX", "c++"))
        if not command or not shutil.which(command[0]):
            raise unittest.SkipTest("requires a host C++ compiler")
        cls.temporary = tempfile.TemporaryDirectory()
        root = Path(cls.temporary.name)
        source = root / "vif_probe.cpp"
        source.write_text(VIF_PROBE)
        cls.probe = root / "vif_probe"
        command += ["-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror", "-DTS_DRAW_RECORDS=1",
                    "-I", str(XBOX), "-I", str(ROOT / "source/PS2Recomp/ps2xRuntime/include")]
        command += shlex.split(os.environ.get("TS_DRAW_RECORD_CXXFLAGS", ""))
        subprocess.run(command + [str(source), str(XBOX / "xbox_vif_record.cpp"),
                                  "-o", str(cls.probe)], check=True)

    @classmethod
    def tearDownClass(cls):
        if hasattr(cls, "temporary"):
            cls.temporary.cleanup()

    def run_probe(self, mode):
        result = subprocess.run([str(self.probe), mode], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        self.assertEqual(result.stderr, "", result.stderr)

    def test_full_register_state_lane_preservation_and_wrap(self):
        self.run_probe("state")

    def test_cheap_candidate_filter_keeps_control_and_unpack_semantics(self):
        self.run_probe("filter")

    def test_cached_commands_read_current_state_and_payload(self):
        self.run_probe("live")

    def test_cycle_skips_zero_cycle_and_zero_num(self):
        self.run_probe("cycles")

    def test_rejected_prefixes_have_no_guest_effects(self):
        self.run_probe("reject")

    def test_changed_command_words_and_terminal_invalidate_plan(self):
        self.run_probe("changed")


def load_tool(name):
    spec = importlib.util.spec_from_file_location(name, XBOX / "tools" / (name + ".py"))
    module = importlib.util.module_from_spec(spec)
    sys.path.insert(0, str(XBOX / "tools"))
    try:
        spec.loader.exec_module(module)
    finally:
        sys.path.pop(0)
    return module


class DrawRecordPatcherTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.game = load_tool("patch_draw_record_game")
        cls.vif = load_tool("patch_vif_record")
        cls.bg = load_tool("patch_bg_runtime")
        cls.fast = load_tool("patch_vif_fast")
        cls.calls = load_tool("patch_native_calls")

    def test_producer_changes_only_the_two_completed_call_observations(self):
        original = (ROOT / "project/game/ts_native_game2.cpp").read_text()
        result = self.game.patch_source(original)
        self.assertEqual(result.count("xboxDrawRecordNotePrecalc("), 1)
        self.assertEqual(result.count("xboxDrawRecordNoteDbuf("), 1)
        restored = result.removeprefix(self.game.GENERATED)
        restored = restored.replace(self.game.INCLUDE + self.game.ADAPTER, self.game.INCLUDE)
        restored = restored.replace(self.game.OBSERVE, "").replace(self.game.OBSERVE_DBUF, "")
        self.assertEqual(restored, original)
        slots = {int(match["target"][:-1], 16): index
                 for index, match in enumerate(self.calls.CALL.finditer(original))}
        composed = self.calls.patch_source(result, "ts_native_game2.cpp", slots)
        self.assertIn("xboxDrawRecordNotePrecalc(", composed)
        self.assertIn("xboxDrawRecordNoteDbuf(", composed)
        self.assertIn("xboxNativeGuestCall<", composed)

    def test_consumer_composes_with_all_bg_and_fast_modes_without_changing_original_execution(self):
        original = (ROOT / "source/PS2Recomp/ps2xRuntime/src/lib/ps2_vif1_interpreter.cpp").read_text()
        for background in (False, True):
            for fast in (False, True):
                with self.subTest(background=background, fast=fast):
                    source = self.bg.patch_source("vif", original) if background else original
                    if fast:
                        source = self.fast.patch_source(source)
                    result = self.vif.patch_source(source)
                    self.assertEqual(result.count("XboxVifRecordContext"), 2)
                    restored = result.removeprefix(self.vif.GENERATED)
                    restored = restored.replace(self.vif.INCLUDE + self.vif.ADAPTER_INCLUDE, self.vif.INCLUDE)
                    restored = restored.replace(self.vif.HOOK, "")
                    self.assertEqual(restored, source)

    def test_upstream_shape_changes_and_duplicate_insertion_fail_closed(self):
        game = (ROOT / "project/game/ts_native_game2.cpp").read_text()
        vif = (ROOT / "source/PS2Recomp/ps2xRuntime/src/lib/ps2_vif1_interpreter.cpp").read_text()
        anchors = (
            (self.game, game, (self.game.INCLUDE, self.game.PRECALC, self.game.DBUF)),
            (self.vif, vif, (self.vif.INCLUDE, self.vif.DECODE, self.vif.COMMAND,
                             self.vif.REGISTERS, self.vif.TRACK_COMMAND, self.vif.OBSERVER,
                             self.vif.MARK_FLUSH, self.vif.PAYLOAD_REGISTERS)),
        )
        for patcher, source, required in anchors:
            for anchor in required:
                for invalid in (source.replace(anchor, "// upstream shape changed", 1), source + "\n" + anchor):
                    with self.subTest(patcher=patcher.__name__, anchor=anchor[:48]), self.assertRaises(ValueError):
                        patcher.patch_source(invalid)
            with self.assertRaises(ValueError):
                patcher.patch_source(patcher.patch_source(source))


if __name__ == "__main__":
    unittest.main()
