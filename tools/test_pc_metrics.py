"""Deterministic native aggregation and JSON schema checks; no game boot."""
import hashlib,json,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def main():
    folder=ROOT/'build/pc-metrics-fixtures';folder.mkdir(parents=True,exist_ok=True)
    compiler,env=msvc_environment();output=folder/'pc-metrics-fixtures.exe'
    sources=[ROOT/'tests/kairo/pc_metrics_fixtures.cpp',ROOT/'src/main/pc_metrics.cpp',ROOT/'src/main/pc_memory.cpp'];headers=[ROOT/'src/main/pc_metrics.hpp',ROOT/'src/main/pc_memory.hpp']
    command=[compiler,'/nologo','/std:c++17','/EHsc','/permissive-','/W4','/WX','/utf-8','/I'+str(ROOT/'src/main'),'/Fe:'+str(output),'/Fo:'+str(folder)+'/',*sources,'/link','Psapi.lib']
    def run(cmd,label):
        r=subprocess.run([str(v) for v in cmd],cwd=ROOT,env=env,capture_output=True,timeout=90)
        (folder/(label+'.stdout')).write_bytes(r.stdout);(folder/(label+'.stderr')).write_bytes(r.stderr)
        if r.returncode:raise RuntimeError('See build/pc-metrics-fixtures/'+label+'.stdout/.stderr')
        return r.stdout.decode('utf-8-sig')
    run(command,'compile');lines=run([output],'native').splitlines();result=json.loads(lines[0]);records=[json.loads(line.removeprefix('PLS_PC_METRICS=')) for line in lines[1:]]
    if result.get('status')!='PASS' or result.get('assertions')!=29:raise ValueError('Incomplete metrics aggregation proof')
    if len(records)!=2 or [r['event'] for r in records]!=['memory','frame_summary']:raise ValueError('Missing metrics JSONL')
    memory,frames=records
    assert memory['process']['resident_bytes']==100 and memory['process']['private_commit_bytes']==300
    assert memory['process']['executable_image_resident_bytes']==25 and memory['payload_bytes']['display_rgba']==10
    assert all(value is None for value in memory['resident_by_category'].values())
    assert memory['game_screen']=='UNKNOWN' and frames['game_screen']=='UNKNOWN'
    assert frames['completed_presented_frames']==2 and frames['slices']['retained']['total_wall']['median_ms']==1.5
    assert frames['slices']['after_first_60']['total_wall']['samples']==0 and frames['slices']['after_first_60']['total_wall']['mean_ms'] is None
    receipt=dict(operation='own-PC-metrics-aggregation',status='PASS',native_assertions=result['assertions'],json_assertions=6,producer_sha256=sha(Path(__file__)),inputs_sha256={str(p.relative_to(ROOT)).replace('\\','/'):sha(p) for p in [*sources,*headers]},native_executable=dict(path=str(output.relative_to(ROOT)).replace('\\','/'),sha256=sha(output)),game_executed=False,production_methods_promoted=0)
    (ROOT/'config/phase2-pc-metrics-tests.json').write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf-8',newline='\n');print(json.dumps(dict(status='PASS',native_assertions=result['assertions'],json_assertions=6)))
if __name__=='__main__':main()
