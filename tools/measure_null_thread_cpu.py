"""Three serial null-backend windows, no elevation or external profiler."""
import argparse,ctypes,hashlib,json,math,os,shutil,subprocess,sys,time
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]

def summary(values):
    values=sorted(values)
    if not values:raise ValueError('Empty timing sample')
    return dict(count=len(values),mean=sum(values)/len(values),p95=values[math.ceil(len(values)*.95)-1],maximum=values[-1],zero_samples=values.count(0))

def parse_run(folder,scenario):
    metadata=json.loads((folder/'result.json').read_text())
    if metadata['exit_code'] or metadata['allocation_probe'] or metadata['external_sampling'] or metadata['memory_categories']:raise ValueError('Not an unprofiled successful timing build')
    raw=(folder/'stdout.log').read_bytes()
    if hashlib.sha256(raw).hexdigest()!=metadata['stdout_sha256']:raise ValueError('Timing log changed')
    frames={};timings={}
    for line in raw.decode().splitlines():
        for prefix,table in [('PLS_NULL_FRAME=',frames),('PLS_NULL_THREAD=',timings)]:
            if line.startswith(prefix):
                row=json.loads(line[len(prefix):]);key=row['frame']
                if key in table:raise ValueError('Duplicate frame')
                table[key]=row
    first,last,form=(661,960,4) if scenario=='menu' else (1201,1500,2)
    expected=set(range(first,last+1))
    if set(frames)!=expected or set(timings)!=expected or any(row['form_id']!=form for row in frames.values()):raise ValueError('Window did not reach the expected screen')
    if any(any(type(row[k]) is not int or row[k]<0 for k in ['cpu_ns','cycles','wall_ns']) for row in timings.values()):raise ValueError('Invalid clock value')
    return dict(path=str(folder.relative_to(ROOT)),executable_sha256=metadata['executable_sha256'],stdout_sha256=metadata['stdout_sha256'],
        thread_cpu_ms=summary([row['cpu_ns']/1e6 for row in timings.values()]),thread_cycles=summary([row['cycles'] for row in timings.values()]),
        wall_ms=summary([row['wall_ns']/1e6 for row in timings.values()]),
        collections=sum(row['collections'] for row in frames.values()),collection_pause_ms=sum(row['collection_ns'] for row in frames.values())/1e6,
        maximum_collection_ms=max(row['longest_collection_ns'] for row in frames.values())/1e6)

def system_times():
    from ctypes import wintypes
    idle,kernel,user=wintypes.FILETIME(),wintypes.FILETIME(),wintypes.FILETIME()
    if not ctypes.windll.kernel32.GetSystemTimes(ctypes.byref(idle),ctypes.byref(kernel),ctypes.byref(user)):raise ctypes.WinError()
    n=lambda x:(x.dwHighDateTime<<32)|x.dwLowDateTime
    return n(idle),n(kernel)+n(user)

def idle_check():
    samples=[]
    for attempt in range(300):
        a=system_times();time.sleep(1);b=system_times();busy=100*(1-(b[0]-a[0])/(b[1]-a[1]));samples.append(busy)
        if len(samples)>=3 and max(samples[-3:])<5:return samples
    raise RuntimeError('Host did not stay below 5% total CPU for three seconds; do not publish an idle measurement')

