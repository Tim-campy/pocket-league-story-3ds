# Rodada de custos do runtime após bbc270a

Documento de trabalho; resultados pendentes permanecem UNKNOWN. A ordem é
baseline sem elevação, coletor, auxiliares, carregamento ARM e confirmação
numérica em emulador ARM. Nenhuma lógica do jogo será alterada.

## Medição sem ETW

`src/main/thread_cpu_clock.hpp` usa GetThreadTimes (kernel + user, unidades
de 100 ns) e QueryThreadCycleTime. O host nulo registra ciclos brutos e
steady_clock separadamente. Não divide ciclos por GHz nominal. O intervalo
inclui atualização, desenho nulo e ponto seguro de fim de frame, excluindo
pacing e impressão do resultado. Não há contadores por método.

`tools/measure_null_thread_cpu.py` exige três repetições sequenciais de cada
janela, sem build durante as execuções. Antes de cada execução exige três
amostras de um segundo abaixo de 5% de uso total do host. Esse pré-requisito
não prova ausência de toda atividade posterior do sistema. Logs privados
preservam cada frame, hash do executável, replay e recibos.

GetThreadTimes pode quantizar amostras curtas; a contagem de zeros é
publicada. CPU da thread principal não é a soma dos intervalos de threads
do processo obtida por ETW na baseline (7,151805 / 9,035818666666666 ms).
Tempo monotônico inclui preempções e espera e nunca é rotulado CPU.

## Inspeção antes das mudanças

- Array<T>::Storage tem size e unique_ptr<T[]>; corpo e elementos usam
  alocações separadas. Array<T> também tem data_ e view_ para covariância.
- Heap::Impl::owner faz ranges.upper_bound: busca logarítmica, não percurso
  linear de todo o heap, mas ainda não é uma tabela de páginas.
- A marcação já usa vetor work explícito. Descritores enumeram referências;
  memória nativa declarada em retained_ranges serve à contabilidade, não
  vira automaticamente uma região de varredura conservadora.
- Os nós das árvores blocks/ranges e a reconstrução de ranges são candidatos
  medidos na rodada anterior à sobrecarga de new; a atribuição será renovada.

## JIT Mono x86

Saída verbosa obtida do Mono oficial do Unity, sem medição de tempo durante
a compilação concorrente. A primeira consulta selecionou por engano a
sobrecarga Vector3D de Camera.ConvertScreenToCamera e faltavam as/objdump.
A segunda selecionou int[] mas o clang recusou -gstabs. A terceira usou o
assembler e llvm-objdump do NDK já autorizado, retirando apenas as diretivas
de depuração STABS da cópia de montagem; os bytes de código são preservados.

Saída local em build/mono-jit-bbc270a-3: Camera.ConvertScreenToCamera(int[],
int[]) tem 184 bytes; Team.GetSum(int[][],int,int,bool), 337 bytes. Camera
usa comprimento em +0xc e dados em +0x10. Cada acesso de índice constante
tem comparação e desvio para exceção. A desreferência permite ao Mono
detectar nulo por falha de memória; o port C++ precisa preservar a exceção
sem invocar comportamento indefinido. A comparação posterior com C++ está
em [layout e código nativo dos arrays](array-native-comparison.md).

## Perfil do coletor e experimento de índice

`tools/profiling/build_gc_phase_probe.py` recompila apenas a unidade nativa
do runtime e religa os objetos autenticados do jogo. O perfil é opcional
(`PLS_GC_PHASE_PROFILE`), sem alterar o build normal. Os cronômetros por
busca acrescentam custo: as parcelas de busca são inclusivas e NÃO devem
ser somadas novamente às fases. Não são medições finais de latência.

Na partida original instrumentada, a última coleta observada tinha
30.296 objetos e 14.053.512 bytes retidos. Parcelas em ms:

| Parcela | Antes |
|---|---:|
| Registradores | 0,0007 |
| Cópia de pilhas | 0,0018 |
| Contabilidade antes | 6,1321 |
| Construção de índice | 10,5390 |
| Limpeza das marcas | 1,1974 |
| Raízes explícitas | 0,6803 |
| Varredura conservadora | 0,0522 |
| Marcação | 9,1132 |
| Remoção de mortos | 5,4964 |
| Contabilidade depois | 5,7111 |
| Destruição nativa | 0,3931 |
| Limpeza/retomada | 3,9865 |

O primeiro experimento mantém faixas dinâmicas em um vetor reutilizado,
indexado por páginas de 4 KiB, somente durante a parada cooperativa. A
tabela de páginas usa hashing com ocupação máxima de 50%; a busca dentro
da página é limitada ao número de faixas disjuntas que cabem em 4 KiB.
Isso é tempo esperado constante no tamanho do heap, não uma garantia de
pior caso constante para colisões do hash. A marcação guarda ponteiros
diretos aos registros, eliminando uma segunda busca em árvore.

Nesse primeiro experimento, a última coleta tinha 30.269 objetos e
14.049.612 bytes: índice 8,0212 ms, marcação 2,9919 ms e retomada
0,0468 ms. Os heaps conservadores não são exatamente iguais; os números
são diagnóstico, não uma comparação controlada de latência. A revisão
seguinte elimina ainda buscas redundantes por proprietário nas faixas
dos próprios objetos. A meta de 2 ms continua NÃO ATINGIDA.

O teste `page_index_boundaries` cobre 192 buffers, ponteiros internos em
múltiplas páginas, limite superior exclusivo, endereço ausente e reuso do
índice. Com ele, 62 verificações do coletor passam no PC.

As seis janelas da baseline foram concluídas, retomando as pendentes com
o executável e o recibo preservados. Recibo local:
`build/thread-cpu-bbc270a-baseline/measurement.json`.

| Estado | Menu CPU média (ms) | Partida CPU média (ms) | Maior coleta menu/partida (ms) |
|---|---:|---:|---:|
| Baseline, mesmo relógio desta rodada | 8,42013888888889 | 9,010416666666668 | 36,0817 / 39,2368 |
| Índice de páginas + registros densos | 8,715277777777777 | 8,59375 | 20,8794 / 20,2775 |
| Buffers fixos + retomada sem percurso inútil | 4,131944444444445 | 4,600694444444444 | 18,2487 / 20,1175 |

