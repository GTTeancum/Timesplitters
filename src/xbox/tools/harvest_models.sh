#!/usr/bin/env bash
# harvest_models.sh PAD...: collect model files (TS_MODEL_FILES) for the disc.
#
# For each autoplay script (tools/make_level_pads.py makes one per arcade
# level): build the disc with TS_NATIVE_MODELS=1 TS_MODEL_FILES=1 and that
# script, play it in xemu for HARVEST_SECONDS (the game saves a level's
# models once its captures settle), close xemu, and copy
# E:\TimeSplitters\models from xemu's hard disk image to MODEL_FILES_DIR.
# The next disc build with TS_MODEL_FILES=1 carries them as D:\models.
#
# Environment:
#   XEMU            xemu.exe (default C:\Games\Emulators\Xemu\xemu.exe)
#   XEMU_CONFIG     its config, which names the hard disk image
#                   (default C:\Games\Emulators\Xemu\xemu_timesplitters.toml)
#   HARVEST_SECONDS play time per script (default 240)
#   MODEL_FILES_DIR where the files go (default build/model-files)
#   PYTHON          a python.org Python (default: python3 on PATH)
# Only the xemu started with XEMU_CONFIG is closed.
set -u
here="$(cd "$(dirname "$0")" && pwd)"
root="$(cd "$here/../../.." && pwd)"
XEMU="${XEMU:-C:\\Games\\Emulators\\Xemu\\xemu.exe}"
XEMU_CONFIG="${XEMU_CONFIG:-C:\\Games\\Emulators\\Xemu\\xemu_timesplitters.toml}"
HARVEST_SECONDS="${HARVEST_SECONDS:-240}"
MODEL_FILES_DIR="${MODEL_FILES_DIR:-$root/build/model-files}"
PYTHON="${PYTHON:-python3}"

[ $# -gt 0 ] || { echo "usage: $0 PAD..." >&2; exit 2; }

config_name="$(basename "${XEMU_CONFIG//\\//}")"
stop_xemu() {
    powershell -NoProfile -Command "Get-CimInstance Win32_Process -Filter \"Name='xemu.exe'\" | Where-Object { \$_.CommandLine -like '*$config_name*' } | ForEach-Object { Stop-Process -Id \$_.ProcessId -Force }" >/dev/null 2>&1
    for _ in 1 2 3 4 5 6 7 8 9 10; do
        powershell -NoProfile -Command "if (Get-CimInstance Win32_Process -Filter \"Name='xemu.exe'\" | Where-Object { \$_.CommandLine -like '*$config_name*' }) { exit 1 }" && return 0
        sleep 2
    done
    echo "harvest: xemu did not close" >&2
    return 1
}

hdd="$(grep -E "^hdd_path" "$(cygpath -u "$XEMU_CONFIG" 2>/dev/null || echo "$XEMU_CONFIG")" | sed -E "s/^hdd_path *= *'(.*)'/\1/")"
[ -n "$hdd" ] || { echo "harvest: no hdd_path in $XEMU_CONFIG" >&2; exit 1; }
iso_win="$(cygpath -w "$root/build/xbox/TimeSplitters.iso" 2>/dev/null || echo "$root/build/xbox/TimeSplitters.iso")"
mkdir -p "$MODEL_FILES_DIR"

for pad in "$@"; do
    echo "[ HARVEST ] $pad"
    stop_xemu || exit 1
    if ! (cd "$root" && bash src/xbox/build.sh TS_NATIVE_MODELS=1 TS_MODEL_FILES=1 AUTOPLAY="$pad" >/dev/null); then
        echo "harvest: build failed for $pad" >&2
        exit 1
    fi
    powershell -NoProfile -Command "Start-Process -FilePath '$XEMU' -ArgumentList '-config_path','$XEMU_CONFIG','-dvd_path','$iso_win' -WorkingDirectory (Split-Path '$XEMU')"
    sleep "$HARVEST_SECONDS"
    stop_xemu || exit 1
    "$PYTHON" "$here/xbox_hdd.py" get "$hdd" 'E:\TimeSplitters\models' "$MODEL_FILES_DIR" ||
        echo "harvest: no model files yet after $pad"
done
ls -l "$MODEL_FILES_DIR"