def run_frozen(folder,template,output,repeat):
    """Replay the saved pre-change executable without rebuilding changed sources."""
    executable=folder/'null_game.exe';stamp=folder/'source-stamp.json'
    prior=ROOT/template['path'];metadata=json.loads((prior/'result.json').read_text())
    if hashlib.sha256(executable.read_bytes()).hexdigest()!=metadata['executable_sha256'] or hashlib.sha256(stamp.read_bytes()).hexdigest()!=metadata['source_stamp_sha256']:raise ValueError('Frozen baseline changed')
    if hashlib.sha256((prior/'replay.txt').read_bytes()).hexdigest()!=metadata['replay_sha256']:raise ValueError('Frozen replay changed')
    destination=output/f"frozen-{repeat}-{template['scenario']}";destination.mkdir()
    original=ROOT/f"build/pc-diagnostic-release/attempts/{metadata['save_attempt']}/preferences"
    if any(q.is_symlink() or q.is_junction() for q in original.rglob('*')):raise ValueError('Linked original save')
    shutil.copytree(original,destination/'preferences');shutil.copyfile(prior/'replay.txt',destination/'replay.txt')
    command=[str(executable),str(ROOT/'assets'),str(destination/'preferences'),str(destination/'replay.txt')]+metadata['command'][4:]
    with (destination/'stdout.log').open('wb') as out,(destination/'stderr.log').open('wb') as err:
        result=subprocess.run(command,cwd=ROOT,stdout=out,stderr=err,timeout=240)
    metadata.update(command=command,exit_code=result.returncode,stdout_sha256=hashlib.sha256((destination/'stdout.log').read_bytes()).hexdigest(),stderr_sha256=hashlib.sha256((destination/'stderr.log').read_bytes()).hexdigest())
    (destination/'result.json').write_text(json.dumps(metadata,indent=2)+'\n');result.check_returncode()
    return parse_run(destination,template['scenario'])

def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--apk',type=Path,required=True);p.add_argument('--snapshot',type=Path,required=True);p.add_argument('--output',type=Path,required=True);p.add_argument('--resume',action='store_true')
    p.add_argument('--frozen-baseline',type=Path,help='Resume existing authenticated runs using a preserved pre-change executable and stamp')
    a=p.parse_args();output=a.output.resolve()
    if os.name!='nt':raise ValueError('This receipt characterizes Windows GetThreadTimes/QueryThreadCycleTime')
    if not output.is_relative_to(ROOT/'build') or (output.exists() and not a.resume):raise ValueError('Use a new private output directory, or explicitly resume authenticated records')
    runs=[]
    if a.frozen_baseline and (not a.resume or not a.frozen_baseline.resolve().is_relative_to(ROOT/'build')):raise ValueError('Frozen replay requires an existing baseline and a private executable')
    if a.resume:
        runs=json.loads((output/'measurement.json').read_text())['runs']
        current_hash=hashlib.sha256(((a.frozen_baseline.resolve() if a.frozen_baseline else ROOT/'build/null-pc-tracing')/'null_game.exe').read_bytes()).hexdigest()
        for record in runs:
            actual=parse_run(ROOT/record['path'],record['scenario'])
            if any(record[k]!=v for k,v in actual.items()) or record['executable_sha256']!=current_hash:raise ValueError('Cannot resume changed evidence or another binary')
    else:output.mkdir(parents=True)
    for repeat in range(1,4):
        for scenario in ['menu','match']:
            if any(row['repetition']==repeat and row['scenario']==scenario for row in runs):continue
            idle=idle_check()
            if a.frozen_baseline:
                template=next(row for row in runs if row['scenario']==scenario)
                record=run_frozen(a.frozen_baseline.resolve(),template,output,repeat)
            else:
                command=[sys.executable,'tools/build_null.py','--apk',str(a.apk),'--snapshot',str(a.snapshot),'--skip-build','--run',scenario]
                result=subprocess.run(command,cwd=ROOT,capture_output=True)
                (output/f'{repeat}-{scenario}.log').write_bytes(result.stdout+result.stderr);result.check_returncode()
                response=json.loads(result.stdout.decode().strip().splitlines()[-1]);record=parse_run(Path(response['folder']),scenario)
            record.update(repetition=repeat,scenario=scenario,pre_run_host_busy_percent=idle)
            runs.append(record);print(json.dumps(record),flush=True)
            (output/'measurement.json').write_text(json.dumps(dict(runs=runs,complete=len(runs)==6,method='GetThreadTimes CPU ns, QueryThreadCycleTime raw cycles, steady_clock elapsed; updates/draw/end-frame GC; excludes pacing',limitations=['GetThreadTimes per-frame quantization is reported as zero_samples; cycles are never converted using nominal frequency','Main-thread CPU differs from historical ETW process-thread scheduling sum','Host idle precondition is sampled, not an assurance against all later OS activity']),indent=2)+'\n')

if __name__=='__main__':main()
