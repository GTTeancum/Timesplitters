#pragma once
// Xbox-local source binding. All borrowed pack bytes are scoped to a writer.
#include <cstddef>
#include <cstdint>

using XboxBgStripWriter = void (*)(const uint8_t *packedVertices, void *user);
bool xboxBgWithStrip(uint32_t kind, const uint8_t *vu, uint32_t vi,
                     uint32_t count, XboxBgStripWriter writer, void *user);

// Level-time operations, called before original texture fixups/relocation.
void xboxBgConfigure(const char *packRoot, uint32_t budgetBytes);
void xboxBgPrepareSource(uint8_t *rdram, uint32_t level, uint32_t rawBase, uint32_t rawBytes);
void xboxBgActivateSource(uint8_t *rdram, uint32_t level, uint32_t rawBase, uint32_t rawBytes);
void xboxBgResetSource();
void xboxBgInvalidateSource();
void xboxBgSourceWrite(uint32_t guestDestination);

// UNPACK provenance never changes VIF execution or suppresses its writes.
// Unsupported formats/modes and unobserved writes invalidate provenance.
void xboxBgNoteUnpack(const uint8_t *rdram, const uint8_t *vu, uint32_t dest,
                      const uint8_t *source, uint32_t count, uint32_t format,
                      uint32_t cl, uint32_t wl, uint32_t mode, bool masked,
                      bool worker);
void xboxBgInvalidateVu();
void xboxBgBeginNative(uint32_t pc, const uint8_t *vu, uint32_t bytes,
                       uint32_t top, bool worker);
void xboxBgEndNative();

// Used around every VU execution, including unknown programs and fallback.
struct XboxBgVuWriteScope
{
    ~XboxBgVuWriteScope() { xboxBgInvalidateVu(); }
};

struct XboxBgRuntimeStats
{
    uint64_t prepared = 0, activated = 0, sourceRejects = 0, loadRejects = 0;
    uint64_t matchedStrips = 0, matchedVertices = 0, fallbackStrips = 0;
    uint64_t boundStrips = 0, verifiedStrips = 0, verifiedVertices = 0;
    uint64_t geometryDiffs = 0, invalidations = 0, observedUnpacks = 0;
    uint64_t bindingCacheHits = 0, bindingSearches = 0;
    uint64_t provenanceFastRanges = 0, provenanceRowChecks = 0;
    uint32_t level = 0, packBytes = 0, bindingBytes = 0;
    bool active = false;
};
bool xboxBgGetStats(XboxBgRuntimeStats &out);

struct Vu1NativeProgram;
void xboxBgRegisterVu1NativeProgram(const Vu1NativeProgram &program);
