"""Check exact attribution totals across workers, windows and aligned new."""
import hashlib
import json
from pathlib import Path
import re
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment


def main():
    folder=ROOT/'build/allocation-sites-fixture';folder.mkdir(parents=True,exist_ok=True)
    compiler,env=msvc_environment()
    sources=[ROOT/'tests/kairo/allocation_sites.cpp',ROOT/'src/main/allocation_probe.cpp']
    target=folder/'fixture.exe'
    command=[str(compiler),'/nologo','/std:c++17','/EHsc','/O2','/Zi','/W4','/WX','/utf-8',
             '/DPLS_ALLOCATION_PROBE=1','/I'+str(ROOT/'src/main'),
             '/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(target),*map(str,sources),'/link','/DEBUG']
    result=subprocess.run(command,cwd=folder,env=env,capture_output=True)
    (folder/'compile.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('Inspect '+str(folder/'compile.log'))
    result=subprocess.run([str(target)],cwd=folder,env=env,capture_output=True,timeout=30)
    (folder/'run.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise RuntimeError('Fixture failed')
    text=result.stdout.decode('ascii').replace('\r\n','\n')
    if not re.search(r'overflow=0 recursive=0',text):raise ValueError('Attribution lost events')
    windows=[tuple(map(int,m))for m in re.findall(r'^PLS_ALLOC_TRACE_WINDOW (\d+) (\d+) (\d+)$',text,re.M)]
    assert len(windows)==300 and windows[0]==(0,128,4160) and windows[1]==(1,2,192)
    assert all(count==size==0 for _,count,size in windows[2:])
    sites=[tuple(map(int,m))for m in re.findall(r'^PLS_ALLOC_SITE (\d+) (\d+)',text,re.M)]
    assert sum(count for count,_ in sites)==130 and sum(size for _,size in sites)==4352
    sys.path.insert(0,str(ROOT/'tools/profiling'))
    from allocation_sites import parse, Symbols
    base,parsed_windows,parsed_sites=parse(text)
    resolver=Symbols(target,base)
    try:
        resolved=[resolver.resolve(a)for s in parsed_sites for a in s['addresses']]
    finally:resolver.close()
    assert any(row['symbol']=='operator new' for row in resolved)
    assert any(row.get('file','').endswith('allocation_sites.cpp') for row in resolved)
    for changed in [text.replace('overflow=0','overflow=1'),text.replace('PLS_ALLOC_TRACE_WINDOW 0 128 4160','PLS_ALLOC_TRACE_WINDOW 0 127 4160')]:
        try:parse(changed)
        except ValueError:pass
        else:raise AssertionError('Incomplete/inconsistent trace was accepted')
    inputs=[Path(__file__),*sources,ROOT/'tools/profiling/allocation_sites.py',ROOT/'src/main/native_allocation_sites.hpp',ROOT/'src/kairo/common/allocation_probe.hpp']
    report=dict(operation='native-allocation-attribution-fixture',status='PASS',
                worker_threads=2,allocations=130,bytes=4352,windows=300,
                overflow=0,recursive=0,game_assets_used=False,
                inputs={p.relative_to(ROOT).as_posix():hashlib.sha256(p.read_bytes()).hexdigest()for p in inputs})
    (ROOT/'config/phase2-allocation-sites-fixture.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf8')
    print(json.dumps({k:v for k,v in report.items()if k!='inputs'}))


if __name__=='__main__':main()
