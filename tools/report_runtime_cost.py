"""Publish metadata only from authenticated, completed no-ETW measurements."""
import argparse
import hashlib
import json
from pathlib import Path
from measure_null_thread_cpu import parse_run

ROOT=Path(__file__).resolve().parents[1]

def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def publish(measurement):
    measurement=measurement.resolve(strict=True)
    if not measurement.is_relative_to(ROOT/'build'):
        raise ValueError('Measurement must come from private build/')
    source=json.loads(measurement.read_text())
    runs=source['runs']
    if not source.get('complete') or len(runs)!=6 or {r['scenario'] for r in runs}!={'menu','match'}:
        raise ValueError('Three complete repetitions of each scenario required')
    for row in runs:
        idle=row.get('pre_run_host_busy_percent',[])
        if len(idle)<3 or any(not 0<=v<5 for v in idle[-3:]):
            raise ValueError('Three idle samples below 5% required before each run')
        actual=parse_run(ROOT/row['path'],row['scenario'])
        if any(row[key]!=value for key,value in actual.items()):
            raise ValueError('Measurement receipt differs from authenticated log')
    images={r['executable_sha256'] for r in runs}
    if len(images)!=1:raise ValueError('Mixed executable revisions')
    scenarios={}
    for scenario in ('menu','match'):
        rows=[r for r in runs if r['scenario']==scenario]
        if len(rows)!=3:raise ValueError('Wrong repetition count')
        if {r['repetition'] for r in rows}!={1,2,3}:raise ValueError('Duplicate repetition')
        scenarios[scenario]=dict(repetitions=3,frames=900,
            mean_thread_cpu_ms=sum(r['thread_cpu_ms']['mean'] for r in rows)/3,
            mean_wall_ms=sum(r['wall_ms']['mean'] for r in rows)/3,
            collections=sum(r['collections'] for r in rows),
            repetitions_detail=[{k:r[k] for k in ('path','thread_cpu_ms','thread_cycles','wall_ms','collections','maximum_collection_ms')} for r in rows])
    result=dict(status='PASS',operation='three-idle-repetitions-no-etw',
        producer_sha256=sha(Path(__file__)),
        evidence=dict(path=measurement.relative_to(ROOT).as_posix(),sha256=sha(measurement)),
        image_sha256=images.pop(),scenarios=scenarios,
        scope='Latest selected measured image, not a claim that later source edits were measured',
        method='GetThreadTimes and QueryThreadCycleTime around update and draw; monotonic elapsed clock',
        limitations=['GetThreadTimes is quantized: per-frame CPU p95/max may be 15.625 ms despite much shorter elapsed frames',
            'Raw cycles are not converted using nominal GHz',
            'Historical 7.15/9.04 ms used ETW and are not the same measurement method',
            'Zero collections in a window does not bound loading/transition pauses'])
    target=ROOT/'config/phase2-runtime-cost.json'
    target.write_text(json.dumps(result,indent=2)+'\n',encoding='utf8')
    print(json.dumps(dict(output=target.relative_to(ROOT).as_posix(),image=result['image_sha256'],
        cpu_ms={k:v['mean_thread_cpu_ms'] for k,v in scenarios.items()})))

def markdown():
    target=ROOT/'config/phase2-runtime-cost.json'
    if not target.exists():return ['CPU da revisão atual: **UNKNOWN**.']
    record=json.loads(target.read_text())
    if record['producer_sha256']!=sha(Path(__file__)) or sha(ROOT/record['evidence']['path'])!=record['evidence']['sha256']:
        raise ValueError('Runtime measurement receipt needs regeneration')
    rows=['Última imagem medida (não implica medição de alterações posteriores): `'+record['image_sha256']+'`.','',
          '| Cenário | Repetições / frames | CPU média da thread, ms | Tempo monotônico médio, ms | Coletas na janela |',
          '|---|---:|---:|---:|---:|']
    for key,label in [('menu','Menu'),('match','Partida')]:
        r=record['scenarios'][key]
        rows.append(f"| {label} | {r['repetitions']} / {r['frames']} | {r['mean_thread_cpu_ms']:.9f} | {r['mean_wall_ms']:.9f} | {r['collections']} |")
    return rows+['','GetThreadTimes/QueryThreadCycleTime, sem elevação, três repetições ociosas. '
        'A granularidade do relógio de CPU limita p95/máximo por frame; ciclos brutos e tempos monotônicos estão no recibo. '
        'A baseline 7,15/9,04 ms usou ETW. Zero coletas na janela não prova a meta de pausa nos carregamentos. '
        '[Detalhes e resultados negativos](docs/notes/runtime-cost-round.md).','']

if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--measurement',type=Path,required=True)
    publish(parser.parse_args().measurement)
