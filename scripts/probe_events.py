"""Pure, validated append-only input scheduling for the native XTEST probe."""
from __future__ import annotations
import math
from typing import Any

KEYS = frozenset(('Return','Up','Down','Left','Right','x','c','v','z','space',
                 'q','e','Tab','Shift_L','Shift_R','w','a','s','d','i','j','k','l'))

def append_events(previous: list[dict[str, Any]], document: Any, seconds: float):
    """Validate the whole event log; return only newly appended key edges.

    Callers replace the JSON file atomically. Existing rows may not be altered;
    requested and actual dispatch times are separately retained by the probe.
    """
    if not isinstance(document, list) or document[:len(previous)] != previous or len(document) < len(previous):
        raise ValueError('live input must be an append-only JSON array')
    result = []
    intervals: dict[str, list[tuple[float, float]]] = {}
    for index, item in enumerate(document):
        if not isinstance(item, dict) or set(item) - {'at', 'key', 'hold'}:
            raise ValueError('event must contain at, key, and optional hold')
        sec, key, hold = item.get('at'), item.get('key'), item.get('hold', .35)
        if (type(sec) not in (int, float) or type(hold) not in (int, float)
                or not math.isfinite(sec) or not math.isfinite(hold)
                or not isinstance(key, str) or key not in KEYS
                or sec < 0 or hold <= 0 or sec + hold > seconds):
            raise ValueError('invalid input event or time outside probe interval')
        spans = intervals.setdefault(key, [])
        end = sec + hold
        if any(sec < b and a < end for a, b in spans):
            raise ValueError('overlapping holds for the same key')
        spans.append((sec, end))
        if index >= len(previous):
            result.extend(((float(sec), 'keydown', key), (float(end), 'keyup', key)))
    return sorted(result, key=edge_sort_key)

def edge_sort_key(event):
    # A previous hold must release before a new hold starts at the same instant.
    return (event[0], 0 if event[1] == 'keyup' else 1, event[2])
