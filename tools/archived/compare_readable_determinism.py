"""C6b: cross determinism of a readable run against a canonical run (same route,
save, virtual clock and inputs).

    python tools/compare_readable_determinism.py --readable N --canonical M [--output F]

Compares, after the route anchor (the virtual clock is rebased there, so the
boot length does not leak into game time):
  * route steps: frame of each step relative to the anchor;
  * UI states (PLS_UI_STATE) in order, without frame numbers;
  * the private save files written by the run (preferences/), byte for byte.
The boot itself is excluded: the boot thread waits with real-time
Thread.Sleep and a shared field (BootForm.bowWait_), so its frame count depends
on the binary's speed (measured: readable 2 frames shorter, canonical runs
identical among themselves).
"""
import argparse, hashlib, json, re
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]


def load(history, number, build):
    attempt = next(a for a in json.loads((ROOT / history).read_text(encoding='utf-8'))['attempts'] if a['number'] == number)
    folder = ROOT / build / 'attempts' / str(number)
    text = (folder / 'game-run.stderr').read_text(encoding='utf-8', errors='replace')
    anchor = [int(v) for v in re.findall(r'^PLS_PC_TITLE_ANCHOR=(\d+)', text, re.M)]
    base = anchor[0] if anchor else 0
    steps = {}
    for step, frame in re.findall(r'^PLS_ROUTE_STEP=\{"step":(\d+),"frame":(\d+)', text, re.M):
        steps.setdefault(int(step), int(frame) - base)
    states = []
    for line in re.findall(r'^PLS_UI_STATE=(.*)$', text, re.M):
        row = json.loads(line); frame = row.pop('frame')
        if frame >= base: states.append(json.dumps(row, sort_keys=True, ensure_ascii=False))
    saves = {}
    prefs = folder / 'preferences'
    if prefs.is_dir():
        for p in sorted(prefs.rglob('*')):
            if p.is_file(): saves[p.relative_to(prefs).as_posix()] = hashlib.sha256(p.read_bytes()).hexdigest()
    done = re.findall(r'^PLS_ROUTE_DONE=(\d+)', text, re.M)
    return dict(anchor=base, steps=steps, states=states, saves=saves, done=int(done[-1]) - base if done else None, route=attempt.get('route_result'))


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--readable', type=int, required=True); parser.add_argument('--canonical', type=int, required=True)
    parser.add_argument('--output', type=Path)
    args = parser.parse_args()
    r = load('build/c6b-readable-attempts.json', args.readable, 'build/pc-readable-diagnostic-release')
    c = load('config/phase2-diagnostic-attempts.json', args.canonical, 'build/pc-diagnostic-release')
    step_diff = sorted(s for s in set(r['steps']) & set(c['steps']) if r['steps'][s] != c['steps'][s] and s > 0)
    first_state_diff = next((i for i, (a, b) in enumerate(zip(c['states'], r['states'])) if a != b), None)
    save_diff = sorted(k for k in set(r['saves']) | set(c['saves']) if r['saves'].get(k) != c['saves'].get(k))
    result = dict(readable=args.readable, canonical=args.canonical,
                  anchor_frame=dict(readable=r['anchor'], canonical=c['anchor']),
                  route_done_after_anchor=dict(readable=r['done'], canonical=c['done']),
                  steps_compared=len(set(r['steps']) & set(c['steps'])), steps_with_different_relative_frame=step_diff[:20],
                  ui_states=dict(readable=len(r['states']), canonical=len(c['states'])), first_ui_state_difference=first_state_diff,
                  first_ui_state_pair=[c['states'][first_state_diff], r['states'][first_state_diff]] if first_state_diff is not None else None,
                  save_files=len(set(r['saves']) | set(c['saves'])), save_files_different=save_diff,
                  common_prefix=dict(ui_states=min(len(r['states']),len(c['states'])),identical=first_state_diff is None and not step_diff),
                  identical=not step_diff and first_state_diff is None and len(r['states']) == len(c['states']) and not save_diff and r['done'] == c['done'])
    text = json.dumps(result, indent=2, ensure_ascii=False) + '\n'
    if args.output: args.output.write_text(text, encoding='utf-8')
    print(text)


if __name__ == '__main__':
    main()
