"""Verify waiting UI workers park for GC and resume before managed results."""
import hashlib
import json
from pathlib import Path
import subprocess
import sys
import argparse
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    parser=argparse.ArgumentParser();parser.add_argument('--tracing',action='store_true');args=parser.parse_args()
    folder=ROOT/('build/ui-dispatch-tracing-gc' if args.tracing else 'build/ui-dispatch-gc');folder.mkdir(exist_ok=True)
    compiler,env=msvc_environment();source=ROOT/'tests/kairo/ui_dispatch_gc.cpp';runtime=ROOT/'src/kairo/common/semantic_runtime.cpp';target=folder/'fixture.exe'
    command=[compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/W4','/WX','/utf-8','/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'src/kairo/api'),'/Fe:'+str(target),source,runtime]
    if args.tracing:command+=['/DPLS_TRACING_GC=1']
    result=subprocess.run([str(v)for v in command],cwd=folder,env=env,capture_output=True);(folder/'compile.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('Inspect build/ui-dispatch-gc/compile.log')
    result=subprocess.run([target],cwd=folder,env=env,capture_output=True,timeout=20);(folder/'run.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('Inspect build/ui-dispatch-gc/run.log')
    native=json.loads(result.stdout)
    report=dict(operation='native-UI-dispatch-collector-cooperation',status='PASS',assertions=native['assertions'],passed=native['assertions'],ui_gc_collections=native['ui_gc_collections'],
        game_boot=False,original_binaries_used=False,verified_boundary_ids=[],native_executable=dict(path=target.relative_to(ROOT).as_posix(),sha256=sha(target)),
        inputs={p.relative_to(ROOT).as_posix():sha(p)for p in [Path(__file__),source,runtime,runtime.with_suffix('.hpp'),ROOT/'src/kairo/api/application.hpp',ROOT/'src/kairo/common/managed_shared_field.hpp']},
        limitations=['Own native scheduling invariants; not a source-oracle or game boot.', 'Does not fix unsynchronized fields in generated Game classes.'])
    report['managed_reference_model']='tracing-raw-pointers'
    report['inputs'].update({p.relative_to(ROOT).as_posix():sha(p) for p in (ROOT/'src/runtime').rglob('*') if p.suffix in {'.cpp','.hpp','.inc'}})
    receipt=folder/'receipt.json' if args.tracing else ROOT/'config/phase2-ui-dispatch-gc-tests.json'
    receipt.write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps(native))
if __name__=='__main__':main()
