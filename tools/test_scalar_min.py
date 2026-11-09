"""Exact scalar Min contract: signed zeros, quiet NaN payloads and extremes."""
import json,os,shutil
from pathlib import Path
from test_input import ROOT,sha,run,compile_modern
from pc_compiler import environment
import sys
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths
def main():
    folder=ROOT/'build/scalar-min-tests';folder.mkdir(parents=True,exist_ok=True)
    source=ROOT/'tests/translator/ScalarMinOracle.cs';native_source=ROOT/'tests/kairo/scalar_min_fixtures.cpp';header=ROOT/'src/kairo/common/managed_math.hpp'
    csc,dotnet,framework=compiler_paths();env=environment();cl=shutil.which('cl.exe',path=env['PATH']);native=folder/'scalar-min.exe'
    library=ROOT/'build/pc/pls_semantics.lib'
    inputs={p.relative_to(ROOT).as_posix():sha(p)for p in [source,native_source,header,ROOT/'src/kairo/common/semantic_runtime.hpp',library,Path(__file__)]}
    run([cl,'/nologo','/std:c++17','/EHsc','/MD','/O2','/fp:strict','/W4','/WX','/utf-8','/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'src/kairo/api'),'/Fe:'+str(native),'/Fo'+str(folder)+'/',native_source,library,'Advapi32.lib'],folder,'native-compile',env)
    modern=folder/'ScalarMin.dll';compile_modern([source],modern,folder,'dotnet',csc,framework)
    unity=Path.home()/'AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono';core=unity/'lib/mono/unity';old=folder/'ScalarMin-mono.exe'
    run([csc,'/nologo','/nostdlib+','/out:'+str(old),'/r:'+str(core/'mscorlib.dll'),source],folder,'mono-compile',env)
    results=[]
    for profile,command,environment_ in [('dotnet',[dotnet,modern],env),('mono',[unity/'bin/mono.exe',old],dict(env,MONO_PATH=str(core)))]:
        expected=run(command,folder,profile+'-oracle',environment_).splitlines();actual=run([native,profile],folder,profile+'-native',env).splitlines()
        if len(expected)!=100 or len(actual)!=100:raise ValueError('Incomplete scalar Min corpus')
        mismatches=[dict(index=i,expected=x,actual=y)for i,(x,y)in enumerate(zip(expected,actual))if x!=y]
        results.append(dict(profile=profile,cases=100,passed=100-len(mismatches),mismatches=mismatches))
    if any(sha(ROOT/p)!=h for p,h in inputs.items()):raise ValueError('Scalar Min sources changed during execution')
    report=dict(operation='scalar-System.Math.Min-single-differential',status='PASS'if all(r['passed']==100 for r in results)else'FAIL',cases=200,passed=sum(r['passed']for r in results),profiles=results,inputs=inputs,compiler_sha256=sha(cl),native_executable_sha256=sha(native),original_binaries_executed=False,game_executed=False,verified_boundary_ids=[],limitations=['Two host runtime profiles, not an Android runtime qualification.','Only Single overload; integer/double Min and Java JMath.Min are separate.'])
    (ROOT/'config/phase2-scalar-min-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps({k:report[k]for k in ('status','cases','passed','profiles')}))
    if report['status']!='PASS':raise ValueError('See scalar Min mismatches')
if __name__=='__main__':main()
