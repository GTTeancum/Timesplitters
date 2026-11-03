#!/usr/bin/env python3
"""Inspect VCU1/native-entry recordings or extract one private .xmesh.

Capture header/order: ps2xRuntime/src/lib/vu/ps2_vu_capture.h.
Only the known TimeSplitters microprogram's five draw entries are converted.
The opaque host VU1State is skipped by its recorded size, never deserialized.
Xbox TSVUCAP recordings contain data RAM and the native callback's registered
program identity; they contain neither host VU1State nor microprogram bytes.
This is offline evidence tooling, not a static-asset importer or runtime cache.
"""
from __future__ import annotations

import argparse
from collections import Counter
from dataclasses import dataclass
import hashlib
import json
from pathlib import Path
import struct
from typing import BinaryIO, Iterator

import xmeshbuild as mesh

CAPTURE = struct.Struct("<8I")
CAPTURE_MAGIC = 0x31554356  # little-endian bytes: VCU1
NATIVE_CAPTURE = struct.Struct("<8s6I2Q")
NATIVE_MAGIC = b"TSVUCAP\0"
INPUT_FORMATS = ("auto", "vcu1", "native-capture")
MAX_STATE_BYTES = 65536    # tool safety limit, NOT sizeof(VU1State)
MAX_RECORDS = 8192         # the existing recorder's maximum
PROGRAM_HASH = 0x38AE1E855CD83DEE  # vu1_native_ts.cpp kProgramHash
DRAW_KINDS = {0x0000: 0, 0x0D20: 1, 0x1AE0: 2, 0x3520: 2, 0x2800: 3}


class CaptureError(ValueError):
    """Invalid/truncated container or unsupported selection; never salvage silently."""


@dataclass(frozen=True)
class Record:
    index: int
    offset: int
    state_bytes: int | None
    pc: int
    top: int
    itop: int | None
    max_cycles: int | None
    code: bytes | None
    data: bytes
    format: str = "vcu1"
    program_hash: int | None = None  # declared identity; native recordings only
    draw_ordinal: int | None = None


def _read_exact(stream: BinaryIO, size: int, label: str, offset: int) -> bytes:
    # read() can legally return fewer bytes without EOF (e.g. a pipe).
    data = bytearray()
    while len(data) < size:
        chunk = stream.read(size - len(data))
        if not chunk:
            raise CaptureError(f"truncated {label} at byte {offset}: expected {size}, got {len(data)}")
        data.extend(chunk)
    return bytes(data)


