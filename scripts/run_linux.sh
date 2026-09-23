#!/usr/bin/env bash
# Bounded development probe, not a playable-release launcher.
set -euo pipefail
HERE="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
BUILD="${TS_BUILD_DIR:-$HERE/build}"
BINARY="${TS_BINARY:-$BUILD/timesplitters/timesplitters}"
if [[ ! -x "$BINARY" ]]; then BINARY="$HERE/bin/timesplitters"; fi
python3 "$HERE/scripts/verify_game.py"
SECONDS_TO_RUN="${1:-15}"
mkdir -p "$HERE/project/diagnostics"
export TS_DUMP_RAM="${TS_DUMP_RAM:-$HERE/project/diagnostics/latest-ram.bin}"
export LIBGL_ALWAYS_SOFTWARE="${LIBGL_ALWAYS_SOFTWARE:-1}"
exec "$BINARY" "$HERE/project/game-data/SLUS_200.90" "$SECONDS_TO_RUN" "$HERE/project/disc/TimeSplitters.iso"
