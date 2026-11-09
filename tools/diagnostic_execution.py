"""Validate diagnostic counters; attribute samples without promoting verified."""
import csv,hashlib,json,math,re,subprocess
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
def sha(p):return hashlib.sha256(Path(p).read_bytes()).hexdigest()
def protocol_lines(text):
    lines=text.splitlines()
    if lines and not text.endswith('\n')and lines[-1].startswith(('PLS_METHOD=','PLS_FRAME_PROFILE=')):
        try:json.loads(lines[-1].split('=',1)[1])
        except json.JSONDecodeError:lines.pop() # Child killed mid-write; no invented observation.
    return lines
def parse(text):
    methods={};frames={};gaps=set()
    for line in protocol_lines(text):
        if line.startswith('PLS_METHOD='):
            r=json.loads(line[len('PLS_METHOD='):]);key=r['assembly'],r['id']
            if key[0] not in ('Assembly-CSharp','KairoLibrary'):continue
            if not isinstance(key[1],str)or not key[1].startswith('M:'):raise ValueError('Method ID is invalid')
            for k in ('calls','completed','thrown','inclusive_ns','exclusive_ns'):
                if type(r[k])is not int or r[k]<0:raise ValueError('Counter is invalid')
            # Inclusive time is committed on scope exit; exclusive time can
            # already have accrued in an active invocation at a periodic dump.
            if r['completed']+r['thrown']>r['calls']:raise ValueError('Counters disagree')
            if key in methods and any(r[k]<methods[key][k]for k in ('calls','completed','thrown','inclusive_ns','exclusive_ns')):raise ValueError('Cumulative counters decreased')
            methods[key]=r
        elif line.startswith('PLS_FRAME_PROFILE='):
            r=json.loads(line[len('PLS_FRAME_PROFILE='):]);n=r['frame'];ns=r['ns']
            if type(n)is not int or n<1 or n in frames or not isinstance(ns,list)or len(ns)!=4 or any(type(v)is not int or v<0 for v in ns):raise ValueError('Frame profile is invalid')
            frames[n]=ns
        elif line.startswith('PLS_TRANSLATION_GAP='):gaps.add(line.split('=',1)[1])
    return methods,frames,gaps
def window(frames,first,last):
    rows=[v for n,v in frames.items()if first<=n<=last]
    if not rows:raise ValueError('No profiled frames in selected window')
    result={}
    for index,name in enumerate(('translated_game','independent_kairo_api','software_raster','composition_present')):
        values=sorted(v[index]/1e6 for v in rows);result[name]=dict(mean_ms=sum(values)/len(values),p95_ms=values[max(0,math.ceil(len(values)*.95)-1)])
    return dict(first=first,last=last,samples=len(rows),areas=result,clock='exclusive diagnostic wall time; instrumentation overhead retained; pacing excluded')
def hot_window(text,first,last):
    snapshots={};frame=0
    for line in protocol_lines(text):
        if line.startswith('PLS_FRAME_PROFILE='):frame=json.loads(line.split('=',1)[1])['frame']
        elif line.startswith('PLS_METHOD='):
            row=json.loads(line.split('=',1)[1]);snapshots.setdefault(frame,{})[(row['assembly'],row['id'])]=row
    before=max((f for f in snapshots if f<first),default=0);after=max((f for f in snapshots if f<=last),default=0)
    base=snapshots.get(before,{});rows=[]
    for key,row in snapshots.get(after,{}).items():
        if row['assembly']!='Assembly-CSharp':continue
        delta=dict(assembly=row['assembly'],id=row['id'])
        for field in ('calls','completed','thrown','inclusive_ns','exclusive_ns'):delta[field]=row[field]-base.get(key,{}).get(field,0)
        if delta['calls']or delta['exclusive_ns']:rows.append(delta)
    return dict(counter_start_frame=before,counter_end_frame=after,top10_exclusive=sorted(rows,key=lambda r:r['exclusive_ns'],reverse=True)[:10],top10_inclusive=sorted(rows,key=lambda r:r['inclusive_ns'],reverse=True)[:10])
