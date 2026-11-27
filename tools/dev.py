"""One command for the edit cycle of the game code (src/game).

    python tools/dev.py build              # PC build of src/game (diagnostic, Release)
    python tools/dev.py run [--save 31|50] [--seconds 600] [--scale 2] [--capture build/DIR:K] [--route R]
                                           # PC run with both 3DS screens in windows
    python tools/dev.py check [--all]      # fast checks of the game code
    python tools/dev.py routes [--jobs 4] [--smoke | --affected [--since REF]] [--resume] [--only NAME ...]
                                           # the route set (87 runs), moderate GC stress
    python tools/dev.py scenarios [--only NAME ...]
                                           # state-driven routes tests/routes/*-state.route (pass/fail on game state)
    python tools/dev.py full               # complete verification (verify_phase2.py --full)
    python tools/dev.py arm                # 3DS build (.3dsx, null backend)
    python tools/dev.py ci [COMMIT]        # CI result of a published commit (GitHub API)
    python tools/dev.py clean [--apply]    # delete old attempts, review bundles, captures (safe only)
    python tools/dev.py backup DIR [--restore]
                                           # private test saves to/from DIR outside the repository (never Git)

Local paths (never committed): the APK and the extracted Managed folder come from the
environment (PLS_APK, PLS_MANAGED) or from build/dev-local.json:
    {"apk": "C:/.../app.apk", "managed": "C:/.../assets/bin/Data/Managed"}
The APK is checked against docs/apk.md by the build tools.

Approximate times on the development machine (8 GB, 2 compile jobs) are in AGENTS.md.
"""
import argparse, datetime, json, os, shutil, subprocess, sys, time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
PY = sys.executable


def local_paths(need_managed=False):
    cfg = {}
    f = ROOT / 'build/dev-local.json'
    if f.is_file(): cfg = json.loads(f.read_text(encoding='utf8'))
    apk = os.environ.get('PLS_APK') or cfg.get('apk')
    managed = os.environ.get('PLS_MANAGED') or cfg.get('managed')
    if not apk or not Path(apk).is_file():
        sys.exit('APK não encontrado: defina PLS_APK ou "apk" em build/dev-local.json (o APK do próprio usuário; hash em docs/apk.md).')
    if need_managed and (not managed or not Path(managed).is_dir()):
        sys.exit('Pasta Managed não encontrada: defina PLS_MANAGED ou "managed" em build/dev-local.json '
                 '(assets/bin/Data/Managed extraído do mesmo APK).')
    return apk, managed


def tool(script, *args):
    """Run a repository tool with the UTF-8 console wrapper when present (MSVC messages)."""
    wrapper = ROOT / 'build/claude-run-utf8.py'
    command = [PY] + ([str(wrapper)] if wrapper.is_file() else []) + [str(ROOT / script), *map(str, args)]
    return command


def run(command, label):
    started = time.time()
    print('>>', label, flush=True)
    code = subprocess.run(command, cwd=ROOT).returncode
    print(f'<< {label}: exit {code}, {time.time() - started:.0f} s', flush=True)
    return code


def cmd_build(a):
    apk, _ = local_paths()
    return run(tool('tools/build_pc.py', '--apk', apk, '--frozen-diagnostic', '--configuration', 'Release', '--jobs', a.jobs), 'build PC')


def cmd_run(a):
    apk, _ = local_paths()
    args = ['--apk', apk, '--frozen-diagnostic', '--configuration', 'Release', '--run', '--run-seconds', a.seconds,
            '--dual-screen', a.scale]
    if a.save: args += ['--diagnostic-save-from-attempt', a.save]
    if a.capture: args += ['--dual-capture', a.capture]
    if a.route: args += ['--diagnostic-route', a.route, '--virtual-clock', '1767225600000,1000,50']
    return run(tool('tools/build_pc.py', *args), 'run PC (duas telas)')


def changed_game_files():
    out = subprocess.run(['git', 'status', '--porcelain', '--', 'src/game', 'src/kairo/common/generated'], cwd=ROOT,
                         capture_output=True, text=True, check=True).stdout.splitlines()
    return [ROOT / line[3:].split(' -> ')[-1] for line in out if line[3:].endswith(('.cpp', '.hpp', '.inc', '.h'))]


