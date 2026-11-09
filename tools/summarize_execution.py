"""Summarize authenticated diagnostic counters and an explicitly chosen frame window."""
import argparse,csv,json,subprocess
from pathlib import Path
from diagnostic_execution import ROOT,parse,sha,window,validated_completed,hot_window
from update_phase2_progress import map_game_identities
def main():
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('--attempt',type=int,required=True);p.add_argument('--first',type=int);p.add_argument('--last',type=int);p.add_argument('--label',default='UNKNOWN');p.add_argument('--capture-frame',type=int);p.add_argument('--output',type=Path,required=True);a=p.parse_args()
 history=json.loads((ROOT/'config/phase2-diagnostic-attempts.json').read_text(encoding='utf8'));attempt=next(r for r in history['attempts']if r['number']==a.attempt);pointer=attempt['execution_receipt'];path=ROOT/pointer['path']
 if sha(path)!=pointer['sha256']:raise ValueError('Execution receipt differs')
 receipt=json.loads(path.read_text(encoding='utf8'));validated_completed(dict(attempts=[attempt]),'Assembly-CSharp');validated_completed(dict(attempts=[attempt]),'KairoLibrary')
 log=ROOT/receipt['log']['path'];methods,frames,gaps=parse(log.read_text(encoding='utf8',errors='replace'))
 result=dict(operation='diagnostic-execution-summary',attempt=a.attempt,label=a.label,execution_receipt=pointer,executed_counts=receipt['executed_counts'],top10_exclusive=receipt['top10_exclusive'],top10_inclusive=receipt['top10_inclusive'])
 if a.first is not None or a.last is not None:
  if a.first is None or a.last is None:raise ValueError('Both bounds required')
  result['frame_profile']=window(frames,a.first,a.last)
  result['window_hot_methods']=hot_window(log.read_text(encoding='utf8',errors='replace'),a.first,a.last)
 if a.label!='UNKNOWN':
  if a.capture_frame is None:raise ValueError('A claimed screen needs an inspected local capture')
  capture=next(r for r in attempt['frame_captures']if Path(r['path']).name=='frame-'+str(a.capture_frame)+'.bmp')
  if sha(ROOT/capture['path'])!=capture['sha256']:raise ValueError('Capture differs')
  result['screen_evidence']=capture;result['screen_equivalence_android']='UNKNOWN'
 baseline=subprocess.check_output(['git','show','ce1dbd6:config/translation.csv'],cwd=ROOT).decode('utf8');rows=list(csv.DictReader(baseline.splitlines()));pending={r['id']for r in rows if r['estado']=='todo'}
 report=json.loads((ROOT/receipt['generation_reports']['Assembly-CSharp']['path']).read_text(encoding='utf8'));mapped,unmapped=map_game_identities(report['emitted_methods'],rows)
 entered={r['id']for r in receipt['methods']if r['assembly']=='Assembly-CSharp'and r['calls']>0};completed={r['id']for r in receipt['methods']if r['assembly']=='Assembly-CSharp'and r['completed']>0}
 reached={original for original,doc in mapped.items()if doc in entered};done={original for original,doc in mapped.items()if doc in completed}
 result['baseline_pending']=dict(checkpoint='ce1dbd6',total=len(pending),entered=len(pending&reached),completed=len(pending&done),without_recorded_entry=len(pending-reached),without_recorded_entry_ids=sorted(pending-reached),limitation='No recorded entry is not proof of unreachable code; missing bodies may block callers before entry, and synthesized identities may lack a unique source mapping.')
 a.output.parent.mkdir(parents=True,exist_ok=True);a.output.write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps({k:v for k,v in result.items()if k in ['attempt','label','executed_counts','frame_profile']}))
if __name__=='__main__':main()
