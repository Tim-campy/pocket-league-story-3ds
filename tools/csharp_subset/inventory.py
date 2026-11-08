"""Measure C# syntax and string-use metadata without publishing any game text.

Uses the already installed Roslyn and private VS .NET runtime. No downloads.
Generated compiler outputs remain in build/. The source reference is read-only.
"""
import argparse
from collections import Counter
import csv
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def write_csv(path, columns, rows):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open('w', encoding='utf-8', newline='') as file:
        writer = csv.DictWriter(file, fieldnames=columns, lineterminator='\n')
        writer.writeheader()
        writer.writerows(rows)


def compiler_paths():
    compiler = Path(os.environ.get('ROSLYN_CSC', 'C:/Program Files/Microsoft Visual Studio/18/Community/MSBuild/Current/Bin/Roslyn/csc.exe'))
    if not compiler.is_file():
        raise ValueError('Existing Roslyn compiler missing; no dependency is downloaded')
    vs = next((p for p in compiler.parents if (p/'dotnet/net10.0/runtime').is_dir()), None)
    if vs is None:
        raise ValueError('Existing private VS .NET 10 runtime missing')
    runtime = vs/'dotnet/net10.0/runtime'
    framework = runtime/'shared/Microsoft.NETCore.App/10.0.10'
    if not framework.is_dir():
        raise ValueError('Pinned installed private runtime 10.0.10 missing')
    return compiler, runtime/'dotnet.exe', framework