def records(stream: BinaryIO, *, limit: int = MAX_RECORDS,
            input_format: str = "auto") -> Iterator[Record]:
    """Bounded streaming parser. Exhaust it to validate the ENTIRE recording.

    Neither format has a global record count or checksum. EOF at a record
    boundary is valid; a recording cut at such a boundary is undetectable.
    Little-endian captures only. State sizes may vary between host builds.
    """
    if not 1 <= limit <= MAX_RECORDS:
        raise ValueError(f"record limit must be 1..{MAX_RECORDS}")
    if input_format not in INPUT_FORMATS:
        raise ValueError(f"input format must be one of {', '.join(INPUT_FORMATS)}")
    stream_format = None if input_format == "auto" else input_format
    previous_ordinal = None
    offset = 0
    index = 0
    while True:
        first = stream.read(1)
        if not first:
            if index == 0:
                raise CaptureError("empty recording")
            return
        if index >= limit:
            raise CaptureError(f"record limit {limit} exceeded at byte {offset}")
        prefix = first + _read_exact(stream, 3, "capture magic", offset + 1)
        detected = ("vcu1" if prefix == struct.pack("<I", CAPTURE_MAGIC) else
                    "native-capture" if prefix == NATIVE_MAGIC[:4] else None)
        if detected is None:
            raise CaptureError(f"bad capture magic at byte {offset}; expected little-endian VCU1 or TSVUCAP")
        if stream_format is not None and detected != stream_format:
            raise CaptureError(f"record {index} is {detected}, expected {stream_format}; mixed formats are not supported")
        stream_format = detected
        if detected == "vcu1":
            header = prefix + _read_exact(stream, CAPTURE.size - 4, "capture header", offset + 4)
            _, state_size, code_size, data_size, pc, top, itop, cycles = CAPTURE.unpack(header)
            if not 1 <= state_size <= MAX_STATE_BYTES:
                raise CaptureError(f"invalid state size {state_size} in record {index}")
            if not 0 < code_size <= mesh.VU_BYTES or code_size % 8:
                raise CaptureError(f"invalid code size {code_size} in record {index}")
            if not 0 < data_size <= mesh.VU_BYTES or data_size % 16:
                raise CaptureError(f"invalid data size {data_size} in record {index}")
            body_offset = offset + CAPTURE.size
            _read_exact(stream, state_size, "opaque VU1State", body_offset)
            code = _read_exact(stream, code_size, "microprogram", body_offset + state_size)
            data = _read_exact(stream, data_size, "VU data RAM", body_offset + state_size + code_size)
            yield Record(index, offset, state_size, pc, top, itop, cycles, code, data)
            offset = body_offset + state_size + code_size + data_size
        else:
            header = prefix + _read_exact(stream, NATIVE_CAPTURE.size - 4, "native capture header", offset + 4)
            magic, version, size, data_size, pc, top, reserved, program_hash, ordinal = NATIVE_CAPTURE.unpack(header)
            if magic != NATIVE_MAGIC or version != 1:
                raise CaptureError(f"unsupported native magic/version in record {index}")
            if data_size != mesh.VU_BYTES or size != NATIVE_CAPTURE.size + mesh.VU_BYTES or reserved:
                raise CaptureError(f"invalid native record length/reserved field in record {index}")
            if top >= 1024:
                raise CaptureError(f"invalid native TOP in record {index}")
            if previous_ordinal is not None and ordinal <= previous_ordinal:
                raise CaptureError(f"native draw ordinals must increase in record {index}")
            previous_ordinal = ordinal
            data = _read_exact(stream, data_size, "VU data RAM", offset + NATIVE_CAPTURE.size)
            yield Record(index, offset, None, pc, top, None, None, None, data,
                         "native-capture", program_hash, ordinal)
            offset += size
        index += 1


def hash_program(code: bytes) -> int:
    """The exact wrapping FNV-1a identity used by hashVu1Code, NOT authentication."""
    value = 0xCBF29CE484222325
    for byte in code:
        value = ((value ^ byte) * 0x100000001B3) & 0xFFFFFFFFFFFFFFFF
    return value


def _program_identity(record: Record) -> int:
    if record.format == "native-capture":
        if record.program_hash is None or record.code is not None:
            raise CaptureError("invalid native program-identity metadata")
        return record.program_hash
    if record.format != "vcu1" or record.code is None:
        raise CaptureError("missing captured microprogram identity")
    return hash_program(record.code)


def _entry_pc(record: Record) -> int:
    # Native runInner and the Xbox recorder classify aliases this way while
    # preserving the original callback PC in the file. Keep the existing VCU1
    # importer's stricter PC contract unchanged.
    return record.pc & 0x3FFF if record.format == "native-capture" else record.pc


def _state_block(data: bytes, top: int) -> bytes:
    # Match runDraw's bounded state-block lookup. This is an input digest,
    # NOT interpretation of GS state or a guarantee of material equivalence.
    row = top + 216
    if not 0 <= row < 1024:
        raise CaptureError("render-state block is outside VU1 data RAM")
    tag = mesh.U32X4.unpack_from(data, row * 16)
    nreg = (tag[1] >> 28) or 16
    size = 1 + (tag[0] & 0x7FFF) * nreg
    if size > 32 or row + size > 1024:
        raise CaptureError("render-state block exceeds the native path's bounds")
    return data[row * 16:(row + size) * 16]


def convert_record(record: Record) -> bytes:
    """Fail closed: no caller-supplied kind can override the code/PC identity."""
    if _program_identity(record) != PROGRAM_HASH:
        raise CaptureError("unsupported microprogram identity; no layout is inferred")
    return _convert_known_record(record)


