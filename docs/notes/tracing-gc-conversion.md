# Conversão do runtime para rastreamento

Estado de trabalho: **rastreamento selecionado por padrão; verificação completa
local aprovada em 113 de 113 checks**. Publicação remota ainda pendente de acesso
ao GitHub. Evidência: `config/phase2-verification.json`, `complete: true`.
A autorização posterior ao checkpoint d3420d2 substituiu o critério de parada
do protótipo: a razão C++/Mono não bloqueia a conversão. O relatório do protótipo
continua como evidência histórica, não como decisão vigente.

## Representação e raízes

`src/runtime/tracing_gc.*` implementa um heap não móvel com mapas exatos por
tipo e busca de faixas para ponteiros internos. `managed_reference.hpp` possui
`Ref<T> = T*` por padrão. A opção explícita zero permanece para comparação
histórica; os builds PC e nulo selecionam rastreamento. Nenhuma medição do
executável antigo é atribuída à variante nova. As receitas independentes
ligam o motor através da unidade `semantic_runtime.cpp`; o teste isolado do
motor continua compilando `tracing_gc.cpp` diretamente.

As referências no heap são visitadas pelos descritores tipados, que encaminham
para `trace_edges` gerado pelo tradutor. Campos escalares não são interpretados
como ponteiros. Arrays e buffers separados têm faixas de endereços associadas
ao objeto dono; as faixas dinâmicas são reconstruídas com os mutadores parados.

Os campos estáticos gerados registram um provedor de raízes antes do
inicializador do tipo. Filas nativas não são heaps conservadores: delegates e
resultados em futures precisam de mapas explícitos. `UiInvocation` mantém esses
campos visíveis até a fila e o chamador deixarem de possuir a invocação.
`Delegate::from_native` declara os valores gerenciados capturados pelos callbacks
da API; não tenta adivinhar o conteúdo de `std::function`.

## Threads e registradores

Cada mutador registra os limites reais da sua pilha. No Windows eles vêm de
`GetCurrentThreadStackLimits`; `RtlCaptureContext` fornece os registradores x64.
A fixture em assembly mantém a única referência pertencente à fixture em RBX
na fronteira da chamada de coleta, limpa a área abandonada do alocador e testa
a sobrevivência por registrador ou spill exigido pela ABI. Isso ainda não
comprova o ABI ARM11.

Workers param ao alcançar um safepoint ou antes de alocar. A coleta espera
todos os mutadores cooperarem. Esperas nativas copiam raízes de pilha e
registradores antes de bloquear: a thread nativa pode usar a pilha enquanto a
coleta examina a cópia imutável. A reentrada aguarda o fim da coleta. Nenhuma
thread é suspensa externamente. Timeout no rendezvous aborta a coleta antes
da varredura e libera os workers já parados.

Alocações feitas por construtores aninhados são raízes temporárias até o
objeto externo ser registrado com seu descritor. Não se depende de varrer
conservadoramente um objeto parcialmente construído no heap.

## Contrato do fonte

O inventário reproduzível é `python tools/inventory_gc_contract.py`, com
localizações e hashes em `config/gc-source-contract.json`. Não há referências
fracas nem finalizadores no fonte do jogo/KairoLibrary. As identidades fracas
internas existem apenas para caches do runtime, sem implementar uma nova API
do jogo. Os testes sintéticos não são evidência de uso dessas APIs pelo jogo.

`java.lang.JRuntime.Gc` chama `GC.Collect(0)`;
`java.lang.JSystem.Gc` encaminha para ele. Há nove chamadas diretas a
`JSystem.Gc`, registradas no inventário. Elas permanecem pontos de coleta.
As doze declarações explícitas de `IDisposable` não abrangem todas as liberações
por herança ou convenção: Image, ResourceManager, SoundBase e Font também
exigem auditoria das operações de liberação.

O contrato é preservar `Image.Unuse/Dispose`, os caminhos de ResourceManager,
`SoundBase.Dispose` e `Offscreen.Dispose/OnDestroy` no momento original.
Os testes do motor isolado verificam liberação explícita de um recurso próprio
e liberação durante coleta; não constituem medição de texturas do jogo.

## Evidência parcial e limites

- Motor independente: 42 assertions em Release, incluindo ciclo, escalar que
  parece ponteiro, ponteiro interno, registro, workers, coletas concorrentes,
  exceção durante marcação, limite de heap e timeout sem varredura.
