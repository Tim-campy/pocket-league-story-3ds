# Câmera: perfil e verificação de 2026-11-25

## Método e limite da comparação

Três execuções por versão e cenário, em série, alternando as versões a cada
repetição: jogo anterior à câmera (`e3af43e`), câmera inicialmente testada
(`a24d97a`) e revisão com rolagem contínua. Mesmo build Release de diagnóstico,
SDL, duas telas, relógio virtual, `PLS_PC_FAST=1`, sem capturas nem estresse
artificial do coletor. Nenhum build ou outro teste nosso em paralelo.

O usuário autorizou medir com a carga atual após o piloto detectar processos
externos ativos. A carga externa nas 18 execuções equivaleu a 1,031–1,729 núcleos
ocupados, medida por GetSystemTimes menos GetProcessTimes. Portanto, **não é
uma medição com máquina ociosa**; efeito causal no tempo total é UNKNOWN.

Cada amostra contém 600 quadros: gestão sem entrada, a partir de um save 50
preparado igualmente para as três versões; partida ativa a partir do save 31.
O coletor do perfil verifica formulário, ausência de janelas sobrepostas e
carregamento em cada quadro; na partida também exige chamadas de Player.Update.
O piloto inicial da partida foi rejeitado porque a janela incluía um diálogo;
a amostra foi adiantada para os 600 quadros de jogo anteriores a ele.

Tempo médio por quadro, em ms; inclui jogo, Kairo, rasterização e composição:

| Cenário | Versão | Execução 1 | Execução 2 | Execução 3 | Média |
|---|---|---:|---:|---:|---:|
| Gestão | Antes da câmera | 33,734 | 38,118 | 37,322 | 36,391 |
| Gestão | Câmera inicial | 37,817 | 37,473 | 37,863 | 37,717 |
| Gestão | Revisão | 37,131 | 37,768 | 36,149 | 37,016 |
| Partida | Antes da câmera | 40,621 | 40,438 | 37,274 | 39,445 |
| Partida | Câmera inicial | 40,759 | 39,614 | 39,665 | 40,013 |
| Partida | Revisão | 39,310 | 39,008 | 40,314 | 39,544 |

Há custo novo mensurável na gestão: PanManagement, incluindo a checagem de
visibilidade, custa 4,053 / 3,828 / 3,623 **microssegundos por chamada** na revisão;
na câmera inicial custava 0,311 / 0,276 / 0,352. KeepManagementCursorVisible
sozinho custa 3,517 / 3,309 / 3,199 microssegundos, já incluídos no primeiro valor.
Esses valores são médias acumuladas dos métodos durante cada execução, com a
instrumentação ligada. Não medem o pior caso de movimento/recentralização nem
o custo no 3DS. O ramo novo não é chamado na partida.

A variação da gestão no mesmo executável anterior à câmera chegou a 4,385 ms;
a rasterização responde pela maior parte do quadro. As médias finais diferem
da referência em +0,625 ms na gestão e +0,099 ms na partida, mas a carga externa
impede atribuir essas diferenças à alteração. Os 162/185/217 s dos smokes
anteriores não demonstram uma regressão por quadro; sua causa exata é UNKNOWN.

Dados e procedimento local: `build/camera-revision/profile_runs.py`,
`build/camera-revision/profile/results.json` (18 resultados, hashes dos
executáveis, percentis, áreas e métodos), logs individuais na mesma pasta.

## Dois timeouts do conjunto completo anterior

| Roteiro/save | Antes da câmera | Primeira rodada com câmera | Repetição com câmera |
|---|---:|---:|---:|
| actions/95 | 1434,4 s; 28.579 quadros | corte em 1436,5 s; quadro 25.168 | 1147,8 s; 29.344 quadros |
| lots/106 | 927,1 s; 19.270 quadros | corte em 1435,6 s; quadro 24.457 | 1029,9 s; 25.168 quadros |

Tentativas: 523/525 antes; 778/780 na primeira rodada; 860/861 na repetição.
O limite do processo era 1410 s, mais preparação e encerramento nos totais acima.
Foram cortes por tempo, não exceções do jogo. A primeira rodada processava cerca
de 17 quadros/s com quatro execuções concorrentes; a repetição, com apenas duas
restantes, 24–26 quadros/s. A carga externa histórica não foi medida: UNKNOWN.

As repetições levam 17–19 minutos porque executam 25–29 mil quadros com cerca de
60 mil coletas forçadas, além de esperas opcionais longas. Em actions, dois
passos `dismiss ... timeout=6000 optional` consomem 12.004 quadros; eles também
atingiam o prazo antes da câmera. Em lots, o aumento foi de 5898 quadros, enquanto
as esperas dismiss aumentaram 5929: praticamente toda a diferença de extensão
está nas esperas. O ciclo de fim de ano não prova travamento infinito; o roteiro
concluiu na repetição. As esperas opcionais podem consumir seu prazo e continuar
sem executar a ação esperada. Não houve alteração do executor.

Comparação extraída dos logs: `build/camera-revision/route-comparison.json`.

## Controles e save

O teste local por teclas da janela passou para pad curto/longo, congelamento no
menu, direcional na margem, zoom preservando a câmera e dois cantos opostos.
Nas capturas do direcional, 73 quadros avançaram 6 pixels e 32 ficaram parados;
deslocamento total de 438 pixels, igual à diferença de posição gravada.
O primeiro ensaio falhou porque um diálogo interrompeu a entrada e o auxiliar
leu um save antigo; o auxiliar passou a conferir a escrita e dispensar o diálogo.

Save com câmera (1080, -128) e cursor (1008, -128), dentro da margem: recarregado
e salvo sem mudar essas posições tanto no port quanto no executável da tag
v1.0.0-faithful. Serialize/Deserialize permanecem idênticos aos do commit anterior.
Evidência local em `build/camera-validation/revision-r2`, `coherent-final` e
`reference-final2`; capturas das duas telas permanecem fora do Git.

Construção e demolição foram conferidas no código: a prévia usa o endereço do
cursor, só A constrói, e a janela de demolição conserva tenantId_. A validação
visual dessas duas situações e da interrupção da inércia de toque fica no roteiro
manual do usuário. Não há teste automatizado dessas invariantes no executor;
a limitação está em `docs/backlog.md`.

Verificações da revisão: build aprovado; check aprovado (185 listas do coletor,
178 classes, 296 slots, 4230 literais, zero problemas); smoke aprovado em 185 s,
10/10 execuções, zero alertas e lacunas, nenhuma repetição por suspensão.
O ciclo completo, ARM e push ficam para depois da aprovação do usuário.
