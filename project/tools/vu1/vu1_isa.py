"""PS2 VU1 micro-instruction decoding shared by the disassembler and the
ahead-of-time recompiler.

Decoding mirrors the runtime interpreter (ps2xRuntime/src/lib/vu/ps2_vu1_*.cpp):
operand usage, latencies and pipelines are taken from decodeUpperUsage /
decodeLowerUsage so that generated code reproduces the interpreter's timing.
"""
from dataclasses import dataclass, field

FMAC_LATENCY = 4
ACC_FORWARD_LATENCY = 1

COMP = "xyzw"


def lane(component):
    """Destination-mask bit for a component (x=8, y=4, z=2, w=1)."""
    return 1 << (3 - component)


def dest_str(dest):
    return "".join(COMP[c] for c in range(4) if dest & lane(c))


def sext(value, bits):
    sign = 1 << (bits - 1)
    return (value & (sign - 1)) - (value & sign)


@dataclass
class Usage:
    vf_read: dict = field(default_factory=dict)  # reg -> lane mask
    vf_write: tuple = (0, 0)                      # (reg, lanes)
    vi_read: int = 0                              # bitmask
    vi_write: int = 0                             # bitmask
    acc_read: int = 0
    acc_write: int = 0
    latency: int = 0
    vf_latency: int = 0
    vi_latency: int = 0
    pipeline: str = "none"
    wait_q: bool = False
    wait_p: bool = False
    reads_clip: bool = False
    writes_clip: bool = False
    delays_next_branch_read: bool = False
    reserved: bool = False

    def add_vf_read(self, reg, lanes):
        if lanes:
            self.vf_read[reg] = self.vf_read.get(reg, 0) | lanes

    def add_vf_write(self, reg, lanes):
        if reg == 0 or lanes == 0:
            return
        if self.vf_write[0] == 0:
            self.vf_write = (reg, lanes)
        elif self.vf_write[0] == reg:
            self.vf_write = (reg, self.vf_write[1] | lanes)


def f_dest(i): return (i >> 21) & 0xF
def f_ft(i): return (i >> 16) & 0x1F
def f_fs(i): return (i >> 11) & 0x1F
def f_fd(i): return (i >> 6) & 0x1F
def f_vit(i): return (i >> 16) & 0xF
def f_vis(i): return (i >> 11) & 0xF
def f_vid(i): return (i >> 6) & 0xF
def f_imm11(i): return sext(i & 0x7FF, 11)
def f_imm15(i): return sext(((i >> 10) & 0x7800) | (i & 0x7FF), 16)  # matches interpreter's int16 cast
def upper_special(i): return (i & 3) | ((i >> 4) & 0x7C)


ACC_READ_OPS = {0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x21, 0x23, 0x25, 0x27, 0x29, 0x2D, 0x2E}
ACC_READ_SPECIAL = {0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x21, 0x23, 0x25, 0x27, 0x29, 0x2D}


def upper_usage(upper):
    u = Usage(pipeline="fmac", latency=FMAC_LATENCY)
    op = upper & 0x3F
    dest, fs, ft, fd = f_dest(upper), f_fs(upper), f_ft(upper), f_fd(upper)
    if op <= 0x2F:
        u.add_vf_read(fs, dest)
        u.add_vf_write(fd, dest)
        if op <= 0x1B:
            u.add_vf_read(ft, lane(op & 3))
        elif op >= 0x28:
            u.add_vf_read(ft, 0xE if op == 0x2E else dest)
        if op in ACC_READ_OPS:
            u.acc_read = dest
        return u
    if op >= 0x3C:
        sp = upper_special(upper)
        writes_acc = sp <= 0x0F or 0x18 <= sp <= 0x1C or sp == 0x1E or 0x20 <= sp <= 0x2A or 0x2C <= sp <= 0x2E
        if writes_acc:
            u.add_vf_read(fs, dest)
            if sp <= 0x1B:
                u.add_vf_read(ft, lane(sp & 3))
            elif 0x28 <= sp <= 0x2E:
                u.add_vf_read(ft, 0xE if sp == 0x2E else dest)
            u.acc_write = dest
            if sp in ACC_READ_SPECIAL:
                u.acc_read = dest
        elif 0x10 <= sp <= 0x17 or sp == 0x1D:
            u.add_vf_read(fs, dest)
            u.add_vf_write(ft, dest)
        elif sp == 0x1F:
            u.add_vf_read(fs, 0xE)
            u.add_vf_read(ft, 0x1)
            u.writes_clip = True
        elif sp not in (0x2F, 0x30):
            u.reserved = True
        return u
    u.reserved = True
    return u