def collect(attempt,folder,history):
    log=folder/'game-run.stderr';methods,frames,gaps=parse(log.read_text(encoding='utf8',errors='replace'))
    result=dict(operation='diagnostic-method-execution',attempt=attempt['number'],log=dict(path=log.relative_to(ROOT).as_posix(),sha256=sha(log)),executable_sha256=attempt['executable_sha256'],source_inputs=attempt['source_inputs'],methods=sorted(methods.values(),key=lambda r:(r['assembly'],r['id'])),attempted_gap_ids=sorted(gaps),frame_count=len(frames),coverage_is_not_behavior_verification=True)
    result['collector_sha256']=sha(Path(__file__))
    text=log.read_text(encoding='utf8',errors='replace');result['incomplete_terminal_record_ignored']=len(protocol_lines(text))!=len(text.splitlines())
    result['eligible_ids']={}
    for assembly,file in [('Assembly-CSharp','phase2-game-translation.json'),('KairoLibrary','phase2-translation.json')]:
        source=ROOT/'config'/file;report=json.loads(source.read_text(encoding='utf8'));archive=folder/file;archive.write_bytes(source.read_bytes())
        result.setdefault('generation_reports',{})[assembly]=dict(path=archive.relative_to(ROOT).as_posix(),sha256=sha(archive))
        result['eligible_ids'][assembly]=sorted(row['id']for row in report['emitted_methods'])
    result['executed_counts']={assembly:sum(r['completed']>0 and r['id']in result['eligible_ids'][assembly] for r in methods.values()if r['assembly']==assembly)for assembly in ('Assembly-CSharp','KairoLibrary')}
    result['top10_exclusive']=sorted([r for r in methods.values()if r['assembly']=='Assembly-CSharp'],key=lambda r:r['exclusive_ns'],reverse=True)[:10]
    result['top10_inclusive']=sorted([r for r in methods.values()if r['assembly']=='Assembly-CSharp'],key=lambda r:r['inclusive_ns'],reverse=True)[:10]
    path=folder/'execution.json';path.write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n')
    attempt['execution_receipt']=dict(path=path.relative_to(ROOT).as_posix(),sha256=sha(path))
    promote_ledger(result)
    return result
def promote_ledger(result):
    from update_phase2_progress import map_game_identities
    path=ROOT/'config/translation.csv'
    with path.open(encoding='utf8',newline='')as f:rows=list(csv.DictReader(f))
    archived=ROOT/result['generation_reports']['Assembly-CSharp']['path'];report=json.loads(archived.read_text(encoding='utf8'))
    mapped,_=map_game_identities(report['emitted_methods'],rows)
    done={r['id']for r in result['methods']if r['assembly']=='Assembly-CSharp'and r['completed']>0}
    for row in rows:
        if row['estado']=='translated'and mapped.get(row['id'])in done:
            row['estado']='runs';row['notas']=row['notas'].split('; phase2:')[0]+'; phase2: completed instrumented invocation in authenticated diagnostic attempt '+str(result['attempt'])+'; no behavior verification'
    with path.open('w',encoding='utf8',newline='')as f:
        w=csv.DictWriter(f,fieldnames=list(rows[0]),lineterminator='\n');w.writeheader();w.writerows(rows)
def validated_completed(history,assembly):
    ids=set()
    for attempt in history.get('attempts',[]):
        pointer=attempt.get('execution_receipt')
        if not pointer:continue
        path=(ROOT/pointer['path']).resolve(strict=True)
        if not path.is_relative_to(ROOT/'build')or sha(path)!=pointer['sha256']:raise ValueError('Execution receipt differs')
        receipt=json.loads(path.read_text(encoding='utf8'))
        if receipt['executable_sha256']!=attempt.get('executable_sha256')or receipt['source_inputs']!=attempt.get('source_inputs'):raise ValueError('Execution provenance differs')
        manifest=ROOT/receipt['source_inputs']['path']
        if sha(manifest)!=receipt['source_inputs']['sha256']:raise ValueError('Execution input snapshot differs')
        log=ROOT/receipt['log']['path']
        if sha(log)!=receipt['log']['sha256']:raise ValueError('Execution log differs')
        methods,_,_=parse(log.read_text(encoding='utf8',errors='replace'))
        if receipt['methods']!=sorted(methods.values(),key=lambda r:(r['assembly'],r['id'])):raise ValueError('Execution counters differ from log')
        pointer=receipt.get('generation_reports',{}).get(assembly)
        if not pointer:raise ValueError('Execution generation report is absent')
        source=(ROOT/pointer['path']).resolve(strict=True)
        if not source.is_relative_to(ROOT/'build')or sha(source)!=pointer['sha256']:raise ValueError('Executed generation report differs')
        report=json.loads(source.read_text(encoding='utf8'));eligible={r['id']for r in report['emitted_methods']}
        if eligible!=set(receipt['eligible_ids'][assembly]):raise ValueError('Eligible method list differs')
        ids.update(r['id']for r in methods.values()if r['assembly']==assembly and r['completed']>0 and r['id']in eligible)
    return ids
