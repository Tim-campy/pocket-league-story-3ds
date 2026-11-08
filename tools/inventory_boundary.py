"""Inventory source-bound Kairo/Unity symbols without emitting game code or data.

Requires the pinned read-only reference submodule, installed Roslyn5.8 and its
private .NET runtime. Original managed DLLs are metadata inputs read externally;
none are copied into the port. All generated CSV states are todo.
"""
import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
PIN = 'c7d097a847ca1f1a8e5fb7141ff11d338f5915c4'


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def classify(type_name, member=''):
    t = type_name.lower()
    m = member.lower()
    if 'kairobase' in t:
        if any(x in m for x in ('payment','illegalcountry','illegalpackage')):
            return 'cobranca', 'remover', 'Serviço de cobrança/validação Android; preservar caminho de indisponibilidade.'
        return 'rede', 'remover', 'Base de serviços online; preservar estado offline e chamadas locais dependentes.'
    if any(x in m for x in ('licensing','licensecheck')):
        return 'licenciamento', 'remover', 'Sem integração de licenciamento Android; preservar caminho de falha documentado.'
    if any(x in m for x in ('admob','advert','tapjoy','interstitial')):
        return 'anuncios', 'remover', 'Integração de publicidade desativada; preservar callbacks/estado de indisponibilidade.'
    if any(x in t for x in ('.billing.', '.store.', 'storebase', 'inapppurchase')):
        return 'cobranca', 'remover', 'Preservar retorno/callback de indisponibilidade; sem compra no port.'
    if any(x in t for x in ('.licensing.', 'licensechecker')):
        return 'licenciamento', 'remover', 'Remover integração Android; não alterar lógica de erro sem decisão.'
    if any(x in t for x in ('.notification.', 'notificationmanager')):
        return 'notificacoes', 'remover', 'Integração de notificações desativada; preservar continuidade local.'
    if any(x in t for x in ('.ad.', '.ads.', 'admob', 'interstitial', '.tapjoy.')):
        return 'anuncios', 'remover', 'Sem SDK de anúncios; simular indisponibilidade e preservar fluxo medido.'
    if any(x in t for x in ('.net.', '.network.', '.analytics.', 'http', 'urlconnection', 'webrequest', 'webbox', 'webview')):
        return 'rede', 'remover', 'Desativar serviço de rede; comportamento offline documentado separadamente.'
    if any(x in t for x in ('.sound.', '.audio.', 'soundplayer', 'soundogg', 'sounddata')):
        return 'som', 'reimplementar', 'Backend SDL2/ndsp; manter identificadores, volume e controle do áudio.'
    if any(x in t for x in ('font', '.text.', 'textlayout')):
        return 'fontes_texto', 'reimplementar', 'Métricas, rasterização e codificação; textos vêm do pipeline local.'
    if any(x in t for x in ('.graphics.image', '.graphics.imagedata', '.image.', 'imagecache', 'imagemanager')):
        return 'imagens', 'reimplementar', 'Carregamento por identificador e texturas geradas localmente.'
    if any(x in t for x in ('.graphics.', '.graph.', '.math.', 'geometry', '.transform')):
        return ('desenho', 'portavel', 'Transformações/matemática puras; confirmar semântica numérica.') if any(x in t for x in ('.math.', '.point', '.rect', '.matrix', '.transform', '.color')) else ('desenho', 'reimplementar', 'Primitivas e estado de desenho sobre SDL2/citro2d.')
    if any(x in t for x in ('.input.', 'keyevent', 'touchevent', 'keylistener', 'mouseevent', 'keyboard')):
        return 'entrada', 'reimplementar', 'Eventos e estados de entrada; mapeamento físico depende da Fase3.'
    if any(x in t for x in ('.io.file', '.io.directory', '.io.preference', '.io.record', '.storage.', '.io.resource')):
        return 'armazenamento', 'reimplementar', 'Arquivos/save/recursos locais sobre host e SD; nomes técnicos preservados.'
    if any(x in t for x in ('.ui.graphics', '.ui.matrix', '.ui.seb', '.ui.balloon.balloonrender')):
        return 'desenho', 'reimplementar', 'Primitivas/estado de desenho e sprites; fornecer API sobre SDL2/citro2d.'
    if '.ui.image' in t:
        return 'imagens', 'reimplementar', 'Imagem/textura carregada por identificador; dados somente no pipeline local.'
    if '.ui.soundbase' in t:
        return 'som', 'reimplementar', 'Backend de áudio de plataforma; preservar controle e identificadores.'
    if '.surface.touch' in t or '.surface.motionevent' in t:
        return 'entrada', 'reimplementar', 'Contratos de toque/eventos; mapeamento físico reservado à decisão da Fase3.'
    if '.ui.textformat' in t or '.util.language' in t:
        return 'fontes_texto', 'reimplementar', 'Textos por chave/índice; recursos carregados do APK local, nunca embutidos no C++.'
    if any(x in t for x in ('.io.storage', '.io.scratchpad', '.io.assetreader', '.ui.resourcemanager', '.system.gamedatarecord')):
        return 'armazenamento', 'reimplementar', 'Recursos, arquivo ou persistência; manter contrato lógico em backend local/SD.'
    if any(x in t for x in ('.util.streamutil', '.util.fastvector', '.io.bytelistoutputstream', '.util.jarinflater')):
        return 'colecoes_streams', 'portavel', 'Coleção/stream/conteiner de dados em memória; preservar semântica e formato.'
    if any(x in t for x in ('.lang.jthread', '.lang.jruntime', '.native.kairoplugin', '.util.clocktime')):
        return 'utilitarios', 'reimplementar', 'Serviço de plataforma/thread/tempo; implementação própria sem runtime Unity.'
    if any(x in t for x in ('.form.', '.panel.', '.surface.', '.ui.', '.canvas', '.layout.')):
        return 'formularios_ui', 'reimplementar', 'Reconstruir contratos de UI; desenho das duas telas não decidido.'
    if t.startswith(('java.util.', 'java.io.', 'java.lang.', 'kairo.common.')):
        return 'colecoes_streams', 'portavel', 'Semântica de coleções/streams/compatibilidade; I/O concreto separado.'
    return 'utilitarios', 'portavel', 'Lógica de suporte a traduzir; dependências transitivas precisam de auditoria.'


