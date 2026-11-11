# 1. PROGRESSO

Rodada iniciada em `3f4ddf9`. Verificação completa aprovada: 117/117 checks,
incluindo regeneração de PROGRESS.md. Política de conteúdo aprovada sobre
1263 entradas do índice, sem violações. O commit que contém este relatório
é o checkpoint da rodada.

| Critério de congelamento | Estado | Evidência / pendência |
|---|---|---|
| Tradução completa | Em andamento | 1768/1958 métodos compilados; 190 todo; 22 slots pendentes; políticas offline ainda não integralmente comprovadas. |
| Coletor e desempenho | Em andamento | Runtime integrado, fixtures PC e ARM aprovadas; paridade Mono parcial e desempenho em New 3DS real UNKNOWN. |
| Percurso completo no PC | Em andamento | Partida completa e retorno à gestão na base atual; 773 métodos runs; temporada e roteiro integral pendentes. |
| Fidelidade | Em andamento | Triagem x86 feita; resultado Android e comparação integral de telas pendentes. |
| Código legível e aprovado | Pendente | Aprovação da amostra pelo usuário ainda pendente. |

Cobertura acumulada do jogo: 751 → 773 métodos runs, ganho de 22. Nenhum
novo método foi traduzido nesta rodada. A execução observada não promove
automaticamente métodos a verified. Não há congelamento nem tag faithful.

# 2. O QUE FOI FEITO

- Corrigido intervalo dinâmico obsoleto do GC, reproduzido antes na fixture.
- Replay SDL Release 39: 5666 frames, título, save, gestão, partida encerrada
  e retorno à gestão; sem gap nem exceção. Encerramento deliberado em 310 s.
- Incluídos buffers/crescimento e payloads nativos conhecidos no limiar e
  estatísticas, com união de intervalos para evitar duplicação.
- Medida versão intermediária no menu: 39,27699633333334 ms de CPU agendada,
  p95 44,0075, máximo 204,1325. Encontradas e removidas duas passagens
  redundantes. CPU qualificada posterior ainda UNKNOWN.
- Janelas funcionais atuais concluídas: 300 frames no menu e 300 na partida;
  quatro e três coletas, respectivamente. Contagens e limitações na
  [nota de medições](tracing-gc-measurement-round.md).
- Dez variantes de ablação executadas; tabela completa, piso manual e Mono
  na [nota de ablação](tracing-gc-ablation.md). Nenhuma retirada de checagem.
- SDK/NDK oficiais preparados localmente, APK numérico assinado com chave
  de teste local e procedimento Android pronto, sem execução em aparelho.
- Integração ARM do coletor: limites de pilha, raízes r4/d8, workers,
  espera nativa e recursos testados; 60 assertions em cada perfil Azahar.
- Corrigida a execução dos destruidores TLS no SDK CTR: 14 verificações
  por perfil. Primeiro frame ARM alcançado, mas a janela 661–960 permaneceu
  em BootForm e foi rejeitada como benchmark de menu.
- Sonda ARM localizou a repetição da mesma imagem de 124800 bytes em
  `resCom2_`, progresso 78/279, BootForm 22/30. A leitura autenticada custa
  cerca de 102–110 ms em exemplos do emulador. O restante da carga ainda
  não foi isolado; o comportamento original de yield foi preservado.
- Ambos os perfis Azahar a 100% completaram a janela, mas ainda no
  carregamento: nenhum resultado de menu/partida ARM foi qualificado.
- Contador separado de `new`: menu 194420 solicitações/27741692 bytes;
  partida 132449/19014481 bytes, em 300 frames cada.
- O checkpoint anterior `3f4ddf9` foi enviado ao remoto após restabelecer
  a conexão. A nova base passou os 117 checks da verificação completa.

# 3. HIPÓTESES

