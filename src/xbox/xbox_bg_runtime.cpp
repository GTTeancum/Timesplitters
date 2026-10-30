#include "xbox_bg_runtime.h"

#if defined(TS_BG_NATIVE) && TS_BG_NATIVE
#include "xbox_bg_loader.h"
#include <algorithm>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <limits>

#ifndef TS_BG_VERIFY
#define TS_BG_VERIFY 0
#endif
#ifndef TS_BG_FAST
#define TS_BG_FAST 1
#endif

namespace
{
constexpr uint32_t kRamBytes = 32u * 1024u * 1024u;
constexpr uint32_t kRows = 1024, kNoBinding = ~uint32_t(0);
using ts_xbg::read32;

// SHA-256 is used at the pristine preload boundary, before texture handles
// and relocated pointers replace bytes in the original asset. It is never
// used as draw identity or recalculated in a frame's vertex path.
uint32_t rotr(uint32_t x, unsigned n) { return (x >> n) | (x << (32 - n)); }
void shaBlock(uint32_t h[8], const uint8_t *p)
{
    static constexpr uint32_t k[64] = {
        0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,
        0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,
        0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,
        0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,
        0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,
        0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,0xd192e819,0xd6990624,0xf40e3585,0x106aa070,
        0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,
        0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2};
    uint32_t w[64];
    for (unsigned i = 0; i < 16; ++i)
        w[i] = (uint32_t(p[i*4]) << 24) | (uint32_t(p[i*4+1]) << 16) |
               (uint32_t(p[i*4+2]) << 8) | p[i*4+3];
    for (unsigned i = 16; i < 64; ++i)
        w[i] = w[i-16] + (rotr(w[i-15],7) ^ rotr(w[i-15],18) ^ (w[i-15] >> 3)) +
               w[i-7] + (rotr(w[i-2],17) ^ rotr(w[i-2],19) ^ (w[i-2] >> 10));
    uint32_t a=h[0],b=h[1],c=h[2],d=h[3],e=h[4],f=h[5],g=h[6],z=h[7];
    for (unsigned i = 0; i < 64; ++i)
    {
        const uint32_t t1=z+(rotr(e,6)^rotr(e,11)^rotr(e,25))+((e&f)^((~e)&g))+k[i]+w[i];
        const uint32_t t2=(rotr(a,2)^rotr(a,13)^rotr(a,22))+((a&b)^(a&c)^(b&c));
        z=g; g=f; f=e; e=d+t1; d=c; c=b; b=a; a=t1+t2;
    }
    h[0]+=a; h[1]+=b; h[2]+=c; h[3]+=d; h[4]+=e; h[5]+=f; h[6]+=g; h[7]+=z;
}
void sha256(const uint8_t *data, uint32_t bytes, uint8_t out[32])
{
    uint32_t h[8]={0x6a09e667,0xbb67ae85,0x3c6ef372,0xa54ff53a,0x510e527f,0x9b05688c,0x1f83d9ab,0x5be0cd19};
    uint32_t at=0;
    for (; bytes-at >= 64; at+=64) shaBlock(h,data+at);
    uint8_t tail[128]{};
    std::memcpy(tail,data+at,bytes-at); tail[bytes-at]=0x80;
    const uint32_t blocks=bytes-at < 56 ? 64 : 128;
    const uint64_t bits=uint64_t(bytes)*8;
    for (unsigned i=0;i<8;++i) tail[blocks-1-i]=uint8_t(bits>>(i*8));
    shaBlock(h,tail); if (blocks==128) shaBlock(h,tail+64);
    for (unsigned i=0;i<8;++i) for (unsigned j=0;j<4;++j) out[i*4+j]=uint8_t(h[i]>>(24-j*8));
}

#if defined(TS_BG_HOST) && TS_BG_HOST
// Explicit host harness only; the Xbox uses the loader's Win32 platform.
XboxBgLoader::Platform hostPlatform()
{
    XboxBgLoader::Platform p;
    p.open=[](void *,const char *path,void *&handle,uint64_t &size) {
        FILE *f=std::fopen(path,"rb");
        if (!f) return XboxBgLoader::OpenResult::Missing;
        if (std::fseek(f,0,SEEK_END)!=0) { std::fclose(f); return XboxBgLoader::OpenResult::Error; }
        const long n=std::ftell(f);
        if (n<0 || std::fseek(f,0,SEEK_SET)!=0) { std::fclose(f); return XboxBgLoader::OpenResult::Error; }
        handle=f; size=uint64_t(n); return XboxBgLoader::OpenResult::Opened;
    };
    p.read=[](void *,void *f,uint8_t *out,uint32_t size,uint32_t &got) {
        got=uint32_t(std::fread(out,1,size,static_cast<FILE *>(f)));
        return std::ferror(static_cast<FILE *>(f))==0;
    };
    p.close=[](void *,void *f) { std::fclose(static_cast<FILE *>(f)); };
    p.allocate=[](void *,uint32_t n) { return static_cast<uint8_t *>(std::malloc(n)); };
    p.release=[](void *,uint8_t *p) { std::free(p); };
    return p;
}
#endif

struct Binding
{
    uint32_t tag, position, vector, count, kind, firstVertex, strip, batch;
};
int compareKey(const Binding &a,const Binding &b)
{
    const uint32_t ak[]={a.tag,a.position,a.vector,a.count,a.kind};
    const uint32_t bk[]={b.tag,b.position,b.vector,b.count,b.kind};
    for (unsigned i=0;i<5;++i) if (ak[i]!=bk[i]) return ak[i]<bk[i] ? -1 : 1;
    return 0;
}
struct Origin { uint32_t source=0, epoch=0, format=0; };
struct Draw
{
    const uint8_t *vu=nullptr;
    uint32_t top=0, kind=0, count=0;
    struct Strip { uint32_t vi=0, count=0, binding=kNoBinding; } strips[kXboxBgMaxBatchStrips];
#if TS_BG_FAST
    // The accepted Plain/EnvMap batch has at most 64 vertex rows. A value
    // is the strip slot plus one; zero means no prepared strip starts here.
    uint8_t byVertex[64]{};
#endif
};
struct State
{
#if defined(TS_BG_HOST) && TS_BG_HOST
    XboxBgLoader loader{hostPlatform()};
#else
    XboxBgLoader loader;
#endif
    std::atomic_flag busy=ATOMIC_FLAG_INIT;
    std::atomic<bool> tracking{false}, lost{false}, sourceLost{false}, disableLost{false};
    XboxBgRuntimeStats stats;
    XboxBgLoader::Snapshot pack;
    Binding *bindings=nullptr;
    uint32_t bindingCount=0, budget=0, base=0, rawBytes=0, level=0, epoch=1;
    const uint8_t *rdram=nullptr, *vu=nullptr;
    bool prepared=false, active=false;
    char root[192]{};
    Origin rows[kRows];
#if TS_BG_FAST
    // A certificate covers one contiguous UNPACK run. Each covered row's
    // format packs (run-start + 1) above its low byte. Overwriting ANY row
    // revokes the certificate before establishing a new one, so first-row
    // identity never stands in for the identity of an unobserved interior.
    // The original row records remain the exact fallback for split runs.
    uint16_t rangeEnds[kRows]{};
    static constexpr uint32_t kBindingSets=128;
    uint32_t bindingCache[kBindingSets][2]{}, lastBinding=0;
    uint8_t olderBinding[kBindingSets]{};
#endif
    Draw draw;
    ~State() { std::free(bindings); }
    void forget()
    {
        if (++epoch==0) { for (auto &row:rows) row=Origin{}; epoch=1; }
        draw=Draw{};
    }
    void clear()
    {
        tracking.store(false,std::memory_order_release);
        prepared=active=false; forget(); vu=nullptr;
        std::free(bindings); bindings=nullptr; bindingCount=0;
#if TS_BG_FAST
        std::memset(bindingCache,0,sizeof(bindingCache));
        std::memset(olderBinding,0,sizeof(olderBinding));
        lastBinding=0;
#endif
        loader.unload(); pack={}; rdram=nullptr; base=rawBytes=level=0;
        stats.level=stats.packBytes=stats.bindingBytes=0; stats.active=false;
        ++stats.invalidations;
    }
};
State &state() { static State s; return s; }
struct Guard
{
    State &s; bool held;
    explicit Guard(State &v,bool sourceEvent=false):s(v),held(!s.busy.test_and_set(std::memory_order_acquire))
    {
        if (!held)
        {
            s.lost.store(true,std::memory_order_release);
            if (sourceEvent)
            {
                // A missed lifetime event can mean that this allocation was
                // reused. Losing only its VU rows would allow an old prepared
                // identity to be activated again at the same guest address.
                s.sourceLost.store(true,std::memory_order_release);
                s.tracking.store(false,std::memory_order_release);
            }
        }
        else
        {
            if (s.sourceLost.exchange(false,std::memory_order_acq_rel)) s.clear();
            if (s.disableLost.exchange(false,std::memory_order_acq_rel))
            { s.clear(); s.budget=0; s.root[0]=0; }
            if (s.lost.exchange(false,std::memory_order_acq_rel)) s.forget();
        }
    }
    ~Guard() { if (held) s.busy.clear(std::memory_order_release); }
};

bool rawRange(uint64_t at,uint64_t n,uint32_t bytes)
{ return at>=16 && at<=bytes && n<=bytes-at; }
bool geometryEqual(const uint8_t *position,const uint8_t *vector,uint32_t kind,const uint8_t *vertex)
{
    if (std::memcmp(position,vertex,12)) return false;
    if (kind==1) return std::memcmp(vector,vertex+12,12)==0;
    uint32_t q=read32(vector+8);
    if (!(q&0x7fffffffu)) q=0x3f800000u;
    return std::memcmp(vector,vertex+28,8)==0 && q==read32(vertex+36);
}
struct BuildContext { State *s; const uint8_t *raw; bool ok=false; };
void buildBindings(void *opaque,const ts_xbg::View &v)
{
    auto &c=*static_cast<BuildContext *>(opaque); State &s=*c.s;
    const uint8_t *raw=c.raw; uint32_t next=0;
    for (uint32_t b=0;b<v.batchCount;++b)
    {
        const uint8_t *p=v.batches+size_t(b)*64;
        const uint32_t model=read32(p+4), part=read32(p+8), partIndex=read32(p+12);
        const uint32_t variant=read32(p+16), descriptor=read32(p+20), layout=read32(p+28);
        const uint32_t firstStrip=read32(p+32), stripCount=read32(p+36);
        const uint32_t vertexCount=read32(p+44), tagStart=read32(p+48), vertexStart=read32(p+52);
        const uint32_t partCount=read32(raw+model);
        if (!partCount || partIndex>=partCount || uint64_t(partCount)*80+16>model ||
            uint64_t(model)-uint64_t(partCount-partIndex)*80!=part ||
            read32(raw+part)!=read32(p+56) || read32(raw+part+4)!=read32(p+60)) return;
        const uint32_t firstDescriptor=read32(raw+part+8+variant*4);
        if (!rawRange(firstDescriptor,24,s.rawBytes) || descriptor<firstDescriptor ||
            (descriptor-firstDescriptor)%24) return;
        const uint32_t expected[6]={read32(p+24),tagStart,stripCount,vertexStart,vertexCount,layout};
        for (unsigned i=0;i<6;++i) if (read32(raw+descriptor+i*4)!=expected[i]) return;
        const uint8_t *arrays=raw+part+0x14+variant*24;
        const uint32_t tags=read32(arrays), positions=read32(arrays+4), vectors=read32(arrays+8);
        const uint32_t colors=read32(arrays+12);
        if (!rawRange(uint64_t(tags)+uint64_t(tagStart)*16,uint64_t(stripCount)*16,s.rawBytes) ||
            !rawRange(uint64_t(positions)+uint64_t(vertexStart)*12,uint64_t(vertexCount)*12,s.rawBytes) ||
            !rawRange(uint64_t(vectors)+uint64_t(vertexStart)*16,uint64_t(vertexCount)*16,s.rawBytes) ||
            !rawRange(uint64_t(colors)+uint64_t(vertexStart)*4,uint64_t(vertexCount)*4,s.rawBytes)) return;
        uint32_t consumed=0;
        for (uint32_t j=0;j<stripCount;++j)
        {
            const uint32_t stripIndex=firstStrip+j;
            const uint8_t *strip=v.strips+size_t(stripIndex)*32;
            const uint32_t n=read32(strip+4), first=read32(strip), tagOffset=tags+(tagStart+j)*16;
            if (read32(strip+8)!=tagOffset || std::memcmp(raw+tagOffset,strip+16,16)) return;
            const uint32_t pos=positions+(vertexStart+consumed)*12;
            const uint32_t vec=vectors+(vertexStart+consumed)*16;
            const uint32_t kind=layout==2 ? 1 : 0;
            for (uint32_t i=0;i<n;++i)
            {
                const uint8_t *vertex=v.vertices+size_t(first+i)*44;
                if (!geometryEqual(raw+pos+i*12,raw+vec+i*16,kind,vertex) || read32(vertex+40)) return;
                if (kind==0 && (read32(vertex+12)||read32(vertex+16)||read32(vertex+20))) return;
                if (kind==1 && (read32(vertex+28)||read32(vertex+32)||read32(vertex+36)!=0x3f800000u)) return;
            }
            if (next>=s.bindingCount) return;
            s.bindings[next++]={s.base+tagOffset,s.base+pos,s.base+vec,n,kind,first,stripIndex,b};
            consumed+=n;
        }
        if (consumed!=vertexCount) return;
    }
    if (next!=s.bindingCount) return;
    std::sort(s.bindings,s.bindings+s.bindingCount,[](const Binding &a,const Binding &b) { return compareKey(a,b)<0; });
    for (uint32_t i=1;i<s.bindingCount;++i) if (compareKey(s.bindings[i-1],s.bindings[i])==0) return;
    c.ok=true;
}

uint32_t originFormat(const Origin &origin)
{
#if TS_BG_FAST
    return origin.format&255u;
#else
    return origin.format;
#endif
}
bool originMatches(const State &s,uint32_t row,uint32_t address,uint32_t format)
{
    return row<kRows && s.rows[row].epoch==s.epoch && s.rows[row].source==address && originFormat(s.rows[row])==format;
}

#if TS_BG_FAST
bool originRangeMatches(State &s,uint32_t row,uint32_t address,uint32_t format,uint32_t count)
{
    if (!count || row>=kRows || count>kRows-row) return false;
    const uint32_t stride=format==8 ? 12u : 16u;
    if (originMatches(s,row,address,format))
    {
        const uint32_t encoded=s.rows[row].format>>8;
        if (encoded && encoded<=kRows)
        {
            const uint32_t first=encoded-1;
            if (first<=row && s.rangeEnds[first]>=row+count &&
                address>=(row-first)*stride &&
                originMatches(s,first,address-(row-first)*stride,format) &&
                (s.rows[first].format>>8)==encoded)
            { ++s.stats.provenanceFastRanges; return true; }
        }
    }
    for (uint32_t i=0;i<count;++i)
    {
        ++s.stats.provenanceRowChecks;
        if (!originMatches(s,row+i,address+i*stride,format)) return false;
    }
    return true;
}
#endif

uint32_t findBinding(State &s,const Binding &key)
{
#if TS_BG_FAST
    // The cache contains only indexes, never borrowed pack pointers. Every
    // hit compares all five source-identity fields; hashes only choose a set.
    if (s.lastBinding)
    {
        const uint32_t previous=s.lastBinding-1;
        if (compareKey(s.bindings[previous],key)==0)
        { ++s.stats.bindingCacheHits; return previous; }
        // Consecutive strips usually occupy consecutive sorted source tags.
        if (previous+1<s.bindingCount && compareKey(s.bindings[previous+1],key)==0)
        { ++s.stats.bindingCacheHits; s.lastBinding=previous+2; return previous+1; }
    }
    const uint32_t hash=(key.tag>>4)^(key.position>>2)^(key.vector>>4)^(key.count<<1)^(key.kind<<6);
    const uint32_t set=(hash^(hash>>7))&(State::kBindingSets-1);
    for (uint32_t way=0;way<2;++way)
    {
        const uint32_t encoded=s.bindingCache[set][way];
        if (encoded && compareKey(s.bindings[encoded-1],key)==0)
        {
            s.lastBinding=encoded; s.olderBinding[set]=uint8_t(way^1u);
            ++s.stats.bindingCacheHits; return encoded-1;
        }
    }
#endif
    ++s.stats.bindingSearches;
    uint32_t lo=0,hi=s.bindingCount;
    while (lo<hi) { const uint32_t m=lo+(hi-lo)/2; if (compareKey(s.bindings[m],key)<0) lo=m+1; else hi=m; }
    if (lo==s.bindingCount || compareKey(s.bindings[lo],key)!=0) return kNoBinding;
#if TS_BG_FAST
    const uint32_t way=s.olderBinding[set];
    s.bindingCache[set][way]=lo+1; s.olderBinding[set]=uint8_t(way^1u); s.lastBinding=lo+1;
#endif
    return lo;
}

void bindDraw(void *opaque,const ts_xbg::View &v)
{
    State &s=*static_cast<State *>(opaque); Draw &d=s.draw;
    uint32_t vi=d.top+24;
    for (uint32_t j=0;j<kXboxBgMaxBatchStrips && d.top+j<kRows;++j)
    {
        const uint8_t *tag=d.vu+size_t(d.top+j)*16;
        const uint32_t n=read32(tag)&0x7fffu;
        if (n<3 || n>64 || vi<d.top+24 || vi+n>d.top+88 || vi+128+n>kRows) break;
        auto &slot=d.strips[d.count++]; slot.vi=vi; slot.count=n;
#if TS_BG_FAST
        d.byVertex[vi-d.top-24]=uint8_t(d.count);
#endif
        const Origin &t=s.rows[d.top+j], &p=s.rows[vi], &x=s.rows[vi+128];
        if (t.epoch==s.epoch && p.epoch==s.epoch && x.epoch==s.epoch &&
            originFormat(t)==12 && originFormat(p)==8 && originFormat(x)==12)
        {
            Binding key{t.source,p.source,x.source,n,d.kind,0,0,0};
            const uint32_t lo=findBinding(s,key);
            if (lo!=kNoBinding)
            {
                const Binding &b=s.bindings[lo];
                bool ok=std::memcmp(tag,v.strips+size_t(b.strip)*32+16,16)==0;
#if TS_BG_FAST
                if (ok) ok=originRangeMatches(s,vi,b.position,8,n) && originRangeMatches(s,vi+128,b.vector,12,n);
#else
                for (uint32_t i=0;ok && i<n;++i)
                {
                    s.stats.provenanceRowChecks+=2;
                    ok=originMatches(s,vi+i,b.position+i*12,8) && originMatches(s,vi+128+i,b.vector+i*16,12);
                }
#endif
#if TS_BG_VERIFY
                if (ok)
                {
                    for (uint32_t i=0;i<n;++i)
                        if (!geometryEqual(d.vu+size_t(vi+i)*16,d.vu+size_t(vi+128+i)*16,d.kind,
                                           v.vertices+size_t(b.firstVertex+i)*44)) { ok=false; break; }
                    if (ok) { ++s.stats.verifiedStrips; s.stats.verifiedVertices+=n; }
                    else ++s.stats.geometryDiffs;
                }
#endif
                if (ok) { slot.binding=lo; ++s.stats.boundStrips; }
            }
        }
        vi+=n;
        if (read32(tag)&0x8000u) break;
    }
}
struct WriteContext { const Binding *b; XboxBgStripWriter writer; void *user; bool done=false; };
void writeStrip(void *opaque,const ts_xbg::View &v)
{
    auto &c=*static_cast<WriteContext *>(opaque);
    c.writer(v.vertices+size_t(c.b->firstVertex)*44,c.user); c.done=true;
}
#if TS_BG_BATCH
struct BatchContext
{
    State *state;
    uint32_t first, count;
    XboxBgBatchWriter writer;
    void *user;
    bool done=false;
};
void writeBatch(void *opaque,const ts_xbg::View &v)
{
    auto &c=*static_cast<BatchContext *>(opaque);
    XboxBgPackedStrip packed[kXboxBgMaxBatchStrips];
    // Resolve the complete group before invoking any output. The State
    // guard pins its binding indexes, and withView pins this exact pack
    // generation throughout the single synchronous callback.
    for (uint32_t i=0;i<c.count;++i)
    {
        const auto &strip=c.state->draw.strips[c.first+i];
        if (strip.binding>=c.state->bindingCount) return;
        const Binding &binding=c.state->bindings[strip.binding];
        if (binding.firstVertex>v.vertexCount ||
            strip.count>v.vertexCount-binding.firstVertex) return;
        packed[i]={v.vertices+size_t(binding.firstVertex)*44,strip.vi,strip.count};
    }
    c.writer(packed,c.count,c.user);
    c.done=true;
}
#endif
} // namespace

