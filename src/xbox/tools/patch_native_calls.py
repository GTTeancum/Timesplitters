"""Resolve literal native Xbox guest calls against this build's compact table.

Only Xbox-generated copies of the four existing native game translation units
are changed. Dynamic targets, tail jumps and entries absent from the table
retain their original helpers. Return registers, checkpoints, overrides and unwind behavior
are supplied by xbox_native_calls.h and the existing ps2xDirectCall function.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import re
import tempfile

from direct_calls import read_slots


GENERATED = '// Xbox build copy made by src/xbox/tools/patch_native_calls.py; do not edit.\n'
INCLUDE = '#include "ps2_runtime.h"\n'
ADAPTER = '#include "xbox_native_calls.h"\n'
NAMES = {'ts_native_game.cpp', 'ts_native_game2.cpp', 'ts_native_game3.cpp', 'ts_native_math.cpp'}
NUMBER = r'0x[0-9A-Fa-f]+[uU]'
CALL = re.compile(
    r'\b(?P<helper>guestCall|lightCall)\(\s*'
    r'(?P<args>G_PASS|rdram\s*,\s*ctx\s*,\s*runtime)\s*,\s*'
    r'(?P<target>' + NUMBER + r')\s*,\s*(?P<source>' + NUMBER + r')\s*,\s*'
    r'(?P<next>' + NUMBER + r')\s*\)')
LITERAL_CALL = re.compile(r'\b(?:guestCall|lightCall)\(\s*(?:G_PASS|rdram\s*,\s*ctx\s*,\s*runtime)\s*,\s*' + NUMBER)
DISPATCH_BODY = '''        SET_GPR_U32(ctx, 31, next);
        return runtime->dispatchGuestBranch(rdram, ctx, target, source, next, PS2Runtime::GuestBranchKind::DirectCall,
                                            "JAL");'''


def patch_source(source: str, name: str, slots: dict[int, int]) -> str:
    if name not in NAMES:
        raise ValueError('unsupported native source: ' + name)
    newline = '\r\n' if '\r\n' in source else '\n'
    text = source.replace('\r\n', '\n')
    if '\r' in text or (newline == '\r\n' and '\n' in source.replace('\r\n', '')):
        raise ValueError('mixed or unsupported source line endings')
    if '\x00' in source or source.startswith('\ufeff'):
        raise ValueError('unsupported source encoding')
    if ADAPTER in text or GENERATED in text or 'xboxNativeGuestCall<' in text:
        raise ValueError('native source already has resolved Xbox calls')
    if text.count(INCLUDE) != 1 or text.count(DISPATCH_BODY) != 1:
        raise ValueError('native runtime include or dispatch helper changed')
    if len(CALL.findall(text)) != len(LITERAL_CALL.findall(text)):
        raise ValueError('unrecognized literal native call shape')
    converted = 0
    kept = 0

    def call(match: re.Match[str]) -> str:
        nonlocal converted, kept
        target = int(match['target'][:-1], 16)
        slot = slots.get(target)
        if slot is None:
            kept += 1
            return match[0]
        # Keep the original current-context expressions and source/resume
        # addresses; only the function-table lookup becomes a constant slot.
        converted += 1
        return (f'xboxNativeGuestCall<{slot}u, {match["target"]}>'
                f'({match["args"]}, {match["source"]}, {match["next"]})')

    text = CALL.sub(call, text)
    if len(LITERAL_CALL.findall(text)) != kept:
        raise ValueError('literal-call accounting changed during rewriting')
    if converted == 0:
        raise ValueError('no resolvable native calls in ' + name)
    text = text.replace(INCLUDE, INCLUDE + ADAPTER)
    report = (f'// {converted} literal calls use live slots; '
              f'{kept} missing targets retain original helpers. Tail jumps are unchanged.\n')
    return (GENERATED + report + text).replace('\n', newline)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('table', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    temporary = None
    try:
        if args.source.resolve() == args.output.resolve() or (
                args.output.exists() and args.source.samefile(args.output)):
            raise ValueError('output must not alias the shared native source')
        result = patch_source(args.source.read_bytes().decode('utf-8'),
                              args.source.name, read_slots(args.table))
        args.output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile(mode='wb', dir=args.output.parent,
                                         prefix='.xbox-native-calls-', delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(result.encode('utf-8'))
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, f'patch_native_calls: {error}\n')
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
