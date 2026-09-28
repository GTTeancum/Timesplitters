#!/usr/bin/env bash
# Build the Xbox version. Runs itself inside MSYS2's CLANG64 environment
# (nxdk's wrappers need clang/lld from /clang64 and make from /usr/bin).
#   src/xbox/build.sh            build everything (default.xbe + TimeSplitters.iso)
#   src/xbox/build.sh runtime    compile only the runtime / platform objects
#   src/xbox/build.sh -j8 ...    extra make arguments are passed through
set -euo pipefail
if [[ "${MSYSTEM:-}" != "CLANG64" ]]; then
    here="$(cd "$(dirname "$0")" && pwd)"
    exec env MSYSTEM=CLANG64 /c/msys64/usr/bin/bash -l "$here/build.sh" "$@"
fi
export NXDK_DIR="${NXDK_DIR:-/c/nxdk}"
export PATH="$NXDK_DIR/bin:/clang64/bin:/mingw64/bin:/usr/bin:$PATH"
unset INCLUDE LIB CPATH
cd "$(dirname "$0")"
jobs="-j$(nproc)"
make NXDK_DIR="$NXDK_DIR" $jobs "$@"
