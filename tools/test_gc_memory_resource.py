"""Verify that metadata pools remain visible to the Windows new-request probe."""
import hashlib,json,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment

def main():
    folder=ROOT/'build/gc-memory-resource';folder.mkdir(exist_ok=True)
    compiler,env=msvc_environment();source=ROOT/'tests/translator/gc_memory_resource_fixtures.cpp'
    header=ROOT/'src/runtime/gc_memory_resource.hpp';exe=folder/'fixture.exe'
    command=[compiler,'/nologo','/std:c++17','/O2','/MD','/EHsc','/W4','/WX','/utf-8','/I'+str(header.parent),'/Fe:'+str(exe),source]
    with (folder/'compile.log').open('wb') as log:
        subprocess.run(list(map(str,command)),cwd=folder,env=env,stdout=log,stderr=subprocess.STDOUT,check=True)
    run=subprocess.run([str(exe)],capture_output=True,timeout=20)
    (folder/'run.log').write_bytes(run.stdout+run.stderr)
    run.check_returncode()
    report=json.loads(run.stdout);report['status']='PASS'
    report['inputs']={str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in [source,header,Path(__file__)]}
    (folder/'receipt.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report))

if __name__=='__main__':main()