def _convert_known_record(record: Record) -> bytes:
    """Internal: caller has already verified the microprogram identity."""
    pc = _entry_pc(record)
    if pc not in DRAW_KINDS:
        raise CaptureError(f"PC 0x{record.pc:x} is not a supported draw entry")
    if len(record.data) != mesh.VU_BYTES:
        raise CaptureError("draw requires exactly 16384 bytes of VU1 data RAM")
    if not 0 <= record.top < 1024:
        raise CaptureError("draw TOP is not a VU1 qword index")
    _state_block(record.data, record.top)
    try:
        return mesh.convert(record.data, DRAW_KINDS[pc], record.top)
    except ValueError as error:
        raise CaptureError(str(error)) from error


def fingerprints(record: Record, packed: bytes) -> dict:
    """Fingerprint our converter output. Never pass arbitrary packs to this helper.

    Geometry excludes TOP, source rows, unrelated VU RAM and live constants.
    It includes PC, layout, strip lengths/order and every decoded vertex byte.
    Tags and material/constant inputs have SEPARATE digests: equal geometry
    is not equal rendering and never authorizes skipping a draw.
    """
    fields = mesh.HEADER.unpack_from(packed)
    kind, strip_count, vertex_count, vertex_offset = fields[3], fields[5], fields[6], fields[8]
    geometry = hashlib.sha256(b"TSXMESH geometry observation v1\0")
    geometry.update(struct.pack("<4I", _entry_pc(record), kind, strip_count, vertex_count))
    tags = hashlib.sha256(b"TSXMESH draw tags v1\0")
    for i in range(strip_count):
        strip = mesh.STRIP.unpack_from(packed, mesh.HEADER.size + i * mesh.STRIP.size)
        geometry.update(struct.pack("<I", strip[1]))
        tags.update(struct.pack("<5I", *strip[3:]))
    geometry.update(packed[vertex_offset:])
    # The fixed input rows documented by vu1_native_ts.cpp; a superset of
    # each layout's reads. A differing digest alone does not prove a visible change.
    constants = record.data[:22 * 16] + record.data[106 * 16:122 * 16]
    return {
        "kind": mesh.NAMES[kind], "strips": strip_count, "vertices": vertex_count,
        "vertex_bytes": vertex_count * mesh.VERTEX.size,
        "geometry_sha256": geometry.hexdigest(),
        "tags_sha256": tags.hexdigest(),
        "constant_inputs_sha256": hashlib.sha256(constants).hexdigest(),
        "state_block_sha256": hashlib.sha256(_state_block(record.data, record.top)).hexdigest(),
        "data_sha256": hashlib.sha256(record.data).hexdigest(),
    }