Não houve ganho demonstrado na média do menu nessa variante. A redução
nas pausas não equivale a redução proporcional no frame. `GetThreadTimes`
tem quantização de 15,625 ms nesta máquina: os p95 individuais são 15,625 ms,
com muitos frames zero; ciclos e relógio monotônico são preservados
separadamente. Não converter ciclos usando frequência nominal.

A tentativa seguinte de guardar as faixas imutáveis não resolveu o custo
por frame: uma janela de partida registrou 5,985118666666667 ms/frame na
contabilidade (contra 4,711401333333334 na variante intermediária). Não é
uma melhora. O perfil confirmou 20.433 buffers estáveis e 438 callbacks
mutáveis numa coleta; contabilidade após a coleta: 0,2239 ms, mas retomada:
2,794 ms. A retomada percorria todas as faixas mesmo sem faixas temporárias.
Foi removido esse percurso quando não existem registros explícitos;
a medição do efeito está na terceira linha da tabela, em três repetições
por cenário. Recibo: `build/thread-cpu-gc-fixed-accounting/measurement.json`.
Executável SHA-256: `f75fed24f20727fd3209838ec0fcadda13f554894cce3825a1e46c4feec63a59`.
As faixas dinâmicas já vivem apenas no
snapshot temporário. Nenhuma hipótese nova sobre threads foi introduzida.

Os testes do coletor agora têm 76 verificações, incluindo buffers fixos,
limite de heap, payload primitivo sem rastreamento e sobreposição de
faixas na contabilidade; todos passam. Isso não substitui a verificação
completa do checkpoint, ainda pendente.

A revisão seguinte enumera endereços fixos diretamente na construção do
índice, em vez de localizar cada proprietário pela tabela. A expectativa
de uma única enumeração em todo o ciclo de vida foi substituída por duas
asserções: nenhuma enumeração adicional na contabilização por frame e
uma enumeração de endereços na coleta. Isso não varre o conteúdo de buffers
primitivos. Os testes de ponteiros internos e preservação continuam passando.
No perfil da última coleta (30.247 objetos, 14.048.660 bytes), índice:
3,3363 ms; marcação: 2,6688 ms, dos quais 1,3057 ms medidos dentro das
buscas instrumentadas; remoção: 1,9949 ms; retomada: 0,0006 ms.
São tempos instrumentados, não a latência final sem instrumentação.

Uma tabela de posições com endereçamento aberto está em teste, substituindo
os nós individuais de `unordered_map`. O teste de 32 rodadas de criação,
remoção e reuso cobre tombstones e reconstrução da tabela. Total atual:
141 asserções passando. Resultado de desempenho dessa revisão: pendente.

## Cobertura do contador de alocações

A primeira janela instrumentada com a tabela plana registrou 64.500
solicitações em 300 frames de menu (215/frame), mas esse número ainda não
cobre o upstream padrão de PMR do MSVC. A fixture independente confirmou
0 chamadas observadas para `new_delete_resource()->allocate` e 1 para o
upstream definido no executável, tanto normal quanto alinhado. Portanto,
215 não é apresentado como total final. O upstream explícito foi integrado
antes da nova medição. O pool continuou agrupando 1.000 blocos em 9
solicitações; depois de liberar todos, precisou de 1 solicitação para
reutilizá-los, pois o MSVC devolve blocos completamente vazios ao upstream.

O perfil também atribuiu 9.300 solicitações, ou 31/frame, ao registro de
raízes (`GcRootProvider::GcRootProvider`). Esse registro passou a usar um
pool protegido pelo mesmo mutex existente. A medição posterior registrou
55.200 solicitações em 300 frames (184/frame), 7.380.000 bytes (24.600/frame).
O grupo de 31/frame do registro de raízes desapareceu. O upstream explícito
estava ativo: esse total não tem a omissão de PMR identificada acima.
Recibo: `build/null-pc-allocations-tracing/runs/1794405317891008000/sites.json`.
Nenhuma suposição de execução em uma só thread foi acrescentada.

## Preparação Android autorizada

O catálogo oficial de imagens confirma API 21, default, armeabi-v7a,
revisão 4. API 21 é o mínimo do APK numérico existente. O catálogo histórico
confirma SDK Tools 25.2.5 para Windows, candidato com emulação ARM antiga.
O teste foi executado em ARM/VFP. Resultados, falha inicial de recriação da
Activity e evidência do JIT estão em `android-arm-emulator-float.md`.

## Primeira correção medida no emissor

Um método que já executou a guarda de inicialização de seu próprio tipo
acessa diretamente seus campos estáticos. Construtores, inicializadores,
tipos genéricos e contratos externos ficaram fora dessa transformação.
Nenhuma inicialização com efeito observável foi antecipada.
As 1.400 observações das fixtures do emissor passaram; o jogo foi regenerado.

| Kernel | C++ anterior ns | C++ após correção ns | Mono na repetição ns |
|---|---:|---:|---:|
| Camera.ConvertScreenToCamera | 61,2375 | 35,1375 | 6,1375 |
| Team.Cal_evaCoatMulti9block | 607,29375 | 390,63125 | 35,55 |
| Team.GetSum | 447,21875 | 312 | 34,225 |
| GameManager.ChRect | 6,26875 | 5,84375 | 9,4875 |
| AppData.InsertGameObject | 377,85625 | 373,76875 | 85,55 |

Receitas: `build/hot-methods-flat-gc-steady/comparison.json` e
`build/hot-methods-owner-init-steady/comparison.json`. Medianas de cinco lotes
de 16.000 chamadas, depois de pelo menos 200 ms de aquecimento sem medição;
emulador e compilação encerrados. Saídas iguais às da variante anterior.
Permanecem as 11 diferenças conhecidas do Cal contra o Mono x86; a correção
de inicialização não alterou a aritmética.

## Arrays contíguos, em validação

