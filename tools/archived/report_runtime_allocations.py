"""Publish code-only allocation measurements; never publish saves or asset data."""
import argparse
import hashlib
import json
from pathlib import Path
import re

ROOT=Path(__file__).resolve().parents[1]

def classify(symbol):
    if 'register_managed_object' in symbol:return 'Introduzido: registro do coletor'
    if 'Catalog::' in symbol:return 'Introduzido: catálogo do port'
    if 'MeshManager::BeginPrimitive' in symbol:return 'Introduzido: vetor de batches do backend'
    if 'Font::raster' in symbol:return 'Introduzido: chave/cache de rasterização'
    if 'Font::StringWidthF' in symbol:return 'Misto: Replace existe no C#; cópia nativa é incondicional'
    if 'make_ref<pls::kairo::Font,' in symbol:return 'Original: Graphics.GetFont cria Font; control block é introduzido'
    if 'configure_application' in symbol or 'CallbackFormKairo' in symbol:return 'Introduzido: adaptador do bootstrap'
    if 'InvocationList' in symbol or 'Delegate<' in symbol:return 'Introduzido: representação nativa de delegate; origem da criação exige a pilha'
    if 'String::Storage' in symbol:return 'Misto: strings de várias origens e control blocks'
    if 'Array<' in symbol or 'List<' in symbol:return 'Misto/UNKNOWN: armazenamento gerenciado, buffer e control block'
    if 'make_ref<pls::game::' in symbol:return 'Original: objeto do jogo; control block é introduzido'
    return 'UNKNOWN: examinar a pilha e o comando original'

def label(row):
    name=row['symbol']
    if 'configure_application' in name:name='bootstrap.configure_application'
    elif 'InvocationList' in name:name='InvocationList '+name.split('Delegate<',1)[1].split('>::InvocationList',1)[0]
    elif 'Delegate<' in name and '::bind<' in name:name='Delegate.bind '+name.split('Delegate<',1)[1].split('>::bind',1)[0]
    elif 'String::Storage' in name:name='String.Storage + ownership'
    elif len(name)>110:name=name[:107]+'...'
    file=Path(row['file']).name
    return (name+f' ({file}:{row.get("line")})').replace('|','\\|').replace('`','')

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--menu',type=Path,required=True);p.add_argument('--match',type=Path,required=True)
    a=p.parse_args();lines=['# Maiores sítios de alocação — medição do runtime','',
        'Janelas de 300 frames. Contagens de solicitações `new`, não objetos vivos nem RSS.',
        'Cada sítio agrupa pilhas pelo primeiro chamador do port com arquivo/linha.',
        'Uma solicitação pode reunir objeto do original e control block do runtime;',
        'nesses casos não há separação exata dos bytes. ICF pode compartilhar símbolos de templates.',
        'Os vinte por contagem e os vinte por bytes são apresentados separadamente.',
        'A ordem em empates segue a tabela de pilhas; empates não estabelecem prioridade.','']
    public=[]
    for name,path in [('Gestão',a.menu),('Partida',a.match)]:
        report=json.loads(path.read_text());source=report['source_operations']
        entry=dict(scenario=report['scenario'],frames=report['frames'],allocations=report['allocations'],bytes=report['bytes'],
                   executable_sha256=report['executable_sha256'],source_operations=source['completed'],
                   source_kinds=source['by_kind'],clr_heap_equivalence=False,top={})
        lines += [f'## {name}', '',f'Executável SHA-256: `{report["executable_sha256"]}`.',
                  f'Relatório privado SHA-256: `{hashlib.sha256(path.read_bytes()).hexdigest()}`.',
                  f'{report["allocations"]} solicitações / {report["bytes"]} bytes; '
                  f'{source["completed"]} operações concluídas do fonte instrumentado.',
                  f'Razão observada: {source["cpp_new_per_completed_source_operation"]:.9f}. '
                  'Razão completa de alocações CLR: **UNKNOWN**; ver runtime-allocation-attribution.md.','']
        for order in ['count','bytes']:
            entry['top'][order]=[dict(symbol=row['symbol'],file=Path(row['file']).name,line=row['line'],count=row['count'],bytes=row['bytes'],classification=classify(row['symbol']))for row in report['top20_callers_'+order]]
            lines += ['### Por '+('contagem'if order=='count'else'bytes'),'',
                      '| # | Sítio | Contagem | Bytes | Classificação |','|---:|---|---:|---:|---|']
            for i,row in enumerate(report['top20_callers_'+order],1):
                lines.append(f'| {i} | {label(row)} | {row["count"]} | {row["bytes"]} | {classify(row["symbol"])} |')
            lines.append('')
        public.append(entry)
    (ROOT/'docs/notes/runtime-allocation-top20.md').write_text('\n'.join(lines)+'\n',encoding='utf8')
    (ROOT/'docs/notes/runtime-allocation-top20.json').write_text(json.dumps(public,indent=2,ensure_ascii=False)+'\n',encoding='utf8')

if __name__=='__main__':main()