| Estado | Hipótese e evidência |
|---|---|
| CONFIRMADA | Buffer dinâmico liberado deixava intervalo obsoleto: fixture `retired_dynamic_payload_address` reproduziu a exceção e passa após descarte das faixas ao retomar workers. |
| CONFIRMADA | Contabilidade de memória introduz custo relevante: 2304/11174 amostras intermediárias diretamente nessa categoria, além de helpers de ordenação não atribuídos. |
| CONFIRMADA | Thread principal ARM tem ID nulo: caminho `pthread_self → threadGetCurrent`; comparação com coletor inativo recusava alocação. Fixtures passam com teste condicionado à coleta ativa. |
| CONFIRMADA | Worker podia permanecer em espera indefinida após a coleta: snapshot GDB de todas as threads; reavaliação temporizada do mesmo predicado protegido permite concluir as fixtures. |
| INCONCLUSIVA | Ganho de CPU após remover passagens redundantes: a nova coleta ETW não ocorreu porque a elevação foi cancelada. |
| INCONCLUSIVA | Regra R4 do Android: Mono x86 diferencia expressão/retorno de armazenamentos, mas x87 não define comportamento ARM. Nenhuma regra nova adotada. |
| REFUTADA nesta execução | Apenas atrasar as teclas resolveria o boot ARM: o replay atrasado 2400 frames continuou em BootForm nos frames 3061–3360. |
| CONFIRMADA | O carregador relê o mesmo recurso: contador 78/279 e identidade da imagem repetidos no log da sonda `arm-resource-cost/new-1`. |
| INCONCLUSIVA | A carga completa desse recurso ultrapassa os 150 ms e causa a repetição: a leitura parcial está medida, mas falta o custo de Image.Load antes/depois dela. |
| REFUTADA nos exemplos medidos | Image.Load sozinho ultrapassa 150 ms: a sonda posterior mediu 119429743 e 135355887 ns em duas chamadas do recurso repetido. Falta isolar a preparação e os comandos do carregador fora dessa função. |

# 4. PENDÊNCIAS

CPU ETW posterior, atribuição atualizada de 100% das amostras, pico de
texturas entre transições contra o runtime anterior, medições ARM completas
e validação em aparelhos permanecem pendentes. As pausas coletadas com
compilação concorrente não qualificam uma comparação controlada.

Protótipo/Mono nos cinco kernels: 6,80338078291815; 8,35870084381468;
6,155746509129967; 0,5768512756689484; 0,6679097520044752. Os três primeiros
não atingem paridade. Mono coincide em 69/80 observações; as 11 diferenças
são de ponto flutuante em Cal. O conjunto possui 80 capturas totais,
16 por kernel, não 80 capturas de Cal.

Nulo, limites e `/fp:precise` continuam somente como medições isoladas.
Otimizações equivalentes de emissão ainda precisam da validação no frame.

### CPU, coletas e memória

| Medida | Menu | Partida |
|---|---:|---:|
| Baseline CPU média (ms) | 7,151805 | 9,035818666666666 |
| CPU atual média / p95 / máximo | UNKNOWN | UNKNOWN |
| Coletas na janela atual de 300 frames | 4 | 3 |
| Pausa acumulada observada (ns) | 396838300 | 513261000 |
| Maior coleta observada (ns) | 113398300 | 330143600 |
| Alocações gerenciadas | 28800 | 15681 |
| Solicitações C++ new, execução separada | 194420 | 132449 |
| Bytes solicitados por new | 27741692 | 19014481 |
| Memória conhecida retida ao fim (bytes) | 13714588 | 13312006 |

As pausas foram observadas com compilação concorrente: não são a comparação
controlada pedida. O pico de texturas entre transições permanece UNKNOWN.
No frame 900, ambas as revisões registraram 9147128 bytes conhecidos de
texturas; essa igualdade pontual não prova igualdade de pico.

### Ablação completa (ns por chamada)

Colunas: Camera.ConvertScreenToCamera, Team.Cal_evaCoatMulti9block,
Team.GetSum, GameUtil.ChRectHitRect, AppData.InsertGameObject.