def cmd_check(a):
    codes = []
    codes.append(run([PY, str(ROOT / 'tests/repository/test_gc_field_tracing.py'), 'src/game', 'src/kairo/common/generated'],
                     'mapa do coletor e raízes'))
    codes.append(run([PY, str(ROOT / 'tools/check_readable_support.py')], 'código de apoio (PLS_MANAGED_CLASS / PLS_DELEGATE_SLOTS)'))
    codes.append(run([PY, str(ROOT / 'tools/check_readable_literals.py')], 'literais contra o C# reconstruído'))
    if a.all:
        codes.append(run([PY, str(ROOT / 'tools/format_game_code.py'), '--check'], 'formatação (todos os arquivos)'))
    else:
        files = changed_game_files()
        if files:
            import format_game_code as fmt  # noqa: E402
            bad = []
            for f in files:
                if not f.exists(): continue
                text = f.read_text(encoding='utf8')
                out = subprocess.run([str(fmt.CLANG_FORMAT), '--style=file', '--assume-filename=' + str(f)], input=text.encode('utf8'),
                                     capture_output=True, check=True, cwd=f.parent).stdout.decode('utf8')
                if out != text: bad.append(f.relative_to(ROOT).as_posix())
            print('formatação dos arquivos alterados:', 'OK' if not bad else 'fora do padrão: ' + ', '.join(bad)
                  + ' (python tools/format_game_code.py)')
            codes.append(1 if bad else 0)
    print('check:', 'PASS' if not any(codes) else 'FAIL')
    return 1 if any(codes) else 0


def keep_awake():
    """Windows: keep the machine from sleeping while this process runs (no system setting
    changes). A sleep during a route stalls a frame for the whole pause and fails the route
    (seen on 2026-11-23/24)."""
    if os.name == 'nt':
        import ctypes
        ctypes.windll.kernel32.SetThreadExecutionState(0x80000000 | 0x00000001)  # ES_CONTINUOUS | ES_SYSTEM_REQUIRED


# Methods the canonical (pre-freeze) runs completed that no replay reaches, not even the replay of
# the canonical code itself (build/c6b-route-set-canonical.json; docs/notes/readable-emitter-pass-
# 2026-11-22.md, "zoom.route"): only canonical attempts 334/335 of zoom.route, on 2026-11-19 code,
# switched the GamePad to full screen. Any other lost method fails the full set.
NEVER_REPLAYED = {
    'M:kairo.unity.ui.Canvas.Fullscreen(System.Boolean)', 'M:surface.GamePad.SetMode(System.Int32)',
    'M:kairo.unity.surface.SurfaceBase.GetTouchOffset',
    'M:surface.GameView.OnTouchCamera(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)',
}


def lost_coverage(only_canonical, scenario_methods):
    """Methods the canonical runs completed and this set did not, minus those the state-driven
    scenarios completed and those no replay ever reached (NEVER_REPLAYED)."""
    return sorted(set(only_canonical) - set(scenario_methods) - NEVER_REPLAYED)


# Fixed short set (dev.py routes --smoke): title, menu, a match, saving and loading, new game.
SMOKE_KEYS = ['126', '196', '177', '175', '430', '145', '67', '138', '139', '171']
GAME_INFRA = ('game_generated_runtime.hpp', 'game_generated_forward.hpp', 'bootstrap_', 'PlsPortGeneratedBootstrap.')


def doc_class(doc):
    """Class of a member DocID: 'M:game.Team.Update(System.Int32)' -> 'game.Team' (the .cpp stem).
    The prefix (M:, P:) must go: comparing 'M:game.Team' with 'game.Team' never matched, so a
    change outside a method or in a new method selected no route at all (fixed 2026-11-27)."""
    return doc.split(':', 1)[-1].split('(')[0].rsplit('.', 1)[0]


def method_ranges(lines):
    """(DocID, first line, last line) of each definition in a game .cpp (1-based), from its `// M:` line."""
    marks = [(i + 1, l.strip()[3:]) for i, l in enumerate(lines) if l.startswith('// M:') or l.startswith('// P:')]
    return [(doc, start, (marks[k + 1][0] - 1) if k + 1 < len(marks) else len(lines)) for k, (start, doc) in enumerate(marks)]


