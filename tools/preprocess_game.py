"""Preprocess every game and KairoLibrary unit with the PC build's own compile command.

    python tools/preprocess_game.py OUT_DIR [--build build/pc-frozen-diagnostic-release] [--jobs 2]

Runs each unit's MSVC command from the Ninja build with /c and /Fo replaced by /EP
(preprocess to stdout, no #line), and writes OUT_DIR/<unit>.i. Use it before and after a
change that must be invisible after preprocessing (a macro that expands to the old text),
then compare the token streams:  python tools/cpp_tokens.py --tree BEFORE AFTER --suffix .i
"""
import argparse, concurrent.futures, re, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from pc_compiler import NINJA, environment  # noqa: E402


UNIT = re.compile(r'(?:src\\game|src\\kairo\\common\\generated)\\[^\\"\s]+\.cpp(?=")')
DROP = re.compile(r' (?:/c|-c|/showIncludes|/FS)(?= )| /F[od](?:"[^"]*"|\S+)')


def unit_commands(build):
    out = subprocess.run([str(NINJA), '-C', str(build), '-t', 'commands', 'pc_game.exe'], capture_output=True, text=True, check=True).stdout
    commands = {}
    for line in out.splitlines():
        if 'cl.exe' not in line.lower() or (' -c ' not in line and ' /c ' not in line): continue
        units = UNIT.findall(line)
        if len(units) != 1: continue
        commands[units[0]] = line
    return commands


def preprocess(line, target, env, build):
    command = DROP.sub('', line + ' ') + ' /EP'
    result = subprocess.run(command, cwd=build, env=env, capture_output=True)
    if result.returncode: raise RuntimeError(f'{target.name}: {result.stderr.decode("utf-8", "replace")[:500]}')
    target.write_bytes(result.stdout)


def main():
    ap = argparse.ArgumentParser(); ap.add_argument('out', type=Path)
    ap.add_argument('--build', type=Path, default=ROOT / 'build/pc-frozen-diagnostic-release'); ap.add_argument('--jobs', type=int, default=2)
    a = ap.parse_args()
    env = environment(); a.out.mkdir(parents=True, exist_ok=True)
    commands = unit_commands(a.build.resolve())
    if not commands: sys.exit('no unit commands found in ' + str(a.build))
    with concurrent.futures.ThreadPoolExecutor(a.jobs) as pool:
        jobs = [pool.submit(preprocess, line, a.out / (src.replace('\\', '__') + '.i'), env, a.build.resolve())
                for src, line in commands.items()]
        for j in jobs: j.result()
    print(dict(units=len(commands), out=str(a.out)))


if __name__ == '__main__':
    main()