def analyze(stream: BinaryIO, *, input_format: str = "auto") -> dict:
    """Report every record, including unsupported ones, without retaining raw assets."""
    items = []
    counts: Counter = Counter()
    groups: dict = {}
    # Record streams normally repeat one code image. Keep ONE image/hash,
    # not every microprogram in an attacker-controlled capture.
    previous_code = None
    previous_hash = None
    capture_format = None
    for record in records(stream, input_format=input_format):
        capture_format = record.format
        if record.format == "native-capture":
            identity = _program_identity(record)
            identity_source = "native_callback_registration"
        else:
            if record.code != previous_code:
                previous_code = record.code
                previous_hash = _program_identity(record)
            identity = previous_hash
            identity_source = "captured_microprogram_bytes"
        item = {"record": record.index, "offset": record.offset, "pc": record.pc,
                "top": record.top, "itop": record.itop, "max_cycles": record.max_cycles,
                "state_bytes": record.state_bytes, "program_hash": f"{identity:016x}",
                "format": record.format, "program_identity_source": identity_source,
                "code_bytes": len(record.code) if record.code is not None else None,
                "host_state_captured": record.state_bytes is not None,
                "microprogram_captured": record.code is not None}
        if record.format == "native-capture":
            item.update(draw_ordinal=record.draw_ordinal, entry_pc=_entry_pc(record))
        packed = None
        if identity != PROGRAM_HASH:
            item.update(status="unsupported_program", reason="no geometry layout inferred")
        elif _entry_pc(record) not in DRAW_KINDS:
            item.update(status="non_draw_entry", reason="constant, packet or other entry; not converted")
        else:
            try:
                packed = _convert_known_record(record)
                item.update(status="converted", **fingerprints(record, packed))
            except CaptureError as error:
                item.update(status="unsupported_draw", reason=str(error))
        counts[item["status"]] += 1
        items.append(item)
        if packed is not None and item["status"] == "converted":
            group = groups.setdefault(item["geometry_sha256"], {
                "records": [], "constant_inputs": set(), "state_blocks": set(),
                "tags": set(), "source_images": set(), "vertex_bytes": item["vertex_bytes"]})
            group["records"].append(record.index)
            for key, field in (("constant_inputs", "constant_inputs_sha256"),
                               ("state_blocks", "state_block_sha256"), ("tags", "tags_sha256"),
                               ("source_images", "data_sha256")):
                group[key].add(item[field])
    repeated = []
    for digest, group in groups.items():
        if len(group["records"]) > 1:
            repeated.append({"geometry_sha256": digest, "records": group["records"],
                             "vertex_bytes": group["vertex_bytes"],
                             **{f"distinct_{k}": len(group[k]) for k in
                                ("constant_inputs", "state_blocks", "tags", "source_images")}})
    return {
        "schema": "timesplitters-xmesh-capture-report-v1",
        "capture_format": capture_format,
        "record_count": len(items), "status_counts": dict(counts),
        "unique_geometry_observations": len(groups), "repeated_geometry": repeated,
        "runtime_installed": False, "records": items,
        "limitations": [
            "Equal decoded geometry is not static-asset identity, matching frame/view identity, or safe cache reuse.",
            "Records have no frame/object IDs; order is capture order, not an inferred frame number.",
            "Materials, GS history, transforms, lighting, clipping, side effects and GPU lifetimes are not replayed.",
            "Capture containers have no global checksum/count; EOF at a record boundary cannot prove the intended capture completed.",
            "Native TSVUCAP identity is a registration label; code and host VU1State are not captured or replayed.",
            "Counts and byte sizes are observations, not predicted frame-time savings or visual validation.",
        ],
    }


def extract(stream: BinaryIO, selected: int, *, input_format: str = "auto") -> bytes:
    """Validate the entire stream BEFORE returning a selected pack for publication."""
    if not 0 <= selected < MAX_RECORDS:
        raise CaptureError(f"record selection must be 0..{MAX_RECORDS - 1}")
    packed = None
    for record in records(stream, input_format=input_format):
        if record.index == selected:
            packed = convert_record(record)
    if packed is None:
        raise CaptureError(f"record {selected} does not exist")
    return packed


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="command", required=True)
    inspect = sub.add_parser("inspect", help="private JSON summary; no vertex payloads")
    inspect.add_argument("input", type=Path)
    inspect.add_argument("--output", type=Path, help="otherwise print JSON to stdout")
    inspect.add_argument("--format", choices=INPUT_FORMATS, default="auto", help="default: detect container magic")
    select = sub.add_parser("extract", help="convert one 0-based draw record")
    select.add_argument("input", type=Path)
    select.add_argument("output", type=Path)
    select.add_argument("--record", type=int, required=True)
    select.add_argument("--format", choices=INPUT_FORMATS, default="auto", help="default: detect container magic")
    args = parser.parse_args(argv)
    try:
        if args.output is not None and args.input.resolve() == args.output.resolve():
            raise CaptureError("input and output must be different files")
        with args.input.open("rb") as stream:
            if args.command == "inspect":
                report = analyze(stream, input_format=args.format)
                content = (json.dumps(report, indent=2, sort_keys=True) + "\n").encode("utf-8")
            else:
                content = extract(stream, args.record, input_format=args.format)
        # Nothing is written until the complete input has passed container checks.
        if args.output is not None:
            mesh.write_atomic(args.output, content)
        else:
            print(content.decode("utf-8"), end="")
        if args.command == "extract":
            print(f"record {args.record}: {len(content)} bytes; capture-only, not installed")
    except (OSError, ValueError) as error:
        parser.exit(2, f"xmeshcapture: {error}\n")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