def affected_selection(since, names=None):
    """Changed files since `since` (plus the working tree) -> (keys or None for the full set, reasons)."""
    import re as _re
    if names is None:
        names = set(subprocess.run(['git', 'diff', '--name-only', since], cwd=ROOT, capture_output=True, text=True, check=True).stdout.split())
        names |= {l[3:].split(' -> ')[-1] for l in subprocess.run(['git', 'status', '--porcelain'], cwd=ROOT, capture_output=True, text=True, check=True).stdout.splitlines()}
    names = sorted(n for n in names if n)
    reasons = []; methods = set(); classes = set()
    for n in names:
        if n.startswith(('docs/', 'build/')) or n.endswith('.md'): continue
        if not n.startswith('src/game/') or not n.endswith('.cpp') or any(x in n for x in GAME_INFRA):
            return None, [f'{n}: fora de src/game/*.cpp ou infraestrutura → conjunto completo']
        path = ROOT / n
        if not path.exists(): return None, [f'{n}: removido → conjunto completo']
        lines = path.read_text(encoding='utf8').split('\n'); ranges = method_ranges(lines)
        diff = subprocess.run(['git', 'diff', '-U0', since, '--', n], cwd=ROOT, capture_output=True, text=True, check=True).stdout
        changed = []
        for m in _re.finditer(r'^@@ -\d+(?:,\d+)? \+(\d+)(?:,(\d+))? @@', diff, _re.M):
            first = int(m.group(1)); count = int(m.group(2) or 1); changed.append((first, first + max(count, 1) - 1))
        if not changed and n in names: changed = [(1, len(lines))]                      # new or untracked file
        klass = path.stem                                                                 # game.Team.cpp -> game.Team
        for lo, hi in changed:
            hit = [doc for doc, s, e in ranges if s <= hi and lo <= e]
            if hit: methods |= set(hit)
            else: classes.add(klass); reasons.append(f'{n}:{lo}-{hi} fora de um método → todo método de {klass}')
    if not methods and not classes: return [], ['nenhum código do jogo mudou']
    state = ROOT / 'build/c6b-route-set-frozen.json'
    if not state.exists(): return None, ['sem cobertura registrada (build/c6b-route-set-frozen.json) → conjunto completo']
    runs = json.loads(state.read_text(encoding='utf8'))['runs']; keys = []; seen = set()
    for key, run in runs.items():
        counters = ROOT / 'build/pc-frozen-diagnostic-release/attempts' / str(run.get('readable_attempt')) / 'readable-method-counters.json'
        if not counters.exists(): return None, [f'cobertura da execução {key} ausente → conjunto completo']
        ids = {r['id'] for r in json.loads(counters.read_text(encoding='utf8')) if r.get('completed', 0) > 0 or r.get('calls', 0) > 0}
        seen |= ids
        if ids & methods or any(doc_class(i) in classes for i in ids): keys.append(key)
    unseen = sorted(m for m in methods if m not in seen)
    if unseen: reasons.append(f'métodos sem cobertura em nenhum roteiro (novos ou nunca executados): {unseen[:5]}' + (' → todo método das classes deles' if unseen else ''))
    for doc in unseen:
        klass = doc_class(doc)
        keys += [k for k, run in runs.items() if k not in keys and any(doc_class(i) == klass for i in
                 {r['id'] for r in json.loads((ROOT / 'build/pc-frozen-diagnostic-release/attempts' / str(run.get('readable_attempt')) / 'readable-method-counters.json').read_text(encoding='utf8'))})]
    reasons.insert(0, f'métodos alterados: {sorted(methods)[:8]}{" ..." if len(methods) > 8 else ""}; classes inteiras: {sorted(classes)}')
    return sorted(set(keys), key=int), reasons