EFU_LATENCY = {0x70: 11, 0x71: 18, 0x72: 18, 0x73: 24, 0x74: 54, 0x75: 54, 0x76: 12, 0x77: 18,
               0x78: 12, 0x79: 29, 0x7A: 12, 0x7C: 54, 0x7D: 44}


def lower_usage(lower):
    u = Usage()
    if lower == 0 or lower == 0x8000033C:
        return u
    op_hi = (lower >> 25) & 0x7F
    vft, vfs = f_ft(lower), f_fs(lower)
    vit, vis, vid = f_vit(lower), f_vis(lower), f_vid(lower)
    dest = f_dest(lower)

    def rvi(r):
        if r:
            u.vi_read |= 1 << r

    def wvi(r):
        if r:
            u.vi_write |= 1 << r

    if op_hi == 0x00:
        u.pipeline, u.latency = "lsu", 4; rvi(vis); u.add_vf_write(vft, dest); return u
    if op_hi == 0x01:
        u.pipeline, u.latency = "lsu", 1; rvi(vit); u.add_vf_read(vfs, dest); return u
    if op_hi == 0x04:
        u.pipeline, u.latency = "lsu", 4; rvi(vis); wvi(vit); return u
    if op_hi == 0x05:
        u.pipeline, u.latency = "lsu", 1; rvi(vis); rvi(vit); return u
    if op_hi in (0x08, 0x09):
        u.pipeline, u.latency = "ialu", 1; u.delays_next_branch_read = True; rvi(vis); wvi(vit); return u
    if op_hi in (0x10, 0x12, 0x13):
        u.pipeline, u.latency = "ialu", 1; u.reads_clip = True; wvi(1); return u
    if op_hi == 0x11:
        u.pipeline, u.latency = "fmac", FMAC_LATENCY; u.writes_clip = True; return u
    if op_hi in (0x14, 0x16, 0x17):
        u.pipeline, u.latency = "ialu", 1; wvi(vit); return u
    if op_hi == 0x15:
        u.pipeline, u.latency = "fmac", FMAC_LATENCY; return u
    if op_hi in (0x18, 0x1A, 0x1B):
        u.pipeline, u.latency = "ialu", 1; rvi(vis); wvi(vit); return u
    if op_hi == 0x1C:
        u.pipeline, u.latency = "ialu", 1; u.reads_clip = True; wvi(vit); return u
    if op_hi == 0x20:
        u.pipeline = "branch"; return u
    if op_hi == 0x21:
        u.pipeline, u.latency = "branch", 1; wvi(vit); return u
    if op_hi == 0x24:
        u.pipeline = "branch"; rvi(vis); return u
    if op_hi == 0x25:
        u.pipeline, u.latency = "branch", 1; rvi(vis); wvi(vit); return u
    if op_hi in (0x28, 0x29):
        u.pipeline = "branch"; rvi(vis); rvi(vit); return u
    if op_hi in (0x2C, 0x2D, 0x2E, 0x2F):
        u.pipeline = "branch"; rvi(vis); return u
    if op_hi != 0x40:
        u.reserved = True
        return u

    direct = lower & 0x3F
    if direct in (0x30, 0x31, 0x34, 0x35):
        u.pipeline, u.latency = "ialu", 1; u.delays_next_branch_read = True
        rvi(vis); rvi(vit); wvi(vid); return u
    if direct == 0x32:
        u.pipeline, u.latency = "ialu", 1; u.delays_next_branch_read = True
        rvi(vis); wvi(vit); return u
    if direct < 0x3C:
        u.reserved = True
        return u

    sp = upper_special(lower)
    if sp in (0x30, 0x31):
        u.pipeline, u.latency = "fmac", 4
        u.add_vf_read(vfs, 0xF if sp == 0x31 else dest); u.add_vf_write(vft, dest)
    elif sp in (0x34, 0x36):
        u.pipeline, u.latency, u.vi_latency = "lsu", 4, 1; u.delays_next_branch_read = True
        rvi(vis); wvi(vis); u.add_vf_write(vft, dest)
    elif sp in (0x35, 0x37):
        u.pipeline, u.latency = "lsu", 1; u.delays_next_branch_read = True
        rvi(vit); wvi(vit); u.add_vf_read(vfs, dest)
    elif sp == 0x38:
        u.pipeline, u.latency = "fdiv", 7
        u.add_vf_read(vfs, lane((lower >> 21) & 3)); u.add_vf_read(vft, lane((lower >> 23) & 3))
    elif sp == 0x39:
        u.pipeline, u.latency = "fdiv", 7; u.add_vf_read(vft, lane((lower >> 23) & 3))
    elif sp == 0x3A:
        u.pipeline, u.latency = "fdiv", 13
        u.add_vf_read(vfs, lane((lower >> 21) & 3)); u.add_vf_read(vft, lane((lower >> 23) & 3))
    elif sp == 0x3B:
        u.pipeline, u.wait_q = "fdiv", True
    elif sp == 0x3C:
        u.pipeline, u.latency = "ialu", 1; u.delays_next_branch_read = True
        u.add_vf_read(vfs, lane((lower >> 21) & 3)); wvi(vit)
    elif sp == 0x3D:
        u.pipeline, u.latency = "fmac", 4; rvi(vis); u.add_vf_write(vft, dest)
    elif sp == 0x3E:
        u.pipeline, u.latency = "lsu", 4; rvi(vis); wvi(vit)
    elif sp == 0x3F:
        u.pipeline, u.latency = "lsu", 1; rvi(vis); rvi(vit)
    elif sp in (0x40, 0x41):
        u.pipeline, u.latency = "fmac", 4; u.add_vf_write(vft, dest)
    elif sp in (0x42, 0x43):
        u.pipeline, u.latency = "ialu", 1; u.add_vf_read(vfs, lane((lower >> 21) & 3))
    elif sp == 0x64:
        u.pipeline, u.latency = "fmac", 4; u.add_vf_write(vft, dest)
    elif sp in (0x68, 0x69):
        u.pipeline, u.latency = "ialu", 1; wvi(vit)
    elif sp == 0x6C:
        u.pipeline, u.latency = "xgkick", 2; rvi(vis)
    elif sp in EFU_LATENCY:
        u.pipeline, u.latency = "efu", EFU_LATENCY[sp]
        if 0x70 <= sp <= 0x73:
            u.add_vf_read(vfs, 0xE)
        elif sp == 0x74:
            u.add_vf_read(vfs, 0xC)
        elif sp == 0x75:
            u.add_vf_read(vfs, 0xA)
        elif sp == 0x76:
            u.add_vf_read(vfs, 0xF)
        else:
            u.add_vf_read(vfs, lane((lower >> 21) & 3))
    elif sp == 0x7B:
        u.pipeline, u.wait_p = "efu", True
    else:
        u.reserved = True
    return u


