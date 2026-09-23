# TS04 experiment classification

- Baseline: exact verified TS03 executable, bounded native180-second run;47 original DMA failures. Fresh restored TS03 build and559 checks also passed before editing.
- `chain-before-tests.log`: three new cases on the old reader; long terminating chain and cycle rejection fail (460/462 pass). Corrected reader passes462/462.
- `ts04-first-alarm`: unsuccessful GDB experiment (unavailable optimized symbol), no valid RAM capture; not gameplay proof.
- `ts04-alarm-capture`: exact TS03 native stopped at original lockup callback using its observed host register allocation; saves RAM and intentionally quits/kills the inferior. Not a normal diagnostic-deadline run. Exact historical debugger commands are labeled separately.
- Captured original lists: each4596 tags. Structural walk is inspection only. Old-reader native component replay reaches neither realSIGNAL norEND (expectedexit1); corrected replay reaches both for both lists (exit0).
- `ts04-chain-fix`: native250-second run on reader-only fix;0 DMA failures.
- Matrix isolated comparison: first link failed on omitted test-only function-table definitions; definitions were added in the isolated test harness.36 original-body cases match independent reference;36 inherited-HLE results mismatch. Test-only baseline sources are never linked into the actual game.
- `ts04-timed-match`:600-second native run before the matrix correction. Genuine bot scores and end-of-match screen;0 DMA failures. This is historical evidence for the earlier candidate, not the packaged binary.
- Clean final build: separatebuild-clean, all372 default build steps,613 checks pass. Optional before/reference test targets built afterward; no changes to the running native executable.
- `ts04-final-match`: exact packaged clean-build binary, bounded900-second run, real XTEST input and unretouched captures. Final measured results are in provenance/TS04-native-run-summary.json.
- GDB stopped-RAM snapshots, matrix reference harness, and DMA replays are explicitly component/diagnostic evidence, not alternative game execution. PCSX2 was not built/run/linked.

- `ts04-final-reload`: exact packaged native in a fresh100-second process; reads the changed47,000-byte post-match save, reaches Select Game Type, and leaves all three card files byte-identical. This confirms current updated-profile loading, not every save or original-hardware compatibility.
