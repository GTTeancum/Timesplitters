#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <cstring>

namespace GSMem
{
    class TexturePageCache
    {
    public:
        static constexpr uint32_t kPageSize = 8192u;
        uint64_t PageLoads() const noexcept { return m_pageLoads; }
        uint32_t LatchedPageBase() const noexcept { return m_pageBase; }
        bool IsReadOnlySampling() const noexcept { return m_readOnly; }

        // Only valid while the caller guarantees no writes to sampled pages.
        // The initial logical page may be stale: keep it until its first
        // eviction, then cache fresh pages for this read-only operation.
        void BeginReadOnlySampling() noexcept
        {
            m_readOnlyTags.fill(UINT32_MAX);
            m_readOnly = true;
        }
        void EndReadOnlySampling() noexcept
        {
            if (m_activeSlot >= 0)
                std::memcpy(m_bytes.data(), m_readOnlyBytes[m_activeSlot].data(), kPageSize);
            m_activeSlot = -1;
            m_readOnly = false;
        }

        void Invalidate() noexcept
        {
            m_pageBase = UINT32_MAX;
            m_activeSlot = -1;
            m_readOnly = false;
        }

        // byteAddress is the wrapped, swizzled VRAM address. The returned
        // pointer is valid only until the next miss or invalidation.
        const uint8_t* Resolve(const uint8_t* vram, uint32_t byteAddress) noexcept
        {
            const uint32_t pageBase = byteAddress & ~(kPageSize - 1u);
            if (m_pageBase != pageBase)
            {
                if (m_readOnly)
                {
                    m_activeSlot = static_cast<int>((pageBase / kPageSize) % m_readOnlyBytes.size());
                    if (m_readOnlyTags[m_activeSlot] != pageBase)
                    {
                        std::memcpy(m_readOnlyBytes[m_activeSlot].data(), vram + pageBase, kPageSize);
                        m_readOnlyTags[m_activeSlot] = pageBase;
                        ++m_pageLoads;
                    }
                }
                else
                {
                    std::memcpy(m_bytes.data(), vram + pageBase, kPageSize);
                    ++m_pageLoads;
                }
                m_pageBase = pageBase;
            }
            const uint8_t* bytes = m_activeSlot < 0 ? m_bytes.data() : m_readOnlyBytes[m_activeSlot].data();
            return bytes + (byteAddress & (kPageSize - 1u));
        }

    private:
        alignas(64) std::array<uint8_t, kPageSize> m_bytes{};
        uint32_t m_pageBase = UINT32_MAX;
        uint64_t m_pageLoads = 0;
        alignas(64) std::array<std::array<uint8_t, kPageSize>, 8> m_readOnlyBytes{};
        std::array<uint32_t, 8> m_readOnlyTags{};
        bool m_readOnly = false;
        int m_activeSlot = -1;
    };
}
