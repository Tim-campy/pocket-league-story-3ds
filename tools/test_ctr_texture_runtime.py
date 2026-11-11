"""Own synthetic fixtures for native textures and explicit prepared-catalog trust."""
import hashlib,json,struct,subprocess,sys
from pathlib import Path
from ctr_textures import encode
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tests/translator'))
from run_semantic_fixtures import msvc_environment
APK='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
 folder=ROOT/'build/ctr-texture-runtime';folder.mkdir(parents=True,exist_ok=True)
 data=folder/'own-data';(data/'converted').mkdir(parents=True,exist_ok=True)
 records=[]
 for i,(w,h) in enumerate([(1,1),(7,9),(8,8),(17,15),(33,29)]):
  raw=bytes((n*37)%256 for n in range(w*h*4));packed=encode(raw,w,h);stem=f'{w}x{h}'
  (data/(stem+'.raw')).write_bytes(raw);(data/(stem+'.ctr')).write_bytes(packed)
  records.append((3,f'own-{i}',stem+'.ctr',packed,w,h))
 (data/'own-font.dat').write_bytes(b'own fixture; not a font')
 records.append((6,'unique','own-font.dat',(data/'own-font.dat').read_bytes(),0,0))
 field=lambda s:struct.pack('<I',len(s.encode()))+s.encode()
 index=b'PLSASV1\0'+APK.encode()+struct.pack('<I',len(records))
 for kind,key,path,payload,w,h in records:index+=bytes([kind])+field(key)+field(path)+struct.pack('<QII',len(payload),w,h)+hashlib.sha256(payload).digest()
 (data/'converted/catalog.idx').write_bytes(index)
 (data/'converted/prevalidated.sha256').write_text('PLS-PREVALIDATED-1\n'+APK+'\n'+hashlib.sha256(index).hexdigest()+'\n',encoding='ascii')
 compiler,env=msvc_environment();exe=folder/'fixture.exe'
 sources=[ROOT/p for p in ['tests/kairo/ctr_texture_fixtures.cpp','src/kairo/common/asset_catalog.cpp','src/kairo/common/semantic_runtime.cpp']]
 inputs=sources+[Path(__file__),ROOT/'tools/ctr_textures.py']+list((ROOT/'src/kairo/common').glob('*.hpp'))+list((ROOT/'src/runtime').glob('*.*'))
 inputs=[p for p in inputs if p.is_file()];before={p.relative_to(ROOT).as_posix():sha(p) for p in inputs}
 command=[compiler,'/nologo','/std:c++17','/O2','/EHsc','/fp:strict','/W4','/WX','/utf-8','/I'+str(ROOT/'src/kairo/common'),'/Fe:'+str(exe),*sources]
 with (folder/'compile.log').open('wb') as log:subprocess.run(list(map(str,command)),cwd=folder,env=env,stdout=log,stderr=subprocess.STDOUT,check=True)
 result=subprocess.run([str(exe),str(data)],cwd=folder,env=env,capture_output=True,timeout=30)
 (folder/'run.log').write_bytes(result.stdout+result.stderr);result.check_returncode();report=json.loads(result.stdout)
 if before!={p.relative_to(ROOT).as_posix():sha(p) for p in inputs}:raise ValueError('Fixture source changed during build')
 report.update(inputs=before,game_assets_used=False,executable_sha256=sha(exe),log_sha256=sha(folder/'run.log'))
 (ROOT/'config/phase2-ctr-texture-runtime.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps({k:report[k] for k in ['status','assertions','game_assets_used']}))
if __name__=='__main__':main()
