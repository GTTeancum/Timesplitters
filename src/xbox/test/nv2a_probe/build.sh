#!/usr/bin/env bash
# Builds the NV2A console probe (REWRITE-PLAN.md M0.7) into build/nv2a_probe:
# bin/default.xbe (copy it to the console) and nv2a_probe.iso (xemu). Runs
# itself inside MSYS2's CLANG64 environment, like src/xbox/build.sh.
#   src/xbox/test/nv2a_probe/build.sh                 build
#   src/xbox/test/nv2a_probe/build.sh PROBE_RISKY=0   make arguments pass through
#   src/xbox/test/nv2a_probe/build.sh clean           remove build/nv2a_probe only
set -euo pipefail
if [[ "${MSYSTEM:-}" != "CLANG64" ]]; then
    here="$(cd "$(dirname "$0")" && pwd)"
    exec env MSYSTEM=CLANG64 /c/msys64/usr/bin/bash -l "$here/build.sh" "$@"
fi
export NXDK_DIR="${NXDK_DIR:-/c/nxdk}"
export PATH="$NXDK_DIR/bin:/clang64/bin:/mingw64/bin:/usr/bin:$PATH"
unset INCLUDE LIB CPATH
src="$(cd "$(dirname "$0")" && pwd)"
root="$(cd "$src/../../../.." && pwd)"
out="$root/build/nv2a_probe"
if [[ "${1:-}" == "clean" ]]; then
    rm -rf "$out"
    exit 0
fi
mkdir -p "$out"
# nxdk's Makefile builds next to its sources: build from copies (-p keeps
# their times, so make rebuilds only what changed).
cp -p "$src/Makefile" "$src/nv2a_probe.c" "$src/probe_vs.vs.cg" "$src/probe_ps.ps.cg" "$out/"
# nxdk's libraries and tools are used as they are: -o stops make from
# rebuilding any of them inside $NXDK_DIR, which other projects share.
keep=()
for f in "$NXDK_DIR"/lib/*.lib "$NXDK_DIR"/lib/xboxkrnl/libxboxkrnl.lib \
         "$NXDK_DIR"/tools/cxbe/cxbe "$NXDK_DIR"/tools/vp20compiler/vp20compiler \
         "$NXDK_DIR"/tools/fp20compiler/fp20compiler "$NXDK_DIR"/tools/extract-xiso/build/extract-xiso; do
    keep+=(-o "$f")
done
make -C "$out" NXDK_DIR="$NXDK_DIR" "${keep[@]}" "$@"
