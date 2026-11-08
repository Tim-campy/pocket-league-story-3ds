"""Measure the effective existing SDK core library, never a game assembly."""
import hashlib,json,os,subprocess
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))/'Editor/Data/Mono'
    mono=unity/'bin/mono.exe';smcs=unity/'lib/mono/unity/smcs.exe'
    folder=ROOT/'build/core-profile-fixtures';folder.mkdir(parents=True,exist_ok=True)
    source=ROOT/'tests/translator/CoreProfileProbe.cs';output=folder/'CoreProfileProbe.exe'
    env=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'etc'))
    def run(cmd,label,childenv):
        r=subprocess.run([str(v) for v in cmd],cwd=ROOT,env=childenv,capture_output=True,timeout=30)
        (folder/(label+'.stdout')).write_bytes(r.stdout);(folder/(label+'.stderr')).write_bytes(r.stderr)
        if r.returncode:raise RuntimeError('See build/core-profile-fixtures/'+label+'.stdout/.stderr')
        return r.stdout.decode('utf-8-sig').replace('\r\n','\n')
    run([mono,smcs,'-nologo','-noconfig','-out:'+str(output),source],'compile',env)
    records=[]
    for profile in ['2.0','unity']:
        childenv=dict(env,MONO_PATH=str(unity/('lib/mono/'+profile)))
        values=dict(line.split('\t',1) for line in run([mono,output],profile,childenv).splitlines())
        core=Path(values.pop('assembly')).resolve()
        records.append(dict(requested_mono_path=profile,effective_core=str(core),effective_core_sha256=sha(core),observations=values))
    metadata=json.loads((ROOT/'config/phase2-mono-collation-source.json').read_text(encoding='utf-8'))
    apk=metadata['inspected_assemblies'][-1]
    expected=next(m['il_sha256'] for m in apk['string_trim_methods'] if m['name']=='Trim' and m['signature']=='20000e')
    expected_helper=next(m['il_sha256'] for m in apk['string_trim_methods'] if m['name']=='FindNotWhiteSpace')
    for row in records:
        row['trim_entry_raw_il_matches_apk']=row['observations']['trim_il']==expected
        row['find_not_white_space_raw_il_matches_apk']=row['observations']['find_not_white_space_il']==expected_helper
    receipt=dict(operation='own-SDK-Mono-effective-core-profile',status='MEASURED',profiles=records,producer_sha256=sha(Path(__file__)),inputs_sha256={str(source.relative_to(ROOT)).replace('\\','/'):sha(source)},original_game_binary_loaded=False)
    (ROOT/'config/phase2-core-profile-tests.json').write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(receipt))
if __name__=='__main__':main()