O layout anterior tinha cabeçalho e `unique_ptr<T[]>` em alocações separadas.
O novo layout constrói um array C++ real por placement new após o cabeçalho,
alinhado ao tipo, numa única alocação alinhada a 64 bytes. O coletor registra
o tamanho completo e reconhece ponteiros para elementos como internos.
Os dados primitivos não são varridos como referências. Não há membro flexível
de um elemento nem aritmética de ponteiros fora de um objeto array.

Passaram 17 verificações específicas (incluindo limites, zero inicializado,
destruição parcial por exceção e ponteiros internos), 42 casos de arrays e
23 casos de GC. Uma tentativa de fixture com tipo artificial `alignas(128)`
foi recusada pelo MSVC na assinatura por valor de `set_Item`; não é um tipo
do C# suportado. A fixture de alinhamento cobre `double`, usado pelo jogo.
Também passaram os 60 casos semânticos com rastreamento e os 42 casos de
arrays no runtime histórico. A compilação completa do diagnóstico terminou.

O layout isolado **não demonstrou ganho de CPU nos kernels**. C++/Mono em ns:
Camera 35,34375/6,5875; Cal 415,4125/36,56875; GetSum 336,3/37,4125;
ChRect 6,1625/9,91875; InsertGameObject 365,95/99,80625. As 80 saídas
permaneceram iguais às da variante anterior (incluindo as 11 diferenças
conhecidas contra x86). Receita: `build/hot-methods-contiguous-arrays/comparison.json`.
O efeito sobre alocações e coleta ainda está sendo medido separadamente.

## Wrapper compacto e acesso verificado embutido

O wrapper de arrays primitivos passou a conter somente o ponteiro para o
armazenamento; o estado de covariância permanece apenas nos arrays de
referências que o exigem. Na compilação x64 examinada, o comprimento fica
no offset 88 e os elementos no offset 96, na mesma linha de cache, com a
alocação alinhada a 64 bytes. `at` emite a comparação unsigned de índice
com comprimento; falhas de nulo e de limite chamam auxiliares frios fora
de linha. Nenhuma dessas verificações foi retirada.

| Kernel | C++ ns | Mono x86 ns | Razão |
|---|---:|---:|---:|
| Camera.ConvertScreenToCamera | 17,60625 | 6,2125 | 2,834004024144869 |
| Team.Cal_evaCoatMulti9block | 146 | 34,3875 | 4,245728825881497 |
| Team.GetSum | 146,43125 | 34,83125 | 4,2040193791494715 |
| GameManager.ChRect | 6,1875 | 9,71875 | 0,6366559485530546 |
| AppData.InsertGameObject | 200,00625 | 81,15 | 2,4646487985212566 |

Recibo: `build/hot-methods-compact-checked-arrays/comparison.json`.
Esses tempos precedem a adoção da regra ARM de ponto flutuante. As 80 saídas
continuaram iguais às da variante C++ anterior; não são uma afirmação de
igualdade integral com o Mono x86.

## Índice persistente do coletor: resultado misto

As páginas dos corpos e buffers fixos são registradas na alocação; só os
buffers móveis precisam de índice reconstruído durante a coleta. Na sonda
com 17 coletas, a soma do tempo de construção do índice caiu de 86,1841 para
11,7009 ms. Porém marcação subiu de 47,5898 para 63,4703 ms e remoção de
115,9581 para 137,6509 ms. Isso **não demonstra atingir a meta de 2 ms**.
Os temporizadores internos acrescentam custo; as pausas finais precisam
ser medidas sem essa instrumentação. Recibos privados:
`build/gc-phase-contiguous-arrays/match/profile.json` e
`build/gc-phase-persistent-pages/match/profile.json`.

## Ponto flutuante

O teste no emulador Android ARM foi concluído e a regra foi adotada após
36/36 discriminantes e 144/144 observações dos kernels coincidirem com o
oráculo, incluindo 80 entradas distintas de Cal. A evidência do JIT e as
limitações estão em `android-arm-emulator-float.md`. A repetição da partida
com essa emissão é uma etapa separada; as medições acima não a antecipam.

## Base recompilada com a regra ARM

Executável `134449c0a31ead0da989a8632f63790f8108f5faf49198160b35a1acae7c80ea`.
Recibo: `build/thread-cpu-adopted-arm-fp/measurement.json`, seis janelas
completas, três repetições por cenário, sem compilação nem emulador concorrentes.

| Cenário/repetição | CPU média ms | CPU p95/máximo ms | Monotônico médio ms | Monotônico p95 ms | Monotônico máximo ms |
|---|---:|---:|---:|---:|---:|
| Menu 1 | 4,270833333333333 | 15,625 / 15,625 | 5,239397333333333 | 7,1396 | 7,974 |
| Menu 2 | 4,583333333333333 | 15,625 / 15,625 | 5,488678 | 7,1391 | 8,1435 |
| Menu 3 | 4,739583333333333 | 15,625 / 15,625 | 5,35217 | 7,0798 | 8,5657 |
| Partida 1 | 4,427083333333333 | 15,625 / 15,625 | 5,429551666666666 | 7,1968 | 8,0948 |
| Partida 2 | 4,479166666666667 | 15,625 / 15,625 | 5,332585 | 7,1944 | 8,6111 |
| Partida 3 | 4,583333333333333 | 15,625 / 15,625 | 5,677277999999999 | 7,2277 | 7,932 |

Média agregada de CPU: menu **4,53125 ms**, partida
**4,496527777777778 ms**. A quantização do `GetThreadTimes` explica o
p95/máximo de CPU e os frames com zero; o recibo também conserva os ciclos
de `QueryThreadCycleTime`, sem convertê-los pela frequência nominal. A
baseline histórica de 7,15/9,04 ms usava ETW; não é o mesmo método.
Houve **zero coletas nessas seis janelas**, com limiar PC de 8 MiB.
O carregamento da primeira repetição de menu fez nove coletas, somando
182,6606 ms; logo, a ausência de pausa na janela não cumpre a meta de 2 ms.

Os kernels dessa base reproduziram **80/80** estados finais do Mono x86.
C++/Mono, ns: Camera 18,1125/6,2125; Cal 139,43125/34,33125;
GetSum 149,10625/33,98125; ChRect 6,88125/9,51875;
InsertGameObject 169,10625/92,66875. Recibo:
`build/hot-methods-adopted-arm-fp/comparison.json`.

