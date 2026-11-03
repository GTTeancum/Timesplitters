#!/usr/bin/env bash
# Build the Xbox version using MSYS2 CLANG64 or a native Linux nxdk toolchain.
#   src/xbox/build.sh            build everything (default.xbe + TimeSplitters.iso)
#   src/xbox/build.sh xbe        compile/link default.xbe without staging a disc
#   src/xbox/build.sh optimized  native-geometry XBE plus geometry/texture packs
#   src/xbox/build.sh runtime    compile only the runtime / platform objects
#   src/xbox/build.sh -j8 ...    extra make arguments are passed through
# Linux: set NXDK_DIR to an already built SDK. NXDK_LLVM_BIN optionally selects
# the directory containing clang/lld (for example /usr/lib/llvm-18/bin).
set -euo pipefail
case "$(uname -s)" in
    MINGW*|MSYS*|CYGWIN*)
        if [[ "${MSYSTEM:-}" != "CLANG64" ]]; then
            here="$(cd "$(dirname "$0")" && pwd)"
            exec env MSYSTEM=CLANG64 /c/msys64/usr/bin/bash -l "$here/build.sh" "$@"
        fi
        export NXDK_DIR="${NXDK_DIR:-/c/nxdk}"
        export PATH="$NXDK_DIR/bin:/clang64/bin:/mingw64/bin:/usr/bin:$PATH"
        ;;
    Linux*)
        : "${NXDK_DIR:?Set NXDK_DIR to an already built nxdk SDK}"
        export NXDK_DIR
        export PATH="$NXDK_DIR/bin:$PATH"
        ;;
    *)
        echo "Unsupported build host: use Linux or MSYS2 CLANG64" >&2
        exit 2
        ;;
esac
if [[ -n "${NXDK_LLVM_BIN:-}" ]]; then
    export PATH="$NXDK_LLVM_BIN:$PATH"
fi
unset INCLUDE LIB CPATH
cd "$(dirname "$0")"
exec make NXDK_DIR="$NXDK_DIR" "-j${JOBS:-$(nproc)}" "$@"
