# Continuidade após ce1dbd6

Trabalho local posterior ao checkpoint do menu de gestão. Nenhum novo marco de
partida foi publicado. A última verificação completa publicada é 99/99 checks;
os componentes alterados nesta continuidade recebem testes próprios, conforme a
cadência definida pelo usuário.

## Navegação e bloqueio de entrada

O CI público de ce1dbd6 passou no
[run 42684543753](https://github.com/Tim-campy/pocket-league-story-3ds/actions/runs/42684543753).
Sem Android conectado, as novas comparações visuais continuam pendentes.

A tentativa privada 22 executou 70,079 segundos sem lacuna de tradução. A
seleção de partidas encontrou a aprovação inicial do time ainda pendente no
enredo. O caminho é `SubForm.Update2`, tipo 3, opção 0; ele testa
`UserData.ChEventFlg(8)` e executa o evento de aviso quando falta a flag.
`AppData.ExecuteScript(int[],...)`, caso 16, libera uma partida disponível e
ativa essa flag. Nenhum dado de evento extraído foi copiado para este documento
ou para código; os eventos continuam vindo dos assets locais.

A tentativa 23 avançou diálogos com entradas Canvas e parou aos 80,110 segundos
em `surface.GamePad.OnTouchEvent(TouchEvent)`. Seu primeiro bloqueio de lowering
era `GamePad.SetLayoutMode` → `IApplication.SetScaleRatio(Single)`. O setter
nativo já existia; foi acrescentado o binding exato, correspondente à atribuição
de `fixedScaleRatio_` no C# original. A nova geração normal emitiu 1.761 corpos,
sem promoção a compilados; `PROGRESS.md` conserva os 1.760 do checkpoint.

## Guarda privada na API ausente

O mesmo manipulador de toque contém o caminho de captura de tela do original.
`FormManagerBase.Capture(SurfaceBase,String[],OnCaptureCompleted,Boolean)` ainda
não tem reimplementação, e isso impede o lowering normal do método inteiro.
Foi criada uma opção explícita de diagnóstico que gera o método pelo Roslyn e
interrompe na chamada dessa API, depois da avaliação dos argumentos. A guarda
imprime `PLS_TRANSLATION_GAP=` e lança uma exceção nativa; o supervisor encerra
o diagnóstico mesmo se um colaborador capturar a exceção e devolver zero.

Essa opção só aceita saída em `build/`, proíbe compilação/promoção normal e não
reescreve o fonte gerado canônico. O manifesto autentica o pedido e o relatório
privados; admite como diferenças do pedido somente o diretório de saída e o
binding fatal de Capture. Não pode mudar outras APIs, retirar métodos
canônicos ou promover um corpo parcial. A inclusão do helper é aplicada pelo
empacotador apenas ao CPP que chama a API. O ramo completo permanece recusado
na emissão normal. Se a execução usar Capture, ela deve parar nesse símbolo;
não há resultado de sucesso alternativo.

Fixture própria: ramo disponível igual ao oráculo C#; argumento avaliado antes
da guarda, sem executar o comando seguinte; guarda fatal para o supervisor;
um único CPP afetado; zero métodos do jogo promovidos. Os 60 testes Python de
repositório passaram, incluindo recusa de promoção, binding adicional e
retirada de método. Antes de passar, a fixture C++ teve um accessor invocado
duas vezes por erro do harness e o oráculo C# precisou do redirecionamento
explícito da API sintética. A primeira geração privada também revelou um
caminho relativo no recibo; o diretório foi normalizado antes de gerar.

## Instrumentação

Foi ampliado para 1.200 frames o limite de entradas diagnósticas, com os mesmos
19 testes de parser aprovados, e a captura local passou a alcançar esse frame.
Isso não altera relógio, eventos, flags ou controles da lógica do jogo.

O resumo de logs anterior não reconhecia o novo evento numérico por frame nem
a fase de memória do frame 900. Eles apareciam como registros inválidos nesse
resumo, embora `summarize_pc_window.py` tenha validado independentemente os 240
samples e a memória usados no relatório do menu. O parser foi corrigido com
teste de regressão, incluindo dimensões/tipos inválidos e tentativa de declarar
uma tela como verificada. Os dados históricos de memória e tempo não foram
reclassificados nem tiveram o comparador relaxado.


## Continuidade: captura, instrumenta??o e formata??o

O formatador default-G Mono265 passou em 85.264/85.264 observa??es pr?prias.
O controle moderno STL falhou em oito casos e n?o foi adotado. A integra??o
normal emitiu 1.768 m?todos (antes de nova reconcilia??o/compila??o completa).
`SoccerForm.Update` passou a ser emitido. Nenhuma execu??o da partida ? inferida
dessa compila??o. A nova fixture de concatena??o num?rica e ordem de avalia??o
integrou o conjunto de lowering que passou em 1.379/1.379 observa??es.

A captura PC usa o framebuffer local, exporta??o PNG autoral e callback ap?s a
apresenta??o do desenho. Arquivos ficam no perfil local/isolado, fora do Git.
A fila preserva/restaura pausa e IsCapturing. O or?culo pr?prio conferiu bytes
RGBA por descompress?o PNG independente, callback e restaura??o em erro.
As dimens?es pedidas nas tabelas escalam a captura atual; este backend n?o
simula outros aparelhos nem qualifica a reconfigura??o multirresolu??o Unity.
A API n?o foi promovida integralmente a verified por esses testes pr?prios.
O novo diagn?stico usa o binding normal de Capture, sem a guarda privada.

Contadores s?o compilados s? no diagn?stico. Entrada, retorno normal e sa?da
por exce??o s?o separados. runs usa retorno normal de um corpo normal emitido
com v?nculo ?nico ao invent?rio original; n?o significa cobertura de ramos nem
verified. Dumps peri?dicos conservam a cobertura anterior ao timeout. Helpers
Kairo compilados junto do jogo s?o atribu?dos ? API, n?o ? l?gica do jogo.

O perfil possui quatro parcelas exclusivas: fonte do jogo traduzido, API Kairo,
rasteriza??o CPU e composi??o/apresenta??o. Espera de frame fica fora das quatro.
Quad sampling/blending, replay CPU de fragments e rasteriza??o de glifos s?o
marcados como raster; chamadas de volta ao fonte assumem sua pr?pria categoria.
Overhead dos rel?gios/contadores n?o ? subtra?do. Um microbenchmark pr?prio
Release mediu mediana de incremento de 67,158 ns por chamada instrumentada;
isso n?o ? um fator de corre??o do jogo nem medi??o do ARM11.

Resultados negativos desta integra??o: uma tentativa de lowering foi recusada
porque seus inputs foram alterados durante a execu??o; precisa de recibo
renovado. Uma tentativa de rodar split durante outro prepare falhou por DLL do
tradutor em uso. Depois, a compila??o da fixture split excedeu 180 s ao disputar
CPU com o build Release; o comparador n?o foi relaxado. A primeira compila??o
instrumentada encontrou C1057 porque um chunk dividiu uma macro; o empacotador
passou a preservar chamadas de macro inteiras. A primeira vers?o dessa corre??o
proibia dividir qualquer express?o parentizada e foi refutada por um inicializador
port?vel grande; a regra foi reduzida ?s macros. O validador do diagn?stico
passou a exigir a pol?tica expl?cita de contadores para permitir runs com prova,
mantendo zero alega??es de compila??o normal no manifesto precompile.


## Partida iniciada e cobertura medida

A tentativa 31 chegou ? apresenta??o/escala??o, sem partida em andamento.
A tentativa 32 carregou o autosave pr?prio 31 e usou entradas Canvas normais.
A captura privada do frame 1260 comprova primeiro tempo a 11:35; a do frame
3360 comprova segundo tempo a 31:48. Encerrou no timeout de 180,078 s, sem gap.
A partida completa ainda n?o foi afirmada. Contadores: 613 IDs emitidos do jogo
com retorno normal e 195 port?veis; o v?nculo ao denominador IL ? feito pelo
script, n?o por essa soma. Entre os 198 pendentes do ce1dbd6, cinco tiveram
entrada/retorno registrados nessa tentativa; 193 n?o tiveram entrada registrada.
Isso n?o prova inacessibilidade dos 193, nem cobre todos os ramos dos cinco.

A tentativa 33 exibiu o menu mas o timeout cortou o ?ltimo registro METHOD no
meio. O coletor recusou o log e nenhum recibo desse ensaio foi publicado.
A tentativa 34 repetiu a medi??o com sucesso ap?s a corre??o: s? um registro
terminal JSON incompleto pode ser descartado; corrup??o em linha completa
continua fatal. Se o coletor falhar, o build agora preserva o erro no hist?rico.
`config/phase2-menu-profile.json` cont?m 240 frames 661..900, com captura900
inspecionada. M?dias/p95 em ms: jogo 3,375819583/4,6135; API 3,84858125/4,5657;
raster 15,494874167/18,8766; composi??o 1,161905417/2,0767. Pacing exclu?do.
O perfil preliminar da tentativa32 usa classifica??o anterior de texto/cache;
precisa de nova medi??o da partida com a classifica??o refinada. Tempos n?o
s?o extrapolados para o ARM11.

A verifica??o completa encontrou MSVC C1001 no AssetReader n?o instrumentado.
Retirar apenas os par?nteses externos da macro n?o resolveu. Em c?pia privada,
apagar a chamada de macro resolveu a compila??o. O emissor passou a produzir
chamada C++ comum a api_call; seu corpo s? cria Scope sob PLS_DIAGNOSTIC_BUILD.
O corpus port?vel normal voltou a compilar 374/374. O diferencial manteve
2.617/2.618, conservando Sin(-0), e split e lowering passaram novamente.

O contador de limites de replay foi ampliado para 12.000 frames e o supervisor
para 600 s, pois os 2.400 ticks dos dois tempos, mais apresenta??es e paradas,
n?o cabiam no limite anterior de 120 s. N?o foram alterados rel?gio, velocidade,
regras ou estado interno do jogo; s?o limites do processo/entrada diagn?stica.