UPPER_BC_NAMES = {0x00: "add", 0x04: "sub", 0x08: "madd", 0x0C: "msub", 0x10: "max", 0x14: "mini", 0x18: "mul"}
UPPER_NAMES = {0x1C: "mulq", 0x1D: "maxi", 0x1E: "muli", 0x1F: "minii", 0x20: "addq", 0x21: "maddq", 0x22: "addi",
               0x23: "maddi", 0x24: "subq", 0x25: "msubq", 0x26: "subi", 0x27: "msubi", 0x28: "add", 0x29: "madd",
               0x2A: "mul", 0x2B: "max", 0x2C: "sub", 0x2D: "msub", 0x2E: "opmsub", 0x2F: "mini"}
UPPER_SPECIAL_BC = {0x00: "adda", 0x04: "suba", 0x08: "madda", 0x0C: "msuba", 0x18: "mula"}
UPPER_SPECIAL = {0x10: "itof0", 0x11: "itof4", 0x12: "itof12", 0x13: "itof15", 0x14: "ftoi0", 0x15: "ftoi4",
                 0x16: "ftoi12", 0x17: "ftoi15", 0x1C: "mulaq", 0x1D: "abs", 0x1E: "mulai", 0x1F: "clip",
                 0x20: "addaq", 0x21: "maddaq", 0x22: "addai", 0x23: "maddai", 0x24: "subaq", 0x25: "msubaq",
                 0x26: "subai", 0x27: "msubai", 0x28: "adda", 0x29: "madda", 0x2A: "mula", 0x2C: "suba",
                 0x2D: "msuba", 0x2E: "opmula", 0x2F: "nop", 0x30: "nop"}