def cmd_routes(a):
    apk, _ = local_paths()
    keep_awake()
    full = not (a.smoke or a.affected)
    keys = None
    if a.smoke: keys = SMOKE_KEYS; label = 'roteiros (smoke)'
    elif a.affected:
        keys, reasons = affected_selection(a.since)
        for r in reasons: print('affected:', r)
        if keys is None: full = True; label = 'roteiros (conjunto completo, pedido por --affected)'
        elif not keys: print('affected: nenhum roteiro a rodar'); return 0
        else: label = f'roteiros afetados ({len(keys)})'
    if full: label = 'roteiros com estresse moderado (conjunto completo)'
    state = ROOT / ('build/c6b-route-set-frozen.json' if full else 'build/c6b-route-set-frozen-subset.json')
    if state.exists() and not (a.resume and full):
        keep = state.with_name(state.stem + f'-{datetime.datetime.now():%Y%m%d-%H%M%S}.json')
        shutil.move(state, keep); print('estado anterior guardado em', keep.relative_to(ROOT))
    # Wall-clock cap of one replay: 600 s serially (the historical value); in parallel each game
    # runs slower (measured 2026-11-24 on this machine: x1.40 max with 2 jobs, x2.09 with 4, x2.31
    # with 6). Leave headroom for actions/save 95 and lots/save 106: 1950 s with 4 jobs.
    # It only stops a runaway run; it is not a criterion.
    cap = round(600 * (1 + 0.75 * (max(1, a.jobs) - 1)))
    args = ['--apk', apk, '--frozen', '--gc-stress-every', a.stress_every, '--jobs', a.jobs, '--state', state, '--run-seconds', cap]
    if a.only: args += ['--only', *a.only]
    if keys is not None and not full: args += ['--keys', *keys]
    code = run(tool('tools/run_readable_routes.py', *args), label)
    # The state-driven scenarios (tests/routes/*-state.route) are part of every set: the replay of
    # the canonical history never runs a new route file. Skipped with --only (a partial run).
    scenario_failed, scenario_methods = run_scenarios(apk) if not a.only else ([], set())
    if scenario_failed: code = code or 1
    if state.exists():
        current = json.loads(state.read_text(encoding='utf8'))
        union = current.get('union', {})
        # Baseline: the replay of the canonical (pre-freeze) code on the same routes and saves.
        # Two replays (actions.route from save 95, dialogs-exit.route) never complete in
        # replay, canonical included; every route completed there must complete here.
        # Compared by (route, save): run numbers follow the latest original run of each route.
        # The pairs are versioned in tests/routes/replay/canonical-coverage.json (replay_done).
        baseline = ROOT / 'build/c6b-route-set-canonical.json'; versioned = ROOT / 'tests/routes/replay/canonical-coverage.json'
        key = lambda r: (r['route'], r.get('save'))
        ran = {key(r) for r in current['runs'].values()}
        expected = ({key(r) for r in json.loads(baseline.read_text(encoding='utf8'))['runs'].values() if r['status'] == 'done'} if baseline.exists()
                    else {tuple(pair) for pair in json.loads(versioned.read_text(encoding='utf8')).get('replay_done', [])} or ran if versioned.exists() else ran)
        if not full: expected &= ran
        done = {key(r) for r in current['runs'].values() if r['status'] == 'done'}
        missing = sorted(f'{route} (save {save})' for route, save in expected - done if not a.only or route in a.only)
        reruns = sum(len(r.get('suspended_reruns') or []) for r in current['runs'].values())
        ok = not missing and not union.get('safeguard_alerts') and not union.get('translation_gaps')
        # Coverage gate (2026-11-27): finishing every route is not enough; demolish.route ended
        # without demolishing and the set still passed. Enforced on the full set, where the union
        # covers every canonical run; subsets only report it.
        lost = lost_coverage(union.get('only_canonical') or [], scenario_methods)
        print(f'cobertura perdida (métodos do canônico que nada mais executou): {lost if lost else "nenhuma"}'
              + ('' if full and not a.only else ' (subconjunto: só aviso)'))
        if full and not a.only and lost: ok = False
        print('roteiros:', json.dumps({k: union.get(k) for k in ('runs', 'routes_done', 'safeguard_alerts', 'readable', 'canonical')}),
              f'esperados concluídos: {len(expected)}; faltando: {missing}; refeitos por suspensão: {reruns}', 'PASS' if ok and code == 0 else 'FAIL')
        if not ok: code = code or 1
    return code


def scenario_failures(returncode, attempt):
    """Why a scenario run is not a PASS (empty list: PASS). Reaching `end` is not enough
    (review of 2026-11-27): the tool and the game process must exit 0, the run must not hit
    a time limit, and the diagnostic build must report no translation gap or GC alert."""
    reasons = []
    result = attempt.get('route_result') or {}
    if returncode != 0: reasons.append(f'ferramenta saiu com {returncode}')
    if not attempt: return reasons + ['sem linha da tentativa']
    if result.get('status') != 'done':
        timeout = result.get('timeout')
        try: note = json.loads(timeout).get('note') if timeout else None
        except ValueError: note = timeout
        reasons.append(note or f'roteiro {result.get("status")}')
    elif result.get('timeout'): reasons.append('roteiro concluído com timeout registrado')
    if attempt.get('process_exit_code') != 0: reasons.append(f'jogo saiu com {attempt.get("process_exit_code")}')
    if attempt.get('exit_code', 0) != 0: reasons.append(f'exit_code {attempt.get("exit_code")}')
    if attempt.get('stage') != 'process-executed': reasons.append(f'estágio {attempt.get("stage")}')
    if attempt.get('translation_gap_detected'): reasons.append('lacuna de tradução')
    if attempt.get('reachability_alerts'): reasons.append(f'{len(attempt["reachability_alerts"])} alertas do coletor')
    if attempt.get('stopped_at_timeout'): reasons.append(f'parado pelo limite de tempo ({attempt.get("stopped_reason")})')
    if attempt.get('trap_count'): reasons.append(f'{attempt["trap_count"]} armadilhas')
    return reasons


def last_scenario_game(number):
    log = ROOT / 'build/pc-frozen-diagnostic-release/attempts' / str(number) / 'game-run.stderr'
    state = None
    for line in log.read_text(encoding='utf8').splitlines():
        if line.startswith('PLS_GAME_STATE='):
            game = json.loads(line.split('=', 1)[1])['game']
            if game.get('valid'): state = game
    return state


