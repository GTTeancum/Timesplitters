# Build/run attempt history

`checkpoint-clean-build.log` and `.exit` describe the final successful build from a fresh build directory with stable staged sources. `checkpoint-final-tests.log` contains all final tests from that build. `project/diagnostics/native-08-*` are the exact packaged binary's execution evidence.

Earlier attempts are retained rather than hidden:
- The broad dependency installation was refused by `--no-remove`; the narrower installation succeeded.
- The first core test run used the wrong working directory; its source-inspection test passed from the repository root.
- Earlier native runs expose controller, callback-stack, newlib FILE ABI, GS interrupt and missing sound-transfer issues corrected in the final source.
- `checkpoint-build-interrupted-by-staging.log` contains a Clang SIGBUS while the staging script was copying input files during compilation. That build was discarded completely. The final clean build did not modify source files while compilers were running. This is not evidence of a reproducible Clang source-code bug.
- Native-03..06 used a callback arena that overlapped the original low DMA storage. Native-07 and native-08 use the corrected 512-KiB-to-1-MiB kernel window.

No earlier run is presented as playable or as equivalent to final validation.
