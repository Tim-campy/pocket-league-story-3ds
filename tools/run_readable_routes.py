"""C6b: replay the criterion-3 route set on the readable diagnostic build.

    python tools/run_readable_routes.py --apk APK --readable build/<readable-diag>
        [--gc-stress-every 50] [--limit N] [--only NAME ...]
    python tools/run_readable_routes.py --apk APK --frozen [--jobs N] [--keys K ...] [--state PATH]

--jobs N runs N route replays at once (each in its own attempt folder, saves and logs; the
executable is built once before, and every run uses build_pc --no-build). A run whose wall
time includes a suspension of the machine (detected with QueryUnbiasedInterruptTime) is run
again automatically, at most twice.

Takes every completed route attempt of the canonical diagnostic history
(config/phase2-diagnostic-attempts.json), one per (route copy, save source),
and runs the same route copy, save, virtual clock and replay options on the
readable build, under the reachability safeguard and GC stress. Then compares
the union of per-method coverage (completed invocations) of the replayed
canonical attempts with the union of the readable runs. Writes
build/c6b-route-set.json. Never edits the canonical ledger.
"""
import argparse, concurrent.futures, ctypes, json, os, subprocess, sys, threading, time
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from diagnostic_execution import parse


def executed(log):
    methods, _, gaps = parse(Path(log).read_text(encoding='utf-8', errors='replace'))
    return {key[1] for key, row in methods.items() if row['completed'] > 0}, gaps


def awake_seconds():
    """Seconds the machine was awake (QueryUnbiasedInterruptTime excludes sleep and hibernation)."""
    value = ctypes.c_ulonglong()
    ctypes.windll.kernel32.QueryUnbiasedInterruptTime(ctypes.byref(value))
    return value.value / 1e7


# Versioned copies of the canonical route runs (2026-11-27): before this, the 87 route texts and
# the canonical coverage lived only in build/pc-diagnostic-release/attempts/, which nothing can
# regenerate (the translator is retired). Saves stay out of Git (content rule): tools/dev.py backup.
REPLAY = ROOT / 'tests/routes/replay'
COVERAGE = REPLAY / 'canonical-coverage.json'


def route_file(source, number):
    """Route text of a canonical run: the versioned copy, else the private build copy."""
    copy = REPLAY / f'{number}.route'
    return copy if copy.is_file() else source / 'build/pc-diagnostic-release/attempts' / str(number) / 'route.txt'


_coverage = None
def canonical_methods(source, number):
    """Methods completed by a canonical run: versioned table, else its private game-run.stderr."""
    global _coverage
    if _coverage is None: _coverage = json.loads(COVERAGE.read_text(encoding='utf-8')) if COVERAGE.is_file() else {'methods': [], 'runs': {}}
    row = _coverage['runs'].get(str(number))
    if row is not None: return {_coverage['methods'][i] for i in row}
    log = source / 'build/pc-diagnostic-release/attempts' / str(number) / 'game-run.stderr'
    return executed(log)[0] if log.is_file() else None


def chosen_runs(source, history):
    """Latest completed canonical run per (route text, save), as the original set was chosen."""
    chosen = {}
    for a in history['attempts']:
        route = a.get('route'); result = a.get('route_result') or {}
        if not isinstance(route, dict) or result.get('status') != 'done': continue
        if route.get('name') == 'route.txt': continue  # a replay made by this tool, not an original route run
        if not route_file(source, a['number']).is_file() or canonical_methods(source, a['number']) is None: continue
        save = (a.get('restored_private_preferences') or {}).get('source_attempt')
        chosen[(route['sha256'], save)] = a
    return sorted(chosen.values(), key=lambda a: a['number'])