O piso independente foi atualizado para a mesma aritmética ARM e preservou
80/80 estados em cada uma das três execuções. Medianas em ns, na mesma ordem:
`10,3875; 84,75625; 48,6; 4,05625; 77,4875`,
`10,10625; 86,41875; 50,1125; 4,05; 107,6375`,
`10,3125; 84,6875; 50,38125; 4,0625; 110,65625`.
A variação de InsertGameObject é conservada, sem selecionar o melhor lote.
Esse piso usa uma projeção compacta dos dados e inicialização estática fora
da chamada; não representa o layout de produção. Recibo:
`build/true-floor-arm-fp/measurement.json`.

## Índice dos buffers móveis

Um índice separado evita percorrer todos os corpos em cada contabilização
de capacidade; usa as mesmas exclusões mútuas e paradas cooperativas.
As 141 asserções do motor passaram. Uma janela intermediária de menu
registrou CPU média 3,958333333333333 ms e tempo monotônico 5,199539666666667 ms
(`build/null-pc-tracing/runs/1794411711060989800`); é uma repetição, não uma
nova média de três execuções. A contabilidade ainda consumiu
631,4036 ms nos 300 frames. O perfil mostrou até 9.787 callbacks de buffers
móveis antes de uma coleta, contra 449 depois: a classificação concreta
desses objetos está sendo medida antes de outra alteração.

A sonda por tipo encontrou 6.489 listas de invocação de delegates entre
6.930 objetos com buffers móveis no fim do menu
(`build/gc-dynamic-types/menu/stderr.log`). Essas listas agora terminam de
construir seus buffers antes do registro no coletor. A lista anterior
continua sendo uma referência gerenciada viva durante a alocação de uma
combinação/subtração; não se depende de rastrear um vetor nativo temporário.
Também entraram na contabilidade os buffers não-SSO dos nomes dos métodos.
Passaram 21 asserções do runtime, 60 casos semânticos e 23 casos de GC.

Na sonda seguinte de 17 coletas, o tempo total de indexação de buffers
móveis caiu de 9,6227 para 0,417 ms, e a contabilidade anterior à marcação
de 16,6296 para 8,8001 ms. O resultado não foi universalmente positivo:
marcação foi de 69,0934 para 77,0932 ms e remoção de 146,0092 para
165,3238 ms. Os metadados dos buffers fixos também precisam ser removidos;
o perfil não autoriza declarar a meta de pausa cumprida. Recibos:
`build/gc-phase-dynamic-index/match/profile.json` e
`build/gc-phase-fixed-delegates/match/profile.json`.

Uma janela intermediária posterior aos delegates imutáveis registrou CPU
média **2,65625 ms**, tempo monotônico médio **3,439974333333333 ms**,
p95 monotônico **4,331 ms** e máximo **6,9121 ms** no menu. Foram 249
amostras de CPU zero e p95/máximo de CPU 15,625 ms, devido à resolução do
contador. A contabilidade de buffers consumiu 90,6287 ms nos 300 frames,
contra 631,4036 ms na janela anterior. Não houve coleta nessa janela.
É uma única execução, ainda não a repetição final em três lotes.
Recibo: `build/null-pc-tracing/runs/1794413055244350500`.

## Retenção conservadora no teste de índice

A tentativa de remover faixas mortas numa passagem ordenada foi retirada
após falhas intermitentes: duas em vinte execuções, contra zero em vinte
do controle. Uma repetição posterior do próprio controle também falhou
na sétima execução. Logo, o primeiro lote não provava regressão do candidato.
A sonda `build/gc-root-diagnosis/run-48.log` identificou a raiz extra no
offset 136 da cópia de pilha da thread principal em espera nativa: as 64
raízes explícitas passaram a 65 após essa varredura. O endereço coincidia
com o corpo de um objeto, e não vinha da busca pelos ponteiros de fim de
buffer usados pelo teste.

O teste de contagem exata agora desregistra temporariamente seu chamador
e usa uma thread coletora com a área reutilizada da pilha limpa. As raízes
explícitas e todas as verificações de limites permanecem. Passaram 100
execuções instrumentadas e 100 sem instrumentação, com 141 asserções por
execução. Isso corrige o isolamento do teste; não remove a varredura
conservadora do produto. A tentativa de remoção em lote continua retirada,
sem ganho de tempo atribuído a ela.

Um segundo candidato local, compactando os vetores de cada página numa
passagem, também não foi adotado: falhou na terceira execução (asserção
20 de `workers`); a variante diagnóstica falhou na sétima (asserção 49,
liberação final de `page_index_boundaries`). A causa dessas duas falhas
continua INCONCLUSIVA. Os 100 passes acima descrevem a base sem esse
candidato, não autorizam aprová-lo. Artefatos: `build/gc-bulk-pages-candidate/`.

## Limites constantes das conversões

O código nativo mostrou uma chamada a `ldexp` para calcular o mesmo limite
inteiro a cada conversão. O candidato usa `numeric_limits<To>::min()` como
constante exata e seu negativo como limite superior exclusivo. Preserva
NaN, infinitos, perfis históricos e verificações de faixa. Passaram os
160 casos diferenciais de `FloatingCastFixtures` com `/fp:strict`;
recibo `build/floating-cast-constant-bound/tracing-receipt.json`.

O lote seguinte (`build/hot-methods-constant-conversion/comparison.json`)
preservou 80/80 resultados. Tempos brutos medianos em ns:

| Kernel | C++ anterior registrado | C++ atual | Mono atual | C++/Mono atual |
|---|---:|---:|---:|---:|
| Camera | 18,1125 | 14,79375 | 6,2875 | 2,352882703777336 |
| Cal | 139,43125 | 128,40625 | 34,225 | 3,751826150474799 |
| GetSum | 149,10625 | 133,61875 | 34,95 | 3,823140200286123 |
| ChRect | 6,88125 | 6,90625 | 9,40625 | 0,7342192691029901 |
| InsertGameObject | 169,10625 | 179,18125 | 85,91875 | 2,0854731941514513 |

