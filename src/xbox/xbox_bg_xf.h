#pragma once
// XBG geometry enters the existing native transform run only after its live
// state and constants have been accepted. A miss leaves output untouched so
// the original VU decoder remains the caller's fallback.
#include "runtime/gs/gs_backend.h"

#include <cstdint>

// vu addresses a complete 16 KiB VU1 data image; vi is a qword index. Only
// native Plain (0) and EnvMap (1), with 3..64 vertices, are accepted. Pack
// geometry/STQ is combined with the current VU colors; no pack pointer is
// retained after either function returns.
bool xboxBgTryDecodeStrip(uint32_t kind, const uint8_t *vu, uint32_t vi,
                          uint32_t count, GSXfVertex *out);

// The caller has already grown its direct cursor for this strip and any
// two-vertex join. Writes never read the write-combined destination; the
// last vertex is assembled separately in cursor.last's cached storage.
bool xboxBgTryWriteJoinedStrip(uint32_t kind, GSXfCursor &cursor,
                               const uint8_t *vu, uint32_t vi, uint32_t count);
