"""Own full-BMP Trim and Int32 hexadecimal source differentials."""
import hashlib,json,os,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import compiler_paths,msvc_environment
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def main():
    folder=ROOT/'build/string-ops-fixtures';folder.mkdir(parents=True,exist_ok=True)
    case_count=65536+9*7+1+11*8*2+65536+26+8*9*6+8*5*5+65536+11*7
    def run(command,name,env=None,input_data=None):
        r=subprocess.run([str(v) for v in command],cwd=ROOT,env=env,input=input_data,capture_output=True,timeout=90);(folder/(name+'.stdout')).write_bytes(r.stdout);(folder/(name+'.stderr')).write_bytes(r.stderr)
        if r.returncode:raise RuntimeError('See build/string-ops-fixtures/'+name+'.stdout/.stderr')
        return r.stdout.decode('utf-8-sig').replace('\r\n','\n').replace('\r','')
    csc,dotnet,framework=compiler_paths();source=ROOT/'tests/translator/StringOpsFixtures.cs';modern=folder/'StringOpsFixtures.dll';refs=[framework/(n+'.dll') for n in ['System.Private.CoreLib','System.Runtime','System.Console']]
    opts=['/nologo','/nostdlib+','/target:exe','/out:'+str(modern)]+['/r:'+str(p) for p in refs]+[str(source)];rsp=folder/'oracle.rsp';rsp.write_text('\n'.join('"'+p+'"' for p in opts)+'\n',encoding='utf-8',newline='\n');run([csc,'/noconfig','@'+str(rsp)],'modern-compile')
    modern.with_suffix('.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10'))))+'\n',encoding='utf-8',newline='\n')
    unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))/'Editor/Data/Mono';mono=unity/'bin/mono.exe';smcs=unity/'lib/mono/unity/smcs.exe';old=folder/'StringOpsFixtures-mono.exe';mono_env=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'etc'));run([mono,smcs,'-nologo','-noconfig','-out:'+str(old),source],'mono-compile',mono_env)
    compiler,env=msvc_environment();native=folder/'string-ops-fixtures.exe';sources=[ROOT/'tests/translator/string_ops_fixtures.cpp',*[ROOT/('src/kairo/common/'+n+'.cpp') for n in ['semantic_runtime','managed_string_ops']]]
    command=[compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8','/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'build/generated/mono-collation'),'/Fe:'+str(native),'/Fo:'+str(folder)+'/',*sources];run(command,'native-compile',env)
    profiles={};oracles={}
    for name,cmd,e,mode in [('UnityMono265',[mono,old],mono_env,'mono'),('DotNet',[dotnet,modern],None,'dotnet')]:
        expected=dict(line.split('\t') for line in run(cmd,name+'-oracle',e).splitlines());actual=dict(line.split('\t') for line in run([native,mode],name+'-native',env).splitlines())
        if len(expected)!=case_count or expected.keys()!=actual.keys():raise ValueError('Incomplete StringOps corpus')
        oracles[name]=expected
        bad=[dict(case=k,expected=v,actual=actual[k]) for k,v in expected.items() if v!=actual[k]];profiles[name]=dict(cases=case_count,passed=case_count-len(bad),mismatches=bad)
    report=dict(operation='own-StringOps-source-differential',status='PASS' if all(p['passed']==p['cases'] for p in profiles.values()) else 'FAIL',cases=2*case_count,passed=sum(p['passed'] for p in profiles.values()),profiles=profiles,
        historical_oracle=dict(runtime=str(mono),runtime_sha256=sha(mono),core=str(smcs.parent/'mscorlib.dll'),core_sha256=sha(smcs.parent/'mscorlib.dll'),profile='unity'),
        producer_sha256=sha(Path(__file__)),inputs_sha256={str(p.relative_to(ROOT)).replace('\\','/'):sha(p) for p in [*sources,source,ROOT/'src/kairo/common/managed_string_ops.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'build/generated/mono-collation/mono_decimal_digit_ranges.inc',ROOT/'tools/generate_mono_collator.py']},
        native_executable=dict(path=str(native.relative_to(ROOT)).replace('\\','/'),sha256=sha(native)),profile_differences=sum(v!=oracles['DotNet'][k] for k,v in oracles['UnityMono265'].items()),production_methods_promoted=0,original_game_binary_loaded=False,
        limitations=['Int32 hexadecimal precision supports only 0..99, the historical standard-format precision range; arbitrary/custom format strings are not implemented.', 'BMP operations are measured against the installed Unity SDK Mono, not executed on Android.', 'Split implements the char-array overload with default None/preserve-empty; count/options/string-separator overloads are not implemented.'])
    differences={k for k,v in oracles['UnityMono265'].items() if v!=oracles['DotNet'][k]}
    report['profile_differences_by_family']={family:sum(k.startswith(prefix) for k in differences) for family,prefix in [('trim_bmp','bmp-'),('trim_explicit','set-'),('hex_number_bmp','parse-bmp-'),('split_bmp','split-bmp-')]}
    report['profile_differences_by_family']['hex_number_edges']=sum(k.startswith('parse-') and not k.startswith('parse-bmp-') for k in differences)
    report['profile_differences_by_family']['split_explicit']=sum(k.startswith('split-') and not k.startswith('split-bmp-') for k in differences)
    report['profile_differences_by_family']['replace']=sum(k.startswith('replace-') for k in differences)
    (ROOT/'config/phase2-string-ops-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n');print(json.dumps(dict(status=report['status'],cases=report['cases'],passed=report['passed'],profiles={k:dict(cases=v['cases'],passed=v['passed']) for k,v in profiles.items()})))
    if report['status']!='PASS':print(json.dumps({k:v['mismatches'][:8] for k,v in profiles.items()},indent=2));raise SystemExit(1)
if __name__=='__main__':main()
