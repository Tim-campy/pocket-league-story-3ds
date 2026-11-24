"""Criterion-2 summary from the hardware logs alone (stdout.log + stderr.log).

    python tools/hardware_window_report.py RUN_DIR [RUN_DIR ...]

For runs returned without result.txt. Reads PLS_NULL_FRAME (per-frame wall
time, collections in the frame), PLS_NULL_WINDOW (window bounds), PLS_BENCH_GC
(every collection: frame, trigger, pause, source), PLS_NULL_ARM_MODEL and
PLS_NULL_REPLAY_ANCHOR. Criterion 2 (decision of 2026-11-14): stable game
frames (no tolerated collection) under 50 ms; match mean under 20 ms; a
transition collection (main screen Init/Finish, explicit JSystem.Gc in a
Finish) under 150 ms pause; volume and other explicit collections count as
stable game.
"""
import json, re, statistics, sys
from pathlib import Path


def report(folder):
    folder = Path(folder)
    out = (folder / 'stdout.log').read_text(encoding='utf-8', errors='replace')
    err = (folder / 'stderr.log').read_text(encoding='utf-8', errors='replace')
    text = out + '\n' + err
    frames = {}
    for line in text.splitlines():
        if line.startswith('PLS_NULL_FRAME='):
            row = json.loads(line.split('=', 1)[1]); frames[row['frame']] = row
    bounds = [int(v) for v in re.findall(r'^PLS_NULL_WINDOW=(\d+)', text, re.M)]
    windows = dict(menu=(bounds[0], bounds[1]), match=(bounds[2], bounds[3])) if len(bounds) >= 4 else {}
    gcs = [dict(frame=int(m[0]), trigger=m[1], pause=float(m[2]), source=m[3])
           for m in re.findall(r'^PLS_BENCH_GC frame=(\d+) trigger=(\w+) pause_ms=([\d.]+) frame_ms=[\d.]+ source=(\S+)', text, re.M)]
    model = re.search(r'^PLS_NULL_ARM_MODEL (.*)$', text, re.M)
    anchor = re.search(r'^PLS_NULL_REPLAY_ANCHOR=(.*)$', text, re.M)
    result = dict(run=folder.name, model=model[1] if model else None,
                  boot_s=round(json.loads(anchor[1])['boot_ns'] / 1e9, 2) if anchor else None, windows={})
    for name, (first, last) in windows.items():
        rows = [frames[n] for n in range(first, last + 1) if n in frames]
        ms = [r['wall_ns'] / 1e6 for r in rows]
        in_window = [g for g in gcs if first <= g['frame'] <= last]
        tolerated = {g['frame'] for g in in_window if g['trigger'] in ('transition', 'loading') or (g['trigger'] == 'explicit' and g['source'].startswith('Finish'))}
        stable = [r['wall_ns'] / 1e6 for r in rows if r['frame'] not in tolerated]
        ordered = sorted(ms)
        result['windows'][name] = dict(first=first, last=last, frames=len(rows), complete=len(rows) == last - first + 1,
                                       mean_ms=round(statistics.mean(ms), 2), p95_ms=round(ordered[max(0, int(len(ordered) * 0.95) - 1)], 2),
                                       max_ms=round(max(ms), 2), stable_max_ms=round(max(stable), 2) if stable else None,
                                       collections=[dict(frame=g['frame'], trigger=g['trigger'], pause_ms=round(g['pause'], 1), source=g['source']) for g in in_window],
                                       form_ids=sorted({r['form_id'] for r in rows}))
    result['collections_outside_windows'] = [dict(frame=g['frame'], trigger=g['trigger'], pause_ms=round(g['pause'], 1), source=g['source'])
                                             for g in gcs if not any(a <= g['frame'] <= b for a, b in windows.values())]
    return result


if __name__ == '__main__':
    print(json.dumps([report(p) for p in sys.argv[1:]], indent=2, ensure_ascii=False))
