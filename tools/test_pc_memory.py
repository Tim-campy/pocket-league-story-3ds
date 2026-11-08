"""Own Windows process-memory sampler fixture, unrelated to game boot."""
import hashlib,json,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def main():
    folder=ROOT/'build/pc-memory-fixtures';folder.mkdir(parents=True,exist_ok=True)
    compiler,env=msvc_environment();output=folder/'pc-memory-fixtures.exe'
    sources=[ROOT/'tests/kairo/pc_memory_fixtures.cpp',ROOT/'src/main/pc_memory.cpp'];header=ROOT/'src/main/pc_memory.hpp'
    command=[compiler,'/nologo','/std:c++17','/EHsc','/permissive-','/W4','/WX','/utf-8','/I'+str(header.parent),'/Fe:'+str(output),'/Fo:'+str(folder)+'/',*sources,'/link','Psapi.lib']
    def run(cmd,label):
        r=subprocess.run([str(v) for v in cmd],cwd=ROOT,env=env,capture_output=True,timeout=90)
        (folder/(label+'.stdout')).write_bytes(r.stdout);(folder/(label+'.stderr')).write_bytes(r.stderr)
        if r.returncode:raise RuntimeError('See build/pc-memory-fixtures/'+label+'.stdout/.stderr')
        return r.stdout.decode('utf-8-sig')
    run(command,'compile');result=json.loads(run([output],'native'))
    if result.get('status')!='PASS' or result.get('assertions')!=8:raise ValueError('Incomplete memory sampler proof')
    report=dict(operation='own-Windows-process-memory-sampler',status='PASS',assertions=8,measurements=result,producer_sha256=sha(Path(__file__)),inputs_sha256={str(p.relative_to(ROOT)).replace('\\','/'):sha(p) for p in [*sources,header]},native_executable=dict(path=str(output.relative_to(ROOT)).replace('\\','/'),sha256=sha(output)),production_methods_promoted=0,game_executed=False,
                limitations=['Measurements describe only the synthetic fixture process, not game boot.', 'Working set and executable page samples are sequential, not atomic.', 'Executable MEM_IMAGE page counts include EXE/DLL padding and shared pages; not exact compiled machine-code lengths.', 'No per-category resident or managed heap byte attribution is inferred.'])
    (ROOT/'config/phase2-pc-memory-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n');print(json.dumps(dict(status='PASS',assertions=8)))
if __name__=='__main__':main()