def write_csv(path, rows, columns):
    with path.open('w', encoding='utf-8', newline='') as handle:
        writer = csv.DictWriter(handle, fieldnames=columns, lineterminator='\n')
        writer.writeheader(); writer.writerows(rows)


def prepare_driver(roslyn):
    vs = next(p for p in roslyn.parents if (p/'dotnet/net10.0/runtime').is_dir())
    runtime = vs/'dotnet/net10.0/runtime'
    framework = runtime/'shared/Microsoft.NETCore.App/10.0.10'
    folder = ROOT/'build/boundary'; folder.mkdir(parents=True, exist_ok=True)
    source = ROOT/'tools/BoundaryInventory.cs'
    libraries = ['System.Private.CoreLib', 'System.Runtime', 'System.Console', 'System.Linq', 'System.Collections',
                 'System.Text.Json', 'System.Reflection.Metadata', 'System.Collections.Immutable', 'System.Memory', 'netstandard']
    references = [framework/(x+'.dll') for x in libraries]
    roslyn_libraries = [roslyn.parent/'Microsoft.CodeAnalysis.dll', roslyn.parent/'Microsoft.CodeAnalysis.CSharp.dll']
    target = folder/'BoundaryInventory.dll'
    parameters = ['/nologo', '/noconfig', '/nostdlib+', '/target:exe', '/out:'+str(target)]
    parameters += ['/r:'+str(p) for p in references+roslyn_libraries] + [str(source)]
    rsp = folder/'compile.rsp'; rsp.write_text('\n'.join('"'+p+'"' for p in parameters if p!='/noconfig')+'\n', encoding='utf-8')
    result = subprocess.run([str(roslyn), '/noconfig', '@'+str(rsp)], capture_output=True)
    (folder/'compile.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:
        raise RuntimeError('Analyzer compile failed: '+(result.stdout+result.stderr).decode('utf-8', errors='replace'))
    for library in roslyn_libraries:
        shutil.copy2(library, folder/library.name)
    (folder/'BoundaryInventory.runtimeconfig.json').write_text(json.dumps({'runtimeOptions': {'tfm':'net10.0',
        'framework': {'name':'Microsoft.NETCore.App','version':'10.0.10'}}})+'\n', encoding='utf-8')
    return folder, runtime/'dotnet.exe', target


def render(raw, manifest):
    config = ROOT/'config'; config.mkdir(exist_ok=True)
    docs = ROOT/'docs'; docs.mkdir(exist_ok=True)
    columns = ['id','tipo','membro','chamadores','estado','backend_sdl','backend_ctr','notas',
               'area','classificacao','kind','ocorrencias','locais','papeis_semanticos']
    members = [m for m in raw['members'] if m['assembly']=='KairoLibrary']
    rows=[]
    for member in members:
        area, classification, treatment = classify(member['type'],member['member'])
        rows.append(dict(id=member['id'],tipo=member['type'],membro=member['member'],
            chamadores=';'.join(member['callers']),estado='todo',backend_sdl='todo',backend_ctr='todo',
            notas=treatment,area=area,classificacao=classification,kind=member['kind'],
            ocorrencias=member['source_occurrences'],locais=';'.join(member['sites']),
            papeis_semanticos=';'.join(member['roles'])))
    write_csv(config/'boundary.csv',rows,columns)
    unity=[m for m in raw['members'] if m['assembly']=='UnityEngine']
    unity_rows=[]
    for m in unity:
        t=m['type']; proposed='reimplementar'; treatment='Substituir por contrato equivalente independente do Unity; validar chamadores.'
        if 'AndroidJava' in t:
            proposed='remover'
            treatment='Remover ponte JNI Android. Finish vira saída de plataforma; Init, mailer, compra e WebBox exigem caminho indisponível/decisão de escopo; não devolver sucesso fictício.'
        elif 'QualitySettings' in t:
            proposed='remover'
            treatment='Remover ajuste vSyncCount do motor; sincronização passa ao backend, sem mudar a temporização lógica.'
        elif 'Application' in t:
            treatment='Substituir targetFrameRate pelo agendamento do host; preservar a intenção temporal do chamador Main.OnUpdate.'
        elif 'PlayerPrefs' in t:
            treatment='Substituir preferências por armazenamento local/SD se os chamadores forem mantidos; são restauração de cobrança e saldo Tapjoy, cuja remoção requer decisão sobre saldo.'
        elif any(x in t for x in ('MonoBehaviour','Object','GameObject','Component','Transform')):
            treatment='Substituir ciclo de vida/objetos Unity por host do port; não incorporar runtime Unity.'
            if 'op_Equality' in m['id'] or 'op_Inequality' in m['id']:
                treatment='Substituir comparação Unity por teste de existência/vida do objeto do port; Unity destroyed-object não equivale só a ponteiro nulo.'
        elif any(x in t for x in ('Screen','Input','Time','Resources','Debug')):
            treatment='Substituir pelo serviço de plataforma equivalente; não reter dependência Unity.'
        elif any(x in t for x in ('Color','Vector','Rect','Mathf','Quaternion')):
            proposed='portavel';treatment='Reproduzir tipo/aritmética de valor em código próprio, sem Unity.'
        unity_rows.append(dict(id=m['id'],tipo=t,membro=m['member'],kind=m['kind'],
            chamadores=';'.join(m['callers']),ocorrencias=m['source_occurrences'],locais=';'.join(m['sites']),
            classificacao=proposed,proposta=treatment))
    write_csv(config/'unity-direct.csv',unity_rows,['id','tipo','membro','kind','chamadores','ocorrencias','locais','classificacao','proposta'])
    summary=dict(operation=raw['operation'],reference_commit=PIN,source_files=raw['source_files'],
        coverage=dict(ast_nodes=raw['node_count'],symbol_queries=raw['symbol_queries'],type_queries=raw['type_queries'],
                      operator_operation_queries=raw['operator_operation_queries'],compilation_errors=raw['compilation_errors'],
                      unresolved_symbol_sites=raw['unresolved_symbol_sites']),
        kairo=dict(unique_symbols=len(rows),types=len({m['tipo'] for m in rows}),
            by_kind={kind:sum(m['kind']==kind for m in rows) for kind in ('NamedType','Method','Property','Field','Event')},
            by_area={**dict(Counter(m['area'] for m in rows)), 'licenciamento':sum(m['area']=='licenciamento' for m in rows)},
            by_classification=dict(Counter(m['classificacao'] for m in rows))),
        unity=dict(unique_symbols=len(unity_rows),types=len({m['tipo'] for m in unity_rows}),
                   by_kind=dict(Counter(m['kind'] for m in unity_rows))),
        manifest=manifest,states_generated=True,literal_values_emitted=False,game_binary_emitted=False,
        limitations=['Areas and platform treatment are proposals, not implementations or behavior verification.',
          'Only the direct semantic boundary of Assembly-CSharp is counted; transitive Kairo internals are not a second API count.',
          'NamedType rows include inferred types/conversions and generic arguments, not only textual type names.',
          'Accessor references collapse to their associated property/event, preserving member identity.',
          'Explicit symbol and type queries plus foreach/operator protocol binding; no target execution.'])
    (config/'boundary-summary.json').write_text(json.dumps(summary,indent=2,ensure_ascii=False)+'\n',encoding='utf-8')
    lines=['# Fronteira semântica do port — Fase 0','',
        f"Referência somente leitura: tag `v1.0.0-csharp-reconstruction`, commit `{PIN}`. "
        f"Roslyn moderno percorreu **{raw['source_files']} fontes** do Assembly-CSharp, **{raw['node_count']} nós AST**, "
        f"com **{raw['symbol_queries']} consultas de símbolos** e **{raw['type_queries']} consultas de tipos**. "
        'Os binários originais foram lidos externamente como metadados; não foram copiados para o port nem executados.','',
        f"**{len(rows)} símbolos KairoLibrary**, em **{len({m['tipo'] for m in rows})} tipos**. "
        f"Erros semânticos: **{len(raw['compilation_errors'])}**; locais com candidatos sem resolução única: **{len(raw['unresolved_symbol_sites'])}**.", '',
        'A unidade de contagem é o símbolo original: NamedType, método/construtor, propriedade, campo ou evento. '
        'Instanciações genéricas são normalizadas à definição; os argumentos são inventariados como tipos; acessores '
        'são associados à propriedade/evento. Referências constantes são incluídas antes de qualquer inlining. '
        'Tipos inferidos, convertidos, argumentos genéricos e tipos que declaram os membros também contam. '
        'Operações ligadas incluem conversões e chamadas de construtores base implícitas. '
        'Ocorrências do mesmo símbolo no mesmo span são deduplicadas; os três nós de uma invocação contam como uma chamada. '
        'Chamadores são métodos/membros do fonte, não uma suposição de caminhos executados.','',
        'O inventário é o contrato direto; dependências transitivas da implementação Kairo não são contadas como '
        'chamadas adicionais do jogo. Classificações e propostas são de planejamento, não estados de implementação. '
        'Todos os estados foram gerados como `todo`. Nenhum tradutor ou backend foi escrito.','',
        '## Números por categoria','', '| Categoria | Símbolos |','|---|---:|']
    lines += [f'| {key} | {value} |' for key,value in sorted(Counter(m['classificacao'] for m in rows).items())]
    lines += ['', '## Números por área','', '| Área | Símbolos | Tipos | Tratamentos |','|---|---:|---:|---|']
    grouped=defaultdict(list)
    for row in rows:grouped[row['area']].append(row)
    for area, group in sorted(grouped.items()):
        treatments=', '.join(f'{k}: {v}' for k,v in sorted(Counter(r['classificacao'] for r in group).items()))
        lines.append(f"| {area} | {len(group)} | {len({r['tipo'] for r in group})} | {treatments} |")
    if not grouped.get('licenciamento'):
        lines += ['| licenciamento | 0 | 0 | Sem símbolo Kairo direto; integração retida/transitiva analisada separadamente |']
    lines += ['', '## Referências diretas ao UnityEngine','',
        f"**{len(unity_rows)} símbolos**, em **{len({m['tipo'] for m in unity_rows})} tipos**. "
        'Cada linha recebe proposta específica por tipo; nenhuma usa o motor no port. '
        '[CSV completo](../config/unity-direct.csv).','',
        '| Símbolo | Chamadores | Proposta |','|---|---|---|']
    for row in unity_rows:
        lines.append(f"| `{row['id']}` | {', '.join('`'+x+'`' for x in row['chamadores'].split(';'))} | {row['proposta']} |")
    lines += ['', '## API KairoLibrary por área','',
        '[CSV completo com todos os chamadores, locais e papéis semânticos](../config/boundary.csv). '
        'A tabela abaixo lista todo símbolo; nomes são identificadores de código, não textos do jogo.','']
    for area, group in sorted(grouped.items()):
        lines += [f'### {area} — {len(group)} símbolos','', '| Símbolo | Tipo de símbolo | Categoria | Chamadores distintos |','|---|---|---|---:|']
        for row in group:
            lines.append(f"| `{row['id']}` | {row['kind']} | {row['classificacao']} | {len(row['chamadores'].split(';'))} |")
        lines.append('')
    lines += ['## Limitações e reprodução','',
        'Ferramentas: `tools/BoundaryInventory.cs` e `tools/inventory_boundary.py`. Execute com '
        '`python tools/inventory_boundary.py --managed-dir <diretorio-Managed-da-copia-local>`. '
        'A pasta é lida, nunca copiada. O driver emite apenas metadados, contagens e nomes de símbolos, sem valores literais. '
        'Não é tradutor nem implementação de API. O comparer DesktopAssemblyIdentityComparer.Default é necessário '
        'para a unificação desktop/Unity dos perfis mscorlib2.0.0.0/2.0.5.0; sem ele a primeira tentativa teve '
        '17.465 erros CS0012 e 49 derivados. O ajuste afeta somente a resolução semântica do inspetor, não '
        'compila ou altera uma DLL do jogo. A fixture própria em tests/repository/test_boundary_semantics.py '
        'confirma constantes, propriedades, métodos, genéricos, conversão implícita, foreach e construtor base implícito.', '',
        'O comportamento de rede, cobrança, anúncios, licenciamento e notificações, incluindo falhas/desligamento, '
        'é analisado separadamente em `docs/notes/offline-behavior.md`. '
        'Categorias de remoção não autorizam substituir callbacks por sucesso nem modificar a lógica do jogo.']
    (docs/'boundary.md').write_text('\n'.join(lines).rstrip()+'\n',encoding='utf-8')
    return summary


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--managed-dir',required=True,type=Path)
    parser.add_argument('--roslyn',type=Path,default=Path(os.environ.get('ROSLYN_CSC',r'C:\Program Files\Microsoft Visual Studio\18\Community\MSBuild\Current\Bin\Roslyn\csc.exe')))
    args=parser.parse_args()
    reference=ROOT/'reference'
    actual=subprocess.check_output(['git','-C',str(reference),'rev-parse','HEAD'],text=True).strip()
    if actual!=PIN:raise ValueError('Read-only reference must be pinned to reconstruction tag')
    order=[x for x in (reference/'config/compile-order/Assembly-CSharp.txt').read_text(encoding='utf-8').splitlines() if x and not x.startswith('#')]
    order.append('src/Assembly-CSharp/AssemblyInfo.cs')
    sources=[reference/path for path in order]
    managed=args.managed_dir.resolve()
    refs=[managed/name for name in ('mscorlib.dll','KairoLibrary.dll','UnityEngine.dll','System.Core.dll','System.dll')]
    if any(not p.is_file() for p in sources+refs):raise ValueError('Missing pinned source or external metadata reference')
    expected=json.loads((reference/'config/toolchain.json').read_text(encoding='utf-8'))['assemblies']['Assembly-CSharp']['reference_files']
    for path, spec in zip(refs,expected):
        if path.name!=Path(spec['path']).name or digest(path)!=spec['sha256']:raise ValueError('External metadata identity differs: '+path.name)
    folder,runtime,driver=prepare_driver(args.roslyn.resolve())
    input_file=folder/'input.json';output=folder/'semantic-inventory.json'
    input_file.write_text(json.dumps(dict(sources=[str(p) for p in sources],references=[str(p) for p in refs])),encoding='utf-8')
    result=subprocess.run([str(runtime),str(driver),str(input_file),str(output)],capture_output=True)
    (folder/'inventory.log').write_bytes(result.stdout+result.stderr)
    if not output.is_file():raise RuntimeError('Semantic inventory failed: '+(result.stdout+result.stderr).decode('utf-8',errors='replace'))
    raw=json.loads(output.read_text(encoding='utf-8-sig'))
    manifest=dict(producer_sha256=digest(Path(__file__)),driver_source_sha256=digest(ROOT/'tools/BoundaryInventory.cs'),
        compiler_sha256=digest(args.roslyn.resolve()),runtime_sha256=digest(runtime),
        references=[dict(name=p.name,sha256=digest(p)) for p in refs],
        sources=[dict(path=logical,sha256=digest(path)) for logical,path in zip(order,sources)])
    summary=render(raw,manifest)
    print(json.dumps({k:summary[k] for k in ('source_files','kairo','unity')},ensure_ascii=True))
    print(json.dumps(dict(compilation_errors=len(raw['compilation_errors']),unresolved_sites=len(raw['unresolved_symbol_sites']))))
    return result.returncode


if __name__=='__main__':
    sys.exit(main())
