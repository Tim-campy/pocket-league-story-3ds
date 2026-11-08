"""Own StreamReader fixtures: line endings, BOM, decoder state and disposal."""
import hashlib,json,os,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import compiler_paths,msvc_environment
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def main():
    folder=ROOT/'build/stream-reader-fixtures';folder.mkdir(parents=True,exist_ok=True)
    payloads=[b'',b'a',b'a\r\nb\nc\rd',b'\r\n\n\r',b'a\r',b'a\n',b'\xef\xbb\xbfa\n',b'\xef\xbb\xbf',b'\xef\xbb',b'\xff\xfe',b'\xff\xfeA',b'\xff\xfeA\0\r\0\n\0B\0',b'\xfe\xff\0A\0\n\0B',b'\xff\xfe\0\0A\0\0\0',b'\0\0\xfe\xff\0\0\0A',b'\xc2',b'\xe2\x82',b'\xe2\x82\xac\n',b'\xf0\x9f\x98\x80',b'\xe0\x80',b'\xed\xa0',b'\xed\xa0\x80',b'\xc0\x80',b'\xffA',b'A\0B',b'a'*1023+b'\xc3\xa9\r\nb',b'a'*1024,b'a'*2048,b'a'*1023+b'\r\nb']
    cases=[]
    for i,data in enumerate(payloads):
        for mode in ['end','lines']:
            for chunk in [0,1,2,3]:cases.append((f'u{i}-{mode}-{chunk}',data,'utf8',chunk,mode))
    for codec,data in [('le',b'A\0\n\0B'),('le',b'\xff\xfeA\0'),('le',b'\0\xd8'),('be',b'\0A\0\n\0B'),('ascii',b'A\n\xff'),('ascii',b'\xef\xbb\xbfA')]:
        for chunk in [0,1,3]:cases.append((f'{codec}-{len(cases)}',data,codec,chunk,'lines'))
    for mode in ['nullstream','nullencoding','closed','dispose']:cases.append((mode,b'abc','utf8',0,mode))
    input_text=''.join('|'.join([key,data.hex(),encoding,str(chunk),mode])+'\n' for key,data,encoding,chunk,mode in cases)
    (folder/'input.txt').write_text(input_text,encoding='utf-8',newline='\n')
    def run(command,name,env=None,input_data=None):
        r=subprocess.run([str(v) for v in command],cwd=ROOT,env=env,input=input_data,capture_output=True,timeout=90);(folder/(name+'.stdout')).write_bytes(r.stdout);(folder/(name+'.stderr')).write_bytes(r.stderr)
        if r.returncode:raise RuntimeError('See build/stream-reader-fixtures/'+name+'.stdout/.stderr')
        return r.stdout.decode('utf-8-sig').replace('\r\n','\n').replace('\r','')
    csc,dotnet,framework=compiler_paths();source=ROOT/'tests/translator/StreamReaderFixtures.cs';modern=folder/'StreamReaderFixtures.dll';refs=[framework/(n+'.dll') for n in ['System.Private.CoreLib','System.Runtime','System.Console']]
    opts=['/nologo','/nostdlib+','/target:exe','/out:'+str(modern)]+['/r:'+str(p) for p in refs]+[str(source)];rsp=folder/'oracle.rsp';rsp.write_text('\n'.join('"'+p+'"' for p in opts)+'\n',encoding='utf-8',newline='\n');run([csc,'/noconfig','@'+str(rsp)],'modern-compile')
    modern.with_suffix('.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10'))))+'\n',encoding='utf-8',newline='\n')
    unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))/'Editor/Data/Mono';mono=unity/'bin/mono.exe';smcs=unity/'lib/mono/unity/smcs.exe';old=folder/'StreamReaderFixtures-mono.exe';mono_env=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'etc'));run([mono,smcs,'-nologo','-noconfig','-out:'+str(old),source],'mono-compile',mono_env)
    compiler,env=msvc_environment();native=folder/'stream-reader-fixtures.exe';sources=[ROOT/'tests/translator/stream_reader_fixtures.cpp',*[ROOT/('src/kairo/common/'+n+'.cpp') for n in ['semantic_runtime','managed_streams','managed_encoding','managed_stream_reader']]]
    command=[compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8','/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(native),'/Fo:'+str(folder)+'/',*sources];run(command,'native-compile',env)
    profiles={}
    for name,cmd,e,mode in [('UnityMono265',[mono,old],mono_env,'mono'),('DotNet',[dotnet,modern],None,'dotnet')]:
        expected=dict(line.split('\t') for line in run(cmd,name+'-oracle',e,input_text.encode()).splitlines());actual=dict(line.split('\t') for line in run([native,mode],name+'-native',env,input_text.encode()).splitlines())
        if len(expected)!=len(cases) or expected.keys()!=actual.keys():raise ValueError('Incomplete StreamReader corpus')
        bad=[dict(case=k,expected=v,actual=actual[k]) for k,v in expected.items() if v!=actual[k]];profiles[name]=dict(cases=len(cases),passed=len(cases)-len(bad),mismatches=bad)
    report=dict(operation='own-StreamReader-source-differential',status='PASS' if all(p['passed']==p['cases'] for p in profiles.values()) else 'FAIL',cases=2*len(cases),passed=sum(p['passed'] for p in profiles.values()),profiles=profiles,
        producer_sha256=sha(Path(__file__)),inputs_sha256={str(p.relative_to(ROOT)).replace('\\','/'):sha(p) for p in [*sources,source,ROOT/'src/kairo/common/managed_encoding.hpp',ROOT/'src/kairo/common/managed_stream_reader.hpp',ROOT/'src/kairo/common/managed_streams.hpp',ROOT/'src/kairo/common/semantic_runtime.hpp']},
        native_executable=dict(path=str(native.relative_to(ROOT)).replace('\\','/'),sha256=sha(native)),production_methods_promoted=0,original_game_binary_loaded=False)
    (ROOT/'config/phase2-stream-reader-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n');print(json.dumps(dict(status=report['status'],cases=report['cases'],passed=report['passed'],profiles={k:dict(cases=v['cases'],passed=v['passed']) for k,v in profiles.items()})))
    if report['status']!='PASS':print(json.dumps({k:v['mismatches'][:8] for k,v in profiles.items()},indent=2));raise SystemExit(1)
if __name__=='__main__':main()
