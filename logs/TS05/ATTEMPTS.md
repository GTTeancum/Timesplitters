# TS05 work history and evidence boundaries

The actual TS04 archive was verified (CRC and 4,189 payload hashes) before editing.
Its original source and separate backup remain in the conversation. No missing
source was reconstructed for this continuation. All dependency volumes, payload
hashes and locked repositories were restored offline. `restore.log`, `install.log`
and `baseline-build.log` preserve this environment's preparation. Installation
used the supplied packages and `--no-remove`, not a network repository.

* The initial fresh TS04 build/tests passed 613 checks.
* `format-before-tests.log`: the new 60-case formatter regression ran with the
  old cursors and reported 22 passes / 38 failures. `format-after-tests.log`
  records 60 passes after the initial ABI correction.
* `format-core-build.log` failed because a low-register macro was not available
  in every translation unit. One subsequent command ran a stale 462-test binary
  (`format-core-tests.log`); it is **not** proof for the new tests. The source was
  changed to read the low 64 bits via memcpy, removing that include dependency.
* `format-core-tests2.log` was interrupted by the outer command timeout, not a
  completed suite. `format-core-tests3.log` is the completed 465-test pass.
* The 400-second `ts05-format` native candidate predates the sound-memory change
  and is separately identified by its recorded binary hash. It uses real XTEST
  input; it is not the final packaged binary. It has zero DMA failures and shows
  corrected menu text and a named bot first-kill message.
* `audio-before-tests.log`: backing sound RAM and new tests were present, but
  the old transfer stub still only acknowledged requests. Seven cases passed,
  eighteen failed. `audio-after-tests.log` reports 25 passes after implementing
  the real IOP/SPU data copies. These are memory tests, not audible-output proof.
* The 300-second `ts05-story-candidate` run is also separately hash-identified.
  It enters the original outdoor Tomb Story level and records 164 successful
  sound-memory transfers, not working voice playback.
* `clean-build.log` is a separate complete Clang 19/Ninja build. Production C++
  source was stable; native probe input schedules are external files, not code
  changes. `clean-tests.log` contains the final 705-check pass.
* Regeneration returned zero and all 2,673 generated files compare byte-for-byte.
  An attempted preservation/restoration of `project/config/runtime-paths.toml`
  failed because that derived file did not exist before generation. The generated
  temporary config was removed afterward; no original file was lost or replaced.
  The failed `cp` appears in `clean-regenerate-launch.log`, separate from the
  successful generator exit and actual byte-comparison evidence.

`frozen-before/` contains the previous cursor/transfer implementations for audit;
these files are never linked into production. Reverting those two production
files temporarily in a separate scratch copy allows the corresponding negative
component regressions to be reproduced. Do not modify a running binary.

The exact final native run and actual exit status are recorded separately in
`provenance/TS05-native-run-summary.json` after its bounded probe completes.
No FPS optimization, timer override, invincibility change, forced result, or
emulator-substitution run was performed. PCSX2 remains source reference only.

The exact final packaged binary completed both `ts05-final-story` (900 seconds) and `ts05-final-arcade` (300 seconds), returning the requested deadline code10 with no outer kill, no DMA failures and unchanged executable hashes. All key edges were delivered. See the final run summary for exact wall durations and card/counter evidence. No game process remains active after these probes.
