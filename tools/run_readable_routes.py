"""C6b: replay the criterion-3 route set on the readable diagnostic build.

    python tools/run_readable_routes.py --apk APK --readable build/<readable-diag>
        [--gc-stress-every 50] [--limit N] [--only NAME ...]

Takes every completed route attempt of the canonical diagnostic history
(config/phase2-diagnostic-attempts.json), one per (route copy, save source),
and runs the same route copy, save, virtual clock and replay options on the
readable build, under the reachability safeguard and GC stress. Then compares
the union of per-method coverage (completed invocations) of the replayed
canonical attempts with the union of the readable runs. Writes
build/c6b-route-set.json. Never edits the canonical ledger.
"""
import argparse, json, subprocess, sys, time
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from diagnostic_execution import parse


def executed(log):
    methods, _, gaps = parse(Path(log).read_text(encoding='utf-8', errors='replace'))
    return {key[1] for key, row in methods.items() if row['completed'] > 0}, gaps


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--apk', type=Path, required=True); parser.add_argument('--readable', type=Path)
    parser.add_argument('--frozen', action='store_true', help='After the freeze: replay on build_pc --frozen-diagnostic (src/game itself)')
    parser.add_argument('--source-repo', type=Path, help='Repository whose build/pc-diagnostic-release holds the route copies and saves (default: this one)')
    parser.add_argument('--canonical-snapshot', type=Path, help='Replay on the current canonical diagnostic snapshot instead (same options), for a like-for-like comparison')
    parser.add_argument('--gc-stress-every', type=int, default=50); parser.add_argument('--limit', type=int)
    parser.add_argument('--only', nargs='*'); parser.add_argument('--compare-only', action='store_true')
    args = parser.parse_args()
    source = (args.source_repo or ROOT).resolve()
    history = json.loads((source / 'config/phase2-diagnostic-attempts.json').read_text(encoding='utf-8'))
    chosen = {}
    for a in history['attempts']:
        route = a.get('route'); result = a.get('route_result') or {}
        if not isinstance(route, dict) or result.get('status') != 'done': continue
        if route.get('name') == 'route.txt': continue  # a replay made by this tool, not an original route run
        folder = source / 'build/pc-diagnostic-release/attempts' / str(a['number'])
        if not (folder / 'route.txt').is_file() or not (folder / 'game-run.stderr').is_file(): continue
        save = (a.get('restored_private_preferences') or {}).get('source_attempt')
        chosen[(route['sha256'], save)] = a
    rows = sorted(chosen.values(), key=lambda a: a['number'])
    if args.only: rows = [a for a in rows if a['route']['name'] in args.only]
    if args.limit: rows = rows[:args.limit]
    if sum(map(bool, (args.readable, args.canonical_snapshot, args.frozen))) != 1: parser.error('give --readable, --canonical-snapshot or --frozen')
    mode = 'readable' if args.readable else 'frozen' if args.frozen else 'canonical'
    out = ROOT / ('build/c6b-route-set-' + mode + '.json')
    run_history = ROOT / ('build/c6b-readable-attempts.json' if args.readable else 'build/frozen-attempts.json' if args.frozen else 'config/phase2-diagnostic-attempts.json')
    run_build = ROOT / ('build/pc-readable-diagnostic-release' if args.readable else 'build/pc-frozen-diagnostic-release' if args.frozen else 'build/pc-diagnostic-release')
    state = json.loads(out.read_text(encoding='utf-8')) if out.exists() else dict(runs={})
    for a in rows:
        key = str(a['number'])
        if args.compare_only or key in state['runs'] and state['runs'][key].get('status') == 'done': continue
        folder = source / 'build/pc-diagnostic-release/attempts' / key
        command = [sys.executable, str(ROOT / 'build/claude-run-utf8.py') if (ROOT / 'build/claude-run-utf8.py').exists() else '', str(ROOT / 'tools/build_pc.py')]
        command = [c for c in command if c]
        command += ['--apk', str(args.apk)] + (['--readable-diagnostic', str(args.readable)] if args.readable else ['--frozen-diagnostic'] if args.frozen else ['--diagnostic-generated', str(args.canonical_snapshot)]) + [ '--configuration', 'Release', '--run', '--run-seconds', '600',
                    '--diagnostic-route', str(folder / 'route.txt'), '--fast', '--gc-stress-every', str(args.gc_stress_every), '--gc-stress-poison']
        save = (a.get('restored_private_preferences') or {}).get('source_attempt')
        if save: command += ['--diagnostic-save-from-attempt', str(save)]
        if a.get('virtual_clock'): command += ['--virtual-clock', a['virtual_clock']]
        if a.get('title_anchor'): command += ['--diagnostic-title-anchor', str(a['title_anchor'])]
        if a.get('diagnostic_dismiss_popups_until_frame'): command += ['--diagnostic-dismiss-popups-until-frame', str(a['diagnostic_dismiss_popups_until_frame'])]
        if a.get('diagnostic_unlabeled_popups_only'): command += ['--diagnostic-unlabeled-popups-only']
        started = time.time()
        result = subprocess.run(command, cwd=ROOT, capture_output=True)
        readable_history = json.loads(run_history.read_text(encoding='utf-8'))
        last = readable_history['attempts'][-1]
        state['runs'][key] = dict(route=a['route']['name'], save=save, readable_attempt=last['number'], returncode=result.returncode,
                                  status=(last.get('route_result') or {}).get('status'), stage=last.get('stage'),
                                  gap=last.get('translation_gap_detected'), alerts=len(last.get('reachability_alerts') or []),
                                  gc_stress=(last.get('gc_stress') or {}).get('summary') is not None, seconds=round(time.time() - started, 1))
        out.write_text(json.dumps(state, indent=2) + '\n', encoding='utf-8')
        print(key, state['runs'][key], flush=True)
    canonical, readable, gaps = set(), set(), []
    for key, run in state['runs'].items():
        c, _ = executed(source / 'build/pc-diagnostic-release/attempts' / key / 'game-run.stderr')
        r, g = executed(run_build / 'attempts' / str(run['readable_attempt']) / 'game-run.stderr')
        canonical |= c; readable |= r; gaps += list(g)
        run['coverage'] = dict(canonical=len(c), readable=len(r), only_canonical=sorted(c - r)[:10], only_readable=sorted(r - c)[:10])
    state['union'] = dict(canonical=len(canonical), readable=len(readable), only_canonical=sorted(canonical - readable), only_readable=sorted(readable - canonical),
                          translation_gaps=sorted(set(gaps)), runs=len(state['runs']),
                          routes_done=sum(1 for r in state['runs'].values() if r['status'] == 'done'),
                          safeguard_alerts=sum(r['alerts'] for r in state['runs'].values()))
    out.write_text(json.dumps(state, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(state['union'], indent=2))


if __name__ == '__main__':
    main()
