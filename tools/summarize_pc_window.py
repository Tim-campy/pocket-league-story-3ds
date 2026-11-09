"""Reduce an authenticated numeric diagnostic window; no method promotion."""
import argparse,hashlib,json,math,statistics
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--attempt',type=int,required=True)
    parser.add_argument('--first',type=int,required=True)
    parser.add_argument('--last',type=int,required=True)
    args=parser.parse_args()
    if args.first<1 or args.last<args.first:parser.error('Invalid completed-frame window')
    history=json.loads((ROOT/'config/phase2-diagnostic-attempts.json').read_text(encoding='utf8'))
    attempt=next(a for a in history['attempts']if a['number']==args.attempt)
    if attempt.get('configuration')!='Release'or attempt.get('translation_gap_detected')or attempt.get('stopped_reason')!='timeout':raise ValueError('Expected bounded Release run without a translation gap')
    logs=[r for r in attempt['logs']if r['path'].endswith('game-run.stderr')]
    if len(logs)!=1 or sha(ROOT/logs[0]['path'])!=logs[0]['sha256']:raise ValueError('Diagnostic log does not match receipt')
    lines=(ROOT/logs[0]['path']).read_text(encoding='utf8').splitlines()
    if any('PLS_OFFSCREEN_EXCEPTION='in line for line in lines):raise ValueError('Offscreen exception in measured run')
    records=[json.loads(line.split('=',1)[1])for line in lines if line.startswith('PLS_PC_METRICS=')]
    samples=[r for r in records if r.get('event')=='diagnostic_frame_sample'and args.first<=r['completed_presented_frame']<=args.last]
    if [r['completed_presented_frame']for r in samples]!=list(range(args.first,args.last+1)):raise ValueError('Incomplete, duplicated or unordered frame window')
    names=['gc','input','update','audio','game_draw','upload','render','present','release','pacing','total_before_pacing','total_wall']
    if any(len(r['stage_nanoseconds'])!=len(names)for r in samples):raise ValueError('Unexpected FrameStage layout')
    stages={}
    for index,name in enumerate(names):
        values=sorted(r['stage_nanoseconds'][index]/1_000_000 for r in samples)
        stages[name]=dict(samples=len(values),mean_ms=statistics.mean(values),median_ms=statistics.median(values),p95_ms=values[math.ceil(len(values)*.95)-1],max_ms=max(values))
    memory=next(r for r in records if r.get('event')=='memory'and r.get('phase')=='after_900_presented_frames')
    captures=[]
    for row in attempt.get('frame_captures',[]):
        if sha(ROOT/row['path'])!=row['sha256']:raise ValueError('Private frame capture hash differs')
        captures.append(row)
    report=dict(operation='numeric-PC-Release-diagnostic-window',producer_sha256=sha(Path(__file__)),attempt=args.attempt,
        attempt_record_sha256=hashlib.sha256(json.dumps(attempt,sort_keys=True,separators=(',',':')).encode()).hexdigest(),
        executable_sha256=attempt['executable_sha256'],log=logs[0],first_completed_frame=args.first,last_completed_frame=args.last,
        sample_count=len(samples),stages=stages,memory=memory,private_captures=captures,game_methods_promoted=0,screen='UNKNOWN',
        limitations=['Screen identification requires separate inspection of the private captures.','Memory category coverage is partial; opaque allocations and overhead are UNKNOWN; categories are not additive.','Numeric log serialization and screenshots occur after the measured interval.','PC development backend measurements do not predict Nintendo3DS memory or CPU performance.'])
    output=ROOT/'config/phase2-pc-window.json';output.write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n')
    print(json.dumps(dict(attempt=args.attempt,samples=len(samples),wall=stages['total_wall'],process_resident_bytes=memory['process']['resident_bytes'])))
if __name__=='__main__':main()
