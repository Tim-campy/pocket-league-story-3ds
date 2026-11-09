"""Measure diagnostic scope overhead on an own noinline volatile function."""
import hashlib,json,statistics,subprocess
from pathlib import Path
from generated_build import compile_objects
from pc_compiler import VS,environment
ROOT=Path(__file__).resolve().parents[1]
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
 folder=ROOT/'build/profile-overhead';folder.mkdir(parents=True,exist_ok=True);source=ROOT/'tests/kairo/profile_overhead.cpp'
 # compile_objects keeps its normal compiler options; definition is passed in
 # the own input instead of modifying any generated game source.
 wrapped=folder/'fixture.cpp';wrapped.write_text('#define PLS_DIAGNOSTIC_BUILD 1\n#include "'+source.as_posix()+'"\n',encoding='utf8',newline='\n')
 proof=compile_objects([wrapped],folder/'objects',[ROOT/'src/kairo/common'],optimize=True,jobs=1)
 compiler=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';exe=folder/'overhead.exe'
 r=subprocess.run([str(compiler),'/nologo','/Fe:'+str(exe),*[o['path']for o in proof['objects']]],env=environment(),cwd=folder,capture_output=True);(folder/'link.log').write_bytes(r.stdout+r.stderr)
 if r.returncode:raise RuntimeError('See profile-overhead/link.log')
 r=subprocess.run([str(exe)],capture_output=True,check=True);rows=[list(map(int,line.split(',')))for line in r.stdout.decode().splitlines()];assert len(rows)==7
 report=dict(operation='own-profile-overhead',status='PASS',samples=rows,median_baseline_ns_per_call=statistics.median(a/n for a,b,c,n in rows),median_disabled_ns_per_call=statistics.median(b/n for a,b,c,n in rows),median_instrumented_ns_per_call=statistics.median(c/n for a,b,c,n in rows),median_increment_ns_per_call=statistics.median((c-a)/n for a,b,c,n in rows),inputs_sha256={p.relative_to(ROOT).as_posix():sha(p)for p in [source,Path(__file__),ROOT/'src/kairo/common/diagnostic_profile.hpp']},executable_sha256=sha(exe),limitations=['Own microbenchmark, not a correction factor for game timing.','No benchmark overhead is subtracted from reported game samples.'])
 (ROOT/'config/phase2-profile-overhead.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps({k:v for k,v in report.items()if k.startswith('median_')}))
if __name__=='__main__':main()
