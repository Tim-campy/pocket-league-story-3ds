"""Build the new tracing engine independently of the legacy reference runtime."""
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tests/translator'))
from run_semantic_fixtures import msvc_environment

def main():
    folder = ROOT / 'build/tracing-gc'
    folder.mkdir(parents=True, exist_ok=True)
    compiler, env = msvc_environment()
    source = ROOT / 'tests/translator/tracing_gc_fixtures.cpp'
    assembly = source.with_name('tracing_gc_register_x64.asm')
    runtime = ROOT / 'src/runtime/tracing_gc.cpp'
    obj = folder / 'register_fixture.obj'
    executable = folder / 'fixture.exe'
    assembler = Path(compiler).with_name('ml64.exe')
    commands = [
        [assembler, '/nologo', '/c', '/Fo' + str(obj), assembly],
        [compiler, '/nologo', '/std:c++17', '/O2', '/Zi', '/EHsc', '/W4', '/WX', '/utf-8',
         '/I' + str(runtime.parent), '/Fe:' + str(executable), source, runtime, obj],
    ]
    with (folder / 'compile.log').open('wb') as log:
        for command in commands:
            subprocess.run([str(v) for v in command], cwd=folder, env=env,
                           stdout=log, stderr=subprocess.STDOUT, check=True)
    result = subprocess.run([executable], cwd=folder, env=env, capture_output=True, timeout=30)
    (folder / 'run.log').write_bytes(result.stdout + result.stderr)
    result.check_returncode()
    report = json.loads(result.stdout)
    report['integration'] = 'standalone engine proof; production integration is validated separately'
    report['inputs'] = {p.relative_to(ROOT).as_posix(): hashlib.sha256(p.read_bytes()).hexdigest()
                        for p in [Path(__file__), source, assembly, runtime, runtime.with_suffix('.hpp')]}
    (folder / 'receipt.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf8')
    print(json.dumps(report))

if __name__ == '__main__':
    main()