def saved_game_differences(before, after):
    if not before or not after: return ['foto de jogo ausente']
    return [key for key in ('money', 'tenants', 'cursor', 'camera') if before.get(key) != after.get(key)]


def run_scenarios(apk, only=None, seconds=300):
    """Run the state-driven routes (tests/routes/*-state.route), each from the save named by
    its `# save=N` line, on the dual-screen PC build at CPU speed. A route passes only when it
    reaches `end`: its expect/wait/cursor steps fail on the game state itself (see
    docs/notes/route-runner-design.md, "Roteiros orientados a estado").
    Returns (failed route names, methods completed by the scenario runs)."""
    import re
    routes = sorted((ROOT / 'tests/routes').glob('*-state.route'))
    if only: routes = [r for r in routes if r.stem in only or r.name in only]
    if not routes: print('scenarios: nenhum roteiro'); return ['(nenhum)'], set()
    if run(tool('tools/build_pc.py', '--apk', apk, '--frozen-diagnostic', '--configuration', 'Release'), 'build PC'): return ['(build)'], set()
    failed = []; covered = set()
    for route in routes:
        save = re.search(r'^# save=(\d+)\s*$', route.read_text(encoding='utf8'), re.M)
        if not save: print(f'{route.name}: falta a linha "# save=N"'); failed.append(route.name); continue
        command = tool('tools/build_pc.py', '--apk', apk, '--frozen-diagnostic', '--configuration', 'Release', '--run', '--no-build',
                       '--run-seconds', seconds, '--dual-screen', 1, '--diagnostic-save-from-attempt', save.group(1),
                       '--diagnostic-route', route, '--virtual-clock', '1767225600000,1000,50', '--fast')
        started = time.time()
        process = subprocess.run(command, cwd=ROOT, capture_output=True, text=True, encoding='utf8', errors='replace')
        rows = [json.loads(l) for l in process.stdout.splitlines() if l.startswith('{') and '"number"' in l]
        attempt = rows[-1] if rows else {}
        reasons = scenario_failures(process.returncode, attempt)
        scenario_covered = set()
        if reasons: failed.append(route.name)
        else:  # a failed scenario never feeds the coverage gate of dev.py routes
            counters = ROOT / 'build/pc-frozen-diagnostic-release/attempts' / str(attempt.get('number')) / 'readable-method-counters.json'
            if counters.is_file(): scenario_covered = {r['id'] for r in json.loads(counters.read_text(encoding='utf8')) if r.get('completed', 0) > 0}
            else: failed.append(route.name); reasons = ['sem readable-method-counters.json']
        reload_match = re.search(r'^# reload=([a-z0-9-]+\.route)\s*$', route.read_text(encoding='utf8'), re.M)
        if not reasons and reload_match:
            reload_route = route.parent / reload_match.group(1)
            command[command.index('--diagnostic-route') + 1] = str(reload_route)
            command[command.index('--diagnostic-save-from-attempt') + 1] = str(attempt['number'])
            env = dict(os.environ, PLS_SAVE_SOURCE_BUILD=str(ROOT / 'build/pc-frozen-diagnostic-release'))
            reload_process = subprocess.run(command, cwd=ROOT, env=env, capture_output=True, text=True, encoding='utf8', errors='replace')
            reload_rows = [json.loads(l) for l in reload_process.stdout.splitlines() if l.startswith('{') and '"number"' in l]
            reloaded = reload_rows[-1] if reload_rows else {}
            reasons = scenario_failures(reload_process.returncode, reloaded)
            if not reasons:
                different = saved_game_differences(last_scenario_game(attempt['number']), last_scenario_game(reloaded['number']))
                if different: reasons = ['save recarregado difere: ' + ', '.join(different)]
            print(f"reload: tentativa {attempt['number']} -> {reloaded.get('number')}", flush=True)
            if reasons: failed.append(route.name)
        if not reasons: covered |= scenario_covered
        note = '' if not reasons else ' ' + '; '.join(reasons)
        print(f'{route.name} (save {save.group(1)}): {"PASS" if not reasons else "FAIL"} em {time.time() - started:.0f} s, tentativa {attempt.get("number")}{note}', flush=True)
    print('scenarios:', 'PASS' if not failed else 'FAIL ' + ', '.join(failed))
    return failed, covered


def cmd_scenarios(a):
    apk, _ = local_paths()
    failed, _ = run_scenarios(apk, a.only, a.seconds)
    return 1 if failed else 0