def export_replays(source, history):
    """Write tests/routes/replay/<run>.route and canonical-coverage.json from the private build copies."""
    import hashlib
    rows = chosen_runs(source, history); REPLAY.mkdir(parents=True, exist_ok=True); sets = {}
    for a in rows:
        text = (source / 'build/pc-diagnostic-release/attempts' / str(a['number']) / 'route.txt').read_bytes()
        if hashlib.sha256(text).hexdigest() != a['route']['sha256']: raise ValueError(f'run {a["number"]}: route copy differs from the history')
        (REPLAY / f'{a["number"]}.route').write_bytes(text)
        sets[str(a['number'])] = executed(source / 'build/pc-diagnostic-release/attempts' / str(a['number']) / 'game-run.stderr')[0]
    methods = sorted(set().union(*sets.values()))
    index = {m: i for i, m in enumerate(methods)}
    # replay_done: (route, save) pairs the replay of the canonical code completes (dev.py routes'
    # "expected" set; from build/c6b-route-set-canonical.json).
    baseline = source / 'build/c6b-route-set-canonical.json'
    done = sorted({(r['route'], r.get('save')) for r in json.loads(baseline.read_text(encoding='utf-8'))['runs'].values() if r['status'] == 'done'},
                  key=lambda pair: (pair[0], pair[1] or 0)) if baseline.is_file() else []
    table = dict(note='Canonical (pre-freeze) coverage per route run: indices into methods. Written by tools/run_readable_routes.py --export-replays.',
                 methods=methods, runs={k: sorted(index[m] for m in v) for k, v in sorted(sets.items(), key=lambda kv: int(kv[0]))},
                 replay_done=[list(pair) for pair in done])
    COVERAGE.write_text(json.dumps(table, separators=(',', ':')) + '\n', encoding='utf-8', newline='\n')
    print(json.dumps(dict(routes=len(rows), methods=len(methods), coverage_bytes=COVERAGE.stat().st_size)))


def previous_durations(build):
    """Seconds per run key from the last full set: c6b-route-set-frozen.json, or the newest dated
    backup when dev.py routes has just moved it away (which it does before every new full set,
    so reading only that file left the longest-first order empty)."""
    candidates = [build / 'c6b-route-set-frozen.json'] + sorted(build.glob('c6b-route-set-frozen-2*.json'), key=lambda p: p.name, reverse=True)
    for path in candidates:
        if path.is_file():
            try: return {k: r.get('seconds') or 0 for k, r in json.loads(path.read_text(encoding='utf-8'))['runs'].items()}
            except (ValueError, KeyError): continue
    return {}


def keep_awake():
    if os.name == 'nt': ctypes.windll.kernel32.SetThreadExecutionState(0x80000000 | 0x00000001)