- Runtime com ponteiros: 60 casos diferenciais de semântica e 66 de coleções
  contra os mesmos oráculos; recibos separados sob `build/`.
- UI com ponteiros: 29 assertions, incluindo 17 coletas durante despacho/espera.
- As duas representações passaram nos 1.400 casos/200 métodos das fixtures do
  emissor durante a integração. O recibo da variante com ponteiros fica em
  `build/tracing-lowering/receipt.json`. Alterações posteriores suspendem sua
  validade para o checkpoint até a repetição com os hashes atuais.
- A compilação do jogo revelou um `std::weak_ptr` residual no produtor dos
  callbacks de bootstrap. O produtor foi corrigido para `DelegateCapture`,
  cujo alvo é visitado pelo mapa do delegate; os fontes foram regenerados.
  Isso ainda não comprova execução do jogo.
- Raízes em armazenamento nativo de exceções/retornos protegidos e callbacks:
  seis assertions Release passaram em `build/tracing-runtime/receipt.json`.
  O worker produtor termina antes da coleta, impedindo que sua pilha esconda
  a ausência do mapa. Cópias de `ReturnFlow` e `ManagedUnwind` registram raízes
  próprias, em vez de tornar esses objetos C++ não copiáveis.

## Falhas encontradas durante a integração

1. A primeira execução com ponteiros passou pelo bootstrap e primeiro frame,
   mas sofreu violação de acesso em `image_lifetime.cpp::area`. A pilha do
   depurador mostrou a leitura de uma invocation list já liberada. Os cinco
   delegates de `ImageRuntimeBindings` não eram raízes. Foram registrados,
   junto com os seis de `GraphicsRuntimeBindings`, que usam o mesmo padrão.
   A regressão ganhou um caso no teste do backend nulo: instalar os callbacks
   em um worker, terminar esse worker, coletar e invocar os callbacks.
2. A execução seguinte chegou ao formulário 1 e à região do frame 181, mas
   também sofreu violação de acesso. Uma reprodução sob depurador terminou
   antes com a exceção tratada de ausência de presenter de diálogo no host
   nulo. A causa dessa segunda falha ainda não está comprovada.
3. A auditoria encontrou seis campos agrupados sem inicialização explícita:
   `FormManagerBase.current_/loading_/print_` e
   `Image.balloon_tasks_/text_tasks_/touch_tasks_`. Receberam `{}`. O antigo
   `shared_ptr` os inicializava automaticamente; um ponteiro comum não oferece
   essa garantia na construção de bases. A relação com a segunda queda ainda
   depende da repetição do teste.
4. O provedor de `Thread.CurrentThread` agora captura o endereço do slot TLS
   do worker. Avaliar o identificador TLS dentro do callback executado pelo
   coletor consultaria a thread errada. Não houve mudança de sincronização
   ou de lógica do jogo para contornar esse erro do runtime.
5. Os quatro arrays estáticos de trabalho de `Image` também passaram a ser
   raízes explícitas. O teste nulo acessa seus tamanhos depois de coletar:
   `getOptimize_result` (7), `getOptimizeSeb_result` (4),
   `getPaletteInfo_result` (2) e `getAreaSize_result` (2).
6. A revisão identificou referências temporárias dentro de vetores nativos
   em regex, `string_split`, `Storage.GetFiles` e captura de tela. Esses
   contêineres não são heap gerenciado nem pilha conservadora; precisam de
   provedores explícitos durante sua vida. Foram registrados; os comandos de
   offscreen removidos temporariamente do `MeshManager` e a cópia da fila de
   superfícies também ganharam provedores. O teste nulo passou em 5.315
   verificações, incluindo regex e split sob coleta concorrente (antes da
   inclusão do teste de teclado descrito a seguir).
7. O diagnóstico da exceção anterior ao diálogo localizou `Array<int>.at` em
   `PcInputAdapter.decide_frame`: o mapa de `Canvas` omitia
   `CanvasKeyState.history_`. Esse campo passou a ser visitado. O teste de
   regressão coleta antes de pressionar/soltar uma tecla. O backend nulo passou
   em 5.317 verificações e as duas repetições abaixo terminaram sem erro.

## Execução de integração

Antes da troca do padrão global e dos ajustes seguintes das fixtures, a
variante explicitamente compilada com `PLS_TRACING_GC=1` completou:

