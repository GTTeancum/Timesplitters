#pragma once
// The readers the VIF1 decoder helpers take (PS2Memory::vif1Unpack and
// vif1Stxx, src/xbox/PUSH-BC-PLAN.md W0-C; owned by C-VIF): a command's
// data read where it lies.
//   Vif1PieceReader  the VIF1 stream of a DMA chain as the pieces of guest
//                    memory the chain walk recorded (decodeVIF1Pieces);
//   Vif1SpanReader   one contiguous span (a records engine replaying a
//                    chain's commands from guest memory, ps2_vif1_records.h).
// Both offer the same interface, so the helpers are one body (explicitly
// instantiated for both in ps2_vif1_interpreter.cpp):
//   left()        unread bytes, every piece counted
//   avail()       bytes readable in place from here() (the reader moves on
//                 to the next piece when this one is used up)
//   here()        where they lie; advance(n) past n <= avail() of them
//   word(v)       the next VIFcode; false at the end
//   read(d, n)    n <= left() bytes gathered; skip(n) past them
//   take(n, buf)  n <= left() bytes in one place: where they lie, or
//                 gathered into buf
#include "ps2_memory.h"

#if defined(PLATFORM_XBOX)
#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <xmmintrin.h>

// The Pentium III has no hardware prefetch and ~150 ns to memory, with four
// misses in flight. A chain's pieces are scattered (a tag's two VIFcodes
// here, its payload elsewhere), so each one read cold costs more than its
// decoding. The piece list is known in full: the reader asks for the pieces
// ahead itself (and the decoder for the lines ahead within a run of vectors).
inline void vif1PrefetchLine(const uint8_t *p)
{
    _mm_prefetch(reinterpret_cast<const char *>(p), _MM_HINT_T0);
}

// The VIF1 stream of a DMA chain, read where it lies: the pieces of guest
// memory the chain walk recorded, in order. The piece being read is
// [m_cur, m_end); the pieces after it hold m_tail bytes. A VIFcode or an
// UNPACK's data wholly inside the piece (nearly all of them) costs a
// pointer compare; what runs from one piece into the next is gathered.
class Vif1PieceReader
{
public:
    static constexpr uint32_t kCacheLine = 32u;
    static constexpr size_t kPrefetchPieces = 2; // pieces ahead of the one being read

    // bytes: the pieces' total.
    Vif1PieceReader(const PS2Memory::Vif1Piece *pieces, size_t count, uint32_t bytes)
        : m_tail(bytes), m_next(pieces), m_prefetch(pieces), m_last(pieces + count)
    {
        nextPiece();
    }

    uint32_t left() const { return static_cast<uint32_t>(m_end - m_cur) + m_tail; } // unread bytes, all pieces

    // Bytes readable in place; moves on to the next piece when this one is used up.
    uint32_t avail()
    {
        if (m_cur == m_end)
            nextPiece();
        return static_cast<uint32_t>(m_end - m_cur);
    }
    const uint8_t *here() const { return m_cur; }
    void advance(uint32_t n) { m_cur += n; } // n <= avail()
    // The piece after the one being read (the measurement build's decode
    // split by piece origin, runtime/ps2_measure.h).
    const PS2Memory::Vif1Piece *piece() const { return m_next; }

