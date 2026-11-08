# Emissor C# para C++: checkpoint da Fase 2

O emissor de produção é `translator/Translator.cs`. Roslyn vincula o fonte imutável da reconstrução; o emissor visita o AST e os símbolos, produz funções C++17 tipadas e recusa explicitamente operações que ainda não implementa. Não lê IL, não interpreta a DLL e não usa o motor Unity. As DLLs originais são apenas referências externas para a vinculação de tipos; não entram no build nativo.

## Reprodução

```powershell
python tools/translate --original-managed "<diretório externo Managed da reconstrução>" --compile
python translator/test_portable.py
python translator/test_lowering.py
python translator/test_split.py
python tools/translate --assembly Assembly-CSharp --bootstrap-main --original-managed "<diretório externo Managed da reconstrução>" --compile
python tools/translate --assembly Assembly-CSharp --diagnostics-only --original-managed "<diretório externo Managed da reconstrução>"
```

Os executáveis de Roslyn, .NET e MSVC já instalados são localizados pelos helpers do repositório. Nenhuma dependência é baixada por esses comandos. `build/translator/` recebe compiladores auxiliares, oráculos novos escritos a partir do fonte e executáveis de teste; esse diretório é ignorado pelo Git. Os dois arquivos sob `src/kairo/common/generated/` são regenerados, nunca editados manualmente.

## Estados medidos e limites

Os 254 símbolos classificados como portáveis na fronteira incluem 172 métodos, 42 tipos, 39 campos e uma propriedade; não são 254 métodos. O recibo `config/phase2-translation.json` separa métodos raiz solicitados de dependências transitivas. A contagem `compiled_method_count` exige compilar o C++ produzido com MSVC, não apenas visitar o AST.

O checkpoint atual tem 140 raízes, 223 métodos compilados e 1.561 casos diferenciais aprovados. Os auxiliares incluem funções descobertas em tentativas de resolução, mesmo quando a raiz daquela tentativa permaneceu recusada; não são 223 raízes. A compilação possui recibo com hash do compilador, objeto, comando e inputs antes/depois para detectar alterações concorrentes.

`config/phase2-portable-differential.json` compara chamadas ao C++ produzido com um programa C# novo, compilado a partir dos mesmos corpos fonte. O teste compara retorno, exceção, arrays mutados, campos de objetos e estado estático. Todos os dados de entrada são sintéticos. Não carrega uma DLL do jogo ou do Unity e não constitui teste funcional do jogo. Registra hashes do C++, do oráculo, do runtime, do compilador e do runner. As chamadas ocorrem no perfil DotNet, compatível com o oráculo .NET10; as diferenças históricas do Mono são verificadas pelos recibos independentes do runtime.

`config/phase2-lowering-fixtures.json` mede o emissor sobre fixtures sintéticas, separadamente do corpus real. Inclui wrap, divisão/resto, ordem de argumentos, ordem de store em array nulo, hierarquia de catch, finally com retorno/fallthrough, goto, switch integral, UTF-16, bounds e List. A fixture de closure é um controle negativo e deve ser recusada até existir lowering próprio.

`config/phase2-game-diagnostics.json` é uma tentativa integral de vincular e analisar as declarações fonte do Assembly-CSharp. Corpos baixados em memória nessa análise não são C++ gerado, compilado, executado nem métodos promovidos no inventário. A contagem de declarações fonte difere da contagem de métodos IL por causa de métodos gerados pelo compilador e accessors. A verificação dos 53 IDs de serviços importa todos os metadados (`MetadataImportOptions.All`), incluindo membros internos/privados; a presença do símbolo não comprova integração do hook.

`config/translator-syntax.csv` indica quais SyntaxKinds foram observados em corpos efetivamente emitidos. Tentativas recusadas não acrescentam cobertura. Não afirma suporte completo aos 123 kinds medidos; fixtures manuais do runtime também não são prova de cobertura do emissor.

## Representação atual

Inteiros usam helpers que definem wrap; float/double preservam larguras e bits de constantes. Strings usam o wrapper UTF-16 nullable do runtime, incluindo NUL e surrogates isolados. Arrays são referências com bounds; `{}` representa null e `::from({})` representa um array vazio válido. Houve uma falha inicial nessa distinção e o teste diferencial confirmou a correção.

