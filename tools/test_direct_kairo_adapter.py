"""Compile the production-generated native forwarding bridge with own targets."""
import hashlib,json,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'translator'))
sys.path.insert(0,str(ROOT/'tests/translator'))
from bootstrap_source import direct_kairo_adapter
from run_semantic_fixtures import msvc_environment

def main():
    folder=ROOT/'build/direct-kairo-adapter';folder.mkdir(parents=True,exist_ok=True)
    invoke=lambda name,args,signature,result:args[0]+'->'+name+'('+','.join(args[1:])+')'
    emitted=folder/'direct_kairo_generated.inc';emitted.write_text(direct_kairo_adapter(invoke))
    compiler,env=msvc_environment()
    sources=[ROOT/'tests/kairo/direct_kairo_adapter.cpp',ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_exceptions.cpp']
    binary=folder/'fixture.exe'
    command=[compiler,'/nologo','/std:c++17','/O2','/EHsc','/W4','/WX','/fp:strict','/utf-8','/DPLS_TRACING_GC=1',
        '/I'+str(folder),'/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(binary),*map(str,sources)]
    with (folder/'compile.log').open('wb')as log:
        subprocess.run(command,cwd=folder,env=env,stdout=log,stderr=subprocess.STDOUT,check=True)
    result=subprocess.run([binary],cwd=folder,env=env,capture_output=True,timeout=30)
    (folder/'run.log').write_bytes(result.stdout+result.stderr);result.check_returncode()
    report=json.loads(result.stdout)
    files=set(sources+[Path(__file__),ROOT/'translator/bootstrap_source.py',emitted,ROOT/'tests/translator/gc_test_support.hpp'])
    for base in ['src/runtime','src/kairo/common','src/kairo/api']:
        files.update(p for p in (ROOT/base).glob('*')if p.suffix in {'.hpp','.inc','.cpp'})
    sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
    report.update(inputs={p.relative_to(ROOT).as_posix():sha(p)for p in sorted(files)},executable_sha256=sha(binary))
    (folder/'receipt.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({k:v for k,v in report.items()if k!='inputs'}))

if __name__=='__main__':main()
