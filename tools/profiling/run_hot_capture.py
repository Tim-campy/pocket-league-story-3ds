"""Capture private numerical observations from the user's diagnostic replay."""
import argparse,hashlib,json,shutil,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import environment
from build_pc import APK_SHA
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--folder',type=Path,required=True);p.add_argument('--baseline-run',type=Path,required=True);p.add_argument('--apk',type=Path,required=True);a=p.parse_args()
    folder=a.folder.resolve();baseline=a.baseline_run.resolve()
    if not folder.is_relative_to(ROOT/'build') or sha(a.apk)!=APK_SHA:raise ValueError('Private directory and verified owned APK required')
    proof=json.loads((folder/'proof.json').read_text());exe=folder/'out/capture_game.exe'
    if sha(exe)!=proof['executable_sha256']:raise ValueError('Capture binary changed')
    if list((folder/'inputs').glob('*.bin')) or (folder/'preferences').exists():raise ValueError('Capture already started; preserve its evidence')
    record=json.loads((baseline/'result.json').read_text())
    if record['scenario']!='match' or record['exit_code'] or sha(baseline/'stdout.log')!=record['stdout_sha256'] or sha(baseline/'replay.txt')!=record['replay_sha256']:raise ValueError('Match replay changed')
    original=ROOT/f"build/pc-diagnostic-release/attempts/{record['save_attempt']}/preferences"
    if any(q.is_symlink() or q.is_junction() for q in original.rglob('*')):raise ValueError('Linked save')
    save_hashes={str(q.relative_to(original)):sha(q) for q in original.rglob('*') if q.is_file()}
    shutil.copytree(original,folder/'preferences');shutil.copyfile(baseline/'replay.txt',folder/'replay.txt')
    command=[str(exe),str(ROOT/'assets'),str(folder/'preferences'),str(folder/'replay.txt'),'1500','1201','1500']
    with (folder/'stdout.log').open('wb') as out,(folder/'stderr.log').open('wb') as err:
        run=subprocess.run(command,cwd=ROOT,env=environment(),stdout=out,stderr=err,timeout=260)
    run.check_returncode()
    frames=[json.loads(line.split('=',1)[1]) for line in (folder/'stdout.log').read_text().splitlines() if line.startswith('PLS_NULL_FRAME=')]
    if len(frames)!=300 or any(row['form_id']!=2 for row in frames):raise ValueError('Capture did not exercise the expected match window')
    observations={p.name:sha(p) for p in sorted((folder/'inputs').glob('*.bin'))}
    counts=[sum(name.startswith(str(kind)+'-') for name in observations) for kind in range(5)]
    distinct=len({digest for name,digest in observations.items() if name.startswith('1-')})
    report=dict(verified_apk_sha256=APK_SHA,executable_sha256=sha(exe),build_proof_sha256=sha(folder/'proof.json'),counts=counts,distinct_cal_inputs=distinct,inputs=observations,source_save_hashes=save_hashes,stdout_sha256=sha(folder/'stdout.log'),stderr_sha256=sha(folder/'stderr.log'),timing_valid=False)
    (folder/'capture-receipt.json').write_text(json.dumps(report,indent=2)+'\n')
    if counts!=proof['max_per_method'] or distinct<80:raise ValueError('Not enough distinct captured Cal observations; inspect the private receipt')
    print(json.dumps(dict(counts=counts,distinct_cal_inputs=distinct,status='CAPTURED')))
if __name__=='__main__':main()
