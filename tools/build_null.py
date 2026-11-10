"""Build/run the no-output benchmark using authenticated generated source and own saves."""
import argparse, hashlib, json, os, re, shutil, subprocess, sys, time
from pathlib import Path
from pc_compiler import CMAKE, NINJA, environment, showincludes_prefix
from build_pc import ROOT, APK_SHA, validate_diagnostic_manifest, digest

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--apk',type=Path,required=True);p.add_argument('--snapshot',type=Path,required=True)
    p.add_argument('--run',choices=['menu','match']);p.add_argument('--skip-build',action='store_true')
    p.add_argument('--sample',action='store_true');p.add_argument('--allocations',action='store_true')
    p.add_argument('--jobs',type=int,default=2)
    a=p.parse_args()
    if not 1<=a.jobs<=8:raise ValueError('Build jobs must be in 1..8')
    if digest(a.apk)!=APK_SHA:raise ValueError('Expected owned APK hash required')
    source=a.snapshot.resolve();validate_diagnostic_manifest(source)
    folder=ROOT/('build/null-pc-allocations'if a.allocations else'build/null-pc');folder.mkdir(parents=True,exist_ok=True)
    env=environment();probe=showincludes_prefix(folder,env)
    commands=[[str(CMAKE),'-S',str(ROOT/'tools/null-benchmark'),'-B',str(folder),'-G','Ninja','-DCMAKE_MAKE_PROGRAM='+str(NINJA),'-DCMAKE_BUILD_TYPE=Release','-DPLS_GENERATED='+str(source),'-DCMAKE_PREFIX_PATH='+str(ROOT/'build/deps/native-media'),'-DPLS_MSVC_SHOWINCLUDES_PREFIX='+probe['prefix'],'-DPLS_REPORT_ALLOCATION_FAILURE=OFF'], [str(CMAKE),'--build',str(folder),'--parallel',str(a.jobs)]]
    commands[0].append('-DPLS_ALLOCATION_PROBE='+('ON'if a.allocations else'OFF'))
    def snapshot():
        paths=[q for base in ['src','tools/null-benchmark','tests/kairo']for q in (ROOT/base).rglob('*')if q.is_file()and q.suffix in ['.cpp','.hpp','.inc','.txt']]
        paths.extend(q for q in source.iterdir()if q.suffix in ['.cpp','.hpp','.inc','.json'])
        return {str(q.relative_to(ROOT)):digest(q)for q in sorted(set(paths))}
    stamp=folder/'source-stamp.json';before=snapshot()
    if not a.skip_build:
        for i,cmd in enumerate(commands):
            with (folder/f'build-{i}.log').open('wb') as log:r=subprocess.run(cmd,cwd=ROOT,env=env,stdout=log,stderr=subprocess.STDOUT)
            if r.returncode:raise RuntimeError('Null build failed: '+str(folder/f'build-{i}.log'))
        if snapshot()!=before:raise RuntimeError('Source changed during null build; rebuild before measuring')
        stamp.write_text(json.dumps(before,indent=2)+'\n',encoding='utf8')
    elif not stamp.exists()or json.loads(stamp.read_text(encoding='utf8'))!=before:raise ValueError('Null binary source proof is stale; rebuild')
    if not a.run:return
    history=json.loads((ROOT/'config/phase2-diagnostic-attempts.json').read_text(encoding='utf8'))['attempts']
    number=34 if a.run=='menu'else 35;row=next(x for x in history if x['number']==number)
    receipt=ROOT/row['execution_receipt']['path']
    if digest(receipt)!=row['execution_receipt']['sha256']:raise ValueError('Execution receipt changed')
    proof=json.loads(receipt.read_text(encoding='utf8'));log=ROOT/proof['log']['path']
    if digest(log)!=proof['log']['sha256']:raise ValueError('Replay source log changed')
    keys={}
    for line in log.read_text(encoding='utf8',errors='replace').splitlines():
        if line.startswith('PLS_PC_SCRIPTED_SELECT_FRAME='):keys[int(line.split('=')[1])]='SELECT'
        elif line.startswith(('PLS_PC_SCRIPTED_KEY_FRAME=','PLS_PC_DISMISS_POPUP_FRAME=')):
            frame,key=line.split('=')[1].split(':');keys[int(frame)]=key
    first,last=(661,960)if a.run=='menu'else(1201,1500)
    attempt=folder/'runs'/str(time.time_ns());attempt.mkdir(parents=True)
    replay=attempt/'replay.txt';replay.write_text(''.join(f'{n}:{k}\n'for n,k in sorted(keys.items())if n<last),encoding='ascii')
    prior=25 if a.run=='menu'else 31
    prior_row=next(x for x in history if x['number']==prior)
    if prior_row['apk_sha256']!=APK_SHA or not prior_row.get('diagnostic_only'):raise ValueError('Own save provenance invalid')
    original=ROOT/f'build/pc-diagnostic-release/attempts/{prior}/preferences';preferences=attempt/'preferences'
    for path in original.rglob('*'):
        if path.is_symlink()or path.is_junction():raise ValueError('Save contains link')
    shutil.copytree(original,preferences)
    # The regular pipeline receipt fixes this private native catalog path.
    assets=ROOT/'assets'
    cmd=[str(folder/'null_game.exe'),str(assets),str(preferences),str(replay),str(last),str(first),str(last)]
    if a.sample:
        sync=ROOT/'build/null-pc'/a.run
        if any(Path(str(sync)+suffix).exists()for suffix in ['.request','.ready','.done']):raise ValueError('Sampling synchronization files already exist; use a fresh explicit collector')
        env['PLS_NULL_PROFILE_SYNC']=str(sync)
    metadata=dict(scenario=a.run,source_attempt=number,save_attempt=prior,apk_sha256=APK_SHA,executable_sha256=digest(folder/'null_game.exe'),replay_sha256=digest(replay),command=cmd,method_instrumentation=False,rasterization=False,presentation=False,external_sampling=a.sample,allocation_probe=a.allocations,source_stamp_sha256=digest(stamp))
    (attempt/'inputs.json').write_text(json.dumps(metadata,indent=2)+'\n',encoding='utf8')
    with (attempt/'stdout.log').open('wb')as out,(attempt/'stderr.log').open('wb')as err:
        r=subprocess.run(cmd,cwd=ROOT,env=env,stdout=out,stderr=err,timeout=last/20+90)
    metadata.update(exit_code=r.returncode,stdout_sha256=digest(attempt/'stdout.log'),stderr_sha256=digest(attempt/'stderr.log'))
    (attempt/'result.json').write_text(json.dumps(metadata,indent=2)+'\n',encoding='utf8');print(json.dumps(dict(folder=str(attempt),exit_code=r.returncode)))
    if r.returncode:raise RuntimeError('Null execution failed; inspect private logs')
if __name__=='__main__':main()