Argumentos e operandos com avaliação não garantida pela sintaxe C++ ficam em IIFEs que capturam cada resultado na ordem do C#. Um store simples captura receptor/índice, depois RHS, depois verifica null/bounds; compound assignment faz a leitura antes do RHS.

Layouts, classes genéricas e herança fonte são gerados dos símbolos. Templates possuem instanciações concretas Int32 nos recibos; as outras especializações precisam de prova própria. `Vector<int>` e `FastVector<int>` são exercitados com conteúdo e mutações. Um construtor fonte possui uma factory que aloca o objeto completo e uma função de inicialização que aplica os campos derivados antes do corpo base, preserva this-chain e executa o corpo C#. A fixture confirma dispatch mais derivado dentro do construtor base. Não se converte essa lógica em construtor nativo C++ com dispatch diferente.

Slots virtuais são gerados para os corpos aceitos. Isso não declara cobertura de interfaces ou dispatch de tipos ainda não emitidos. Propriedades com corpos ou expressão possuem funções getter/setter, inclusive a API virtual de Stream; auto-properties e cenários restantes continuam diagnosticados. As fundações List, ArrayBase, Stream/MemoryStream, StringBuilder, Random e DateTime são chamadas por intrinsics limitados e testados.

Goto simples preserva o salto e o rótulo. Para satisfazer a restrição C++ de saltos sobre inicializações, somente as declarações de locais são colocadas no início da função; as expressões de inicialização permanecem na posição original. Nomes incluem a posição da declaração para distinguir variáveis homônimas de escopos diferentes.

Catch usa a hierarquia de exceções do runtime. A subclass EOFException é gerada apenas após validar no fonte seu construtor vazio de string que repassa à base conhecida. Finally usa `run_finally`, sem destrutor que lança durante unwinding. São aceitos apenas os casos de retorno completo ou fallthrough sem saída protegida ambígua; combinações de return/break/continue/goto saindo de finally permanecem diagnósticos explícitos. Closures, eventos, reflection geral e exceções como referências gerenciadas ainda não têm lowering completo.

Classes geradas expõem trace/release dos campos, chamando primeiro a base, para a fundação coletar ciclos reais. JRuntime.Gc conserva o argumento original 0; a inspeção autenticada de libmono Android nas duas arquiteturas comprovou MaxGeneration igual a zero. Isso não prova todos os comportamentos do GC. Threads futuros precisam do protocolo cooperativo do runtime; não se declara suspensão arbitrária de threads nem finalização completa de CLR.

Os intrinsics implementados incluem operações selecionadas de String, Math, BitConverter, Array.Copy, Encoding.UTF8, Convert.Base64, int.Parse e long.Parse. Parsing com cultura/provider/NumberStyles não suportados é recusado. Métodos culturalmente sensíveis permanecem pendentes da implementação de collation, preservando a decisão do usuário; não são substituídos por ordinal. Semânticas históricas divergentes são resolvidas no runtime por perfil, não reescrevendo a lógica do jogo.

## Conteúdo e geração do jogo

Literais string já presentes no fonte C# são permitidos pela decisão da Fase 2. Isso não autoriza embutir tabelas de assets nem a chave real usada pelo carregador. Arrays constantes do Assembly-CSharp usam `assets::baked_array<T>(id)` somente com prova pública de tipo/count/span/path do payload original autenticado; os valores permanecem privados nos assets. Arrays estáticos baked são recusados até existir inicialização lazy completa do tipo. Não se emite um oráculo C# duplicando esses dados.

`config/phase2-game-translation.json` agora mede C++ real, separadamente do diagnóstico em memória: 316 corpos compilados no checkpoint, zero executados. A factory de Main é gerada de seu construtor; quatro callbacks apenas declarados continuam falhando no linker. Nenhum callback ausente recebe um stub. A fonte do jogo está em `src/game/` e continua regenerável.

O emissor limita cada arquivo gerado a 900.000 bytes. Quando necessário, divide-o em includes .inc, preservando uma única TU e uma única definição de globals/templates; o wrapper de header mantém pragma once. O teste força limite de 32.768 bytes nos mesmos métodos e compara novamente todos os resultados. Payloads não são usados como mecanismo de divisão e tokens/literais maiores que o orçamento geram erro explícito.

O corpus ainda não fecha as dependências de coleções, streams, layouts herdados, dispatch e backend. Não houve primeiro boot, menu ou partida do C++ traduzido; memória residente e frame time do jogo continuam não medidos.
