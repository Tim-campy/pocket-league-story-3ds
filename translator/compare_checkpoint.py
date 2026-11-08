"""Compare measured translation receipts with a committed checkpoint, by ID."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess

ROOT=Path(__file__).resolve().parents[1]

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--commit',default='0b9d3e7')
    args=parser.parse_args()
    def old(name):return json.loads(subprocess.check_output(['git','show',args.commit+':config/'+name],cwd=ROOT))
    previous=old('phase2-translation.json');previous_diff=old('phase2-portable-differential.json')
    current=json.loads((ROOT/'config/phase2-translation.json').read_text())
    differential=json.loads((ROOT/'config/phase2-portable-differential.json').read_text())
    before={m['id']for m in previous['emitted_methods']};after={m['id']for m in current['emitted_methods']}
    before_roots={m['id']for m in previous['emitted_methods']if m['root']};after_roots={m['id']for m in current['emitted_methods']if m['root']}
    # The old receipt predates per-ID qualification and recorded all cases equal.
    old_verified=set(previous_diff.get('verified_method_ids',before if previous_diff['passed']==previous_diff['cases'] else []))
    new_verified=set(differential['verified_method_ids'])
    result=dict(operation='compare-source-translation-checkpoints',baseline_commit=args.commit,
        compiled_methods=dict(previous=len(before),current=len(after),gained_ids=sorted(after-before),lost_ids=sorted(before-after)),
        compiled_roots=dict(previous=len(before_roots),current=len(after_roots),gained_ids=sorted(after_roots-before_roots),lost_ids=sorted(before_roots-after_roots)),
        differential=dict(previous_cases=previous_diff['cases'],previous_passed=previous_diff['passed'],current_cases=differential['cases'],current_passed=differential['passed'],
            previous_judge=previous_diff.get('runtime_profile',previous_diff.get('comparison_profile','UNKNOWN')),
            current_judge=differential['runtime_profile'],same_judge=False,
            qualification_withdrawn_ids=sorted((old_verified-new_verified)&after),
            note='Previous CLR-based proof and current Unity-profile proof are different judges. A withdrawal is not automatically an emitter regression; inspect the recorded raw discrepancy.'),
        current_unexpected_failures=differential['unexpected_failures'],
        inputs=[dict(path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest())for p in [Path(__file__),ROOT/'config/phase2-translation.json',ROOT/'config/phase2-portable-differential.json']])
    (ROOT/'config/phase2-checkpoint-comparison.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n')
    print(json.dumps({k:result[k]for k in ['compiled_roots','current_unexpected_failures']}))

if __name__=='__main__':main()
