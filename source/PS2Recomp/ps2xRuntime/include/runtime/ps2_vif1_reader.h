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
//   has(n)        n bytes can be read (left(), counting a chain token ahead
//                 at its expanded size)
//   avail()       bytes readable in place from here() (the reader moves on
//                 to the next piece when this one is used up)
//   here()        where they lie; advance(n) past n <= avail() of them
//   word(v)       the next VIFcode; false at the end
//   read(d, n)    n <= left() bytes gathered; skip(n) past them
//   take(n, buf)  n <= left() bytes in one place: where they lie, or
//                 gathered into buf
// The piece reader, with TS_NATIVE_RECORDS (ps2_vif1_tokens.h), also:
//   tokenAhead()  at a command boundary: the token piece the next bytes
//                 would come from, consumed, else null; expandToken(e) puts
//                 a chain token's pieces in its place, readTokenAsNops(e)
//                 reads it as its 16 bytes
#include "ps2_memory.h"
#include "ps2_vif1_tokens.h"

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

    // bytes: the pieces' total. With TS_NATIVE_RECORDS the first piece is
    // loaded by the first read (tokenAhead, word or a data read), not here:
    // a token piece at the front (the batch before ended right at it) is a
    // command boundary's business, not a data read's.
    Vif1PieceReader(const PS2Memory::Vif1Piece *pieces, size_t count, uint32_t bytes)
        : m_tail(bytes), m_next(pieces), m_prefetch(pieces), m_last(pieces + count)
    {
#if !TS_NATIVE_RECORDS
        nextPiece();
#endif
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

#if TS_NATIVE_RECORDS
    // At a command boundary only: when the piece being read is used up and
    // the next one is a token piece (the start of a token ring entry), that
    // token, consumed (its 16 bytes count as read). Null otherwise: the next
    // bytes are a VIFcode (word). A pointer compare per command; the ring
    // test only at a piece boundary.
    const Vif1TokenEntry *tokenAhead()
    {
        if (m_cur != m_end)
            return nullptr;
        loadNext();
        if (m_cur == m_end)
            return nullptr; // nothing left
        const Vif1TokenEntry *entry = g_vif1Tokens.entryOf(m_cur);
        if (entry)
            m_cur = m_end; // consumed
        return entry;
    }
    // A consumed token the decoder does not run (a dry decode, or an
    // executor that asked for its expansion): its pieces (the registry keeps
    // them) take the token piece's place in the stream, which then reads
    // exactly as the walked chain would. False when the token has no pieces
    // (a list token, or no registry): the caller reads it as NOPs.
    bool expandToken(const Vif1TokenEntry *entry)
    {
        size_t count = 0;
        const Vif1Piece *pieces = expansionOf(entry, count);
        if (!pieces || m_savedNext)
            return false; // (a chain's pieces never hold a token: no nesting)
        // The token's 16 bytes came off the tail when its piece was loaded;
        // the chain's bytes go on in their place. The main list resumes
        // after them (loadNext).
        m_mainTail = m_tail;
        m_tail += vif1PiecesTotal(pieces, count);
        m_cur = m_end; // nothing of the token piece itself is read
        m_savedNext = m_next;
        m_savedLast = m_last;
        m_next = pieces;
        m_last = pieces + count;
        m_prefetch = pieces;
        ++m_expansions;
        return true;
    }
    // A consumed token read as its 16 bytes: four VIF NOPs.
    void readTokenAsNops(const Vif1TokenEntry *entry)
    {
        m_cur = entry->piece;
        m_end = m_cur + sizeof(entry->piece);
    }
    // While an expanded token's pieces are read; and how many expansions
    // this reader has made (the decoder's carry, decodeVIF1Pieces).
    bool expanding() const { return m_savedNext != nullptr; }
    uint32_t expansions() const { return m_expansions; }
    // The main list's unread bytes (left() less what is unread of an
    // expansion being read): what a carry can be measured in.
    uint32_t mainLeft() const { return m_savedNext ? m_mainTail : left(); }
    // left() as the stream will read once the chain tokens ahead are
    // expanded (a token piece counts 16 bytes in left()): for a command
    // that does not fit what left() says, before it is declared short. A
    // pass over the pieces ahead, only then (a batch's or a chain's end).
    uint32_t leftExpanded() const
    {
        uint32_t bytes = left();
        if (g_vif1Tokens.pending() == 0u)
            return bytes; // no token since the last drain (records off: always)
        auto add =[&](const PS2Memory::Vif1Piece *p, const PS2Memory::Vif1Piece *last)
        {
            for (; p < last; ++p)
                if (const Vif1TokenEntry *entry = g_vif1Tokens.entryOf(p->first))
                {
                    size_t count = 0;
                    if (const Vif1Piece *pieces = expansionOf(entry, count))
                        bytes += vif1PiecesTotal(pieces, count) - p->second;
                }
        };
        add(m_next, m_last);
        if (m_savedNext)
            add(m_savedNext, m_savedLast);
        return bytes;
    }
    // n bytes can be read (a chain token ahead expanded, if need be).
    bool has(uint32_t n) const { return n <= left() || n <= leftExpanded(); }
#else
    bool has(uint32_t n) const { return n <= left(); }
    uint32_t leftExpanded() const { return left(); }
#endif

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
#if TS_NATIVE_RECORDS
    // A chain token's pieces (null: a list token, or no registry).
    static const Vif1Piece *expansionOf(const Vif1TokenEntry *entry, size_t &count)
    {
        const Vif1RecordHooks &hooks = PS2Memory::vif1RecordHooks();
        if (entry->token.kind != Vif1TokenKind::Chain || !hooks.expand)
            return nullptr;
        const Vif1Piece *pieces = hooks.expand(hooks.owner, entry->token, count);
        return pieces && count != 0u ? pieces : nullptr;
    }
#endif
    // The piece is used up: on to the next one that holds anything, and
    // the first lines of the pieces behind it are asked for. At the end of
    // an expanded token's pieces the main list resumes.
    void loadNext()
    {
        for (;;)
        {
            while (m_cur == m_end && m_next != m_last)
            {
                m_cur = m_next->first;
                m_end = m_cur + m_next->second;
                m_tail -= m_next->second;
                ++m_next;
            }
#if TS_NATIVE_RECORDS
            if (m_cur == m_end && m_savedNext)
            {
                m_next = m_savedNext;
                m_last = m_savedLast;
                m_prefetch = m_next;
                m_savedNext = m_savedLast = nullptr;
                continue;
            }
#endif
            break;
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
    // A data read (or a VIFcode's second half) used the piece up: the next
    // one. A token piece reached this way lies inside a command's data
    // (tokmid): a chain token is expanded, so the read goes on through the
    // chain's bytes exactly as the walk would have recorded them; a list
    // token cannot be, and its 16 bytes are read as four NOPs (counted;
    // fatal in check builds, src/xbox/PUSH-BC-PLAN.md D1).
    void nextPiece()
    {
        loadNext();
#if TS_NATIVE_RECORDS
        if (m_cur != m_end)
            if (const Vif1TokenEntry *entry = g_vif1Tokens.entryOf(m_cur))
                midToken(entry);
#endif
    }
#if TS_NATIVE_RECORDS
    __attribute__((noinline)) void midToken(const Vif1TokenEntry *entry)
    {
        ++g_renderCounters.tokMid;
        if (!g_vif1DryDecode)
            ++g_vif1Tokens.executed;
        m_cur = m_end; // the token piece is loaded: consumed either way
        if (expandToken(entry))
            loadNext();
        else
        {
            ++g_renderCounters.tokMidBad;
            readTokenAsNops(entry); // its NOPs, as data
        }
    }
#endif
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
#if TS_NATIVE_RECORDS
    // The main list's place while an expanded token's pieces are read, and
    // its unread bytes then.
    const PS2Memory::Vif1Piece *m_savedNext = nullptr, *m_savedLast = nullptr;
    uint32_t m_mainTail = 0;
    uint32_t m_expansions = 0;
#endif
};

// One contiguous span [data, data + bytes): a command's VIFcode and data in
// one place (a records engine replaying a chain's commands from guest
// memory). Nothing is ever gathered: take returns where the bytes lie.
class Vif1SpanReader
{
public:
    Vif1SpanReader(const uint8_t *data, uint32_t bytes) : m_cur(data), m_end(data + bytes) {}

    uint32_t left() const { return static_cast<uint32_t>(m_end - m_cur); }
    bool has(uint32_t n) const { return n <= left(); }
    uint32_t leftExpanded() const { return left(); }
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