def build(folder):
    compiler, runtime, framework = compiler_paths()
    folder.mkdir(parents=True, exist_ok=True)
    source = ROOT/'tools/csharp_subset/SubsetInventory.cs'
    output = folder/'SubsetInventory.dll'
    libraries = ['System.Private.CoreLib', 'System.Runtime', 'System.Console', 'System.Linq', 'System.Collections',
                 'System.Text.Json', 'System.Reflection.Metadata', 'System.Collections.Immutable', 'System.Memory', 'netstandard']
    references = [framework/(name+'.dll') for name in libraries]
    roslyn = [compiler.parent/'Microsoft.CodeAnalysis.dll', compiler.parent/'Microsoft.CodeAnalysis.CSharp.dll']
    references.extend(roslyn)
    options = ['/nologo', '/nostdlib+', '/target:exe', '/out:'+str(output)]
    options += ['/r:'+str(path) for path in references] + [str(source)]
    response = folder/'compile.rsp'
    response.write_text('\n'.join('"'+item+'"' for item in options)+'\n', encoding='utf-8', newline='\n')
    result = subprocess.run([str(compiler), '/noconfig', '@'+str(response)], capture_output=True)
    (folder/'compiler.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:
        raise RuntimeError('Inventory helper compilation failed; inspect '+str(folder/'compiler.log'))
    for library in roslyn:
        shutil.copy2(library, folder/library.name)
    (folder/'SubsetInventory.runtimeconfig.json').write_text(json.dumps({'runtimeOptions': {'tfm': 'net10.0',
        'framework': {'name': 'Microsoft.NETCore.App', 'version': '10.0.10'}}})+'\n', encoding='utf-8')
    manifest = dict(compiler=str(compiler), compiler_sha256=digest(compiler), runtime=str(runtime),
                    runtime_sha256=digest(runtime), source_sha256=digest(source),
                    references=[dict(path=str(p), sha256=digest(p)) for p in references], output_sha256=digest(output))
    (folder/'build-manifest.json').write_text(json.dumps(manifest, indent=2)+'\n', encoding='utf-8')
    return runtime, output, manifest


def source_files(reference, assembly):
    order = (reference/'config/compile-order'/f'{assembly}.txt').read_text(encoding='utf-8').splitlines()
    order = [line for line in order if line and not line.startswith('#')]
    attributes = f'src/{assembly}/AssemblyInfo.cs'
    if attributes not in order:
        order.append(attributes)
    return [dict(path=name, sha256=digest(reference/name)) for name in order]


def publish(reference, result, manifest):
    config = ROOT/'config'
    docs = ROOT/'docs'
    config.mkdir(exist_ok=True)
    docs.mkdir(exist_ok=True)
    rows = [dict(kind=kind, count=count) for kind, count in result['syntax_histogram'].items()]
    write_csv(config/'csharp-syntax.csv', ['kind', 'count'], rows)
    class_rows = result['string_class_counts']
    columns = ['assembly', 'type', 'total', 'empty', 'ui_value_direct', 'ui_value_wrapper',
               'ui_value_single_assignment_local', 'ui_nonempty', 'code_key_direct', 'unknown', 'sources']
    write_csv(config/'visible-text-counts.csv', columns,
              [dict(row, sources=';'.join(row['sources'])) for row in class_rows])
    with (reference/'config/methods.csv').open(encoding='utf-8', newline='') as file:
        methods = [row for row in csv.DictReader(file) if row['assembly'] == 'Assembly-CSharp']
    assert len(methods) == 1958
    translation = [dict(id=row['id'], tipo=row['tipo'], metodo=row['metodo'], estado='todo',
                        notas='inventory-only; original token '+row['token']) for row in methods]
    write_csv(config/'translation.csv', ['id', 'tipo', 'metodo', 'estado', 'notas'], translation)
    summaries = {}
    for assembly in ('Assembly-CSharp', 'KairoLibrary'):
        classes = [row for row in class_rows if row['assembly'] == assembly]
        summaries[assembly] = {column: sum(row[column] for row in classes)
                               for column in columns if column not in ('assembly', 'type', 'sources')}
        summaries[assembly]['classes_with_literals'] = len(classes)
    result['reference_commit'] = subprocess.check_output(['git', '-C', str(reference), 'rev-parse', 'HEAD'], text=True).strip()
    result['reference_tag'] = 'v1.0.0-csharp-reconstruction'
    result['reference_source_files'] = {a: source_files(reference, a) for a in ('Assembly-CSharp', 'KairoLibrary')}
    result['helper_provenance'] = manifest
    result['string_summary'] = summaries
    result['limitations'] = [
        'AST counts include compiler-source declarations only; generated methods are in the 1958-entry translation ledger.',
        'String counts are occurrences, never distinct values; no literal value or source snippet is serialized.',
        'UI classifications establish static value reachability to declared sinks, not that a player saw a phrase at runtime.',
        'Empty strings are included in occurrence counts and reported separately; ui_nonempty excludes them.',
        'Parameter wrapper closure preserves only concatenation/coalesce/conditional result/array initializer, simple immutable local aliases and System.String.Concat/Format.',
        'Mutable fields, arrays indexed later, return-value propagation, reflection, callbacks and arbitrary transforms are UNKNOWN unless directly covered.',
        'UNKNOWN literals are candidates for manual audit, not confirmed player text or confirmed harmless code keys.',
        'Code-key classification is restricted to explicit known API argument positions; no language/name heuristic decides visibility.'
    ]
    (config/'csharp-subset-summary.json').write_text(json.dumps(result, ensure_ascii=True, indent=2)+'\n', encoding='utf-8', newline='\n')
    features = result['features']
    counts = lambda *keys: sum(features.get(key, 0) for key in keys)
    lines = ['# Subconjunto C# e inventário de literais', '',
        'Inventário de leitura, não tradutor. Nenhum C++, asset, texto do jogo ou valor literal foi gerado/publicado. '
        'Fonte fixado em `reference/`, tag `v1.0.0-csharp-reconstruction`.', '',
        f"Roslyn `{result['roslyn_version']}` analisou **{result['source_files']} fontes Assembly-CSharp**, "
        f"**{result['syntax_nodes']} nós AST** e **{result['syntax_kind_count']} SyntaxKinds presentes**. "
        'A contagem completa por SyntaxKind está em [config/csharp-syntax.csv](../config/csharp-syntax.csv); '
        'tokens, opções, hashes, evidências por ocorrência e diagnósticos agregados estão no '
        '[relatório estruturado](../config/csharp-subset-summary.json).', '',
        'A tabela de tradução contém **1.958 métodos**, todos `todo`, gerados do cadastro anterior. '
        'Isso inclui métodos gerados pelo compilador e declarações sem corpo; os números de declarações AST abaixo '
        'não usam esse mesmo denominador.', '',
        '| Construção | Ocorrências AST |', '|---|---:|']
    categories = [
        ('Classes', ['ClassDeclaration']), ('Structs', ['StructDeclaration']), ('Interfaces', ['InterfaceDeclaration']),
        ('Enums', ['EnumDeclaration']), ('Métodos declarados', ['MethodDeclaration']), ('Construtores declarados', ['ConstructorDeclaration']),
        ('Corpos de métodos/construtores/operadores', ['MethodBodies']), ('Corpos de accessors', ['AccessorBodies']),
        ('Propriedades', ['PropertyDeclaration']), ('Indexadores', ['IndexerDeclaration']),
        ('Eventos declarados', ['EventDeclaration', 'EventFieldDeclaration']), ('Declarações delegate', ['DelegateDeclaration']),
        ('Entradas em listas de herança/interfaces', ['BaseTypeEntries']), ('Tipos genéricos declarados', ['GenericTypeDeclarations']),
        ('Métodos genéricos declarados', ['GenericMethodDeclarations']), ('Declarações locais', ['LocalDeclarationStatement']),
        ('Declarações var', ['VarDeclarations']), ('if', ['IfStatement']), ('switch statement', ['SwitchStatement']),
        ('for', ['ForStatement']), ('foreach', ['ForEachStatement', 'ForEachVariableStatement']),
        ('while', ['WhileStatement']), ('do/while', ['DoStatement']), ('break', ['BreakStatement']),
        ('continue', ['ContinueStatement']), ('goto', ['GotoStatement']), ('return', ['ReturnStatement']),
        ('yield', ['YieldReturnStatement', 'YieldBreakStatement']), ('try', ['TryStatement']), ('catch', ['CatchClause']),
        ('finally', ['FinallyClause']), ('throw', ['ThrowStatement', 'ThrowExpression']), ('using statement', ['UsingStatement']),
        ('lock', ['LockStatement']), ('Lambdas', ['SimpleLambdaExpression', 'ParenthesizedLambdaExpression']),
        ('Métodos anônimos', ['AnonymousMethodExpression']), ('Objetos anônimos', ['AnonymousObjectCreationExpression']),
        ('Funções anônimas com captura de símbolo (dataflow)', ['AnonymousFunctionsWithCapturedSymbols']),
        ('Ocorrências de símbolos capturados', ['CapturedSymbolOccurrences']),
        ('Query LINQ sintática', ['QueryExpression']), ('await', ['AwaitExpression']),
        ('Funções locais', ['LocalFunctionStatement']), ('Acesso condicional', ['ConditionalAccessExpression']),
        ('Coalescência', ['CoalesceExpression', 'CoalesceAssignmentExpression']),
        ('Strings interpoladas', ['InterpolatedStringExpression']), ('Pattern matching', ['IsPatternExpression']),
        ('Tuplas expressão/tipo', ['TupleExpression', 'TupleType']), ('Arrays new explícitos', ['ArrayCreationExpression']),
        ('Arrays new implícitos', ['ImplicitArrayCreationExpression']), ('Acessos por índice', ['ElementAccessExpression']),
        ('new de objeto explícito', ['ObjectCreationExpression']), ('Atribuições', ['AssignmentExpressions']),
        ('Ternários', ['ConditionalExpression']), ('Casts explícitos', ['CastExpression']),
        ('Argumentos ref', ['RefArguments']), ('Argumentos out', ['OutArguments']), ('Argumentos in', ['InArguments']),
        ('Parâmetros params', ['ParamsParameters']), ('Locais unsafe/fixed', ['UnsafeStatement', 'FixedStatement']),
        ('checked/unchecked explícitos', ['CheckedStatement', 'CheckedExpression', 'UncheckedStatement', 'UncheckedExpression'])]
    lines += [f'| {label} | {counts(*keys)} |' for label, keys in categories]
    lines += ['', '## Literais potencialmente visíveis', '',
        'Os números medem **ocorrências**, não frases distintas. Não são inferidos por idioma, palavras ou aparência do valor. '
        'O analisador resolve símbolos e identifica argumentos string/string[] de APIs de desenho, diálogo, label e softkeys; '
        'acompanha composições simples, parâmetros de wrappers e aliases locais sem reassinamento. '
        'As APIs/posições e linhas aparecem como evidência, sem conteúdo literal. '
        'Um fluxo para UI é um fato estático, não prova de uma tela executada. '
        'Formatação, fragmentos de concatenação e strings vazias podem aparecer nesse conjunto.', '',
        '| Assembly | Literais totais | Vazios (subconjunto) | UI direto | UI via wrapper | UI via local | UI não vazio | Chave de código direta | UNKNOWN |',
        '|---|---:|---:|---:|---:|---:|---:|---:|---:|']
    for assembly, s in summaries.items():
        lines.append(f"| {assembly} | {s['total']} | {s['empty']} | {s['ui_value_direct']} | {s['ui_value_wrapper']} | {s['ui_value_single_assignment_local']} | {s['ui_nonempty']} | {s['code_key_direct']} | {s['unknown']} |")
    lines += ['', '**Quantidade por classe:** a lista integral é [config/visible-text-counts.csv](../config/visible-text-counts.csv). '
        'As classes com pelo menos um literal de fluxo UI identificado estão abaixo; nenhuma frase é reproduzida.', '',
        '| Assembly | Classe | Ocorrências UI | UI não vazias |', '|---|---|---:|---:|']
    for row in class_rows:
        ui = row['ui_value_direct']+row['ui_value_wrapper']+row['ui_value_single_assignment_local']
        if ui:
            lines.append(f"| {row['assembly']} | `{row['type']}` | {ui} | {row['ui_nonempty']} |")
    lines += ['', '## Cobertura e limites', '',
        f"Erros semânticos agregados por código: `{json.dumps(result['semantic_errors_by_code'], sort_keys=True)}`. "
        f"Fechamento de wrappers: {result['wrapper_parameter_count']} parâmetros, {result['wrapper_fixed_point_rounds']} passagens; "
        f"limite atingido: {str(result['wrapper_limit_reached']).lower()}.", '',
        'As compilações semânticas usam `DesktopAssemblyIdentityComparer.Default` para unificar referências retargetable '
        'do perfil Unity. Uma primeira sonda sem esse comparer falhou com 17.465 CS0012 e 49 erros derivados no App; '
        'não foi usada como resultado final. As mesmas referências, com o comparer apropriado, são reavaliadas antes de publicar. '
        'Nenhuma DLL foi modificada para corrigir a análise.', '',
        'Validação independente: quatro fixtures semânticas sintéticas em `tools/csharp_subset/test_inventory.py` '
        'conferem ausência de valores serializados, UI direta/wrapper/local, exclusão de condições/chaves, '
        'recusa de local reassinado e limitação explícita de arrays de campo. Nenhum dado do jogo é usado nessas fixtures.', '',
        'Não há conclusão de que os literais UNKNOWN são todos textos visíveis ou todos chaves de código. '
        'Campos mutáveis, tabelas/arrays lidos depois, retornos indiretos, reflection, callbacks e transformações arbitrárias '
        'não estão provados por este passe. Essa diferença de cobertura não é escondida por classificar por palavras. '
        'Antes de gerar C++ na Fase 2, os textos confirmados e os restantes encontrados na auditoria precisam ser externalizados '
        'pelo pipeline local, sem copiar o conteúdo para o repositório.', '',
        'Sintaxe de query LINQ ausente não prova ausência de chamadas a APIs LINQ; a análise de membros semânticos '
        'da fronteira complementa a contagem sintática. Métodos gerados e closures são governados pelos métodos de origem; '
        'não foram escritos à mão.']
    (docs/'csharp-subset.md').write_text('\n'.join(lines)+'\n', encoding='utf-8', newline='\n')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--reference', type=Path, default=ROOT/'reference')
    parser.add_argument('--original-managed', type=Path, required=True)
    parser.add_argument('--unity-root', type=Path, default=Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')
    args = parser.parse_args()
    reference = args.reference.resolve()
    folder = ROOT/'build/csharp-subset'
    runtime, helper, manifest = build(folder)
    managed = args.original_managed.resolve()
    classic = args.unity_root.resolve()/'Editor/Data/Mono/lib/mono/2.0'
    references = {
        'Assembly-CSharp': [managed/name for name in ('mscorlib.dll', 'KairoLibrary.dll', 'UnityEngine.dll', 'System.Core.dll', 'System.dll')],
        'KairoLibrary': [Path('C:/Windows/Microsoft.NET/Framework/v2.0.50727/mscorlib.dll'), classic/'System.Core.dll', managed/'UnityEngine.dll', classic/'System.dll']}
    request = dict(reference=str(reference), references={key: [str(p) for p in value] for key, value in references.items()})
    request_path = folder/'request.json'
    request_path.write_text(json.dumps(request, indent=2)+'\n', encoding='utf-8')
    output = folder/'inventory.json'
    result = subprocess.run([str(runtime), str(helper), str(request_path), str(output)], capture_output=True)
    (folder/'run.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:
        raise RuntimeError('Inventory failed; inspect '+str(folder/'run.log'))
    data = json.loads(output.read_text(encoding='utf-8'))
    if any(data['semantic_errors_by_code'][a] for a in data['semantic_errors_by_code']):
        raise RuntimeError('Semantic binding is incomplete; do not publish inventory as complete')
    manifest['original_metadata_references'] = {key: [dict(path=str(p), sha256=digest(p)) for p in value] for key, value in references.items()}
    publish(reference, data, manifest)
    print(json.dumps(dict(operation=data['operation'], game_sources=data['source_files'], syntax_kinds=data['syntax_kind_count'],
                          syntax_nodes=data['syntax_nodes'], features=data['features'], string_summary=data['string_summary']), ensure_ascii=True))


if __name__ == '__main__':
    main()