O lote anterior registrado nos kernels precede também o índice de buffers
dinâmicos e os delegates imutáveis; esta tabela é evolução entre bases,
não uma ablação que atribui toda diferença exclusivamente a `ldexp`.
ChRect e InsertGameObject não melhoraram nesse lote. O código nativo e
as medições de frame complementam a avaliação da conversão.

## Três repetições sem ETW — base de conversões constantes

Recibo `build/thread-cpu-constant-conversion/measurement.json`, binário
`19ece8e2589dc88578ea04b7b58f5ec7e8f6fd474aba669a8216082afe1d8550`.
Foram seis janelas de 300 frames, sempre sem compilação concorrente e após
três amostras consecutivas de CPU total da máquina abaixo de 5%.

| Tela/lote | CPU média ms | CPU p95/máximo ms | Monotônico médio ms | p95 ms | máximo ms |
|---|---:|---:|---:|---:|---:|
| Menu 1 | 1,875 | 15,625 / 15,625 | 3,2865926666666665 | 4,2382 | 5,6644 |
| Menu 2 | 2,7083333333333335 | 15,625 / 15,625 | 3,639411 | 4,7249 | 6,4707 |
| Menu 3 | 2,6041666666666665 | 15,625 / 15,625 | 3,4364513333333337 | 4,3134 | 7,1994 |
| Partida 1 | 1,71875 | 15,625 / 15,625 | 2,6014556666666664 | 3,3457 | 4,1868 |
| Partida 2 | 1,8229166666666667 | 15,625 / 15,625 | 2,6497966666666666 | 3,4942 | 4,1502 |
| Partida 3 | 1,9270833333333333 | 15,625 / 15,625 | 2,7093853333333335 | 3,5009 | 4,2465 |

Médias agregadas de CPU: **2,3958333333333335 ms no menu** e
**1,8229166666666667 ms na partida**. Médias monotônicas: respectivamente
**3,4541516666666667** e **2,653545888888889 ms**. Os p95/máximos de CPU
continuam limitados pela quantização de `GetThreadTimes`; o recibo conserva
todos os ciclos medidos, sem conversão por GHz nominal. Não interpretar
esses p95 como uma pausa real de 15,625 ms. A comparação com 7,15/9,04 ms
é entre métodos diferentes; a baseline sem ETW desta própria rodada foi
8,42013888888889/9,010416666666668 ms.

Nenhuma das seis janelas coletou. O `.text` atual ocupa **6.544.993 bytes
virtuais** no PE, medidos sem carregar ou modificar o executável. A ausência
de coleta em jogo estável não resolve as pausas no carregamento.

## Alocações restantes e fontes

A sonda de `new` da mesma base registrou **54.900 solicitações** e
**7.346.400 bytes** em 300 frames de menu: **183 solicitações/frame** e
**24.488 bytes/frame**. São 121 pilhas distintas, com conservação entre
totais por frame e por sítio, sem overflow da sonda. O recibo e as pilhas
resolvidas estão em `build/allocations-constant-conversion/menu/`.
Não se mediram novos contadores de alocações C# nesse relink; a razão
contra alocações do fonte permanece UNKNOWN para esta execução.

Os maiores sítios incluem o crescimento dos batches (2.400 solicitações,
1.411.200 bytes), consulta do catálogo de fontes (1.800/14.400), cópia do
texto para medir largura (1.800/62.400) e cópia da chave SHA de fonte
(1.800/144.000). As três últimas são temporários da API nativa.
Foram substituídas por consulta sem vetor, lookup heterogêneo da chave e
leitura dos espaços como pontos durante a medição UTF-16, respectivamente.
O cache continua possuindo sua chave; nenhuma referência a texto
temporário é guardada. A nova contagem de alocações ainda está pendente.

Passaram 216 comparações da transformação de espaços com a implementação
anterior, incluindo pares substitutos e substituto isolado, nos estilos,
fontes e tamanhos da fixture. O teste de mídia passou 18.157.180 asserções.
O teste da API, recompilado, passou 686 casos de oráculo e 7.966 asserções
nativas. O executor desse teste agora compila seus três alvos antes de
executar; uma chamada inicial havia reutilizado o binário antigo e não foi
aceita como prova das alterações.

## Partida completa após a regra ARM

A tentativa Release **40** executou **5.804 frames**, terminou uma partida
em **1–0**, mostrou o bônus e voltou à gestão. Capturas locais:
`build/pc-diagnostic-release/attempts/40/frames/frame-3960.bmp` (fim),
`frame-4020.bmp` (bônus) e `frame-5760.bmp` (gestão com mensagem).
O processo foi encerrado pelo limite solicitado de 310 segundos; não
houve lacuna de tradução detectada nem registro terminal incompleto.

O recibo de execução confirma 726 métodos do jogo e 197 portáveis
elegíveis executados. Essa cobertura não prova comportamento integral.
Há 25 traps na fotografia diagnóstica que não foram atingidos neste fluxo.
O binário é `61b3a2a2a1b9a666f6adbb3576e16048f52690db69abaaabd4ebd94490cdb122`;
recibo `build/pc-diagnostic-release/attempts/40/execution.json`.
A tentativa 39 havia terminado 0–0. Como a semente não foi fixada entre
essas execuções, a causa da mudança de placar/eventos é UNKNOWN; não se
atribui a diferença apenas ao modelo de ponto flutuante.

## Comparação isolada da limpeza por páginas

Na mesma base congelada, em execuções seriais precedidas de três amostras
de ociosidade, o perfil detalhado do controle registrou 18 coletas e o da
variante privada de remoção em lote registrou 16. Os totais abaixo incluem
carregamento; não são a duração de uma única coleta nem uma comparação
pareada de heaps idênticos.