def disasm_upper(upper):
    op = upper & 0x3F
    dest, fs, ft, fd = f_dest(upper), f_fs(upper), f_ft(upper), f_fd(upper)
    d = dest_str(dest)
    if op < 0x1C:
        base = op & 0x1C
        return f"{UPPER_BC_NAMES[base]}{COMP[op & 3]}.{d} vf{fd}, vf{fs}, vf{ft}{COMP[op & 3]}"
    if op <= 0x2F:
        name = UPPER_NAMES[op]
        if op in (0x1C, 0x20, 0x21, 0x24, 0x25):
            return f"{name}.{d} vf{fd}, vf{fs}, q"
        if op in (0x1D, 0x1E, 0x1F, 0x22, 0x23, 0x26, 0x27):
            return f"{name}.{d} vf{fd}, vf{fs}, i"
        return f"{name}.{d} vf{fd}, vf{fs}, vf{ft}"
    if op >= 0x3C:
        sp = upper_special(upper)
        if sp < 0x10 or 0x18 <= sp <= 0x1B:
            base = sp & 0x1C
            return f"{UPPER_SPECIAL_BC[base]}{COMP[sp & 3]}.{d} acc, vf{fs}, vf{ft}{COMP[sp & 3]}"
        name = UPPER_SPECIAL.get(sp)
        if name is None:
            return f"upper? 0x{upper:08x}"
        if name == "nop":
            return "nop"
        if name == "clip":
            return f"clipw.xyz vf{fs}, vf{ft}w"
        if name.startswith(("itof", "ftoi")) or name == "abs":
            return f"{name}.{d} vf{ft}, vf{fs}"
        if name.endswith("q"):
            return f"{name}.{d} acc, vf{fs}, q"
        if name.endswith("i") and name != "opmula":
            return f"{name}.{d} acc, vf{fs}, i"
        return f"{name}.{d} acc, vf{fs}, vf{ft}"
    return f"upper? 0x{upper:08x}"


