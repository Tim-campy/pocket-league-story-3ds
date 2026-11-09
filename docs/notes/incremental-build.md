# Compilação incremental por tipo

O checkpoint `a418890` tinha um TU para todos os corpos do jogo e outro para
os portáveis. Os arquivos `.inc` apenas repartiam o tamanho físico; o compilador
continuava recebendo o corpo inteiro de cada assembly.

`translator/EmissionUnits.cs` separa declarações, definições e templates do
emissor sem modificar as expressões emitidas. Cada tipo declarante tem um
`.hpp` e um `.cpp`; arquivos maiores que o orçamento físico usam `.inc` locais
àquele tipo. Campos estáticos, inicialização preguiçosa e wrappers virtuais
permanecem no TU do respectivo tipo. Templates conservam definições em headers.
O header de compatibilidade agrega os tipos para consumidores existentes; os
TUs por tipo usam os headers de suas dependências, sem esse agregador.

As dependências incluem layout completo de bases/interfaces e structs por
valor, símbolos referenciados e os tipos das expressões ligados pelo Roslyn.
Estes últimos são necessários para receptores inferidos com `auto`, campos
herdados e retornos cujo tipo concreto não aparece na expressão C++.
Declarações antecipadas e o suporte semântico comum são compartilhados; a
lista global de declarações antecipadas ainda pode invalidar vários TUs ao
adicionar/remover um tipo. Uma alteração apenas de corpo não a modifica.

O escritor compara bytes antes de gravar. Regenerar conteúdo idêntico preserva
timestamps. Ninja/MSVC registra inclusões reais por `/showIncludes`, com o
prefixo localizado medido, e compila com dois jobs neste PC de 8 GB. Não há
cache baseado apenas numa lista presumida de headers.

## Medição isolada

`tools/benchmark_generated_build.py` arquiva somente os arquivos versionados de
`a418890` em `build/incremental-benchmark/`. A variante posterior usa o mesmo
lowerer e os mesmos adapters históricos, alterando só empacotamento/escrita.
Os IDs dos 1.720 corpos Game e dos 374 portáveis precisam permanecer iguais.
Compilador, `/O2`, `/fp:strict`, `/MD` e dois jobs são fixos.

| Corpus gerado, sem backend/link | Antes (s) | Depois (s) |
|---|---:|---:|
| Compilação completa dos objetos | 316,855456900 | 337,590406300 |
| Invalidar um tipo do jogo | 326,424002400 | 11,084364700 |

A invalidação da medição grande muda **somente o timestamp** do TU que contém
o tipo, mantendo os bytes e o comportamento. Ela mede trabalho de compilação
equivalente a uma alteração de corpo; não mede o tempo do front-end C# nem do
link. Na versão monolítica isso invalida todo o jogo. Na versão dividida o alvo
é `main.AppData`. Os valores são observações únicas deste PC, sem inferência de
tempo no 3DS. Não são os tempos de um build PC completo com dependências.

O primeiro ensaio dividido falhou por tipos concretos omitidos em acessos a
campos; o segundo revelou um receptor derivado acessando campo herdado. Logs e
objetos parciais foram conservados em `build/`; resultados com falha não entram
na coluna posterior. As fixtures menores já haviam passado, mostrando por que
a compilação do corpus completo também é necessária para essa mudança.

`translator/test_incremental.py` complementa a invalidação de timestamp com
uma **alteração real de corpo C# sintético**, regeneração, exigência de um único
CPP/objeto modificado e comparação da execução nativa com um oracle C# novo.
As fontes reconstruídas permanecem somente leitura.

## Cadência

Entre checkpoints: fixtures do emissor/build quando esse componente mudar e
testes da API afetada quando o backend mudar. A verificação completa roda antes
de publicar cada marco de tela. Uma fixture de geometria CPU aprovada não
qualifica o Android; as diferenças numéricas anteriores continuam UNKNOWN.

A medicao posterior compilou 227 TUs (225 tipos e dois anchors de compatibilidade). O teste de alteracao real passou em dez tipos: um CPP e um objeto mudaram, nenhum header mudou, e a execucao C++ coincidiu com o oracle C# (15,27). O build completo ficou 6,5% mais lento; o ciclo de main.AppData, 29,4 vezes mais rapido.
