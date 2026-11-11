# Memory safety hardening (2026-11-10)

This work follows the source audit of `9f9b0ec`. It addresses unsafe memory
ownership and missing validation; it does **not** establish the cause of the
reported level-two music crash. No game assets were available for a gameplay
reproduction in this environment.

## Changes

- HLE kernel objects use bounded, runtime-owned allocations shared with callback
  stacks instead of hard-coded high-RAM pools. They cannot wrap over live slots.
  Storage is retained until a new ELF load; exhaustion fails rather than recycling
  an object that may still have references. This is deliberately conservative,
  not a new garbage collector.
- The Copy syscall validates both complete spans, including scratchpad bounds,
  rejects unsupported segments, and handles overlapping valid spans.
- Display-menu allocation failure stops construction before a failed allocation
  is written. Current menu layouts fit; this closes an unsafe future failure path.
- Exit Game changes the footer in the copied menu (tail index 8), not the original.
- Added wording uses bounded copies in the existing host reserve and redirects
  exact table entries. Original string bytes are preserved. References that
  bypass that table retain stock wording.
- Extra White/Black text glyphs and preload hooks are removed. Written names are
  used instead. Existing PC controller/keyboard art and the seven original-Xbox
  icon replacements remain. Regenerate prepared Xbox assets from the original
  dump to remove extra artwork from an already patched image.
- Host override boundaries validate derived pointers and indexes. Xbox visibility
  uses the actual three-buffer / 72-glow limits, distinct from the two frame slots.
- Override registration resets menu/wording caches for a fresh load. This is not
  a claim of concurrent multi-runtime UI support.
- Optional boot diagnostics require a pristine scheduler and unused kernel arena,
  restore borrowed data through scoped cleanup, and use an owned libm stack.
  The ordinary boot tests were not shown to corrupt normal gameplay.

## Memory model and limits

The 16 KiB host reserve is a deliberately owned workspace, not the total free
space in the game's 32 MiB guest RAM. TimeSplitters has a much larger game-managed
arena whose free capacity depends on live gameplay. This patch does not expand
RAM, change the game's allocator, or claim arbitrary zero-filled regions.

Kernel objects now compete explicitly with callback stacks in their reserved
arena. If a title requires more than the available capacity, the allocator fails
safely. A future reclamation scheme needs reference/lifetime rules; unconditional
reuse is not acceptable.

The fixed original game layouts remain version-specific. Checks reject malformed
ranges; they cannot prove that every valid-range pointer names the intended object.
Full-session level transitions, music, menus, reloads, and real Xbox behavior still
need testing with the supported game dump.

## Validation

- Five extracted-production override harnesses passed ASan/UBSan: PC and Xbox
  original-text preservation, alias behavior, menu exhaustion, copied-footer
  sentinels, and actual Xbox frame/occlusion boundary invocations.
- Diagnostic scoped cleanup tests passed ASan/UBSan for normal, early-return,
  exception, and nested cleanup paths. LeakSanitizer was disabled because the
  test environment uses tracing; no leak-safety claim follows from these runs.
- PC and Xbox-conditional syntax checks passed, including optional native-test
  code compiled with `TS_NATIVE_MATH_SELFTEST=1`.
- Independent source review and `git diff --check` passed.

Reproduce the focused tests from the repository root:

```sh
python3 project/tests/test_override_memory.py
g++ -std=c++20 -O1 -g -fsanitize=address,undefined -fno-omit-frame-pointer \
    project/tests/test_diagnostic_scope.cpp -o /tmp/ts-diagnostic-scope
ASAN_OPTIONS=detect_leaks=0 /tmp/ts-diagnostic-scope
```

Final verification:

- Full Linux executable and runtime test executable built with Clang 18.1.8;
  final incremental build completed successfully.
- Original Xbox XBE built with official NXDK and Clang 18.1.8. XBE header verified.
- Kernel regression suite: **35/35 passed**.
- Full suite from `source/PS2Recomp`: **484/488 passed**. A separate clean
  `9f9b0ec` build passed **481/486**. The same four tests fail in both:
  `sceGsSetDefDBuffDc accepts trailing args from the recompiler register ABI`,
  `sceGsSetDefDBuffDc seeds a clear packet and swap clears the draw buffer`,
  `sceCdRead reads from explicit cdImage path`, and
  `sceCdSearchFile resolves movie filenames with zero-padded host leaf`.
  The baseline's fifth failure was its stale 32-callback-stack expectation;
  the reserved low arena holds 31 full stacks before other kernel allocations.
- No gameplay, level-two music reproduction, emulator, Windows build, or physical
  Xbox testing was performed. Linux used local dependency library paths and is
  not packaged as a portable release.

The four unchanged suite failures are recorded, not counted as passing or fixed
by this memory-safety work.