def disasm_lower(lower, pc):
    if lower == 0 or lower == 0x8000033C:
        return "nop"
    op_hi = (lower >> 25) & 0x7F
    vft, vfs = f_ft(lower), f_fs(lower)
    vit, vis, vid = f_vit(lower), f_vis(lower), f_vid(lower)
    d = dest_str(f_dest(lower))
    imm = f_imm11(lower)
    tgt = lambda: f"0x{(pc + 8 + imm * 8) & 0x3FFF:04x}"
    table = {
        0x00: lambda: f"lq.{d} vf{vft}, {imm}(vi{vis})",
        0x01: lambda: f"sq.{d} vf{vfs}, {imm}(vi{vit})",
        0x04: lambda: f"ilw.{d} vi{vit}, {imm}(vi{vis})",
        0x05: lambda: f"isw.{d} vi{vit}, {imm}(vi{vis})",
        0x08: lambda: f"iaddiu vi{vit}, vi{vis}, {f_imm15(lower)}",
        0x09: lambda: f"isubiu vi{vit}, vi{vis}, {f_imm15(lower)}",
        0x10: lambda: f"fceq vi1, 0x{lower & 0xFFFFFF:06x}",
        0x11: lambda: f"fcset 0x{lower & 0xFFFFFF:06x}",
        0x12: lambda: f"fcand vi1, 0x{lower & 0xFFFFFF:06x}",
        0x13: lambda: f"fcor vi1, 0x{lower & 0xFFFFFF:06x}",
        0x14: lambda: f"fseq vi{vit}, 0x{(((lower >> 21) & 1) << 11) | (lower & 0x7FF):03x}",
        0x15: lambda: f"fsset 0x{(((lower >> 21) & 1) << 11) | (lower & 0x7FF):03x}",
        0x16: lambda: f"fsand vi{vit}, 0x{(((lower >> 21) & 1) << 11) | (lower & 0x7FF):03x}",
        0x17: lambda: f"fsor vi{vit}, 0x{(((lower >> 21) & 1) << 11) | (lower & 0x7FF):03x}",
        0x18: lambda: f"fmeq vi{vit}, vi{vis}",
        0x1A: lambda: f"fmand vi{vit}, vi{vis}",
        0x1B: lambda: f"fmor vi{vit}, vi{vis}",
        0x1C: lambda: f"fcget vi{vit}",
        0x20: lambda: f"b {tgt()}",
        0x21: lambda: f"bal vi{vit}, {tgt()}",
        0x24: lambda: f"jr vi{vis}",
        0x25: lambda: f"jalr vi{vit}, vi{vis}",
        0x28: lambda: f"ibeq vi{vit}, vi{vis}, {tgt()}",
        0x29: lambda: f"ibne vi{vit}, vi{vis}, {tgt()}",
        0x2C: lambda: f"ibltz vi{vis}, {tgt()}",
        0x2D: lambda: f"ibgtz vi{vis}, {tgt()}",
        0x2E: lambda: f"iblez vi{vis}, {tgt()}",
        0x2F: lambda: f"ibgez vi{vis}, {tgt()}",
    }
    if op_hi in table:
        return table[op_hi]()
    if op_hi != 0x40:
        return f"lower? 0x{lower:08x}"
    direct = lower & 0x3F
    names = {0x30: "iadd", 0x31: "isub", 0x34: "iand", 0x35: "ior"}
    if direct in names:
        return f"{names[direct]} vi{vid}, vi{vis}, vi{vit}"
    if direct == 0x32:
        return f"iaddi vi{vit}, vi{vis}, {sext((lower >> 6) & 0x1F, 5)}"
    sp = upper_special(lower)
    fsf = COMP[(lower >> 21) & 3]
    ftf = COMP[(lower >> 23) & 3]
    special = {
        0x30: lambda: f"move.{d} vf{vft}, vf{vfs}",
        0x31: lambda: f"mr32.{d} vf{vft}, vf{vfs}",
        0x34: lambda: f"lqi.{d} vf{vft}, (vi{vis}++)",
        0x35: lambda: f"sqi.{d} vf{vfs}, (vi{vit}++)",
        0x36: lambda: f"lqd.{d} vf{vft}, (--vi{vis})",
        0x37: lambda: f"sqd.{d} vf{vfs}, (--vi{vit})",
        0x38: lambda: f"div q, vf{vfs}{fsf}, vf{vft}{ftf}",
        0x39: lambda: f"sqrt q, vf{vft}{ftf}",
        0x3A: lambda: f"rsqrt q, vf{vfs}{fsf}, vf{vft}{ftf}",
        0x3B: lambda: "waitq",
        0x3C: lambda: f"mtir vi{vit}, vf{vfs}{fsf}",
        0x3D: lambda: f"mfir.{d} vf{vft}, vi{vis}",
        0x3E: lambda: f"ilwr.{d} vi{vit}, (vi{vis})",
        0x3F: lambda: f"iswr.{d} vi{vit}, (vi{vis})",
        0x40: lambda: f"rnext.{d} vf{vft}, r",
        0x41: lambda: f"rget.{d} vf{vft}, r",
        0x42: lambda: f"rinit r, vf{vfs}{fsf}",
        0x43: lambda: f"rxor r, vf{vfs}{fsf}",
        0x64: lambda: f"mfp.{d} vf{vft}, p",
        0x68: lambda: f"xtop vi{vit}",
        0x69: lambda: f"xitop vi{vit}",
        0x6C: lambda: f"xgkick vi{vis}",
        0x70: lambda: f"esadd p, vf{vfs}",
        0x71: lambda: f"ersadd p, vf{vfs}",
        0x72: lambda: f"eleng p, vf{vfs}",
        0x73: lambda: f"erleng p, vf{vfs}",
        0x74: lambda: f"eatanxy p, vf{vfs}",
        0x75: lambda: f"eatanxz p, vf{vfs}",
        0x76: lambda: f"esum p, vf{vfs}",
        0x77: lambda: f"ersqrt p, vf{vfs}{fsf}",
        0x78: lambda: f"esqrt p, vf{vfs}{fsf}",
        0x79: lambda: f"esin p, vf{vfs}{fsf}",
        0x7A: lambda: f"ercpr p, vf{vfs}{fsf}",
        0x7B: lambda: "waitp",
        0x7C: lambda: f"eatan p, vf{vfs}{fsf}",
        0x7D: lambda: f"eexp p, vf{vfs}{fsf}",
    }
    if sp in special:
        return special[sp]()
    return f"lower? 0x{lower:08x}"


BRANCH_OPS = {0x20, 0x21, 0x24, 0x25, 0x28, 0x29, 0x2C, 0x2D, 0x2E, 0x2F}


def is_branch(lower):
    return lower not in (0, 0x8000033C) and ((lower >> 25) & 0x7F) in BRANCH_OPS


def branch_target(lower, pc):
    op_hi = (lower >> 25) & 0x7F
    if op_hi in (0x24, 0x25):
        return None  # register-indirect
    return (pc + 8 + f_imm11(lower) * 8) & 0x3FFF


def is_conditional(lower):
    return ((lower >> 25) & 0x7F) in (0x28, 0x29, 0x2C, 0x2D, 0x2E, 0x2F)
