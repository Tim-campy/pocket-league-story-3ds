from pathlib import Path
import os,sys,json,hashlib,subprocess,re,statistics,struct,time
ROOT=Path(__file__).resolve().parents[2];HERE=ROOT/'build/gc-prototype'
mono=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono')
oracle=ROOT/'build/hot-methods/HotMethodsMono.exe'
env=dict(os.environ,MONO_PATH=os.pathsep.join([str(mono/'lib/mono/unity'),str(ROOT.parent/'Pocket League Story/original/extracted/assets/bin/Data/Managed')]))
commands={'mono':[mono/'bin/mono.exe',oracle],'current':[ROOT/'build/hot-methods/out/hot_methods.exe'],'own':[HERE/'out/own.exe'],'bdw':[HERE/'out/bdw.exe']}
orders=[['mono','current','own','bdw'],['bdw','own','current','mono'],['own','mono','bdw','current']]
records=[]
for repeat,order in enumerate(orders):
 for name in order:
  folder=HERE/f'measure-{repeat}-{name}';folder.mkdir(exist_ok=False)
  cmd=[str(x)for x in commands[name]]+[str(ROOT/'build/hot-input-capture/inputs'),str(folder/'results')]
  if name!='mono':cmd+=[str(ROOT/'assets')]
  with (folder/'stdout.log').open('wb') as out,(folder/'stderr.log').open('wb') as err:
   p=subprocess.run(cmd,env=env,stdout=out,stderr=err,timeout=180)
  if p.returncode:raise RuntimeError((name,p.returncode))
  text=(folder/'stdout.log').read_text()
  times={str(k):[float(v)for v in re.findall('method='+str(k)+r' batch=\d+ calls=16000 gross_ns=([^\s]+)',text)]for k in range(5)}
  if any(len(v)!=5 for v in times.values()):raise ValueError('Missing timing batches')
  mismatches=[f'{k}-{i}.bin'for k in range(5)for i in range(16)if(folder/'results'/f'{k}-{i}.bin').read_bytes()!=(ROOT/'build/hot-methods/native-results'/f'{k}-{i}.bin').read_bytes()]
  records.append(dict(repeat=repeat,name=name,batches_ns=times,differences_against_current_cpp=mismatches,stdout_sha256=hashlib.sha256((folder/'stdout.log').read_bytes()).hexdigest()))
  print(json.dumps(dict(repeat=repeat,name=name,medians={k:statistics.median(v)for k,v in times.items()},cpp_differences=len(mismatches))),flush=True)
rows=[]
for k in range(5):
 row=dict(kind=k)
 for name in commands:row[name]=statistics.median([v for r in records if r['name']==name for v in r['batches_ns'][str(k)]])
 row['own_mono_ratio']=row['own']/row['mono'];row['own_current_ratio']=row['own']/row['current'];rows.append(row)
def sections(path):
 b=path.read_bytes();pe=struct.unpack_from('<I',b,60)[0];n=struct.unpack_from('<H',b,pe+6)[0];opt=struct.unpack_from('<H',b,pe+20)[0];start=pe+24+opt
 return {b[p:p+8].rstrip(b'\0').decode():dict(virtual_bytes=struct.unpack_from('<I',b,p+8)[0],file_bytes=struct.unpack_from('<I',b,p+16)[0])for p in range(start,start+n*40,40)}
report=dict(status='MEASURED',rows=rows,criterion='own/Mono <=1 in each reference kernel 0,1,2,4',criterion_met=all(rows[k]['own_mono_ratio']<=1 for k in [0,1,2,4]),records=records,
 binaries={name:dict(sha256=hashlib.sha256(Path(cmd[-1]).read_bytes()).hexdigest(),sections=sections(Path(cmd[-1])))for name,cmd in commands.items()},
 projection=json.loads((HERE/'projection.json').read_text()),benchmark='Same 80 captured inputs; 3 process runs per variant, 5 batches of 16000 calls per kernel; reset outside timing; no simultaneous compiler/emulator; exact outputs compared against baseline C++; Mono floating difference retained.')
(HERE/'measurement.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(dict(rows=rows,criterion_met=report['criterion_met'])),flush=True)
