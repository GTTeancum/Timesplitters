#!/usr/bin/env bash
set -euo pipefail
HERE="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
BUILD="${TS_BUILD_DIR:-$HERE/build}"
# One upstream source-inspection test intentionally uses the source working directory.
(cd "$HERE/source/PS2Recomp" && "$BUILD/ps2xTest/ps2x_tests")
ctest --test-dir "$BUILD/ps2xIOP" --output-on-failure
ctest --test-dir "$BUILD/ps2xTest/gs_cache" --output-on-failure
"$BUILD/timesplitters/timesplitters" --self-test "$HERE/project/analysis/extracted/SLUS_200.90"

"$BUILD/timesplitters/timesplitters" --image-self-test "$HERE/project/analysis/extracted/SLUS_200.90"
"$BUILD/timesplitters/timesplitters" --mc-self-test "$HERE/project/analysis/extracted/SLUS_200.90"

"$BUILD/timesplitters/timesplitters" --math-self-test "$HERE/project/analysis/extracted/SLUS_200.90"

"$BUILD/timesplitters/timesplitters" --matrix-self-test "$HERE/project/analysis/extracted/SLUS_200.90"
python3 -m unittest discover -s "$HERE/project/tests" -p 'test_*.py' -v
CAPTURE="$HERE/project/diagnostics/ts04-first-alarm-ee-ram.bin"
if [[ -f "$CAPTURE" ]]; then
    "$BUILD/timesplitters/timesplitters_dma_replay" "$CAPTURE"
else
    echo 'Captured-chain replay not run: diagnostic RAM is omitted from source-only backup.'
fi

"$BUILD/timesplitters/timesplitters" --format-self-test "$HERE/project/analysis/extracted/SLUS_200.90"

"$BUILD/timesplitters/timesplitters" --audio-memory-self-test "$HERE/project/analysis/extracted/SLUS_200.90"