| Etapa | Controle, ms acumulados | Variante, ms acumulados |
|---|---:|---:|
| Despejo de registradores | 0,0076 | 0,0072 |
| Cópia das pilhas | 0,114 | 0,043 |
| Espera cooperativa | 1,9223 | 2,1204 |
| Contabilidade inicial | 8,8913 | 9,085 |
| Índice de intervalos mutáveis | 0,47 | 0,3972 |
| Limpeza das marcas | 4,7722 | 4,2511 |
| Raízes explícitas | 8,8627 | 7,4068 |
| Varredura das pilhas | 5,6226 | 3,4036 |
| Marcação | 75,0357 | 60,266 |
| Remoção dos registros mortos | 161,7344 | 111,5718 |
| Contabilidade final | 3,4039 | 2,8792 |
| Destruição dos recursos | 23,7733 | 22,2742 |

Há relógios por busca de endereço nessa sonda; seu custo está incluído.
A variante não foi adotada com base nesses tempos. Os recibos são
`build/gc-control-frozen-probe/match/profile.json` e
`build/gc-bulk-pages-frozen-probe/match/profile.json`.
Uma sonda separada usa apenas o relógio total já existente, guarda os
registros em vetor fixo depois da medição e imprime ao encerrar o processo.
Ela evita confundir o perfil detalhado com a pausa final do produto.

O teste privado que separa raízes explícitas de raízes conservadoras passou
100 execuções, e uma segunda variante com verificação da identidade de
todos os 64 objetos esperados passou mais 100. Isso não substitui a suíte
de produção nem autoriza desprezar referências conservadoras: os testes
de registradores, pilhas e workers continuam sendo necessários.

### Pausas sem relógios por objeto e adoção

A sonda que apenas registra o relógio total existente terminou 17 coletas
em cada uma das três variantes, após ociosidade inicial e sem compilação
concorrente. Máximas: controle **47,6924 ms**, remoção em lote
**37,1566 ms**, lote mais retorno imediato para referência nula
**35,3158 ms**. Os heaps máximos antes da coleta foram, respectivamente,
30.514.517, 30.514.397 e 30.522.453 bytes. Os conjuntos conservadores e a
distribuição entre coletas não foram idênticos; não se atribui cada diferença
individual de pausa exclusivamente ao algoritmo. Recibos:
`build/gc-pause-control-frozen-v2/match/profile.json`,
`build/gc-pause-bulk-frozen/match/profile.json`,
`build/gc-pause-null-fast-frozen/match/profile.json`.

A variante com lote/nulo foi incorporada ao fonte. A suíte de produção
passou 100 execuções no PC; são pelo menos 401 asserções (a inspeção também
conta objetos retidos conservadoramente). O contador `last_explicit_roots`
separa raízes precisas de pilha/registradores. Os testes de fronteira
comprovam 64 raízes explícitas, a identidade de cada objeto esperado e que
nenhum objeto folha sem raiz sobrevive. Não exigem ausência de falsos
positivos, que o desenho conservador não promete.

No Azahar, os perfis New e antigo passaram **403 asserções** cada um,
incluindo pilhas de main/worker de 32.768 bytes e raízes em registradores:
`build/ctr-gc-fixture/bulk-null-new` e `bulk-null-old`, imagem
`e2ec4fe55521dabc9b64e72f0b7f3a3d4e33eaf67a0c655b3a4a547855440662`.
Isso é prova funcional da fixture, não tempo de hardware nem boot do jogo.
A meta de **menos de 2 ms no pior caso permanece NÃO ATINGIDA**.

### Ponte de formulários

A ponte gerada passou a manter uma referência precisa ao objeto retornado
pela consulta de `KairoBase`, e encaminhar as nove operações diretamente.
Continua havendo uma consulta e um adaptador novo por chamada; não há cache
nem pressuposto de thread única. Foram eliminados os nove delegates
internos, suas listas e chaves por consulta. O objeto original e seus
métodos não foram alterados. O gerador, não o C++ emitido, recebeu a mudança.
Passaram 18 asserções próprias de encaminhamento, identidade do alvo,
exceções e raiz exclusiva pelo adaptador; a contagem por frame e a partida
nessa base combinada ainda precisam ser renovadas.

### Primeira janela da base combinada

`build/direct-kairo-single-window/measurement.json` registra uma repetição
por cenário, ainda não as três finais. Imagem
`a74550d35cc5b0a0a9c95b0401f0634966040de1812eafde3166c4ea162ab77c`:

| Cenário | CPU média, ms | Ciclos médios | Monotônico médio / p95 / máximo, ms |
|---|---:|---:|---|
| Menu | 2,03125 | 8.380.202 | 3,217609 / 3,7656 / 4,599 |
| Partida | 1,4583333333333333 | 6.154.089,98 | 2,3715343333333334 / 3,0082 / 3,851 |

Cada janela contém 300 frames e nenhuma coleta. A quantização de
GetThreadTimes produziu 261/272 amostras zero; p95 e máximo de CPU foram
15,625 ms nos dois cenários. Esses percentis não resolvem a distribuição
real de CPU de frames tão curtos; ciclos e relógio monotônico são medidas
separadas, não uma conversão arbitrária de frequência.

A sonda separada de alocações contou **31.800 solicitações e 5.493.600
bytes** em 300 frames de menu: **106 solicitações e 18.312 bytes/frame**,
contra 183 e 24.488 na base anterior. Recibos e pilhas resolvidas em
`build/allocations-direct-kairo/measured`. Permanecem alocações de strings,
geometria, adaptadores e caminhos de assets. Identical-code folding pode
atribuir o nome de outra especialização a um endereço compartilhado;
nomes de templates isolados não provam a origem C# da alocação.

A sonda sem relógios por objeto registrou **17 coletas**, máximo
**35,8161 ms**, heap máximo antes de coleta **29.665.977 bytes**:
`build/gc-pause-direct-kairo/measured/profile.json`. A meta de 2 ms
continua não atingida. Não houve compilação concorrente nessas medições.

Nos kernels (`build/hot-methods-direct-kairo/comparison.json`), os 80
resultados coincidiram. C++ em ns/chamada, na ordem Camera, Cal, GetSum,
ChRect, Insert: **14,26875 / 135,14375 / 135,53125 / 7 / 226,2125**.
Mono: **6,125 / 37,39375 / 35,6875 / 9,275 / 89,06875**. Insert piorou
em relação aos 179,18125 ns anteriores, embora seu corpo gerado tenha
o mesmo hash. A causa dessa variação é UNKNOWN; não é ocultada por uma
média dos cinco kernels nem atribuída sem prova ao coletor.

