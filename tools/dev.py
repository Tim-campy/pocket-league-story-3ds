"""One command for the edit cycle of the game code (src/game).

    python tools/dev.py build              # PC build of src/game (diagnostic, Release)
    python tools/dev.py run [--save 31|50] [--seconds 600] [--scale 2] [--capture build/DIR:K] [--route R]
                                           # PC run with both 3DS screens in windows
    python tools/dev.py check [--all]      # fast checks of the game code
    python tools/dev.py routes [--jobs 4] [--smoke | --affected [--since REF]] [--resume] [--only NAME ...]
                                           # the route set (87 runs), moderate GC stress
    python tools/dev.py full               # complete verification (verify_phase2.py --full)
    python tools/dev.py arm                # 3DS build (.3dsx, null backend)
    python tools/dev.py ci [COMMIT]        # CI result of a published commit (GitHub API)

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


# Fixed short set (dev.py routes --smoke): title, menu, a match, saving and loading, new game.
SMOKE_KEYS = ['126', '196', '177', '175', '430', '145', '67', '138', '139', '171']
GAME_INFRA = ('game_generated_runtime.hpp', 'game_generated_forward.hpp', 'bootstrap_', 'PlsPortGeneratedBootstrap.')


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
        if ids & methods or any(i.split('(')[0].rsplit('.', 1)[0] in classes for i in ids): keys.append(key)
    unseen = sorted(m for m in methods if m not in seen)
    if unseen: reasons.append(f'métodos sem cobertura em nenhum roteiro (novos ou nunca executados): {unseen[:5]}' + (' → todo método das classes deles' if unseen else ''))
    for doc in unseen:
        klass = doc[2:].split('(')[0].rsplit('.', 1)[0]
        keys += [k for k, run in runs.items() if k not in keys and any(i.split('(')[0].rsplit('.', 1)[0] == klass for i in
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
    # with 6), so the cap grows with N. It only stops a runaway run; it is not a criterion.
    cap = round(600 * (1 + 0.45 * (max(1, a.jobs) - 1)))
    args = ['--apk', apk, '--frozen', '--gc-stress-every', a.stress_every, '--jobs', a.jobs, '--state', state, '--run-seconds', cap]
    if a.only: args += ['--only', *a.only]
    if keys is not None and not full: args += ['--keys', *keys]
    code = run(tool('tools/run_readable_routes.py', *args), label)
    if state.exists():
        current = json.loads(state.read_text(encoding='utf8'))
        union = current.get('union', {})
        # Baseline: the replay of the canonical (pre-freeze) code on the same routes and saves.
        # Two replays (actions.route from save 95, dialogs-exit.route) never complete in
        # replay, canonical included; every route completed there must complete here.
        # Compared by (route, save): run numbers follow the latest original run of each route.
        baseline = ROOT / 'build/c6b-route-set-canonical.json'
        key = lambda r: (r['route'], r.get('save'))
        ran = {key(r) for r in current['runs'].values()}
        expected = ({key(r) for r in json.loads(baseline.read_text(encoding='utf8'))['runs'].values() if r['status'] == 'done'}
                    if baseline.exists() else ran)
        if not full: expected &= ran
        done = {key(r) for r in current['runs'].values() if r['status'] == 'done'}
        missing = sorted(f'{route} (save {save})' for route, save in expected - done if not a.only or route in a.only)
        reruns = sum(len(r.get('suspended_reruns') or []) for r in current['runs'].values())
        ok = not missing and not union.get('safeguard_alerts') and not union.get('translation_gaps')
        print('roteiros:', json.dumps({k: union.get(k) for k in ('runs', 'routes_done', 'safeguard_alerts', 'readable', 'canonical')}),
              f'esperados concluídos: {len(expected)}; faltando: {missing}; refeitos por suspensão: {reruns}', 'PASS' if ok and code == 0 else 'FAIL')
        if not ok: code = code or 1
    return code


def cmd_full(a):
    apk, managed = local_paths(need_managed=True)
    keep_awake()
    return run(tool('tools/verify_phase2.py', '--apk', apk, '--original-managed', managed, '--jobs', 1, '--full'), 'verificação completa')


def cmd_arm(a):
    apk, _ = local_paths()
    code = run(tool('tools/build_arm11_null.py', '--apk', apk, '--frozen', '--output', 'build/frozen-arm'), 'build ARM (.3dsx)')
    if code == 0: print('saída: build/frozen-arm/null_game.3dsx (benchmark no aparelho: docs/benchmark-hardware.md)')
    return code


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
    sub.add_parser('full').set_defaults(func=cmd_full)
    sub.add_parser('arm').set_defaults(func=cmd_arm)
    p = sub.add_parser('ci'); p.set_defaults(func=cmd_ci); p.add_argument('commit', nargs='?', default='HEAD')
    a = ap.parse_args()
    sys.path.insert(0, str(ROOT / 'tools'))
    sys.exit(a.func(a))


if __name__ == '__main__':
    main()
