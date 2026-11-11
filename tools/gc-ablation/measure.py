"""Measure the isolated kernel matrix; all captured inputs/results stay ignored."""
from pathlib import Path
import hashlib,json,os,re,statistics,struct,subprocess
ROOT=Path(__file__).resolve().parents[2]
HERE=ROOT/'build/gc-ablation'
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def sections(path):
    b=path.read_bytes();pe=struct.unpack_from('<I',b,60)[0]
    n=struct.unpack_from('<H',b,pe+6)[0];opt=struct.unpack_from('<H',b,pe+20)[0];start=pe+24+opt
    return {b[p:p+8].rstrip(b'\0').decode():dict(virtual_bytes=struct.unpack_from('<I',b,p+8)[0],file_bytes=struct.unpack_from('<I',b,p+16)[0])for p in range(start,start+n*40,40)}
def idle():
    check=subprocess.run(['powershell','-NoProfile','-Command',"@(Get-Process cl,c1xx,link,azahar,azahar-room,arm-none-eabi-gcc,arm-none-eabi-g++ -ErrorAction SilentlyContinue).Count"],capture_output=True,check=True,text=True)
    if check.stdout.strip()!='0':raise RuntimeError('Compiler/emulator is active; no timing run started')
def main():
    proof=json.loads((HERE/'build-proof.json').read_text())
    for path,digest in proof['inputs'].items():
        if sha(Path(path))!=digest:raise ValueError('Build input changed: '+path)
    commands={name:[HERE/'out'/(name.replace('-','_')+'.exe')]for name in proof['binaries']}
    for name,digest in proof['binaries'].items():
        if sha(commands[name][0])!=digest:raise ValueError('Binary changed: '+name)
    mono=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono')
    commands.update(mono=[mono/'bin/mono.exe',ROOT/'build/hot-methods/HotMethodsMono.exe'],current=[ROOT/'build/hot-methods/out/hot_methods.exe'])
    env=dict(os.environ,MONO_PATH=os.pathsep.join([str(mono/'lib/mono/unity'),str(ROOT.parent/'Pocket League Story/original/extracted/assets/bin/Data/Managed')]))
    inputs=ROOT/'build/hot-input-capture/inputs'
    input_hashes={p.name:sha(p)for p in sorted(inputs.glob('*.bin'))}
    if len(input_hashes)!=80:raise ValueError('Exactly 80 local captured inputs required')
    records=[]
    def run(name,label):
        idle();folder=HERE/label;folder.mkdir(exist_ok=False)
        cmd=commands[name]+[inputs,folder/'results']
        if name!='mono':cmd.append(ROOT/'assets')
        with (folder/'stdout.log').open('wb')as out,(folder/'stderr.log').open('wb')as err:
            result=subprocess.run([str(v)for v in cmd],env=env,stdout=out,stderr=err,timeout=180)
        if result.returncode:raise RuntimeError((name,result.returncode))
        text=(folder/'stdout.log').read_text()
        batches={str(k):[float(v)for v in re.findall('method='+str(k)+r' batch=\d+ calls=16000 gross_ns=([^\s]+)',text)]for k in range(5)}
        if any(len(v)!=5 for v in batches.values()):raise ValueError('Missing batches: '+name)
        differences=[f'{k}-{i}.bin'for k in range(5)for i in range(16)if (folder/'results'/f'{k}-{i}.bin').read_bytes()!=(ROOT/'build/hot-methods/native-results'/f'{k}-{i}.bin').read_bytes()]
        row=dict(name=name,batches_ns=batches,differences= differences,stdout_sha256=sha(folder/'stdout.log'))
        print(json.dumps(dict(name=name,medians={k:statistics.median(v)for k,v in batches.items()},differences=len(differences))),flush=True)
        return row
    # This pass checks every conversion argument before the unchecked measured
    # variant can execute. A non-finite/out-of-range argument terminates it.
    audit=run('numeric-audit','range-audit')
    if audit['differences']:raise ValueError('Conversion audit changed results')
    names=[n for n in commands if n!='numeric-audit']
    for repeat,order in enumerate([names,list(reversed(names)),names[4:]+names[:4]]):
        for name in order:
            row=run(name,f'measure-{repeat}-{name}');row['repeat']=repeat;records.append(row)
    rows=[]
    for k in range(5):
        row=dict(kind=k,ns={name:statistics.median([v for r in records if r['name']==name for v in r['batches_ns'][str(k)]])for name in names})
        row['ratio_to_mono']={name:value/row['ns']['mono']for name,value in row['ns'].items()}
        rows.append(row)
    report=dict(status='MEASURED',scope='Isolated historical prototype projection, not integrated game or hardware performance',
                rows=rows,records=records,conversion_range_audit=audit,inputs=input_hashes,
                binaries={name:dict(sha256=sha(Path(cmd[-1])),sections=sections(Path(cmd[-1])))for name,cmd in commands.items()},
                warning='Ablations removing null/bounds/conversion checks and fp:precise are measurement only. No variant is adopted automatically.')
    (HERE/'measurement.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(rows),flush=True)
if __name__=='__main__':main()
