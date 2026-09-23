# TS03 attempts and evidence boundaries

## Foundation

TS02's source ZIP was absent from this runtime and Library queries. TS01 ZIP CRC/all 3,188 hashes were verified; dependency volumes/payload/repositories and original game identities were verified again. Documented TS02 graphics behavior was reimplemented independently. No claim that TS02 source or its original 521-check suite was recovered verbatim.

## Failed/intermediate attempts retained

- Initial new GIF test compilation used `.prim.prim` instead of `.prim.type`; corrected test field before the passing build.
- One early core suite invocation had the wrong working directory for an upstream source-inspection test. `test_linux.sh` runs it from framework source; final clean suite passes there.
- Initial original-memory-card harness incremented a register index inside `SET_GPR_U32`, whose macro evaluates arguments more than once. Fixed the harness by incrementing separately. The initial failure is not proof of a game card-service fault. Corrected original card scan completes in seven ticks.
- `ts03-recovery-name` restored the original name keyboard/Save Sign On navigation; `ts03-create-save` saved a profile. These are development runs, not the final clean-binary proof.
- `ts03-reload-tomb` entered Tomb before the SQRT.S fix. Its old probe computed the hash only after exit, and the path was relinked while the process ran. Screenshots/logs are real development history; do not associate that recorded end hash with the running inode. The later probe fixes launch/end identity recording.
- `ts03-tomb-controls` demonstrates the pre-fix animation stall, not functioning in-level movement/fire. Its running-inode identity was saved separately in `provenance/controls-running-inode.json`. CPU was in `calMatrices` with an infinite value; do not label that static screenshot a successful controls test.
- New math-harness compilation initially failed due to a macro's unparenthesized pointer context; corrected harness usage. `math-and-speed-build.log` is the failed compile; `math-and-speed-build2.log` is the succeeding retry.
- `ts03-speed-trace` was an unsuccessful diagnostic-hook experiment; it did not yield a useful trace and the outer watchdog killed it (rc -9). The hook was removed before the clean production build. It is not final native evidence.
- `sqrt-codegen-before.log` is an intentional failing-then-passing regression: 458/459 passed, new SQRT register-field check failed before the translator fix.
- `sqrt-original-before.log` demonstrates actual original `v3Normalize(3,4,0)` returning (.75,1,0), while 24 soft-double checks passed. The expected normalized result is (.6,.8,0).
- `ts03-sqrt-fixed` is the successful development candidate: movement, turning, firing, Scores and resume observed. Final evidence is rerun separately from a clean build.

## Authoritative current evidence

`clean-build.log`, `clean-tests.log` and `clean-regenerate.log` with their explicit exit files document the fresh stable-source build, 559 passing checks, and regeneration. `provenance/TS03-regeneration-verification.json` compares all 2,673 generated files and checks input source hashes remained unchanged.

The exact tested packaged executable is identified by `provenance/TS03-native-identities.json`. Its final `ts03-final-create` and `ts03-final-tomb` probes start from a new empty card then reload in a fresh process, record pre-launch/post-exit binary hashes and real XTEST events, and stop at their requested deadlines. Card manifests independently record the same saved bytes before/after reload. Original DMA warnings remain in the logs and are not classified as fixed.

The full checkpoint retains selected pre-fix and final EE/IOP RAM snapshots. Other intermediate RAM dumps/build trees are omitted to keep the archive recoverable; their historical log paths must not be treated as present files. All included bytes are enumerated by the current manifest. The source-only backup intentionally omits all native images/RAM and binaries.
