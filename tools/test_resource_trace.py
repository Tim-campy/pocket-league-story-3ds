"""Own concurrent events: full phase totals survive bounded detail-buffer overflow."""
import hashlib,json,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment

def main():
    folder=ROOT/'build/resource-trace-fixture';folder.mkdir(exist_ok=True)
    compiler,env=msvc_environment()
    source=ROOT/'tests/kairo/resource_trace_events.cpp'
    header=ROOT/'src/kairo/common/resource_load_trace.hpp'
    binary=folder/'fixture.exe'
    command=[compiler,'/nologo','/std:c++17','/O2','/EHsc','/W4','/WX','/utf-8',
             '/D__3DS__=1','/DPLS_NULL_BACKEND=1','/I'+str(header.parent),'/Fe:'+str(binary),source]
    result=subprocess.run(list(map(str,command)),cwd=folder,env=env,capture_output=True)
    (folder/'compile.log').write_bytes(result.stdout+result.stderr);result.check_returncode()
    result=subprocess.run([binary],cwd=folder,env=env,capture_output=True,timeout=30)
    (folder/'events.log').write_bytes(result.stderr);result.check_returncode()
    lines=result.stderr.decode().splitlines()
    rows=[json.loads(line.split('=',1)[1])for line in lines if line.startswith('PLS_RESOURCE_AGGREGATE=')]
    expected={'overflow':(600,4200,2400,7),'left':(1000,11000,9000,11),'right':(1000,13000,9000,13)}
    assert {r['stage']for r in rows}==set(expected)
    for name,(count,ns,size,maximum)in expected.items():
        selected=[r for r in rows if r['stage']==name]
        assert (sum(r['count']for r in selected),sum(r['ns']for r in selected),sum(r['bytes']for r in selected),max(r['maximum_ns']for r in selected))==(count,ns,size,maximum)
    assert not any(line.startswith('PLS_RESOURCE_AGGREGATE_DROPPED=')for line in lines)
    dropped=sum(int(line.split('=',1)[1])for line in lines if line.startswith('PLS_RESOURCE_DROPPED='))
    details=sum(line.startswith('PLS_RESOURCE_STAGE=')for line in lines)
    assert dropped>=88 and details+dropped==2600
    sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
    report=dict(status='PASS',events=2600,stage_counts={k:v[0]for k,v in expected.items()},
                raw_events=details,raw_events_dropped=dropped,aggregate_events_dropped=0,
                limitation='Host concurrency fixture, not ARM latency evidence',
                inputs={p.relative_to(ROOT).as_posix():sha(p)for p in [source,header,Path(__file__)]},
                executable_sha256=sha(binary),log_sha256=sha(folder/'events.log'))
    (folder/'receipt.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({k:v for k,v in report.items()if k!='inputs'}))

if __name__=='__main__':main()