    // The next VIFcode; false at the chain's end. Inlined into the
    // command loop, the piece boundary (wordNext) a call: folded in,
    // it made this too big to inline and every command paid a call.
    __attribute__((always_inline)) bool word(uint32_t &value)
    {
        if (static_cast<size_t>(m_end - m_cur) >= 4u)
        {
            std::memcpy(&value, m_cur, sizeof(value));
            m_cur += 4u;
            return true;
        }
        return wordNext(value);
    }
    void read(void *destination, uint32_t n) // n <= left()
    {
        uint8_t *out = static_cast<uint8_t *>(destination);
        while (n != 0u)
        {
            const uint32_t chunk = std::min(n, avail());
            std::memcpy(out, m_cur, chunk);
            out += chunk;
            m_cur += chunk;
            n -= chunk;
        }
    }
    void skip(uint32_t n) // n <= left()
    {
        while (n != 0u)
        {
            const uint32_t chunk = std::min(n, avail());
            m_cur += chunk;
            n -= chunk;
        }
    }
    // n bytes (n <= left()) in one place: where they lie, or gathered into buffer.
    const uint8_t *take(uint32_t n, uint8_t *buffer)
    {
        if (avail() >= n)
        {
            const uint8_t *data = m_cur;
            m_cur += n;
            return data;
        }
        ++g_vif1StreamStats.splits;
        read(buffer, n);
        return buffer;
    }

private:
    // The piece is used up: on to the next one that holds anything, and
    // the first lines of the pieces behind it are asked for.
    void nextPiece()
    {
        while (m_cur == m_end && m_next != m_last)
        {
            m_cur = m_next->first;
            m_end = m_cur + m_next->second;
            m_tail -= m_next->second;
            ++m_next;
        }
        // Two pieces, two lines each: as many as the four fill buffers hold.
        if (m_prefetch < m_next)
            m_prefetch = m_next;
        const PS2Memory::Vif1Piece *until = m_next + std::min<size_t>(kPrefetchPieces, m_last - m_next);
        for (; m_prefetch < until; ++m_prefetch)
        {
            vif1PrefetchLine(m_prefetch->first);
            if (m_prefetch->second > kCacheLine)
                vif1PrefetchLine(m_prefetch->first + kCacheLine);
        }
    }
    // A VIFcode at a piece boundary: the next piece holds it whole (a
    // tag's two VIFcodes are one piece) or, rarely, it is split.
    __attribute__((noinline)) bool wordNext(uint32_t &value)
    {
        if (m_cur == m_end)
            nextPiece();
        if (static_cast<size_t>(m_end - m_cur) >= 4u)
        {
            std::memcpy(&value, m_cur, sizeof(value));
            m_cur += 4u;
            return true;
        }
        if (left() < 4u)
            return false;
        uint8_t buffer[4];
        std::memcpy(&value, take(4u, buffer), sizeof(value));
        return true;
    }

    const uint8_t *m_cur = nullptr, *m_end = nullptr;
    uint32_t m_tail = 0;
    const PS2Memory::Vif1Piece *m_next, *m_prefetch, *m_last;
};

// One contiguous span [data, data + bytes): a command's VIFcode and data in
// one place (a records engine replaying a chain's commands from guest
// memory). Nothing is ever gathered: take returns where the bytes lie.
class Vif1SpanReader
{
public:
    Vif1SpanReader(const uint8_t *data, uint32_t bytes) : m_cur(data), m_end(data + bytes) {}

    uint32_t left() const { return static_cast<uint32_t>(m_end - m_cur); }
    uint32_t avail() const { return static_cast<uint32_t>(m_end - m_cur); }
    const uint8_t *here() const { return m_cur; }
    void advance(uint32_t n) { m_cur += n; } // n <= avail()
    bool word(uint32_t &value)
    {
        if (static_cast<size_t>(m_end - m_cur) < 4u)
            return false;
        std::memcpy(&value, m_cur, sizeof(value));
        m_cur += 4u;
        return true;
    }
    void read(void *destination, uint32_t n) // n <= left()
    {
        std::memcpy(destination, m_cur, n);
        m_cur += n;
    }
    void skip(uint32_t n) { m_cur += n; } // n <= left()
    const uint8_t *take(uint32_t n, uint8_t *buffer) // n <= left()
    {
        (void)buffer;
        const uint8_t *data = m_cur;
        m_cur += n;
        return data;
    }

private:
    const uint8_t *m_cur, *m_end;
};
#endif // PLATFORM_XBOX
