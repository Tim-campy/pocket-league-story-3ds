"""Type initialization timing of translated code against Unity Mono (readable C5, A1).

The same C# (tests/translator/TypeInitTimingFixtures.cs, with real static
constructors) runs on Unity Mono and through the translator in normal and readable
emission; TypeInitTiming.Run() must return the same string in all three.
"""
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys
import time

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from pc_compiler import utf8_console, environment
utf8_console()
sys.path.insert(0, str(ROOT / 'tools/csharp_subset'))
from inventory import compiler_paths
sys.path.insert(0, str(ROOT / 'translator'))
from translate import prepare, run

SOURCE = ROOT / 'tests/translator/TypeInitTimingFixtures.cs'
UNITY = Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono')
FRAMEWORK = UNITY / 'lib/mono/unity'


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def mono_result(folder):
    main = folder / 'OracleMain.cs'
    main.write_text('public static class OracleMain { public static void Main() { System.Console.Write(TypeInitTiming.Run()); } }\n', encoding='utf-8')
    exe = folder / 'oracle.exe'
    compiler, _, _ = compiler_paths()
    command = [compiler, '/nologo', '/noconfig', '/nostdlib+', '/target:exe', '/out:' + str(exe)]
    command += ['/r:' + str(FRAMEWORK / (name + '.dll')) for name in ['mscorlib', 'System', 'System.Core']] + [str(SOURCE), str(main)]
    subprocess.run(command, cwd=folder, check=True, capture_output=True)
    env = dict(environment(), MONO_PATH=str(FRAMEWORK))
    return subprocess.check_output([str(UNITY / 'bin/mono.exe'), str(exe)], cwd=folder, env=env).decode('utf-8')


def translated_result(folder, readable):
    generated = folder / 'generated'; generated.mkdir()
    _, runtime, tool, producer = prepare()
    request = dict(assembly='TypeInitTimingFixtures', sources=[str(SOURCE)],
                   references=[str(FRAMEWORK / (n + '.dll')) for n in ['mscorlib', 'System', 'System.Core']],
                   selected=['M:TypeInitTiming.Run'], output=str(generated), readable=readable)
    request_path = folder / 'input.json'; report_path = folder / 'translation.json'
    request_path.write_text(json.dumps(request, indent=2) + '\n', encoding='utf-8')
    run([runtime, tool, request_path, report_path], folder / 'translate.log')
    report = json.loads(report_path.read_text(encoding='utf-8-sig'))
    if report['rejected_methods']:
        raise ValueError(report['rejected_methods'])
    method = next(m for m in report['emitted_methods'] if m['id'] == 'M:TypeInitTiming.Run')
    host = folder / 'host.cpp'
    host.write_text('#include "portable_generated.hpp"\n#include <iostream>\n'
                    'int main(){pls::cs::GcMutatorScope scope;auto text=pls::generated::' + method['cpp_name'] + '();std::cout<<text.utf8();return 0;}\n', encoding='utf-8')
    env = environment(); exe = folder / 'fixture.exe'
    sources = [host] + [generated / x['file'] for x in report['generated_chunks'] if x['file'].endswith('.cpp')]
    sources += [ROOT / 'src/kairo/common/semantic_runtime.cpp', ROOT / 'src/kairo/common/managed_exceptions.cpp']
    command = [shutil.which('cl.exe', path=env['PATH']), '/nologo', '/std:c++17', '/EHsc', '/Od', '/fp:strict', '/utf-8', '/bigobj',
               '/I' + str(generated), '/I' + str(ROOT / 'src/kairo/common'), '/I' + str(ROOT / 'src/kairo/api'),
               '/I' + str(ROOT / 'build/generated/mono-collation'), '/I' + str(ROOT / 'build/generated/mono-numberformat'),
               '/Fo' + str(folder) + '\\', '/Fe:' + str(exe)] + [str(s) for s in sources]
    result = subprocess.run(command, cwd=folder, env=env, capture_output=True)
    (folder / 'compile.log').write_bytes(result.stdout + result.stderr); result.check_returncode()
    return subprocess.check_output([str(exe)], cwd=folder, env=env).decode('utf-8'), producer


def main():
    folder = ROOT / 'build/type-init-translated' / str(time.time_ns()); folder.mkdir(parents=True)
    (folder / 'mono').mkdir(); (folder / 'normal').mkdir(); (folder / 'readable').mkdir()
    expected = mono_result(folder / 'mono')
    normal, producer = translated_result(folder / 'normal', False)
    readable, _ = translated_result(folder / 'readable', True)
    rows = dict(mono=expected, normal=normal, readable=readable)
    status = 'PASS' if normal == expected and readable == expected else 'FAIL'
    report = dict(operation='translated-type-initialization-timing-versus-unity-mono', status=status, results=rows,
                  inputs={p: sha(ROOT / p) for p in ['tests/translator/TypeInitTimingFixtures.cs', 'tools/test_type_init_translated.py']},
                  producer=producer, game_assets_used=False, original_binaries_executed=False)
    (ROOT / 'config/phase2-type-init-translated.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8', newline='\n')
    print(json.dumps(dict(status=status, **rows)))
    return 0 if status == 'PASS' else 1


if __name__ == '__main__':
    sys.exit(main())
