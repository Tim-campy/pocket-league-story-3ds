"""C6b: build pc_game from readable generated trees (compile/link check only).

Usage (after `python translator/readable.py sample --original-managed MANAGED`):
    python tools/build_readable_pc.py [--game build/readable-sample/game]
        [--portable build/readable-sample/include/generated] [--jobs 4]

Writes build/c6b-pc-release/ (configure.log, build.log, pc_game.exe). The
executable is NOT run here: a non-diagnostic run would write its save under the
SDL preference path outside build/. Running the readable game under routes needs
a readable diagnostic variant (docs/notes/readable-final-pass.md, C6b).
"""
import argparse, subprocess, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from pc_compiler import CMAKE, NINJA, environment, showincludes_prefix


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--game', type=Path, default=ROOT / 'build/readable-sample/game')
    parser.add_argument('--portable', type=Path, default=ROOT / 'build/readable-sample/include/generated')
    parser.add_argument('--jobs', default='4')
    args = parser.parse_args()
    game, portable = args.game.resolve(strict=True), args.portable.resolve(strict=True)
    for path in (game, portable):
        if not path.is_relative_to((ROOT / 'build').resolve()):raise ValueError('Readable trees must stay below build/')
    env = environment()
    folder = ROOT / 'build/c6b-pc-release'; folder.mkdir(parents=True, exist_ok=True)
    prefix = showincludes_prefix(folder / 'compiler-prefix-probe', env)['prefix']
    configure = [CMAKE, '-S', ROOT, '-B', folder, '-G', 'Ninja', '-DCMAKE_MAKE_PROGRAM=' + str(NINJA), '-DCMAKE_BUILD_TYPE=Release',
                 '-DSDL2_DIR=' + str(ROOT / 'build/deps/SDL2-2.32.10/cmake'), '-DPLS_DIAGNOSTIC_GAME_DIR=',
                 '-DPLS_MSVC_SHOWINCLUDES_PREFIX=' + prefix, '-DPLS_GAME_SOURCE_DIR=' + str(game), '-DPLS_PORTABLE_GENERATED_DIR=' + str(portable)]
    build = [CMAKE, '--build', folder, '--parallel', args.jobs, '--target', 'pc_game', '--', '-k', '0']
    for command, name in [(configure, 'configure'), (build, 'build')]:
        result = subprocess.run([str(c) for c in command], cwd=ROOT, env=env, capture_output=True)
        (folder / (name + '.log')).write_bytes(result.stdout + result.stderr)
        print(name, result.returncode)
        if result.returncode: raise SystemExit(name + ' failed; see ' + str(folder / (name + '.log')))
    print('pc_game.exe', (folder / 'pc_game.exe').stat().st_size)


if __name__ == '__main__':
    main()
