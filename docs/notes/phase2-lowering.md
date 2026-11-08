# Emissor C# para C++: checkpoint da Fase 2

O emissor de produção é `translator/Translator.cs`. Roslyn vincula o fonte imutável da reconstrução; o emissor visita o AST e os símbolos, produz funções C++17 tipadas e recusa explicitamente operações que ainda não implementa. Não lê IL, não interpreta a DLL e não usa o motor Unity. As DLLs originais são apenas referências externas para a vinculação de tipos; não entram no build nativo.

## Reprodução

```powershell
python tools/translate --original-managed "<diretório externo Managed da reconstrução>" --compile
python translator/test_portable.py
python translator/test_lowering.py
python tools/translate --assembly Assembly-CSharp --diagnostics-only --original-managed "<diretório externo Managed da reconstrução>"
```

Os executáveis de Roslyn, .NET e MSVC já instalados são localizados pelos helpers do repositório. Nenhuma dependência é baixada por esses comandos. `build/translator/` recebe compiladores auxiliares, oráculos novos escritos a partir do fonte e executáveis de teste; esse diretório é ignorado pelo Git. Os dois arquivos sob `src/kairo/common/generated/` são regenerados, nunca editados manualmente.

## Estados medidos e limites

Os 254 símbolos classificados como portáveis na fronteira incluem 172 métodos, 42 tipos, 39 campos e uma propriedade; não são 254 métodos. O recibo `config/phase2-translation.json` separa métodos raiz solicitados de dependências transitivas. A contagem `compiled_method_count` exige compilar o C++ produzido com MSVC, não apenas visitar o AST.

`config/phase2-portable-differential.json` compara chamadas ao C++ produzido com um programa C# novo, compilado a partir dos mesmos corpos fonte. O teste compara retorno, exceção, arrays mutados, campos de objetos e estado estático. Todos os dados de entrada são sintéticos. Não carrega uma DLL do jogo ou do Unity e não constitui teste funcional do jogo. Registra hashes do C++, do oráculo, do runtime, do compilador e do runner. As chamadas ocorrem no perfil DotNet, compatível com o oráculo .NET10; as diferenças históricas do Mono são verificadas pelos recibos independentes do runtime.

`config/phase2-lowering-fixtures.json` mede o emissor sobre fixtures sintéticas, separadamente do corpus real. Inclui wrap, divisão/resto, ordem de argumentos, ordem de store em array nulo, hierarquia de catch, finally com retorno/fallthrough, goto, switch integral, UTF-16, bounds e List. A fixture de closure é um controle negativo e deve ser recusada até existir lowering próprio.

`config/phase2-game-diagnostics.json` é uma tentativa integral de vincular e analisar as declarações fonte do Assembly-CSharp. Corpos baixados em memória nessa análise não são C++ gerado, compilado, executado nem métodos promovidos no inventário. A contagem de declarações fonte difere da contagem de métodos IL por causa de métodos gerados pelo compilador e accessors. A verificação dos 53 IDs de serviços importa todos os metadados (`MetadataImportOptions.All`), incluindo membros internos/privados; a presença do símbolo não comprova integração do hook.

`config/translator-syntax.csv` indica quais SyntaxKinds foram observados em corpos efetivamente emitidos. Tentativas recusadas não acrescentam cobertura. Não afirma suporte completo aos 123 kinds medidos; fixtures manuais do runtime também não são prova de cobertura do emissor.

## Representação atual

Inteiros usam helpers que definem wrap; float/double preservam larguras e bits de constantes. Strings usam o wrapper UTF-16 nullable do runtime, incluindo NUL e surrogates isolados. Arrays são referências com bounds; `{}` representa null e `::from({})` representa um array vazio válido. Houve uma falha inicial nessa distinção e o teste diferencial confirmou a correção.

Argumentos e operandos com avaliação não garantida pela sintaxe C++ ficam em IIFEs que capturam cada resultado na ordem do C#. Um store simples captura receptor/índice, depois RHS, depois verifica null/bounds; compound assignment faz a leitura antes do RHS.

Classes fonte aceitas são subclasses diretas de `System.Object`, não genéricas. O layout é gerado dos campos. Um construtor fonte é uma função explícita: aloca o objeto completo, aplica os inicializadores de campos e executa o corpo C#. Não é convertido em construtor nativo C++ com semântica de dispatch diferente. Herança própria, dispatch virtual/interfaces, classes genéricas e constructor chaining continuam recusados; a fundação `List<T>` do framework já tem intrinsics limitados e testados. Isso não implica que `Vector<T>` e `FastVector<T>` estejam traduzidos.

Goto simples preserva o salto e o rótulo. Para satisfazer a restrição C++ de saltos sobre inicializações, somente as declarações de locais são colocadas no início da função; as expressões de inicialização permanecem na posição original. Nomes incluem a posição da declaração para distinguir variáveis homônimas de escopos diferentes.

Catch usa a hierarquia de exceções do runtime. Finally usa `run_finally`, sem destrutor que lança durante unwinding. São aceitos apenas os casos de retorno completo ou fallthrough sem saída protegida ambígua; combinações de return/break/continue/goto saindo de finally permanecem diagnósticos explícitos. Closures, eventos, propriedades fonte e reflection ainda não têm lowering de produção completo.

Os intrinsics implementados incluem operações selecionadas de String, Math, BitConverter, Array.Copy, Encoding.UTF8, Convert.Base64, int.Parse e long.Parse. Parsing com cultura/provider/NumberStyles não suportados é recusado. Semânticas históricas divergentes são resolvidas no runtime por perfil, não reescrevendo a lógica do jogo.

## Conteúdo e geração do jogo

Literais string já presentes no fonte C# são permitidos pela decisão da Fase 2. Isso não autoriza embutir tabelas de assets nem a chave real usada pelo carregador. A análise do Assembly-CSharp bloqueia conservadoramente inicializadores numéricos antes de emissão; eles precisam de classificação e, quando forem dados/chaves do pipeline, de um adaptador local explícito. Nenhum corpo do jogo foi promovido por essa análise.

O corpus ainda não fecha as dependências de coleções, streams, layouts herdados, dispatch e backend. Não houve primeiro boot, menu ou partida do C++ traduzido; memória residente e frame time do jogo continuam não medidos.
