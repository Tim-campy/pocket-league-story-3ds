# Tempo dos roteiros: medição, paralelismo e seleção (2026-11-24)

Só ferramentas; o jogo, o runtime e o critério de aceite não mudaram. Máquina: Intel
i5-12450HX (4 núcleos P com HT + 4 núcleos E; 12 lógicos), 7,7 GB de RAM.

## 1. Medição antes

Conjunto completo (87 execuções), modo atual (uma por vez, estresse a cada 50 alocações):
8.124 s de execuções somadas, das quais **7.795 s dentro do processo do jogo** e 328 s fora
(configurar/compilar/conferir, ~2,7 s por execução). Sem as suspensões da máquina, ~2,3 h.

Amostra (`build_pc` exatamente como o executor; CPU e memória do `pc_game.exe` amostradas a
cada 0,5 s):

| Execução | Processo | Quadros | Quadros/s | CPU (núcleos) | Pico de memória | Fora dos quadros |
|---|---|---|---|---|---|---|
| curto (`load-auto`), com estresse | 20,2 s | 674 | 33 | 0,77 | 141 MB | 4,5 s |
| curto, sem estresse | 10,2 s | 620 | 61 | 0,88 | 137 MB | 1,8 s |
| partida (`match-touch`), com estresse | 96,3 s | 3.022 | 31 | 0,94 | 208 MB | 8,6 s |
| partida, sem estresse | 75,7 s | 2.973 | 39 | 0,95 | 183 MB | 8,4 s |
| menu longo (`menu-explore`), com estresse | 329,8 s | 11.328 | 34 | 0,97 | 205 MB | 28,9 s |
| menu longo, sem estresse | 266,5 s | 11.284 | 42 | 0,96 | 175 MB | 28,6 s |
| partida, com estresse, sem janela (`SDL_VIDEODRIVER=dummy`) | 243,9 s | 3.094 | 13 | 0,95 | 180 MB | 16,5 s |
| menu longo, com estresse, sem janela | 600 s (limite) | 8.049 | 13 | 0,96 | 183 MB | incompleto |

- Os roteiros **não** ficam presos aos 20 quadros por segundo: o executor já usa `--fast`
  (sem o ritmo de quadros, com relógio virtual); rodam a 31–61 quadros/s.
- Cada execução é **um núcleo de CPU** (0,77–0,97): a espera em tempo real é pequena
  (carga de assets e saída: 2–29 s fora dos quadros, ~9 % do processo; abertura e
  configuração: ~2,7 s por execução, 4 % do total).
- **Estresse moderado do coletor**: +24–27 % nos roteiros longos, +98 % nos curtos.
- **Sem janela pelo driver nulo do SDL é pior**: 2,5× mais lento (o SDL cai para desenho
  em software) e chegou a mudar o resultado (menu cortado pelo limite de 600 s). Rejeitado;
  as janelas continuam abertas.

## 2. Freios removidos

- `build_pc.py --no-build`: o executor compila uma vez e as execuções só rodam o
  executável (sem CMake/Ninja/sonda por execução: −2,7 s cada).
- O ritmo de quadros já estava desligado; não há outro freio de tempo real relevante.

**Igualdade com o modo atual.** O modo atual não é determinístico: duas execuções em
série do mesmo roteiro diferem entre si. Medido nos roteiros de partida (430) e de menu
(431), `tools/compare_route_runs.py`:

| Comparação | Estados de interface | Passos | Save da partida | Save do menu | Desvio máximo do quadro de cada passo |
|---|---|---|---|---|---|
| série × série | idênticos (19; 331) | 127; 180 | idêntico | mesmos 3 blocos diferem | 5 quadros |
| série × paralelo | idênticos (19; 331) | 127; 180 | idêntico | mesmos 3 blocos diferem | 22–34 quadros |

- Os 3 blocos do save do menu (experiência dos jogadores, `qmData`, `UserData`) são a
  variação conhecida do sorteio de treino (`docs/notes/menu-save-difference.md`).
- `player-preferences.port` difere sempre: é o identificador de cliente da analytics
  (`cid=`), um GUID aleatório por execução.
- Causa da variação: com `--fast`, os quadros correm na velocidade da CPU enquanto a carga
  de assets acontece em threads que esperam em tempo real; quantos quadros uma carga leva
  varia. Em paralelo cada jogo roda mais devagar, e o desvio cresce (22–34 quadros), sem
  mudar estados nem saves. Um modo determinístico exigiria mudar o runtime ou a
  plataforma (carga em tempo virtual) — fora do escopo; proposta para decisão.

## 3. Paralelismo

`dev.py routes --jobs N` (`tools/run_readable_routes.py --jobs`): cada execução tem pasta
de tentativa própria (saves, logs, rota, cobertura); o número da tentativa é reservado
criando a pasta; o histórico (`build/frozen-attempts.json`) é escrito sob trava de arquivo,
relendo antes de acrescentar; o executor associa cada resultado ao número que o próprio
`build_pc` imprimiu. Mais longos primeiro (durações do último conjunto).

