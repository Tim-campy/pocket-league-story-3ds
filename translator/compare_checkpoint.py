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
    previous_game=old('phase2-game-translation.json')
    current=json.loads((ROOT/'config/phase2-translation.json').read_text())
    differential=json.loads((ROOT/'config/phase2-portable-differential.json').read_text())
    current_game=json.loads((ROOT/'config/phase2-game-translation.json').read_text())
    before={m['id']for m in previous['emitted_methods']};after={m['id']for m in current['emitted_methods']}
    before_roots={m['id']for m in previous['emitted_methods']if m['root']};after_roots={m['id']for m in current['emitted_methods']if m['root']}
    # The old receipt predates per-ID qualification and recorded all cases equal.
    old_verified=set(previous_diff.get('verified_method_ids',before if previous_diff['passed']==previous_diff['cases'] else []))
    new_verified=set(differential['verified_method_ids'])
    game_before={m['id']for m in previous_game['emitted_methods']}
    game_after={m['id']for m in current_game['emitted_methods']}
    same_judge=bool(previous_diff.get('runtime_profile')) and previous_diff.get('runtime_profile')==differential.get('runtime_profile') and previous_diff.get('oracle_framework')==differential.get('oracle_framework')
    result=dict(operation='compare-source-translation-checkpoints',baseline_commit=args.commit,
        compiled_methods=dict(previous=len(before),current=len(after),gained_ids=sorted(after-before),lost_ids=sorted(before-after)),
        compiled_roots=dict(previous=len(before_roots),current=len(after_roots),gained_ids=sorted(after_roots-before_roots),lost_ids=sorted(before_roots-after_roots)),
        game_compiled_methods=dict(previous=len(game_before),current=len(game_after),gained_ids=sorted(game_after-game_before),lost_ids=sorted(game_before-game_after)),
        differential=dict(previous_cases=previous_diff['cases'],previous_passed=previous_diff['passed'],current_cases=differential['cases'],current_passed=differential['passed'],
            previous_judge=previous_diff.get('runtime_profile',previous_diff.get('comparison_profile','UNKNOWN')),
            current_judge=differential['runtime_profile'],same_judge=same_judge,
            qualification_withdrawn_ids=sorted((old_verified-new_verified)&after),
            note=('Both receipts use the same runtime profile and framework hashes.'if same_judge else 'The runtime profile or framework hashes differ. A withdrawal is not automatically an emitter regression; inspect the recorded raw discrepancy.')),
        current_unexpected_failures=differential['unexpected_failures'],
        inputs=[dict(path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest())for p in [Path(__file__),ROOT/'config/phase2-translation.json',ROOT/'config/phase2-portable-differential.json',ROOT/'config/phase2-game-translation.json']])
    (ROOT/'config/phase2-checkpoint-comparison.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n')
    print(json.dumps({k:result[k]for k in ['compiled_roots','current_unexpected_failures']}))
    if before-after or game_before-game_after:raise ValueError('Compiled method coverage regressed against the checkpoint')
    if same_judge and (old_verified-new_verified)&after:raise ValueError('Differential qualification regressed under the same judge')

if __name__=='__main__':main()