O replay Release **41** renovou a execução da base combinada: **5.772
frames**, nenhum trap de tradução, nenhum registro terminal incompleto,
**725 métodos do jogo e 197 portáveis** com retorno registrado nessa
execução. A captura local do frame 3.960 mostra fim da partida, **0–1**;
o frame 5.760 mostra retorno à gestão. O processo encerrou pelo timeout
programado de 310 segundos, após esse retorno. Recibo de execução:
`bd5b81e5463039e08e81583ed26a9f172155260a508c892a3bf4a8adfcc1a7f8`;
imagem `f962620d75bcb4f6193987c29ba1d21483b4f74fa61393c7a3a4f3840b3c4bc7`.
Houve compilação ARM durante parte desse replay; ele comprova fluxo,
não desempenho. A semente aleatória não foi fixada e resultados anteriores
incluem 0–0 e 1–0: a causa de cada diferença de placar/eventos é UNKNOWN.
Não se atribui essa diferença exclusivamente à emissão de ponto flutuante.

### Variante privada: compactação dos registros

Uma segunda compactação, desta vez do vetor de registros e sua tabela de
posições, passou 100 execuções das fixtures. Em uma repetição ociosa das
17 coletas, sua média foi **11,36504705882353 ms**, contra
**11,233429411764705 ms** na base; a máxima foi **34,2828 ms**, contra
**35,8161 ms**. Recibo: `build/gc-pause-compact-records/measured/profile.json`.
Os heaps não eram idênticos, devido às raízes conservadoras. Não há ganho
geral demonstrado; **a variante não foi adotada** e não atende à meta de
2 ms. Seu fonte e as execuções permanecem privados para reproduzir o
resultado negativo, sem substituir o coletor de produção.

### Falha de nulo fora de linha

`nonnull` conserva o teste e chama o lançador frio já existente, com a mesma
`NullReferenceException`. As 21 verificações do runtime por rastreamento e
as 60 fixtures semânticas passaram. Os kernels da imagem recompilada
(`build/hot-methods-cold-null/comparison.json`) preservaram **80/80** resultados.

| Kernel | C++ anterior, ns | C++ atual, ns | Mono desta execução, ns |
|---|---:|---:|---:|
| Camera.ConvertScreenToCamera | 14,26875 | 14,83125 | 6,1375 |
| Team.Cal_evaCoatMulti9block | 135,14375 | 132,55 | 35,375 |
| Team.GetSum | 135,53125 | 138,575 | 34,925 |
| ChRect | 7 | 7,2625 | 10,01875 |
| AppData.InsertGameObject | 226,2125 | 183,175 | 83,89375 |

Não há ganho consistente demonstrado nos kernels. A variação de Insert
também já ocorreu entre imagens cujo corpo gerado era idêntico; sua causa
permanece UNKNOWN. O `.text` PC da base combinada passou de 6.545.761 para
6.544.289 bytes, mas a imagem inclui ainda a correção de leitura preparada
de fontes/áudio: essa diferença não isola o efeito de `nonnull`.

No ARM, Camera permanece com 548 bytes/126 instruções e GetSum com
624 bytes/146 instruções. ELF atualizado:
`9e5a25e3cce6b4e247d3e327293d5a3ef95e28f389beaad24efc9b60ff9995b6`;
recibo `build/arm-hot-asm-cold-null/receipt.json`. Contar instruções não
substitui a medição de tempo.

Uma tentativa da segunda repetição da partida, execução privada
`1794425600959357900`, terminou normalmente, mas foi **recusada** para
desempenho: dos 300 frames solicitados, 218 estavam na partida e 82 já
no menu. O mesmo replay foi repetido, sem mudar o critério. O log rejeitado
está em `build/thread-cpu-cold-null/2-match-rejected.log`; ele não integra
as médias. A semente não está fixada e a causa exata da diferença de duração
é UNKNOWN. As estatísticas publicadas ficam condicionadas a janelas que
permaneceram integralmente na tela esperada; não medem a duração de uma
partida nem suas transições.

### Série completa sem ETW da base combinada

Imagem `895dae63092771f746d9400446e6681627cbcf1350a9b06ed3b6e0faa0b4b402`,
recibo `build/thread-cpu-cold-null/measurement.json`: três repetições válidas
de 300 frames por cenário, serialmente e sem compilação/emulador concorrente.
Percentis abaixo calculados sobre os 900 frames de cada cenário, não sobre
as três médias.

| Cenário | CPU média / p95 / máximo, ms | Monotônico média / p95 / máximo, ms | Ciclos média / p95 / máximo |
|---|---|---|---|
| Menu | 1,6840277777777777 / 15,625 / 15,625 | 2,663107222222222 / 3,4623 / 4,6951 | 6864146,382222222 / 8319092 / 11014619 |
| Partida | 1,6319444444444444 / 15,625 / 15,625 | 2,335065555555556 / 3,0414 / 4,1528 | 6036964,23 / 7612954 / 10877261 |

Zero coletas nas seis janelas. GetThreadTimes teve 803 amostras zero no menu
e 806 na partida; seu p95/máximo quantizado não resolve frames curtos.
Os relógios monotônicos e ciclos são publicados separadamente. A baseline
histórica 7,15/9,04 ms utilizava outro método; a baseline bbc270a medida
nesta rodada pelo mesmo método foi 8,42013888888889/9,010416666666668 ms.
A rejeição e repetição descritas acima permanecem como limitação explícita.
Executável, PDB, recibo e cabeçalho exato dessa imagem estão preservados em
`build/cold-null-thread-clock/`, com hashes em `archive.json`.

### Perfil por fronteiras de fase

`build/gc-phase-boundaries-cold-null/measured/profile.json` registra 17 coletas
sem cronômetros por endereço nem inventário detalhado durante a contabilidade.
A maior soma de fases foi 36,2978 ms, com 132.217 objetos e 29.659.982 bytes
antes da coleta. Parcelas em ms: registradores 0,0001; cópia de pilha 0,0005;
rendezvous 0,0001; contabilidade anterior 0,0624; índice 0,0121; limpeza de
marcas 0,9344; raízes 0,1443; varredura de pilha 0,038; marcação 2,2058;
remoção dos mortos 27,3642; contabilidade posterior 0,1373; destruição nativa
5,3978; retomada 0,0007; setup 0,0001. Busca por endereço está inclusa nas
fases de raízes/marcação, sem custo isolado medido nessa sonda.