| Variante | Camera | Cal | GetSum | Rect | Insert |
|---|---:|---:|---:|---:|---:|
| Mono x86 | 7,025 | 39,25625 | 40,73125 | 10,04375 | 301,66875 |
| Refcount histórico | 128,2875 | 1158,325 | 1012,98125 | 6,7125 | 2943,725 |
| Protótipo rastreamento | 47,79375 | 328,13125 | 250,73125 | 5,79375 | 201,4875 |
| Sem inicialização de tipos | 23,84375 | 135,93125 | 110,0125 | 3,66875 | 172,81875 |
| Lambdas forceinline | 45,775 | 303,0625 | 246,36875 | 5,8125 | 132,35 |
| Conversão sem checagem | 38,5875 | 296,80625 | 214,3125 | 5,83125 | 168,3625 |
| Limites constantes da conversão | 45,15 | 275,6125 | 207,3875 | 5,88125 | 182,0125 |
| Sem nulo | 41,1875 | 225,23125 | 195,85 | 6,0375 | 125,55625 |
| Sem limites | 37,1875 | 228,775 | 180,2125 | 5,8375 | 106,225 |
| fp:precise | 43,6625 | 298,25625 | 229,06875 | 5,875 | 171,2375 |
| Manual com verificações | 41,9125 | 333,85625 | 236,94375 | 6,03125 | 112,33125 |

Nenhuma dessas variantes foi adotada integralmente no emissor. O piso
manual usa os mesmos helpers e não representa um limite teórico ótimo.
Retirar inicialização de tipos em bloco não preserva os efeitos de todos
os construtores estáticos. Nulo, limites e fp:precise são somente medições.

# 5. TOOLCHAIN

SDK Android Build Tools 35.0.0, plataforma 35 revisão 2 e NDK r27c
(27.2.12479018), em `build/deps/`, sem instalação global. Proveniência,
SHA-256 e termos registrados em [toolchain](../toolchain.md) e
[THIRD_PARTY](../../THIRD_PARTY.md).

ARM: devkitARM GCC 16.1.0, libctru 2.7.1, Azahar 2126.2. Ambos os perfis
das fixtures confirmaram clock 100 e limite 100. Isso não mede velocidade
de hardware. SDK privado de threads fixado e validado por compile-time
assertions; detalhes em [pilhas ARM](tracing-gc-arm-stacks.md).

# 6. COMPONENTES EXTERNOS

APK próprio verificado pelo SHA-256 documentado. Assets, capturas, saves,
oracles e APK de teste permanecem locais e ignorados. O runtime Mono do
teste Android vem da instalação oficial Unity 5.3.4f1, não do APK do jogo.
Não há edição de DLL nem redistribuição de binários originais.

O APK numérico local está pronto em
`build/fp-android/numerical-oracle-armv7.apk`, SHA-256
`261348191e6a1603bc5a4018e61227c26b00b8b6af6dfd1c0665f10d43178093`.
O procedimento está em [teste Android](float-discriminants.md). São 36
discriminantes e 80 observações distribuídas pelos cinco kernels, das quais
16 são de Cal. Ainda não houve instalação nem execução no aparelho.

O `.3dsx` disponível é diagnóstico, não benchmark qualificado de menu:
`build/null-arm11-tracing/null_game.3dsx`, SHA-256
`97e9707cef80a2962d90d1a4057b91e8a63908b5d3784f62b6da183c52c378a0`.
O [guia de SD](arm11-hardware-benchmark.md) conserva assets e save locais.
Tamanho do arquivo: 11864812 bytes; `.text` ARM: 9550776 bytes.

O executável nulo atual tem 6928097 bytes de `.text`, contra 13296977 do
histórico preservado. A comparação cobre revisões completas e não isola
somente o efeito do GC. Memória conhecida não equivale a RSS; fragmentação
e alocações opacas das bibliotecas não são inferidas.

# 7. BLOQUEIOS

- Windows informou cancelamento da elevação WPR. Nova medição ETW depende
  dessa confirmação; nenhuma nova elevação foi tentada após o cancelamento.
- Android conectado para executar o teste numérico; resultado ainda UNKNOWN.
- New 3DS real para medir o orçamento; emulador não substitui esse critério.

# 8. RECOMENDAÇÃO

Obter o perfil ETW atual antes de novas otimizações: a medição
intermediária mostra que a contabilidade de memória virou parte importante
do custo. Executar o teste Android antes de alterar a emissão R4 e o
benchmark no New 3DS antes de declarar o orçamento cumprido.

No ARM, o próximo diagnóstico deve medir o restante da carga ao redor de
Image.Load; não aumentar o limiar nem avançar os índices do original.
Esta publicação é um checkpoint verificado, não a conclusão das medições:
a captura ETW aguarda confirmação da elevação e os testes numéricos/tempo
real dependem dos aparelhos. As otimizações de emissão e a validação do
benchmark de menu/partida ARM permanecem trabalho pendente.
