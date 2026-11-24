"""One command for the edit cycle of the game code (src/game).

    python tools/dev.py build              # PC build of src/game (diagnostic, Release)
    python tools/dev.py run [--save 31|50] [--seconds 600] [--scale 2]
                                           # PC run with both 3DS screens in windows
    python tools/dev.py check [--all]      # fast checks of the game code
    python tools/dev.py routes [--resume] [--only NAME ...]
                                           # the route set (87 runs), moderate GC stress
    python tools/dev.py full               # complete verification (verify_phase2.py --full)
    python tools/dev.py arm                # 3DS build (.3dsx, null backend)

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
    return run(tool('tools/build_pc.py', '--apk', apk, '--frozen-diagnostic', '--configuration', 'Release'), 'build PC')


def cmd_run(a):
    apk, _ = local_paths()
    args = ['--apk', apk, '--frozen-diagnostic', '--configuration', 'Release', '--run', '--run-seconds', a.seconds,
            '--dual-screen', a.scale]
    if a.save: args += ['--diagnostic-save-from-attempt', a.save]
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


def cmd_routes(a):
    apk, _ = local_paths()
    keep_awake()
    state = ROOT / 'build/c6b-route-set-frozen.json'
    if state.exists() and not a.resume:
        keep = state.with_name(f'c6b-route-set-frozen-{datetime.datetime.now():%Y%m%d-%H%M%S}.json')
        shutil.move(state, keep); print('estado anterior guardado em', keep.relative_to(ROOT))
    args = ['--apk', apk, '--frozen', '--gc-stress-every', a.stress_every]
    if a.only: args += ['--only', *a.only]
    code = run(tool('tools/run_readable_routes.py', *args), 'roteiros com estresse moderado')
    if state.exists():
        current = json.loads(state.read_text(encoding='utf8'))
        union = current.get('union', {})
        # Baseline: the replay of the canonical (pre-freeze) code on the same routes and saves.
        # Two replays (actions.route from save 95, dialogs-exit.route) never complete in
        # replay, canonical included; every route completed there must complete here.
        baseline = ROOT / 'build/c6b-route-set-canonical.json'
        expected = ({k for k, r in json.loads(baseline.read_text(encoding='utf8'))['runs'].items() if r['status'] == 'done'}
                    if baseline.exists() else set(current['runs']))
        missing = sorted(k for k in expected if current['runs'].get(k, {}).get('status') != 'done')
        if a.only: missing = [k for k in missing if current['runs'].get(k, {}).get('route') in a.only]
        ok = not missing and not union.get('safeguard_alerts') and not union.get('translation_gaps')
        print('roteiros:', json.dumps({k: union.get(k) for k in ('runs', 'routes_done', 'safeguard_alerts', 'readable', 'canonical')}),
              f'esperados concluídos: {len(expected)}; faltando: {missing}', 'PASS' if ok and code == 0 else 'FAIL')
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


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest='command', required=True)
    sub.add_parser('build').set_defaults(func=cmd_build)
    p = sub.add_parser('run'); p.set_defaults(func=cmd_run)
    p.add_argument('--save', type=int, help='começar de um save de diagnóstico: 31 (antes da 1ª partida), 50 (depois)')
    p.add_argument('--seconds', type=int, default=600); p.add_argument('--scale', type=int, default=2)
    p = sub.add_parser('check'); p.set_defaults(func=cmd_check)
    p.add_argument('--all', action='store_true', help='conferir a formatação de todos os arquivos (~4 min)')
    p = sub.add_parser('routes'); p.set_defaults(func=cmd_routes)
    p.add_argument('--resume', action='store_true', help='continuar o conjunto interrompido em vez de começar de novo')
    p.add_argument('--only', nargs='*'); p.add_argument('--stress-every', type=int, default=50)
    sub.add_parser('full').set_defaults(func=cmd_full)
    sub.add_parser('arm').set_defaults(func=cmd_arm)
    a = ap.parse_args()
    sys.path.insert(0, str(ROOT / 'tools'))
    sys.exit(a.func(a))


if __name__ == '__main__':
    main()