def cmd_full(a):
    apk, managed = local_paths(need_managed=True)
    keep_awake()
    return run(tool('tools/verify_phase2.py', '--apk', apk, '--original-managed', managed, '--jobs', 1, '--full'), 'verificação completa')


def cmd_arm(a):
    apk, _ = local_paths()
    code = run(tool('tools/build_arm11_null.py', '--apk', apk, '--frozen', '--output', 'build/frozen-arm'), 'build ARM (.3dsx)')
    if code == 0: print('saída: build/frozen-arm/null_game.3dsx (benchmark no aparelho: docs/benchmark-hardware.md)')
    return code


SAVES = ROOT / 'build/pc-diagnostic-release/attempts'


def route_saves():
    """Save attempts the route tooling needs: those of the replayed canonical runs, the
    `# save=N` lines of tests/routes/*-state.route and the dev.py run choices (31, 50)."""
    import re
    sys.path.insert(0, str(ROOT / 'tools'))
    from run_readable_routes import chosen_runs
    history = json.loads((ROOT / 'config/phase2-diagnostic-attempts.json').read_text(encoding='utf-8'))
    numbers = {(a.get('restored_private_preferences') or {}).get('source_attempt') for a in chosen_runs(ROOT, history)}
    for route in (ROOT / 'tests/routes').glob('*-state.route'):
        numbers |= {int(n) for n in re.findall(r'^# save=(\d+)\s*$', route.read_text(encoding='utf8'), re.M)}
    return sorted(n for n in numbers | {31, 50} if n)


def linked(path):
    """Symbolic link or Windows junction (a junction is not a symlink to Path.is_symlink)."""
    return path.is_symlink() or (hasattr(path, 'is_junction') and path.is_junction())


def restore_plan(target, saves_root, manifest):
    """Validate a backup manifest completely before anything is copied (review of 2026-11-27:
    a name like ../../../x escaped the saves folder and overwrote a file). Returns (copies,
    restored, skipped, problems); copies are (source, destination) pairs, empty on any problem.
    Rules: positive decimal save numbers; relative POSIX names without '..', empty parts,
    backslashes or drives; 64-hex SHA-256; source and destination resolve inside their own
    save folder; no links on the way; every source matches its hash; an existing save is
    only compared, never overwritten."""
    import hashlib, re
    from pathlib import PurePosixPath
    digest = lambda p: hashlib.sha256(p.read_bytes()).hexdigest()
    problems, copies, restored, skipped = [], [], 0, 0
    saves = manifest.get('saves') if isinstance(manifest, dict) else None
    if not isinstance(saves, dict): return [], 0, 0, ['manifesto sem "saves"']
    backup_root, saves_root = Path(target).resolve(), Path(saves_root).resolve()
    for number, files in saves.items():
        if not (isinstance(number, str) and number.isascii() and number.isdecimal() and int(number) > 0 and str(int(number)) == number):
            problems.append(f'número de save inválido: {number!r}'); continue
        if not isinstance(files, dict) or not files: problems.append(f'{number}: lista de arquivos inválida'); continue
        source_base = backup_root / number / 'preferences'; destination_base = saves_root / number / 'preferences'
        if any(linked(p) for p in (backup_root / number, source_base, saves_root / number, destination_base) if p.exists()):
            problems.append(f'{number}: pasta é link'); continue
        pairs = []
        for name, sha in files.items():
            parts = PurePosixPath(name).parts if isinstance(name, str) else ()
            if (not isinstance(name, str) or not name or '\\' in name or ':' in name or name.startswith('/') or not parts
                    or PurePosixPath(name).as_posix() != name or any(part in ('', '.', '..') for part in parts)):
                problems.append(f'{number}: nome inválido {name!r}'); continue
            if not (isinstance(sha, str) and re.fullmatch(r'[0-9a-f]{64}', sha)): problems.append(f'{number}/{name}: hash inválido'); continue
            source, destination = source_base.joinpath(*parts), destination_base.joinpath(*parts)
            on_path = [source_base.joinpath(*parts[:i + 1]) for i in range(len(parts))]
            if any(linked(p) for p in on_path if p.exists() or p.is_symlink()): problems.append(f'{number}/{name}: link na cópia'); continue
            if not source.resolve().is_relative_to(source_base.resolve()) or not destination.resolve().is_relative_to(destination_base.resolve()):
                problems.append(f'{number}/{name}: caminho escapa da pasta do save'); continue
            if not source.is_file(): problems.append(f'{number}/{name}: ausente no backup'); continue
            if digest(source) != sha: problems.append(f'{number}/{name}: cópia corrompida'); continue
            pairs.append((source, destination, sha))
        if len(pairs) != len(files): continue
        if destination_base.exists():
            skipped += 1
            if not all(d.is_file() and not linked(d) and digest(d) == sha for _, d, sha in pairs):
                problems.append(f'{number} (já existe e difere; não sobrescrito)')
            continue
        copies += [(s, d) for s, d, _ in pairs]; restored += 1
    return ([] if problems else copies), restored, skipped, problems


