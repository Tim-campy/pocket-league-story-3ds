"""Run a global-new allocation probe on the authenticated null replay."""
import argparse,hashlib,json,shutil,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import environment
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--probe',type=Path,required=True);p.add_argument('--baseline-run',type=Path,required=True);p.add_argument('--output',type=Path,required=True)
    a=p.parse_args();folder=a.output.resolve();probe=a.probe.resolve();baseline=a.baseline_run.resolve()
    if not folder.is_relative_to(ROOT/'build') or folder.exists():raise ValueError('Use a fresh private output')
    proof=json.loads((probe/'build-proof.json').read_text());exe=probe/'out/allocation_game.exe'
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
    frames=[json.loads(line.split('=',1)[1]) for line in (folder/'stdout.log').read_text().splitlines() if line.startswith('PLS_NULL_FRAME=')]
    expected_form=4 if record['scenario']=='menu' else 2
    if result.returncode or len(frames)!=300 or any(r['form_id']!=expected_form for r in frames):raise ValueError('Probe did not finish the scenario')
    from allocation_sites import parse
    base,windows,sites=parse((folder/'stdout.log').read_text())
    report=dict(scenario=record['scenario'],instrumented=True,inputs=inputs,executable_sha256=sha(exe),stdout_sha256=sha(folder/'stdout.log'),stderr_sha256=sha(folder/'stderr.log'),windows=windows,sites=sites,module_base=base,source_allocation_counters=False,limitation='Global C++ new requests including custom PMR upstream; no CPU timing claim and no new source-level C# counts')
    (folder/'allocation-report.json').write_text(json.dumps(report,indent=2)+'\n')
    result_record=dict(record,command=command,exit_code=result.returncode,allocation_probe=True,external_sampling=False,
                       executable_sha256=sha(exe),stdout_sha256=sha(folder/'stdout.log'),stderr_sha256=sha(folder/'stderr.log'),
                       replay_sha256=sha(folder/'replay.txt'),probe_build_proof_sha256=sha(probe/'build-proof.json'))
    (folder/'result.json').write_text(json.dumps(result_record,indent=2)+'\n')
    print(json.dumps(dict(frames=len(frames),allocations=sum(r['count'] for r in windows),bytes=sum(r['bytes'] for r in windows),allocation_sites=len(sites))))
if __name__=='__main__':main()
