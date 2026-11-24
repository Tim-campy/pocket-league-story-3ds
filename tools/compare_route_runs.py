"""Compare two route replays: same steps, same interface states, same saves.

    python tools/compare_route_runs.py A B [--build build/pc-frozen-diagnostic-release]

A and B are attempt numbers of the same build folder. Compared: the frame at which each route
step starts, relative to the first step (the absolute frame can shift with loading); the sequence
of PLS_UI_STATE lines without their frame numbers; every file under preferences/ byte for byte.
Exit 1 on any difference.
"""
import argparse, json, re, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def load(folder):
    text = (folder / 'game-run.stderr').read_text(encoding='utf-8', errors='replace')
    steps = {}
    for m in re.finditer(r'PLS_ROUTE_STEP=\{"step":(\d+),"frame":(\d+)', text):
        steps.setdefault(int(m.group(1)), int(m.group(2)))
    ui = [re.sub(r'"frame":\d+,', '', m.group(1)) for m in re.finditer(r'PLS_UI_STATE=(\{.*\})', text)]
    saves = {p.relative_to(folder).as_posix(): p.read_bytes() for p in (folder / 'preferences').rglob('*') if p.is_file()} if (folder / 'preferences').exists() else {}
    done = re.findall(r'PLS_ROUTE_DONE=(\d+)', text)
    return steps, ui, saves, done[-1] if done else None


def main():
    ap = argparse.ArgumentParser(); ap.add_argument('a', type=int); ap.add_argument('b', type=int)
    ap.add_argument('--build', type=Path, default=ROOT / 'build/pc-frozen-diagnostic-release'); a = ap.parse_args()
    (sa, ua, va, da), (sb, ub, vb, db) = (load(a.build / 'attempts' / str(n)) for n in (a.a, a.b))
    keys = sorted(set(sa) & set(sb)); base = keys[0] if keys else 0
    step_diff = [k for k in keys if sa[k] - sa[base] != sb[k] - sb[base]]
    save_diff = sorted(k for k in set(va) | set(vb) if va.get(k) != vb.get(k))
    result = dict(a=a.a, b=a.b, steps=(len(sa), len(sb)), steps_relative_different=step_diff[:10], ui_states=(len(ua), len(ub)),
                  ui_equal=ua == ub, save_files=(len(va), len(vb)), saves_different=save_diff, done_frame=(da, db))
    ok = len(sa) == len(sb) and not step_diff and ua == ub and not save_diff
    print(json.dumps(result), 'EQUAL' if ok else 'DIFFERENT')
    return 0 if ok else 1


if __name__ == '__main__':
    sys.exit(main())