def cmd_backup(a):
    """Copy (or --restore) the private test saves the routes start from. They are game data,
    so they never go to Git (AGENTS.md section 3): the folder must be outside the repository.
    A manifest with the SHA-256 of every file is written and checked on restore."""
    import hashlib
    folder = Path(a.folder).resolve()
    if folder == ROOT or folder.is_relative_to(ROOT): print('backup: a pasta precisa ficar fora do repositório (saves não entram no Git)'); return 1
    target = folder / 'pls-private-saves'; digest = lambda p: hashlib.sha256(p.read_bytes()).hexdigest()
    if a.restore:
        try: manifest = json.loads((target / 'manifest.json').read_text(encoding='utf-8'))
        except (OSError, ValueError) as error: print(f'backup --restore: manifesto ilegível ({error})'); return 1
        copies, restored, skipped, bad = restore_plan(target, SAVES, manifest)
        if bad:  # all or nothing: an invalid manifest never writes a file
            print(f'backup --restore: nada copiado; problemas: {", ".join(bad)}'); return 1
        for source, destination in copies:
            destination.parent.mkdir(parents=True, exist_ok=True); shutil.copyfile(source, destination)
        print(f'backup --restore: {restored} restaurados, {skipped} já presentes')
        return 0
    saves = {}; missing = []
    for number in route_saves():
        source = SAVES / str(number) / 'preferences'
        if not source.is_dir(): missing.append(number); continue
        if any(linked(p) for p in source.rglob('*')): print(f'backup: o save {number} contém link; recusado'); return 1
        files = {p.relative_to(source).as_posix(): digest(p) for p in sorted(source.rglob('*')) if p.is_file()}
        for name in files:
            (target / str(number) / 'preferences' / name).parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(source / name, target / str(number) / 'preferences' / name)
        saves[str(number)] = files
    (target / 'manifest.json').write_text(json.dumps(dict(apk_sha256_doc='docs/apk.md', created=datetime.datetime.now().isoformat(timespec='seconds'),
                                                          saves=saves), indent=2) + '\n', encoding='utf-8')
    print(f'backup: {len(saves)} saves em {target}', f'; ausentes em build/: {missing}' if missing else '')
    return 1 if missing else 0


def cmd_clean(a):
    """Delete only what is safe and regenerable: old route attempts (not cited by a kept route-set
    state), old review bundles and capture folders, dated backups of route-set states."""
    build = ROOT / 'build'; victims = []
    states = sorted(build.glob('c6b-route-set-frozen*.json'))
    backups = sorted((s for s in states if s.stem[len('c6b-route-set-frozen-'):][:2] == '20'), key=lambda s: s.stat().st_mtime)
    victims += backups[:-3]
    kept_states = [s for s in states if s not in victims]
    cited = set()
    for s in kept_states:
        try: cited |= {str(r.get('readable_attempt')) for r in json.loads(s.read_text(encoding='utf8'))['runs'].values()}
        except (ValueError, KeyError): pass
    attempts = build / 'pc-frozen-diagnostic-release/attempts'
    if attempts.is_dir():
        numbers = sorted(int(d.name) for d in attempts.iterdir() if d.name.isdecimal())
        recent = {str(n) for n in numbers[-a.keep:]}
        victims += [attempts / str(n) for n in numbers if str(n) not in recent and str(n) not in cited]
    for folder, pattern in ((build / 'review', 'review-*.txt'), (build / 'captures', '*')):
        if folder.is_dir():
            items = sorted(folder.glob(pattern), key=lambda x: x.stat().st_mtime)
            victims += items[:-3]
    def size(x):
        return x.stat().st_size if x.is_file() else sum(f.stat().st_size for f in x.rglob('*') if f.is_file())
    total = sum(size(v) for v in victims)
    print(f"{'apagando' if a.apply else 'apagaria'} {len(victims)} itens, {total / 2**20:,.0f} MB"
          + ('' if a.apply else ' (rode com --apply para apagar)'))
    for v in victims[:15]: print('  ', v.relative_to(ROOT))
    if len(victims) > 15: print(f'   ... e mais {len(victims) - 15}')
    if a.apply:
        for v in victims:
            if v.is_dir(): shutil.rmtree(v)
            else: v.unlink()
    return 0


