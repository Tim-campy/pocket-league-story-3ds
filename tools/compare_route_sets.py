"""C6b: pairwise comparison of the route set replayed on the current canonical
build and on the readable build (tools/run_readable_routes.py, both modes).

    python tools/compare_route_sets.py [--output build/c6b-route-compare.json]

For each canonical attempt key present in both build/c6b-route-set-canonical.json
and build/c6b-route-set-readable.json: methods completed in one run and not the
other, route status, and the post-anchor determinism checks of
tools/compare_readable_determinism.py (route steps, UI states, saves).
"""
import argparse, json, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from diagnostic_execution import parse
import compare_readable_determinism as det


def executed(log):
    methods, _, gaps = parse(Path(log).read_text(encoding='utf-8', errors='replace'))
    return {key[1] for key, row in methods.items() if row['completed'] > 0}, gaps


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--output', type=Path, default=ROOT / 'build/c6b-route-compare.json')
    args = parser.parse_args()
    canonical = json.loads((ROOT / 'build/c6b-route-set-canonical.json').read_text(encoding='utf-8'))['runs']
    readable = json.loads((ROOT / 'build/c6b-route-set-readable.json').read_text(encoding='utf-8'))['runs']
    rows = []; union_c = set(); union_r = set()
    for key in sorted(set(canonical) & set(readable), key=int):
        c_run, r_run = canonical[key], readable[key]
        c_log = ROOT / 'build/pc-diagnostic-release/attempts' / str(c_run['readable_attempt']) / 'game-run.stderr'
        r_log = ROOT / 'build/pc-readable-diagnostic-release/attempts' / str(r_run['readable_attempt']) / 'game-run.stderr'
        c_set, c_gaps = executed(c_log); r_set, r_gaps = executed(r_log)
        union_c |= c_set; union_r |= r_set
        c = det.load('config/phase2-diagnostic-attempts.json', c_run['readable_attempt'], 'build/pc-diagnostic-release')
        r = det.load('build/c6b-readable-attempts.json', r_run['readable_attempt'], 'build/pc-readable-diagnostic-release')
        first_state = next((i for i, (a, b) in enumerate(zip(c['states'], r['states'])) if a != b), None)
        step_diff = sorted(s for s in set(r['steps']) & set(c['steps']) if s > 0 and r['steps'][s] != c['steps'][s])
        saves = sorted(k for k in set(r['saves']) | set(c['saves']) if k != 'player-preferences.port' and r['saves'].get(k) != c['saves'].get(k))
        rows.append(dict(key=key, route=c_run['route'], status=dict(canonical=c_run['status'], readable=r_run['status']),
                         only_canonical=sorted(c_set - r_set), only_readable=sorted(r_set - c_set),
                         gaps=sorted(set(c_gaps) | set(r_gaps)), alerts=dict(canonical=c_run['alerts'], readable=r_run['alerts']),
                         ui_states=[len(c['states']), len(r['states'])], first_ui_difference=first_state,
                         step_frame_differences=len(step_diff), save_files_different=saves))
    summary = dict(runs=len(rows), union=dict(canonical=len(union_c), readable=len(union_r), only_canonical=sorted(union_c - union_r), only_readable=sorted(union_r - union_c)),
                   runs_same_coverage=sum(1 for x in rows if not x['only_canonical'] and not x['only_readable']),
                   runs_same_ui_states=sum(1 for x in rows if x['first_ui_difference'] is None and x['ui_states'][0] == x['ui_states'][1]),
                   runs_same_saves=sum(1 for x in rows if not x['save_files_different']),
                   runs_same_step_frames=sum(1 for x in rows if not x['step_frame_differences']),
                   gaps=sorted({g for x in rows for g in x['gaps']}),
                   safeguard_alerts=dict(canonical=sum(x['alerts']['canonical'] for x in rows), readable=sum(x['alerts']['readable'] for x in rows)))
    args.output.write_text(json.dumps(dict(summary=summary, runs=rows), indent=2, ensure_ascii=False) + '\n', encoding='utf-8')
    print(json.dumps(summary, indent=2, ensure_ascii=False))


if __name__ == '__main__':
    main()