| Execução privada | Cenário | Janela | Frames observados | Formulário | Saída |
|---|---|---|---:|---:|---:|
| `build/null-pc-tracing/runs/1794351418127873400` | menu | 661–960 | 300 | 4 | 0 |
| `build/null-pc-tracing/runs/1794351506607532100` | partida | 1201–1500 | 300 | 2 | 0 |

Essas execuções comprovam o avanço funcional da integração, não um percurso
completo da partida nem a validade dos fontes modificados posteriormente.
Os contadores `GetProcessTimes` apresentaram quantização de 15,625 ms; o p95
por frame desse contador não substitui a medição ETW por escalonamento usada
na baseline. A comparação definitiva permanece pendente.

## Contrato das fixtures após a troca

- As 13 observações do oráculo Unity Mono para GC permanecem obrigatórias.
- As três observações de contagem/promoção de gerações do .NET moderno ficam
  registradas como contraste, fora do contrato nongeneracional aprovado.
  O runtime informa geração máxima zero e não finge promover objetos.
- Testes de coleta de ciclos usam produtores isolados que terminam antes da
  coleta. Assim continuam exigindo a liberação, sem depender de o compilador
  apagar palavras mortas da pilha conservadora.
- Tokens fracos usados internamente pelo runtime codificam o endereço, para
  não virarem raízes fortes quando o próprio token está na pilha. Isso não
  adiciona uma API de referências fracas ao jogo.
- Resultados locais: GC 23 casos diferenciais dentro do contrato e 19
  invariantes próprios; Stack 32 casos e 14 invariantes; Thread 71 casos e
  20 invariantes de cooperação. Recibos devem ser renovados no checkpoint
  se seus inputs mudarem.

CPU por frame, contabilidade amostrada, pausas durante o jogo, pico de texturas,
`.text` final e boot ARM da conversão: **UNKNOWN**. Não extrapolar os kernels
isolados para esses resultados. A variante de ponto flutuante também não está
autorizada para produção antes do teste Android.

## Falhas encontradas na renovação das provas

As tentativas anteriores falharam nos pontos abaixo. A repetição completa
posterior passou em 113 de 113 checks; os resultados negativos são preservados
para explicar as correções, não removidos do histórico.

- A fixture de exceções declarava `ExceptionRef` sem inicialização. Com a
  referência emitida como ponteiro comum, o compilador detectou possível uso
  não inicializado. Inicializar os três locais da fixture com `{}` preservou
  suas verificações; a repetição passou em 74 de 74 casos.
- O teste `diagnostic-leaf-guards` tentou ligar objetos do runtime novo com
  `build/pc/pls_semantics.lib` da compilação anterior. Os oito símbolos ausentes
  pertenciam ao coletor e aos provedores de raízes. O build dessa biblioteca
  ocorria depois do teste na sequência completa. A ordem foi corrigida. Depois
  de recompilar a biblioteca, o teste passou, preservando a ordem dos argumentos
  e a interrupção supervisionada; nenhum método do jogo foi promovido.
- Os corpora portáveis monolítico e por tipo passaram novamente em 2.617 de
  2.618 casos cada. O caso restante é a divergência já registrada de
  `JMath.Sin(-0)`, ainda `UNKNOWN` no Android. Ambos precisaram de mais de
  60 segundos no executável de diagnóstico; o limite passou a 180 segundos,
  com fronteiras seguras entre casos. Nenhum caso foi retirado.

A sequência complementar de 53 componentes terminou com 52 sucessos iniciais
e apenas a falha de ligação acima, aprovada na repetição. Depois dela foi
executada a sequência completa de 113 checks, sem falhas, incluindo progresso.

## Limites da evidência consolidada

- As estatísticas e o limiar de alocação do motor contam os corpos gerenciados;
  buffers separados e seu crescimento ainda precisam de contabilização própria.
  Não apresentar esse contador como o total de memória alocada pelo jogo.
- A validação completa é PC. A descoberta de limites de pilha da libctru e a
  execução da fixture de registradores ARM continuam pendentes.
- A ablação possui dez variantes compiladas, mas ainda não medidas. Não há
  ganho novo publicado nem otimização adotada com base nessas variantes.
- A comparação antiga de menu e partida usava uma revisão local anterior;
  precisa ser repetida com o snapshot autenticado deste checkpoint.
