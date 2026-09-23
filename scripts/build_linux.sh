#!/usr/bin/env bash
# Native Linux only. Requires the verified, restored dependency bundle.
set -euo pipefail
HERE="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
DEPS="${1:-${TS_DEPS:-$HERE/../TimeSplitters-Dependencies}}"
DEPS="$(realpath "$DEPS")"
BUILD="${TS_BUILD_DIR:-$HERE/build}"
python3 "$HERE/scripts/make_offline_preload.py" "$DEPS" "$BUILD/offline-fetchcontent.cmake"
unset VITASDK
cmake -S "$HERE/source/PS2Recomp" -B "$BUILD" -G Ninja \
 -C "$BUILD/offline-fetchcontent.cmake" \
 -DCMAKE_C_COMPILER=/usr/bin/clang-19 -DCMAKE_CXX_COMPILER=/usr/bin/clang++-19 \
 -DCMAKE_BUILD_TYPE=RelWithDebInfo -DTS_GAME_SOURCE_DIR="$HERE/project/game" \
 -DPS2X_BUILD_RECOMP=ON -DPS2X_BUILD_RUNTIME=ON -DPS2X_BUILD_ANALYZER=ON \
 -DPS2X_BUILD_STUDIO=OFF -DPS2X_BUILD_TEST=ON -DPS2X_IOP_BUILD_TESTS=ON \
 -DPS2X_ENABLE_DEBUG_UI=ON -DPS2X_ENABLE_FFMPEG=ON -DPS2X_ENABLE_SCCACHE=OFF
cmake --build "$BUILD" --parallel "${JOBS:-3}"