void xboxBgConfigure(const char *root,uint32_t budget)
{
    State &s=state(); s.tracking.store(false,std::memory_order_release); Guard g(s,true);
    if (!g.held) { s.disableLost.store(true,std::memory_order_release); return; }
    s.clear(); s.budget=0; s.root[0]=0;
    if (!root || !*root || budget>XboxBgLoader::kMaxResidentBytes) return;
    size_t n=0; while (n<sizeof(s.root) && root[n]) ++n;
    if (n==sizeof(s.root)) return;
    std::memcpy(s.root,root,n+1); s.budget=budget;
}
void xboxBgPrepareSource(uint8_t *rdram,uint32_t level,uint32_t base,uint32_t bytes)
{
    State &s=state(); s.tracking.store(false,std::memory_order_release); Guard g(s,true); if (!g.held) return;
    s.clear();
    if (!s.budget || !s.root[0]) return;
    if (!rdram || !level || level==100 || base>=kRamBytes || bytes<16 || bytes>kRamBytes-base)
    { ++s.stats.sourceRejects; return; }
    char path[224];
#if defined(TS_BG_HOST) && TS_BG_HOST
    constexpr char separator='/';
#else
    constexpr char separator='\\';
#endif
    const int length=std::snprintf(path,sizeof(path),"%s%clevel%u.xbg",s.root,separator,level);
    if (length<0 || size_t(length)>=sizeof(path) ||
        s.loader.load(path,level,s.budget)!=XboxBgLoader::Status::Ready || !s.loader.snapshot(s.pack))
    { ++s.stats.loadRejects; s.clear(); return; }
    uint8_t hash[32]; sha256(rdram+base,bytes,hash);
    const uint64_t bindingBytes=uint64_t(s.pack.stripCount)*sizeof(Binding);
    if (s.pack.sourceRawBytes!=bytes || std::memcmp(hash,s.pack.sourceRawSha256,32) ||
        bindingBytes>s.budget-s.pack.bytes)
    { ++s.stats.sourceRejects; s.clear(); return; }
    s.bindings=static_cast<Binding *>(std::malloc(size_t(bindingBytes)));
    if (!s.bindings) { ++s.stats.loadRejects; s.clear(); return; }
    s.base=base; s.rawBytes=bytes; s.rdram=rdram; s.level=level; s.bindingCount=s.pack.stripCount;
    BuildContext context{&s,rdram+base};
    if (!s.loader.withView(s.pack.generation,&buildBindings,&context) || !context.ok)
    { ++s.stats.sourceRejects; s.clear(); return; }
    s.prepared=true; ++s.stats.prepared;
    s.stats.level=level; s.stats.packBytes=s.pack.bytes; s.stats.bindingBytes=uint32_t(bindingBytes);
}
void xboxBgActivateSource(uint8_t *rdram,uint32_t level,uint32_t base,uint32_t bytes)
{
    State &s=state(); Guard g(s,true); if (!g.held) return;
    s.forget();
    if (!s.prepared || s.rdram!=rdram || s.level!=level || s.base!=base || s.rawBytes!=bytes)
    { ++s.stats.sourceRejects; s.clear(); return; }
    s.active=true; s.stats.active=true; ++s.stats.activated;
    s.tracking.store(true,std::memory_order_release);
}
void xboxBgResetSource()
{
    State &s=state(); s.tracking.store(false,std::memory_order_release); Guard g(s,true); if (!g.held) return;
    s.active=false; s.stats.active=false; s.forget();
}
void xboxBgInvalidateSource()
{
    State &s=state(); s.tracking.store(false,std::memory_order_release); Guard g(s,true); if (g.held) s.clear();
}
void xboxBgSourceWrite(uint32_t destination)
{
    State &s=state(); Guard g(s,true); if (!g.held) return;
    const uint32_t address=destination&0x1fffffffu;
    if (s.prepared && address>=s.base && address-s.base<s.rawBytes) s.clear();
}
void xboxBgInvalidateVu()
{
    State &s=state(); if (!s.tracking.load(std::memory_order_acquire)) return;
    Guard g(s); if (g.held) s.forget();
}
void xboxBgNoteUnpack(const uint8_t *rdram,const uint8_t *vu,uint32_t dest,const uint8_t *source,
                      uint32_t count,uint32_t format,uint32_t cl,uint32_t wl,uint32_t mode,bool masked,bool worker)
{
    State &s=state(); if (!s.tracking.load(std::memory_order_acquire)) return;
    Guard g(s); if (!g.held) return;
    s.draw.vu=nullptr; s.draw.count=0;
    if (worker || !s.active || rdram!=s.rdram || !vu || count>256 || !count || !cl || !wl || cl>256 || wl>256)
    { s.forget(); return; }
    if (s.vu!=vu) { s.forget(); s.vu=vu; }
    ++s.stats.observedUnpacks;
    const uint32_t stride=format==8 ? 12 : 16;
    const uintptr_t ram=reinterpret_cast<uintptr_t>(rdram), src=reinterpret_cast<uintptr_t>(source);
    const bool known=source && !masked && !(mode&3u) && cl>=wl && (format==8 || format==12) &&
        src>=ram && src-ram<=kRamBytes && uint64_t(count)*stride<=kRamBytes-(src-ram);
#if TS_BG_FAST
    // Advance the VIF cycle directly. Equal CL/WL values form one continuous
    // run even when WL is one; gaps and VU wrap split certificates. All VIF
    // writes still execute in the original decoder after this observation.
    uint32_t i=0,row=dest&1023u,cycle=0;
    while (i<count)
    {
        uint32_t run=std::min(count-i,kRows-row);
        if (cl>wl) run=std::min(run,wl-cycle);
        const uint32_t owner=(row+1u)<<8;
        for (uint32_t j=0;j<run;++j)
        {
            Origin &previous=s.rows[row+j];
            if (previous.epoch==s.epoch)
            {
                const uint32_t oldOwner=previous.format>>8;
                if (oldOwner) s.rangeEnds[oldOwner-1]=0;
            }
            previous=known ? Origin{uint32_t(src-ram)+(i+j)*stride,s.epoch,format|owner} : Origin{};
        }
        if (known) s.rangeEnds[row]=uint16_t(row+run);
        i+=run; row=(row+run)&1023u;
        if (cl>wl)
        {
            cycle+=run;
            if (cycle==wl) { row=(row+cl-wl)&1023u; cycle=0; }
        }
    }
#else
    for (uint32_t i=0;i<count;++i)
    {
        const uint32_t row=(dest+(cl>=wl ? (i/wl)*cl+i%wl : i))&1023u;
        s.rows[row]=known ? Origin{uint32_t(src-ram)+i*stride,s.epoch,format} : Origin{};
    }
#endif
}
void xboxBgBeginNative(uint32_t pc,const uint8_t *vu,uint32_t bytes,uint32_t top,bool worker)
{
    State &s=state(); if (!s.tracking.load(std::memory_order_acquire)) return;
    Guard g(s); if (!g.held) return;
    s.draw=Draw{};
    pc&=0x3fffu;
    if (worker || !s.active || vu!=s.vu || bytes!=16384 || (pc!=0 && pc!=0x0d20) || top>=1024) return;
    s.draw.vu=vu; s.draw.top=top; s.draw.kind=pc==0x0d20 ? 1 : 0;
    if (!s.loader.withView(s.pack.generation,&bindDraw,&s)) s.draw=Draw{};
}
void xboxBgEndNative() { xboxBgInvalidateVu(); }
bool xboxBgWithStrip(uint32_t kind,const uint8_t *vu,uint32_t vi,uint32_t count,XboxBgStripWriter writer,void *user)
{
    State &s=state(); if (!s.tracking.load(std::memory_order_acquire)) return false;
    Guard g(s); if (!g.held) return false;
    if (writer && s.active && s.draw.vu==vu && s.draw.kind==kind)
    {
#if TS_BG_FAST
        const uint32_t first=s.draw.top+24;
        if (vi>=first && vi-first<sizeof(s.draw.byVertex))
        {
            const uint32_t encoded=s.draw.byVertex[vi-first];
            if (encoded && encoded<=s.draw.count)
            {
                const auto &slot=s.draw.strips[encoded-1];
                if (slot.vi==vi && slot.count==count && slot.binding!=kNoBinding)
                {
                    WriteContext context{&s.bindings[slot.binding],writer,user};
                    if (s.loader.withView(s.pack.generation,&writeStrip,&context) && context.done)
                    { ++s.stats.matchedStrips; s.stats.matchedVertices+=count; return true; }
                }
            }
        }
#else
        for (uint32_t i=0;i<s.draw.count;++i)
        {
            const auto &slot=s.draw.strips[i];
            if (slot.vi!=vi || slot.count!=count || slot.binding==kNoBinding) continue;
            WriteContext context{&s.bindings[slot.binding],writer,user};
            if (s.loader.withView(s.pack.generation,&writeStrip,&context) && context.done)
            { ++s.stats.matchedStrips; s.stats.matchedVertices+=count; return true; }
            break;
        }
#endif
    }
    ++s.stats.fallbackStrips; return false;
}
bool xboxBgWithBatch(uint32_t kind,const uint8_t *vu,const XboxBgStripSpan *strips,
                     uint32_t stripCount,XboxBgBatchWriter writer,void *user)
{
#if TS_BG_BATCH
    State &s=state(); if (!s.tracking.load(std::memory_order_acquire)) return false;
    Guard g(s); if (!g.held) return false;
    ++s.stats.batchAttempts;
    auto miss=[&]() { ++s.stats.batchFallbacks; return false; };
    if (!writer || !strips || !stripCount || stripCount>kXboxBgMaxBatchStrips ||
        kind>1 || !s.active || s.draw.vu!=vu || s.draw.kind!=kind) return miss();

    uint32_t first=s.draw.count;
#if TS_BG_FAST
    const uint32_t base=s.draw.top+24u;
    if (strips[0].vi>=base && strips[0].vi-base<sizeof(s.draw.byVertex))
    {
        const uint32_t encoded=s.draw.byVertex[strips[0].vi-base];
        if (encoded && encoded<=s.draw.count) first=encoded-1;
    }
#else
    for (uint32_t i=0;i<s.draw.count;++i)
        if (s.draw.strips[i].vi==strips[0].vi) { first=i; break; }
#endif
    if (first>=s.draw.count || stripCount>s.draw.count-first) return miss();
    uint32_t vertices=0;
    for (uint32_t i=0;i<stripCount;++i)
    {
        const auto &request=strips[i];
        const auto &slot=s.draw.strips[first+i];
        if (request.vi!=slot.vi || request.count!=slot.count ||
            slot.binding>=s.bindingCount || slot.count<3 || slot.count>64u-vertices)
            return miss();
        const Binding &binding=s.bindings[slot.binding];
        if (binding.kind!=kind || binding.count!=slot.count) return miss();
        // Reordering or repeating bound strips is not a group from the live
        // native draw. Partial PRIM groups remain valid consecutive subsets.
        if (i && request.vi!=strips[i-1].vi+strips[i-1].count) return miss();
        vertices+=slot.count;
    }
    BatchContext context{&s,first,stripCount,writer,user};
    if (!s.loader.withView(s.pack.generation,&writeBatch,&context) || !context.done)
        return miss();
    ++s.stats.batchAccepted;
    s.stats.batchStrips+=stripCount; s.stats.batchVertices+=vertices;
    s.stats.matchedStrips+=stripCount; s.stats.matchedVertices+=vertices;
    return true;
#else
    (void)kind; (void)vu; (void)strips; (void)stripCount; (void)writer; (void)user;
    return false;
#endif
}
bool xboxBgGetStats(XboxBgRuntimeStats &out)
{
    out={}; State &s=state(); Guard g(s); if (!g.held) return false;
    out=s.stats; out.active=s.active && s.tracking.load(std::memory_order_acquire); return true;
}

#else
void xboxBgConfigure(const char *,uint32_t) {}
void xboxBgPrepareSource(uint8_t *,uint32_t,uint32_t,uint32_t) {}
void xboxBgActivateSource(uint8_t *,uint32_t,uint32_t,uint32_t) {}
void xboxBgResetSource() {}
void xboxBgInvalidateSource() {}
void xboxBgSourceWrite(uint32_t) {}
void xboxBgInvalidateVu() {}
void xboxBgNoteUnpack(const uint8_t *,const uint8_t *,uint32_t,const uint8_t *,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,bool,bool) {}
void xboxBgBeginNative(uint32_t,const uint8_t *,uint32_t,uint32_t,bool) {}
void xboxBgEndNative() {}
bool xboxBgWithStrip(uint32_t,const uint8_t *,uint32_t,uint32_t,XboxBgStripWriter,void *) { return false; }
bool xboxBgWithBatch(uint32_t,const uint8_t *,const XboxBgStripSpan *,uint32_t,XboxBgBatchWriter,void *) { return false; }
bool xboxBgGetStats(XboxBgRuntimeStats &out) { out={}; return true; }
#endif
