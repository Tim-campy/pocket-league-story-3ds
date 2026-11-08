"""Characterize culture-sensitive CLR calls before implementing any intrinsic."""
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths

def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def probe_windows_nls(expected):
    if os.name!='nt':return dict(status='UNKNOWN',reason='Windows platform APIs unavailable')
    import ctypes
    from ctypes import wintypes as w
    kernel=ctypes.WinDLL('kernel32',use_last_error=True)
    compare=kernel.CompareStringEx
    compare.argtypes=[w.LPCWSTR,w.DWORD,w.LPCWSTR,ctypes.c_int,w.LPCWSTR,ctypes.c_int,ctypes.c_void_p,ctypes.c_void_p,w.LPARAM]
    compare.restype=ctypes.c_int
    find=kernel.FindNLSStringEx
    find.argtypes=[w.LPCWSTR,w.DWORD,w.LPCWSTR,ctypes.c_int,w.LPCWSTR,ctypes.c_int,ctypes.c_void_p,ctypes.c_void_p,ctypes.c_void_p,w.LPARAM]
    find.restype=ctypes.c_int
    # Same synthetic vectors as the independent C# fixture, no game strings.
    sources=['abc','I','\u0130','a\0b','a\u00adb','\u00e9','e\u0301','\ud800x']
    needles=['a','i','i','ab','ab','e\u0301','\u00e9','\ud800']
    expected={v['case']:v['actual'] for v in expected}
    policies={}
    for case_flags in [1,1|0x08000000]:
        rows=[]
        for c,culture in enumerate(['','en-US','tr-TR']):
            for i,(s,n) in enumerate(zip(sources,needles)):
                for op in ['index','indexStart','starts','ends','equalsCI']:
                    if op=='equalsCI':
                        result=compare(culture,case_flags,s,len(s),n,len(n),None,None,0)
                        if result==0:raise OSError(ctypes.get_last_error(),'CompareStringEx failed')
                        value=str(result==2)
                    else:
                        flag={'index':0x00400000,'indexStart':0x00400000,'starts':0x00100000,'ends':0x00200000}[op]
                        part=s[1:] if op=='indexStart' else s
                        # FindNLSStringEx refuses an empty source; all tested
                        # needles are nonempty so the managed result is -1.
                        v=find(culture,flag,part,len(part),n,len(n),None,None,None,0) if part else -1
                        value=str(v>=0) if op in ('starts','ends') else str(v+1 if op=='indexStart' and v>=0 else v)
                    case='c'+str(c)+'p'+str(i)+op
                    rows.append(dict(case=case,actual=value,mono=expected[case],differs=value!=expected[case]))
        policies[str(case_flags)]=dict(cases=len(rows),differences_from_mono=sum(v['differs'] for v in rows),mismatches=[v for v in rows if v['differs']])
    return dict(status='MEASURED',policies=policies,replacement_accepted=False)

def main():
    folder = ROOT/'build/string-culture-probe'
    folder.mkdir(parents=True, exist_ok=True)
    source = ROOT/'tests/translator/StringCultureProbe.cs'
    csc, dotnet, framework = compiler_paths()
    modern = folder/'Probe.dll'
    unity = Path(os.environ.get('UNITY_ROOT', str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
    mono = unity/'Editor/Data/Mono/bin/mono.exe'
    smcs = unity/'Editor/Data/Mono/lib/mono/unity/smcs.exe'
    old = folder/'Probe-mono.exe'
    def run(args, label, env=None):
        result = subprocess.run([str(v) for v in args], cwd=ROOT, env=env, capture_output=True, timeout=60)
        (folder/(label+'.log')).write_bytes(result.stdout+result.stderr)
        if result.returncode:
            raise RuntimeError('Probe failed; inspect build/string-culture-probe/'+label+'.log')
        return result.stdout.decode('utf-8-sig').replace('\r\n','\n').replace('\r','')
    refs = [framework/(v+'.dll') for v in ['System.Private.CoreLib','System.Runtime','System.Console','System.Threading.Thread']]
    options = ['/nologo','/nostdlib+','/target:exe','/out:'+str(modern)] + ['/r:'+str(v) for v in refs] + [str(source)]
    response = folder/'probe.rsp'
    response.write_text('\n'.join('"'+v+'"' for v in options)+'\n',encoding='utf-8',newline='\n')
    run([csc,'/noconfig','@'+str(response)],'modern-compile')
    (folder/'Probe.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10'))))+'\n',encoding='utf-8',newline='\n')
    env = dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
    run([mono,smcs,'-nologo','-noconfig','-optimize+','-out:'+str(old),source],'mono-compile',env)
    profiles = {}
    for name,args,child_env in [('DotNet',[dotnet,modern],None),('UnityMono265',[mono,old],env)]:
        rows=[]
        for line in run(args,name,child_env).splitlines():
            case,actual,ordinal=line.split('\t')
            rows.append(dict(case=case,actual=actual,ordinal=ordinal,differs=actual!=ordinal))
        if len(rows)!=120:
            raise ValueError('Incomplete synthetic characterization')
        profiles[name]=dict(cases=rows,differences_from_ordinal=sum(v['differs'] for v in rows))
        metadata=(folder/(name+'.log')).read_text(encoding='utf-8-sig').splitlines()
        profiles[name]['runtime_metadata']={k:v for line in metadata if '=' in line for k,v in [line.split('=',1)]}
    report=dict(operation='culture-sensitive-string-characterization',status='PASS',profiles=profiles,
        windows_nls=probe_windows_nls(profiles['UnityMono265']['cases']),
        source_sha256=sha(source),producer_sha256=sha(Path(__file__)),
        tools={str(p):sha(p) for p in [csc,dotnet,mono,smcs]},
        game_binary_executed=False,game_assets_used=False,production_methods_promoted=0,
        limitations=['Synthetic BCL evidence on Windows; Android Mono culture tables are not verified.',
                    'This probe does not select or implement a replacement policy.'])
    (ROOT/'config/phase2-string-culture-probe.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps({name:dict(cases=len(v['cases']),differences_from_ordinal=v['differences_from_ordinal']) for name,v in profiles.items()}))

if __name__=='__main__':
    main()
