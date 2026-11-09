"""Default floating G formatting against .NET and historical Mono source oracles."""
import hashlib,json,math,os,struct,subprocess,sys
from pathlib import Path
from pc_compiler import environment,VS
from generated_build import compile_objects
from test_input import compile_modern
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def corpus():
    single=set();double=set()
    for e in range(256):
        for m in (0,1,0x3fffff,0x400000,0x7ffffe,0x7fffff):
            for sign in (0,0x80000000):single.add(sign|(e<<23)|m)
    for e in range(2048):
        for m in (0,1,0x7ffffffffffff,0x8000000000000,0xffffffffffffe,0xfffffffffffff):
            for sign in (0,0x8000000000000000):double.add(sign|(e<<52)|m)
    state=0x1a2b3c4d
    for _ in range(4000):
        state=(1664525*state+1013904223)&0xffffffff;single.add(state)
        state=(1664525*state+1013904223)&0xffffffff;high=state
        state=(1664525*state+1013904223)&0xffffffff;double.add((high<<32)|state)
    for e in range(-308,309):
        bits=struct.unpack('<Q',struct.pack('<d',10.0**e))[0]
        for offset in range(-2,3):
            for sign in (0,0x8000000000000000):double.add(sign|(bits+offset))
    for e in range(-44,39):
        bits=struct.unpack('<I',struct.pack('<f',10.0**e))[0]
        for offset in range(-2,3):
            if bits+offset>=0:
                for sign in (0,0x80000000):single.add(sign|(bits+offset))
    return ''.join('S\t%08x\n'%v for v in sorted(single))+''.join('D\t%016x\n'%v for v in sorted(double))
def main():
    folder=ROOT/'build/float-format-tests';folder.mkdir(parents=True,exist_ok=True)
    cases=folder/'cases.tsv';cases.write_text(corpus(),encoding='ascii',newline='\n')
    def run(args,name,env=None):
        result=subprocess.run([str(v)for v in args],cwd=ROOT,env=env,capture_output=True,timeout=120)
        (folder/(name+'.stdout')).write_bytes(result.stdout);(folder/(name+'.stderr')).write_bytes(result.stderr)
        if result.returncode:raise RuntimeError('See build/float-format-tests/'+name+'.stdout/.stderr')
        return result.stdout.decode('utf8').replace('\r\n','\n').splitlines()
    sources=[ROOT/'tests/kairo/float_format_fixtures.cpp',ROOT/'tests/kairo/float_format_modern_probe.cpp']
    proof=compile_objects(sources,folder/'objects',[ROOT/'src/kairo/common',ROOT/'build/generated/mono-numberformat'],optimize=True,jobs=2)
    compiler=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';exe=folder/'float-format-fixtures.exe'
    run([compiler,'/nologo','/Fe:'+str(exe),*[row['path']for row in proof['objects']],ROOT/'build/pc/pls_semantics.lib','Advapi32.lib'],'link',environment())
    csc,dotnet,framework=compiler_paths();source=ROOT/'tests/kairo/FloatFormatOracle.cs';modern=folder/'FloatFormatOracle.dll';compile_modern([source],modern,folder,'dotnet',csc,framework)
    unity=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono');core=unity/'lib/mono/unity/mscorlib.dll';mono=unity/'bin/mono.exe';old=folder/'FloatFormatOracle-mono.exe'
    rsp=folder/'mono.rsp';options=['/nologo','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(old),'/r:'+str(core),str(source)];rsp.write_text('\n'.join('"'+v+'"'for v in options)+'\n',encoding='utf8')
    run([csc,'/noconfig','@'+str(rsp)],'mono-compile')
    env=dict(os.environ,MONO_PATH=str(core.parent),MONO_CFG_DIR=str(unity/'etc'));profiles=[];mismatches=[]
    for name,command,oracle_env in [('mono',[mono,old],env)]:
        expected=run([*command,cases],name+'-oracle',oracle_env);actual=run([exe,cases,name],name+'-native',environment())
        if len(expected)!=len(actual):raise ValueError('Floating format corpus length differs')
        bad=[dict(profile=name,expected=a,actual=b)for a,b in zip(expected,actual)if a!=b];mismatches+=bad[:20]
        profiles.append(dict(profile=name,cases=len(expected),passed=len(expected)-len(bad),failed=len(bad)))
    if run([exe,cases,'dotnet'],'modern-refused',environment())!=['unsupported-modern-profile']:raise ValueError('Unqualified modern profile was accepted')
    expected=run([dotnet,modern,cases],'modern-control-oracle');actual=run([exe,cases,'dotnet-prototype'],'modern-control-native',environment())
    if len(expected)!=len(actual):raise ValueError('Modern control corpus length differs')
    control_bad=[dict(expected=a,actual=b)for a,b in zip(expected,actual)if a!=b]
    control=dict(cases=len(expected),passed=len(expected)-len(control_bad),failed=len(control_bad),adopted=False,mismatch_examples=control_bad[:8])
    inputs=sources+[source,Path(__file__),ROOT/'src/kairo/common/managed_float_format.cpp',ROOT/'src/kairo/common/managed_float_format.hpp',ROOT/'build/generated/mono-numberformat/mono_number_tables.inc']
    report=dict(operation='default-G-floating-format',status='PASS'if all(p['failed']==0 for p in profiles)else'FAIL',profiles=profiles,mismatch_examples=mismatches,inputs_sha256={p.relative_to(ROOT).as_posix():sha(p)for p in inputs},corpus_sha256=sha(cases),native_executable_sha256=sha(exe),mono_core_sha256=sha(core),game_executed=False,verified_boundary_ids=[],modern_profile='explicitly-unsupported',modern_prototype=control,limitations=['Mono265 default G formatting only, for an explicitly selected numeric format.','Invariant and synthetic UTF16 numeric formats, not a complete CultureInfo implementation.','The separate STL/modern control is not production code and its failures are not qualified.','Android runtime differential remains pending.'])
    (ROOT/'config/phase2-float-format-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps(dict(status=report['status'],profiles=profiles,mismatch_examples=mismatches[:3])))
    if report['status']!='PASS':raise ValueError('Floating formatting differs; see retained profile outputs')
if __name__=='__main__':main()