def run_once(command):
    """Run one build_pc replay; return (returncode, attempt dict from its last JSON line, wall, suspended seconds)."""
    started = time.time(); awake0 = awake_seconds()
    result = subprocess.run(command, cwd=ROOT, capture_output=True)
    wall = time.time() - started; suspended = max(0.0, wall - (awake_seconds() - awake0))
    attempt = None
    for line in reversed(result.stdout.decode('utf-8', errors='replace').splitlines()):
        line = line.strip()
        if line.startswith('{') and '"number"' in line:
            try: attempt = json.loads(line); break
            except ValueError: pass
    return result.returncode, attempt, wall, suspended


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--apk', type=Path, required=True); parser.add_argument('--readable', type=Path)
    parser.add_argument('--frozen', action='store_true', help='After the freeze: replay on build_pc --frozen-diagnostic (src/game itself)')
    parser.add_argument('--source-repo', type=Path, help='Repository whose build/pc-diagnostic-release holds the route copies and saves (default: this one)')
    parser.add_argument('--canonical-snapshot', type=Path, help='Replay on the current canonical diagnostic snapshot instead (same options), for a like-for-like comparison')
    parser.add_argument('--gc-stress-every', type=int, default=50); parser.add_argument('--limit', type=int)
    parser.add_argument('--only', nargs='*'); parser.add_argument('--compare-only', action='store_true')
    parser.add_argument('--keys', nargs='*', help='only these original run numbers (dev.py routes --affected/--smoke)')
    parser.add_argument('--jobs', type=int, default=1, help='route replays at once (each isolated; see tools/dev.py routes)')
    parser.add_argument('--state', type=Path, help='state file (default build/c6b-route-set-<mode>.json)')
    parser.add_argument('--run-seconds', type=int, default=600, help='wall-clock cap of one replay (build_pc --run-seconds)')
    parser.add_argument('--export-replays', action='store_true', help='write tests/routes/replay/ from the private build copies and exit')
    args = parser.parse_args()
    source = (args.source_repo or ROOT).resolve()
    history = json.loads((source / 'config/phase2-diagnostic-attempts.json').read_text(encoding='utf-8'))
    if args.export_replays: export_replays(source, history); return
    rows = chosen_runs(source, history)
    if args.only: rows = [a for a in rows if a['route']['name'] in args.only]
    if args.keys: rows = [a for a in rows if str(a['number']) in set(args.keys)]
    if args.limit: rows = rows[:args.limit]
    if sum(map(bool, (args.readable, args.canonical_snapshot, args.frozen))) != 1: parser.error('give --readable, --canonical-snapshot or --frozen')
    mode = 'readable' if args.readable else 'frozen' if args.frozen else 'canonical'
    out = args.state.resolve() if args.state else ROOT / ('build/c6b-route-set-' + mode + '.json')
    run_history = ROOT / ('build/c6b-readable-attempts.json' if args.readable else 'build/frozen-attempts.json' if args.frozen else 'config/phase2-diagnostic-attempts.json')
    run_build = ROOT / ('build/pc-readable-diagnostic-release' if args.readable else 'build/pc-frozen-diagnostic-release' if args.frozen else 'build/pc-diagnostic-release')
    state = json.loads(out.read_text(encoding='utf-8')) if out.exists() else dict(runs={})
    keep_awake()
    prefix = [sys.executable] + ([str(ROOT / 'build/claude-run-utf8.py')] if (ROOT / 'build/claude-run-utf8.py').exists() else []) + [str(ROOT / 'tools/build_pc.py')]
    variant = ['--readable-diagnostic', str(args.readable)] if args.readable else ['--frozen-diagnostic'] if args.frozen else ['--diagnostic-generated', str(args.canonical_snapshot)]
    pending = [a for a in rows if not (args.compare_only or str(a['number']) in state['runs'] and state['runs'][str(a['number'])].get('status') == 'done')]
    # Longest first (durations of the last full set), so the long routes do not end the batch alone.
    durations = previous_durations(ROOT / 'build')
    pending.sort(key=lambda a: -durations.get(str(a['number']), 0))
    if pending:
        # One build before the runs; the runs only execute it (no concurrent CMake/Ninja).
        build = subprocess.run(prefix + ['--apk', str(args.apk)] + variant + ['--configuration', 'Release'], cwd=ROOT, capture_output=True)
        if build.returncode: sys.exit('build failed:\n' + build.stderr.decode('utf-8', 'replace')[-3000:])

    def command_for(a):
        command = prefix + ['--apk', str(args.apk)] + variant + ['--configuration', 'Release', '--run', '--run-seconds', str(args.run_seconds), '--no-build',
                                                                 '--diagnostic-route', str(route_file(source, a['number'])), '--fast', '--gc-stress-every', str(args.gc_stress_every), '--gc-stress-poison']
        save = (a.get('restored_private_preferences') or {}).get('source_attempt')
        if save: command += ['--diagnostic-save-from-attempt', str(save)]
        if a.get('virtual_clock'): command += ['--virtual-clock', a['virtual_clock']]
        if a.get('title_anchor'): command += ['--diagnostic-title-anchor', str(a['title_anchor'])]
        if a.get('diagnostic_dismiss_popups_until_frame'): command += ['--diagnostic-dismiss-popups-until-frame', str(a['diagnostic_dismiss_popups_until_frame'])]
        if a.get('diagnostic_unlabeled_popups_only'): command += ['--diagnostic-unlabeled-popups-only']
        return command, save

    def replay(a):
        command, save = command_for(a); reruns = []
        for _ in range(3):
            code, last, wall, suspended = run_once(command)
            if suspended < 30: break
            reruns.append(dict(attempt=(last or {}).get('number'), suspended_seconds=round(suspended)))
        last = last or {}
        return str(a['number']), dict(route=a['route']['name'], save=save, readable_attempt=last.get('number'), returncode=code,
                                      status=(last.get('route_result') or {}).get('status'), stage=last.get('stage'),
                                      gap=last.get('translation_gap_detected'), alerts=len(last.get('reachability_alerts') or []),
                                      gc_stress=(last.get('gc_stress') or {}).get('summary') is not None, seconds=round(wall, 1),
                                      suspended_reruns=reruns, jobs=args.jobs)

    lock = threading.Lock()
    with concurrent.futures.ThreadPoolExecutor(max_workers=max(1, args.jobs)) as pool:
        for future in concurrent.futures.as_completed([pool.submit(replay, a) for a in pending]):
            key, row = future.result()
            with lock:
                state['runs'][key] = row
                out.write_text(json.dumps(state, indent=2) + '\n', encoding='utf-8')
            print(key, row, flush=True)
    canonical, readable, gaps = set(), set(), []
    for key, run in state['runs'].items():
        if run.get('readable_attempt') is None: continue  # failed before the game ran
        c = canonical_methods(source, key) or set()
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