Curva medida (8 roteiros de ~90 s, soma em série 697 s):

| Jobs | Tempo | Ganho | Lentidão por execução (mediana / máx.) |
|---|---|---|---|
| 2 | 485 s | 1,44× | 1,27 / 1,40 |
| 3 | 384 s | 1,82× | 1,49 / 1,51 |
| 4 | 327 s | 2,13× | 1,74 / 1,76 |
| 6 | 324 s | 2,15× | 2,30 / 2,31 |

Padrão **N = 4** (o joelho: os 4 núcleos P; memória ~210 MB por jogo, longe do limite).

**Prazos de tempo real.** O limite de 600 s por execução (só para parar uma execução
descontrolada) passou a crescer com N: 600 × (1 + 0,45 × (N − 1)) = 1.410 s com N = 4 (a
lentidão máxima medida foi 2,09×). Na primeira tentativa paralela, com o limite fixo em
600 s, 4 roteiros longos foram cortados (`actions` 95, `lots` 106 e 107, `remaining` 116):
resultado falso, corrigido assim. A espera da parada de threads do coletor (5 s, no
runtime) não foi mexida (o runtime está fora do escopo); com N = 4 ela não disparou.

Resultados do conjunto completo com N = 4 (duas execuções seguidas), contra o conjunto em série
de referência (`build/c6b-route-set-frozen-serial-reference.json`):

| | Série (referência) | Paralelo 3 | Paralelo 4 |
|---|---|---|---|
| Tempo do conjunto | ~3 h (8.124 s de execuções somadas) | **3.917 s (65 min)** | **3.905 s (65 min)** |
| Esperados concluídos (por roteiro e save) faltando | — | nenhum | nenhum |
| Concluídos / 87 | 85 | 86 | 86 |
| Alertas da salvaguarda | 0 | 0 | 0 |
| Métodos executados | 1.573 | 1.573 | 1.573 |
| Listas de métodos (só no canônico / só no port) | — | idênticas | idênticas |
| Refeitos por suspensão | — | 0 | 0 |

Um roteiro mudou de resultado: a execução 97 (`actions.route` a partir do save 95) agora
**conclui**. Em série ela nunca falhou no jogo: era cortada pelo limite de 600 s por volta
do quadro 20.300; com o limite do modo paralelo ela termina. A `dialogs-exit.route` (131)
continua incompleta, como no canônico: o roteiro termina fechando o jogo.

## 4. Seleção

- `dev.py routes --smoke`: 10 execuções fixas (`escape`, `touch-title`, `menu-trace`,
  `screens`, `match-touch`, `match`, `saves`, `load-auto`, `load-manual`, `newgame`).
  Medido: 10/10 concluídas, 0 alertas, **154 s** com 4 jobs (PASS).
- `dev.py routes --affected [--since REF]` (padrão: o último commit publicado): arquivos
  alterados → métodos editados (pelo `// M:` de cada definição) → execuções cujo conjunto
  de métodos executados (cobertura do último conjunto completo,
  `readable-method-counters.json`) contém algum deles. Mudança fora de um método (por
  exemplo `trace_edges` ou estáticos): todos os métodos da classe. Método sem cobertura
  (novo): todos os da classe. `.hpp`, infraestrutura do jogo, qualquer arquivo fora de
  `src/game/*.cpp`, cobertura ausente: conjunto completo. Testado com uma linha num método:
  `Team::SetPosFPos` → 13 execuções; `SponsorData::ChangeState` → 7;
  `UserData::Deserialize` → 69; `TitleForm::_draw` → 87 (todos passam pelo título).

## 5. Suspensão

Cada suspensão veio 1–2 s depois de a máquina perder a energia da tomada:

| Hora | Evento |
|---|---|
| 23/11 22:41:28 | tomada desligada → 22:41:30 suspensão, motivo 0 (tampa/botão) |
| 24/11 00:24 | hibernação por bateria crítica (2 %, motivo 2) |
| 24/11 00:50 | tomada de volta |
| 24/11 07:11:00 | tomada desligada → 07:11:01 hibernação, motivo 0 |

Motivo 0 logo depois de cair para a bateria é o padrão de **tampa fechada**: na tomada a
tampa não faz nada; na bateria, suspende/hiberna. O pedido do executor ao Windows
(`SetThreadExecutionState`) só impede a suspensão por inatividade; não impede a da tampa
nem a da bateria crítica. Configuração no plano atual: na tomada nunca suspende nem
hiberna; na bateria suspende em 10 min e hiberna em 3 h; bateria crítica → hibernar.

O executor agora detecta a suspensão (tempo de parede × `QueryUnbiasedInterruptTime`, que
não conta o tempo suspenso) e refaz sozinho a execução atingida (até 2 vezes); o veredito
mostra quantas foram refeitas.
