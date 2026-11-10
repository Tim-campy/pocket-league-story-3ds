# Atribuição de alocações do runtime

O checkpoint `b2acf47` conserva a baseline e consolida o backend nulo. As
medições abaixo pertencem a execuções separadas das medições de CPU: capturar
pilhas altera o custo do programa. Não comparar os seus tempos com a baseline.

## Janelas reproduzidas

São 300 frames de gestão (661–960, save local do diagnóstico 25, entradas do
34) ou de partida (1201–1500, save do 31, entradas do 35). Cada execução parte
de uma cópia nova do save. APK, catálogo, executável, fontes, entradas e logs
são vinculados por hashes nos recibos privados. Os saves/assets não vêm no Git.

| Execução | Gestão: solicitações C++ | Gestão: bytes solicitados | Partida: solicitações C++ | Partida: bytes solicitados |
|---|---:|---:|---:|---:|
| Baseline anterior | 4.134.181 | 157.800.168 | 3.781.148 | 140.525.988 |
| Após consolidação, antes de delegates/literais | 368.318 | 34.840.456 | 318.983 | 27.102.496 |
| Delegates, literais, passes e adaptador cultural | 84.000 | 10.612.800 | 47.563 | 6.580.264 |

A segunda linha foi medida em `1794282830780431100` e
`1794282898488779200`, sob `build/null-pc-allocations/runs/`. Esses números
não incluem ainda as mudanças de invocation list, literais, adaptador cultural
e vetor temporário de passes. Eles também não provam ganho proporcional de CPU.

A terceira linha corresponde às execuções `1794324766501533700` e
`1794324835438812200`. O executável tem SHA-256
`af3bb4cf4dadfc54756a3f481ea143ffa842c2ce7ea20895153840be12b67716`.
As 300 observações ficaram no formulário 4 na gestão e no formulário 2 na
partida. Houve zero coletas de ciclos e zero pausas de coleta registradas
nessas duas janelas; isso não significa ausência de destruição por refcount.
São 280 solicitações/frame na gestão e 47.563/300 na partida.
Os [vinte maiores sítios](runtime-allocation-top20.md) estão separados por
contagem/bytes e incluem a classificação e suas incertezas.

O contador do fonte observou 11.100 operações na gestão: 6.300 conversões
genéricas, 3.900 concatenações, 300 arrays e 600 objetos. Na partida foram
12.062: 10.810 conversões genéricas, 352 arrays e 900 objetos. Uma conversão
genérica para Object não prova boxing que aloca; não se usa essa soma como
uma alegação de contagem exata de alocações do original.

## O que os contadores significam

`allocation_probe.cpp` intercepta solicitações de `new`, `new[]` e formas
alinhadas. Não intercepta todo `malloc` de bibliotecas C. A tabela de pilhas
tem armazenamento fixo; overflow ou entrada recursiva invalida a atribuição.
O analisador exige conservação entre sítios e as 300 janelas e usa o PDB do
executável cujo hash consta do recibo. ICF pode dar ao mesmo endereço o nome
de outra especialização de template; arquivo/linha e a pilha acompanham o nome.

O emissor observa operações **concluídas** do fonte reconstruído: criação de
objeto/array, boxing, concatenação, avaliação de delegate/closure e expansão
de `params`. Adaptadores C# criados para o host são excluídos pelo caminho.
O observador conserva o resultado por encaminhamento de referência e não
cria outra closure. Em builds sem `PLS_ALLOCATION_PROBE`, não há contadores.
Uma expressão que lança não chega ao observador; o teste conserva e compara
o caminho de exceção com o Mono, mas não o conta como operação concluída.

**Razão de operações não é automaticamente razão de alocações do CLR.**
Uma closure pode compartilhar display class, um delegate pode ser reutilizado,
boxing genérico pode não alocar, concatenações podem ser combinadas, e os
internos nativos da API/BCL não estão instrumentados como C# traduzido.
O relatório mantém essas limitações e a equivalência total como `UNKNOWN`,
separadamente da razão medida `C++ new / operações do fonte instrumentado`.

## Mudanças e verificações específicas

- Invocation list de delegate: armazenamento gerenciado imutável compartilhado;
  invocar retém uma referência em vez de copiar bindings e strings. Fixture:
  10.000 invocações, zero alocações; alteração durante despacho, combine/remove,
  ciclos e coleta dentro de callback são exercitados. Refcounts seguem atômicos.
- Literais: armazenamento UTF-16 internado, inicializado uma vez por ocorrência
  gerada; strings dinâmicas não são internadas. Testes incluem identidade entre
  ocorrências, NUL, surrogate isolado e inicialização concorrente. 20.000 leituras
  aquecidas não alocam. Os 1.400 casos do emissor passam.
- `MeshManager.BeginPrimitive`: no máximo dois passes; o vetor temporário foi
  substituído por array fixo de dois elementos, sem mudar os passes emitidos.
  Os 38 casos de desenho offscreen passam.
- Colação: o adaptador `Str` referencia o armazenamento imutável existente,
  com ownership compartilhado, em vez de copiar os code units para outra string.
  Passaram 120 casos históricos, 25.704 observações de borda e 589.824 casos BMP;
  nenhuma regra cultural ou tabela mudou.

A primeira abordagem do contador usava macros aninhadas em torno de closures
e provocou erro interno C1001 no MSVC. Trocar o modo do preprocessor ou retirar
parênteses não resolveu. Essa abordagem foi abandonada; o observador simples
passou nos 1.400 casos. A primeira execução do oráculo de alocações também
falhou por ausência de `MONO_PATH`; foi corrigido o ambiente do teste, não a
semântica nem o resultado esperado.

## Alocadores candidatos, ainda sem adoção

Uma arena por frame só serve para scratch cuja vida termina comprovadamente
no frame. Objetos gerenciados podem escapar por campos, delegates, saves ou
workers; não serão colocados nessa arena por suposição. Pools por tamanho
para nós do registro/control blocks podem reduzir solicitações ao heap sem
alterar a vida do objeto, mas precisam de limite de retenção, sincronização e
medição de memória no ARM11 antes de adoção. Não se remove bounds check.