A remoção/destruição, não a criação do índice nem a contabilidade, domina
essa pausa. A meta abaixo de 2 ms permanece **não cumprida**. Descritores
continuam varrendo apenas campos com ponteiros; pixels, áudio e primitivas
não se tornam regiões conservadoras por serem contabilizados. A medição
por fases é diagnóstico separado da série de CPU sem instrumentação.

### Regressão encontrada pela verificação completa

O teste diferencial portável abortou com `0xc0000409` ao alcançar os casos
de `ByteListOutputStream._init`, incluindo comprimento `Int32.MaxValue`.
O oráculo Mono rejeita o array de arrays correspondente com
`OutOfMemoryException`. O limite preventivo da alocação contígua só
classificava `Ref<T>` como elemento de referência; faltavam `Array<T>`,
`String` e `Delegate<Sig>`, que também ocupam uma referência no ABI gerenciado
de 32 bits. Esses wrappers agora usam o mesmo limite antes de alocar.
As 24 asserções do runtime incluem os três casos adicionais e passaram.
Nenhuma checagem foi retirada. A série de desempenho acima antecede essa
correção; não se declara que o novo hash foi medido sem uma nova execução.

### Experimento privado de capacidade dos metadados

`build/gc-trim-metadata-candidate` devolve vetores auxiliares excessivamente
grandes somente depois da destruição, ainda com os mutadores parados e o
mutex do heap adquirido. Não move objetos gerenciados. Uma falha na tentativa
opcional de compactar a capacidade preserva a estrutura anterior. A variante
não está adotada.

Passaram 100 execuções das fixtures e uma fixture maior com 6.470 asserções,
três lotes de 132.217 nós e verificação dos endereços/valores dos sobreviventes.
Nessa fixture PC, 1.010 nós sobreviventes permitiram reduzir a capacidade de
registros de 138.255 (primeiro lote) ou 196.515 (demais) para 1.010, e as
posições de 524.288 para 4.096. Cada registro nessa arquitetura mede 112 bytes,
cada posição 16. Isso prova o exercício da redução no teste sintético; não
atribui a ela a memória do jogo nem demonstra ainda melhora de latência.
Fonte candidato: `1149cac4833c9b12bbb607c6fb5a53f637eba69f303507e849bcb07b1bc23f93`.


### Checkpoint e sondas ARM posteriores

Checkpoint `d6b11a4`: 122 checks completos passaram; os hashes do snapshot
verificado coincidiram com o fonte antes do commit. O gate de conteudo do
indice passou com 1.310 entradas. O historico de tentativas foi serializado
sem espacos (2.034.730 para 1.554.631 bytes), preservando integralmente o
objeto JSON; nenhum estado ou resultado foi removido. Os recibos foram
renovados pelo verificador com o snapshot de codigo inalterado.

A variante privada de reducao de capacidade, imagem
`11aa061a1db3189d2f331cf00c8919d11b3e4846750b5dfc84b4ee8aa3f8486b`,
falhou antes do titulo com `std::bad_alloc` no perfil New a 100%, zero frames
qualificados. Na primeira coleta observada, registros/posicoes/vetor de
mortos cairam de 4.898.048 para 760.240 bytes; perto da falha retinham
7.468.320 bytes. O alocador informou 94.181.496 bytes usados. Logo, liberar
essa capacidade nao basta para resolver o boot. A variante permanece nao
adotada.

Uma segunda sonda contou tambem o upstream PMR: no ultimo evento de GC,
4.360.480 bytes de pool, 4.588.096 de registros/posicoes e 2.879.104 do vetor
de mortos, com 13.382.422 bytes de corpos e payloads contabilizados. Esses
numeros sao daquele evento, nao um snapshot simultaneo ao erro posterior.
As capacidades de buckets/paginas sao subconjuntos do pool, nao somas extras.

A sonda por etapa (`88e887c27b60ad985c5f3c029d0ed4607853827e7ea7c24dc75cf1d43b092f29`)
mostrou 28.893.376 bytes no alocador no frame de boot 480, incluindo
12.400.984 bytes de texturas registradas, 65.536 de fontes, zero de audio e
2.411.816 de heap gerenciado enumerado. Depois falhou com 93.999.856 bytes
no alocador e 38.488 objetos registrados. As categorias enumeradas nao sao
RSS nem incluem todo overhead nativo. O salto posterior ainda requer
identificacao do sitio de alocacao. Nenhum desses testes chegou ao titulo,
menu ou partida, e nao qualifica o benchmark de hardware.


### Encerramento solicitado pelo usu?rio

Parada solicitada antes de novas execu??es. Nenhum compilador, diagn?stico ou
emulador desta rodada permanece em execu??o. Ficaram prontas, mas N?O EXECUTADAS:

- `build/arm-allocation-failure-probe/null_game.3dsx`, SHA-256
  `274372e834e147cf80a54899cd605acc8c81c700298156cc0aed93320d59a912`:
  sonda privada com pilha da aloca??o que falhar, reutilizando objetos
  autenticados da base anterior ? corre??o do limite de arrays grandes.
- `build/gc-sweep-detail-deferred/out/gc_phase_game.exe`, SHA-256
  `c469b72f93aafd4aab274abc1379f210209f0a96a878eeffe1d6e257d80a295f`:
  detalhamento privado da remo??o de mortos, com impress?o fora dos trechos
  cronometrados. A primeira sonda (`gc-sweep-detail`) executou 17 coletas,
  mas imprimia dentro da fase; seus tempos n?o substituem a medi??o de lat?ncia.

As sondas s?o experimentos locais, n?o c?digo adotado nem benchmark de
hardware qualificado. A pr?xima rodada deve come?ar pela pilha da falha ARM
e pelo detalhamento diferido, sem repetir sondas j? conclu?das.