def cmd_ci(a):
    """CI result of a commit (default: HEAD) from the GitHub API (no gh CLI on this machine)."""
    import re, urllib.request
    url = subprocess.run(['git', 'remote', 'get-url', 'origin'], cwd=ROOT, capture_output=True, text=True, check=True).stdout.strip()
    m = re.search(r'github\.com[:/]([^/]+)/([^/.]+)', url)
    if not m: sys.exit('origin não é um repositório do GitHub: ' + url)
    sha = subprocess.run(['git', 'rev-parse', a.commit], cwd=ROOT, capture_output=True, text=True, check=True).stdout.strip()
    api = f'https://api.github.com/repos/{m.group(1)}/{m.group(2)}/actions/runs?head_sha={sha}'
    runs = json.loads(urllib.request.urlopen(urllib.request.Request(api, headers={'User-Agent': 'pls-dev'}), timeout=30).read())['workflow_runs']
    if not runs: print(sha[:7], 'sem execução de CI (commit não publicado, ou não é o último de um push)'); return 1
    for r in runs: print(sha[:7], r['name'], r['status'], r['conclusion'])
    return 0 if all(r['status'] == 'completed' and r['conclusion'] == 'success' for r in runs) else 1


def main():
    for stream in (sys.stdout, sys.stderr):
        try: stream.reconfigure(encoding='utf-8')
        except (AttributeError, ValueError): pass
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest='command', required=True)
    p = sub.add_parser('build'); p.set_defaults(func=cmd_build)
    p.add_argument('--jobs', type=int, default=2, help='compilações em paralelo (8 GB de RAM: veja docs/notes/rebuild-times.md)')
    p = sub.add_parser('run'); p.set_defaults(func=cmd_run)
    p.add_argument('--save', type=int, help='começar de um save de diagnóstico: 31 (antes da 1ª partida), 50 (depois)')
    p.add_argument('--seconds', type=int, default=600); p.add_argument('--scale', type=int, default=2)
    p.add_argument('--capture', metavar='DIR:K', help='gravar as duas telas em BMP a cada K quadros em DIR (dentro de build/; nunca no Git)')
    p.add_argument('--route', help='jogar sozinho por um roteiro (tests/routes/*.route) em vez do teclado')
    p = sub.add_parser('check'); p.set_defaults(func=cmd_check)
    p.add_argument('--all', action='store_true', help='conferir a formatação de todos os arquivos (~4 min)')
    p = sub.add_parser('routes'); p.set_defaults(func=cmd_routes)
    p.add_argument('--resume', action='store_true', help='continuar o conjunto interrompido em vez de começar de novo')
    p.add_argument('--only', nargs='*'); p.add_argument('--stress-every', type=int, default=50)
    p.add_argument('--jobs', type=int, default=4, help='roteiros ao mesmo tempo (padrão 4: ~210 MB e 1 núcleo cada; 7,7 GB e 8 núcleos nesta máquina)')
    p.add_argument('--smoke', action='store_true', help='conjunto fixo curto: título, menu, uma partida, salvar e carregar, novo jogo (~2 min com 4 jobs)')
    p.add_argument('--affected', action='store_true', help='só os roteiros que executam os métodos alterados desde --since (sem cobertura ou fora de src/game/*.cpp: conjunto completo)')
    p.add_argument('--since', default='@{upstream}', help='referência para --affected (padrão: o último commit publicado)')
    p = sub.add_parser('scenarios'); p.set_defaults(func=cmd_scenarios)
    p.add_argument('--only', nargs='*', help='nomes dos roteiros (com ou sem .route)')
    p.add_argument('--seconds', type=int, default=300, help='limite de tempo de cada roteiro')
    sub.add_parser('full').set_defaults(func=cmd_full)
    sub.add_parser('arm').set_defaults(func=cmd_arm)
    p = sub.add_parser('ci'); p.set_defaults(func=cmd_ci); p.add_argument('commit', nargs='?', default='HEAD')
    p = sub.add_parser('backup'); p.set_defaults(func=cmd_backup)
    p.add_argument('folder', help='pasta FORA do repositório que recebe (ou fornece, com --restore) pls-private-saves/')
    p.add_argument('--restore', action='store_true', help='copiar de volta para build/ os saves que faltam, conferindo o SHA-256')
    p = sub.add_parser('clean'); p.set_defaults(func=cmd_clean)
    p.add_argument('--apply', action='store_true', help='apagar de fato (sem isso, só lista)')
    p.add_argument('--keep', type=int, default=30, help='tentativas de roteiro mais recentes a manter (além das citadas)')
    a = ap.parse_args()
    sys.path.insert(0, str(ROOT / 'tools'))
    sys.exit(a.func(a))


if __name__ == '__main__':
    main()
