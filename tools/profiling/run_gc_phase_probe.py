"""Run an instrumented collector on the authenticated null benchmark replay."""
import argparse,hashlib,json,shutil,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import environment
PHASES='setup registers stack_copy rendezvous account_before ranges clear_marks roots stack_scan mark sweep account_after destroy resume'.split()
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--probe',type=Path,required=True);p.add_argument('--baseline-run',type=Path,required=True);p.add_argument('--output',type=Path,required=True)
    a=p.parse_args();folder=a.output.resolve();probe=a.probe.resolve();baseline=a.baseline_run.resolve()
    if not folder.is_relative_to(ROOT/'build') or folder.exists():raise ValueError('Use a fresh private output')
    proof=json.loads((probe/'build-proof.json').read_text());exe=probe/'out/gc_phase_game.exe'
    if sha(exe)!=proof['executable_sha256']:raise ValueError('Probe binary changed')
    for path,digest in proof['inputs'].items():
        if sha(ROOT/path)!=digest:raise ValueError('Probe input changed: '+path)
    record=json.loads((baseline/'result.json').read_text())
    if record['exit_code'] or sha(baseline/'stdout.log')!=record['stdout_sha256'] or sha(baseline/'replay.txt')!=record['replay_sha256']:raise ValueError('Baseline evidence changed')
    original=ROOT/f"build/pc-diagnostic-release/attempts/{record['save_attempt']}/preferences"
    inputs={str(q.relative_to(ROOT)):sha(q) for q in original.rglob('*') if q.is_file()}
    if any(q.is_symlink() or q.is_junction() for q in original.rglob('*')):raise ValueError('Linked save')
    folder.mkdir(parents=True);shutil.copytree(original,folder/'preferences');shutil.copyfile(baseline/'replay.txt',folder/'replay.txt')
    command=[str(exe),str(ROOT/'assets'),str(folder/'preferences'),str(folder/'replay.txt')]+record['command'][4:]
    with (folder/'stdout.log').open('wb') as out,(folder/'stderr.log').open('wb') as err:
        result=subprocess.run(command,cwd=ROOT,env=environment(),stdout=out,stderr=err,timeout=240)
    pause_only=proof.get('pause_only',False)
    prefix='PLS_GC_PAUSE=' if pause_only else 'PLS_GC_PHASE='
    rows=[json.loads(line.split('=',1)[1]) for line in (folder/'stderr.log').read_text().splitlines() if line.startswith(prefix)]
    frames=[json.loads(line.split('=',1)[1]) for line in (folder/'stdout.log').read_text().splitlines() if line.startswith('PLS_NULL_FRAME=')]
    expected_form=4 if record['scenario']=='menu' else 2
    if result.returncode or len(frames)!=300 or any(r['form_id']!=expected_form for r in frames) or not rows or (not pause_only and any(not r['complete'] for r in rows)):raise ValueError('Probe did not finish the scenario')
    if pause_only and 'PLS_GC_PAUSE_DROPPED=0' not in (folder/'stderr.log').read_text():raise ValueError('Incomplete pause log')
    limitations=(['Uses the existing total-pause clock; records fixed-size rows after the clock and flushes at process exit'] if pause_only else ['Lookup timers are inclusive subsets of phase timers; never add them twice','Per-lookup clock reads add overhead; this is attribution, not final pause latency'])+['Collections include loading and the measured frame window']
    if proof.get('phase_timers_only'):
        limitations=['Only phase boundaries have clocks; lookup counters and lookup times are disabled, not measurements of zero cost','Phase logging remains diagnostic; use the separate pause-only replay for latency','Collections include loading and the measured frame window']
    report=dict(scenario=record['scenario'],instrumented=not pause_only,pause_only=pause_only,phases=[] if pause_only else PHASES,collections=rows,inputs=inputs,executable_sha256=sha(exe),stdout_sha256=sha(folder/'stdout.log'),stderr_sha256=sha(folder/'stderr.log'),limitations=limitations)
    (folder/'profile.json').write_text(json.dumps(report,indent=2)+'\n')
    totals=({'pause_ms':[r['pause_ns']/1e6 for r in rows]} if pause_only else {'phase_ms':{name:sum(row['phase_ns'][i] for row in rows)/1e6 for i,name in enumerate(PHASES)}})
    print(json.dumps(dict(collections=len(rows),**totals,retained_bytes_max=max(row['retained_before'] for row in rows))))
if __name__=='__main__':main()
