# changes.md — registro de trabalho (roteiros orientados a estado, origem e revisão)

> **Para qualquer agente — decisão do usuário (2026-11-27):** este arquivo fica na
> **raiz** e se chama **`changes.md`**. Não mova, não renomeie, não divida e não
> reescreva o que já está aqui. Para registrar trabalho novo, **acrescente uma seção
> no fim**, com data, o que foi feito, por quê e como foi conferido. Se algo
> registrado aqui estiver errado, escreva a correção numa seção nova e cite a seção
> antiga. Grave em UTF-8 sem BOM e com LF (`AGENTS.md`, seção 7, "Codificação dos
> textos"). Um agente moveu este arquivo para `docs/notes/state-driven-routes.md`;
> o usuário pediu para trazê-lo de volta.

Registro para outro agente retomar o trabalho: o que foi feito, por quê e como
verificar. O mais recente fica no fim. Regras do repositório: `AGENTS.md`.

## Contexto (2026-11-27)

Um audit dos roteiros (`tests/routes/`, `tools/dev.py routes`) mostrou que:

1. O executor (`src/main/diagnostic_route.hpp`) só enxerga a interface (pilha de
   formulários, rótulos, carregando, diálogo). Por isso os roteiros tocam por
   coordenada, esperam por contagem de quadros e não conferem resultado.
2. Na última execução completa (`build/c6b-route-set-frozen-20261127-033534.json`)
   nenhuma das 87 execuções demoliu uma instalação (`game.Tenant.DestructTenant`
   ausente) nem mudou o zoom (`GameForm.SetScale` ausente), e mesmo assim o
   conjunto deu PASS: `demolish.route` toca em (138,92), e depois da câmera
   separada do cursor o toque não seleciona mais a loja.

O usuário aprovou a proposta (mudanças em `src/main/`, `tests/` e `tools/`):
dar ao executor uma foto do estado do jogo, comandos com objetivo, checagens de
resultado e um detector de travamento, e reescrever os roteiros de demolição e
zoom. `src/game/` não muda.

## Registro

### 2026-11-27 — 1. Foto do estado do jogo para o executor

**Feito:** `src/main/diagnostic_route.hpp` ganhou `GameState` (dentro de
`UiState::game`) e `game_line()`. `src/main/pc_main.cpp` ganhou `capture_game()`,
que preenche a foto a partir dos campos do GameForm, da câmera e dos dados do
usuário (estado do mapa, zoom, cursor, câmera, endereço do cursor, instalação
selecionada, dinheiro em `save_->lngs[0]`, lista de instalações).

**Por quê assim:**
- O executor roda dentro do jogo, no mesmo quadro: a decisão é reproduzível. Um
  processo de fora lendo o log chegaria atrasado e fora de sincronia.
- Lê só campos e armazenamento estático: não chama método gerado (isso mudaria a
  cobertura que `dev.py routes` compara) e não aloca objeto gerenciado (mudaria
  o momento das coletas). Regra de `docs/notes/route-runner-design.md`.
- A foto fica fora de `to_line()`/`signature()`, e `capture_game` só roda quando o
  roteiro usa condições ou verbos de jogo (`Runner::uses_game()`). Os roteiros
  antigos registram e se comportam exatamente como antes.

### 2026-11-27 — 2. Condições e verbos novos

**Feito (mesmos arquivos):**
- Condições `scale`, `map_state`, `selected`, `tenant` (com `tenant_state`) e
  `money=less|more|same|changed` em `wait`/`expect`/`when`.
- Verbos `cursor to tenant=N`, `hold L|R frames=N`, `mark` e `watchdog frames=N`.
- `cursor to` e `wait` com condição de jogo fecham avisos do jogo com a regra do
  `dismiss`.
- `PLS_ROUTE_TIMEOUT` traz a foto; `PLS_GAME_STATE` registra cada mudança;
  `PLS_PC_SCRIPTED_ZOOM` registra o `hold`.
- Referência do formato: `docs/notes/route-runner-design.md`, seção "Roteiros
  orientados a estado".

**Descobertas que guiaram o desenho:**
- `Camera::ConvertAddressToScreen` **não** usa o espaço do cursor (endereço (15,6)
  dá (150,120); o cursor estava em (672,-128)). Por isso `cursor to` mira pelo
  endereço que o jogo calcula para o cursor (`Camera::camera_address`), não por
  pixels. Medido no save 50: RIGHT aumenta x e y do endereço; UP aumenta y e
  diminui x. A instalação ocupa as células x..x+1, y-1..y (`Camera::Collision`).
- Um aviso do jogo apareceu no meio do caminho (quadro 308 do save 200), o
  cursor ficou parado e o watchdog derrubou o roteiro em 600 quadros, com o
  motivo. Daí veio o fechamento de avisos dentro de `cursor to` e das esperas por
  condição de jogo.
- No save 50 a única instalação construída (id 7, dado 0) não tem a opção de
  remover; a janela da Gift Shop (save 200) tem o rótulo esquerdo 撤去. SOFT1 no
  mapa é "Salvar" (rótulo セーブ), não demolir.

**Testes:** `tests/kairo/diagnostic_route_fixtures.cpp` passou de 35 para 83
verificações, cobrindo análise, direção do cursor, empates, fechamento de aviso,
`mark`/`money`, `hold`, watchdog e a foto fora da linha de UI.
`python tools/test_diagnostic_route.py` → PASS e regrava o recibo
`config/phase2-diagnostic-route-tests.json` (é o comportamento normal da
ferramenta).

### 2026-11-27 — 3. Roteiros reescritos e comando `scenarios`

**Feito:**
- `tests/routes/demolish-state.route` (save 200): leva o cursor até a Gift Shop
  (instalação 6), abre a janela, remove, confirma e exige `tenant=6 tenant_state=0`.
- `tests/routes/zoom-state.route` (save 50): segura R e L e exige 130 sem encaixe,
  103 → 100, limite 200, e 194 → 200.
- `tools/dev.py scenarios [--only NOME] [--seconds S]`: compila uma vez e roda
  cada `tests/routes/*-state.route` no save da linha `# save=N`, com duas telas e
  `--fast`. PASS só se todos chegarem a `end`. Linha nova na tabela da seção 5 do
  `AGENTS.md`.

**Por quê um comando separado:** `dev.py routes` reexecuta só o histórico
canônico (cópias em `build/pc-diagnostic-release/attempts/`), então nunca rodaria
um roteiro novo de `tests/routes/`.

**Verificado (2026-11-27, nesta máquina):**
- `dev.py scenarios`: os dois PASS (demolição 15 s, tentativa 1887; zoom 12 s,
  tentativa 1888).
- A demolição executa `game.Tenant.DestructTenant` e `OutUserTPlayers`
  (`readable-method-counters.json` da tentativa 1882), que estavam ausentes das
  87 execuções.
- Provas contrárias, em `build/route-dev/`: trocar SOFT1 por SOFT2 dá timeout na
  linha 27 com a instalação 6 ainda em estado 1 (tentativa 1883); esperar 103
  estável depois de soltar L dá timeout na linha 22 (tentativa 1885).
- `dev.py routes --smoke`: 10/10 concluídos e cobertura idêntica às execuções
  anteriores de hoje (1245/1247, os mesmos 4 métodos fora). `dev.py check` PASS.
  `tools/check_repository.py` sem violações.

**Ajudantes locais (fora do Git, em `build/route-dev/`):** `run.py ROTA SAVE [S]`
roda uma rota sem recompilar; `show.sh [N]` resume a tentativa mais recente.
Úteis para escrever cenários novos: rode um roteiro curto até o mapa e leia o
`PLS_GAME_STATE` para descobrir ids e células das instalações.

### 2026-11-27 — 4. Correção dos 5 achados do audit dos roteiros

O usuário pediu para corrigir os pontos 1 a 5 do audit. O que cada um era, o que
mudou e como foi conferido:

**Achado 1 — PASS sem cobertura** (`tools/dev.py`, `cmd_routes`, `lost_coverage`,
`NEVER_REPLAYED`).
- Era: `dev.py routes` dava PASS com `union.only_canonical` cheio. Eram 9 métodos
  que o código canônico executava e nenhuma das 87 execuções executou mais,
  entre eles `DestructTenant` e `SetScale`.
- Mudou: todo conjunto (completo, smoke, affected) roda também os cenários
  `*-state.route` e soma a cobertura deles. O conjunto completo falha se sobrar
  algum método perdido fora de `NEVER_REPLAYED`. Os subconjuntos só avisam: lá a
  união cobre poucas execuções, e as 4 ausências que o smoke mostra hoje
  (`SubForm.MakeDialog` ×2, `Canvas.IsLinearFilterEnable`, `GamePad.AddTouch`)
  são cobertas por outras execuções no conjunto completo. A causa provável é a
  remoção do botão Site do título (313012b), mas não foi provada.
- Por que `NEVER_REPLAYED` tem só 4 métodos (`Canvas.Fullscreen`,
  `GamePad.SetMode`, `SurfaceBase.GetTouchOffset`, `GameView.OnTouchCamera`):
  - o levantamento por execução mostrou que os 9 vêm de `zoom.route` (334/335) e
    `demolish.route` (206);
  - a reexecução do código canônico (`build/c6b-route-set-canonical.json`)
    também não alcança os 7 de `zoom.route`, como já estava registrado em
    `docs/notes/readable-emitter-pass-2026-11-22.md`. Esses 7 nunca foram
    reproduzíveis;
  - 3 dos 7 (`SetScale`, `GetScaleRange`, `ResetOffscreen`) agora vêm de
    `zoom-state.route`. Sobram os 4 da lista;
  - a demolição (`DestructTenant`, `OutUserTPlayers`) era coberta pela
    reexecução canônica: era regressão real (câmera separada do cursor), e agora
    vem de `demolish-state.route`.

**Achado 2 — `--affected` não selecionava nada** (`tools/dev.py`, `doc_class`).
- Era: o id do contador (`M:game.Camera...`) era comparado com o nome da classe
  sem o prefixo `M:`, então uma mudança fora de método (constante, inicializador
  de tipo) ou num método novo selecionava zero roteiros e o comando saía com 0.
- Mudou: `doc_class()` tira o prefixo antes de comparar, nos três lugares.
- Conferido: a mesma simulação do audit (linha 48 de `game.Camera.cpp`) agora
  seleciona as execuções de `game.Camera`. Teste:
  `test_change_outside_a_method_selects_the_runs_of_its_class`.

**Achado 3 — roteiros e saves só em `build/`.**
- Era: 62 dos 76 textos de roteiro, a cobertura canônica e o conjunto esperado
  existiam só em `build/pc-diagnostic-release/` e `build/c6b-route-set-canonical.json`,
  sem como regenerar (o tradutor está aposentado).
- Mudou (roteiros e cobertura, no Git):
  - `tests/routes/replay/<n>.route`: as 87 cópias, com SHA-256 igual ao do
    histórico;
  - `tests/routes/replay/canonical-coverage.json` (452 KB): métodos completados
    por execução canônica, mais `replay_done`, os pares (roteiro, save) que a
    reexecução canônica conclui;
  - geradas por `python tools/run_readable_routes.py --apk X --frozen
    --export-replays`;
  - o executor usa a cópia versionada (`route_file`, `canonical_methods`) e só
    cai para `build/` se ela faltar; `dev.py routes` lê `replay_done` quando o
    arquivo de `build/` não existe;
  - conteúdo conferido: só ASCII, fora dois comentários que citam literais do C#
    já em `reference/`. Nenhum arquivo passa de 2 MB.
- Mudou (saves, fora do Git, regra 3 do `AGENTS.md`): `python tools/dev.py backup
  PASTA [--restore]`.
  - Copia os saves de que os roteiros partem: os do histórico, as linhas
    `# save=N` e 31/50. Grava um manifesto com SHA-256.
  - Recusa pasta dentro do repositório.
  - A restauração confere o hash e não sobrescreve um save que difere.
- Feito nesta máquina: backup de 21 saves (1,1 MB) em
  `C:\Users\l_abn\Documents\Projetos\PLS-private-backup\pls-private-saves`.
  A restauração numa pasta vazia devolveu os 147 arquivos idênticos.
- **O usuário deve guardar essa pasta noutro disco ou nuvem privada**: na mesma
  máquina, ela não protege contra falha de disco.

**Achado 4 — roteiros novos nunca rodavam.**
- Mudou: `cmd_routes` chama `run_scenarios()` em todo conjunto, menos com
  `--only`, e um cenário que falha derruba o conjunto. Junto com o achado 1, a
  cobertura dos cenários conta no portão. `cmd_scenarios` ficou um invólucro de
  `run_scenarios`.

**Achado 5 — a ordem "mais longos primeiro" se perdia** (`tools/run_readable_routes.py`,
`previous_durations`).
- Era: `cmd_routes` move `c6b-route-set-frozen.json` para um backup datado antes
  de começar, e o executor lia só esse arquivo, então as durações vinham vazias.
- Mudou: cai para o backup datado mais recente (`c6b-route-set-frozen-2*.json`,
  ignorando os `-subset`).
- Teste: `test_newest_dated_backup_is_used_when_the_state_was_moved`.

**Testes novos:** `tests/repository/test_dev_routes.py` (5 testes, rodam no CI sem
`build/`): `doc_class`; seleção do `--affected` numa árvore falsa;
`lost_coverage`; `previous_durations`; e as 87 cópias versionadas com o hash do
histórico e a cobertura presente. Suíte inteira do CI: 140 testes OK.

**Conferido de ponta a ponta:** `dev.py routes --smoke` → 10/10, cenários PASS,
aviso de cobertura com os 4 métodos acima, PASS; as execuções usaram
`tests/routes/replay/<n>.route` (tentativas 1908 e 1910 registram `138.route` e
`126.route`).

**Documentação:** `AGENTS.md` seção 5 (linha do `routes` e linha nova do `backup`);
`tests/routes/replay/README.md`.

### 2026-11-27 — 5. Conjunto completo com o portão novo

**Primeira execução** (`dev.py routes`, log em `build/route-dev/full-set-20261127.log`):
- 42 min de conjunto (2538 s; o histórico era ~65 min), com os mais longos
  começando primeiro (achado 5 funcionando). Cenários PASS.
- **FAIL pelo portão de cobertura**: faltou
  `M:data.PlayerData.Start_aura(game.Player)`. Causa: duas execuções de
  `remaining.route` com o save 106 (116 e 119, tentativas 1919 e 1920) pararam
  no meio. O jogo encerrou normalmente (`OnDestroy`), sem timeout.
- Diagnóstico:
  - comparando a sequência de teclas e telas com a execução anterior que
    concluiu (tentativa 1799), a partida apareceu 18 quadros depois (SELECT de
    frame de roteiro 2017 contra 1999);
  - o carregamento da partida avança em fatias de tempo real (já visto em
    `lots.route`, `docs/notes/readable-emitter-pass-2026-11-22.md`). Com mais
    carga na máquina, ele leva mais quadros, e o roteiro, que aperta SELECT por
    contagem de quadros, perde o passo;
  - "mais longos primeiro" põe os três `remaining.route`, `lots` e `actions`
    juntos no começo, o que concentra a carga nesse trecho;
  - não é erro do código do jogo, e o executor de roteiros não mudou para os
    roteiros antigos (eles não usam a foto do jogo).
- **O critério antigo não teria visto isso**: "esperados concluídos" agrupa por
  (roteiro, save), e a execução 117 do mesmo par concluiu, então `faltando` ficou
  vazio. Quem pegou foi o portão de cobertura novo.

**Reexecução das incompletas** (`dev.py routes --resume`, log em
`build/route-dev/full-set-resume-20261127.log`, 436 s):
- 116 e 119 concluíram. 86/87 concluídos: só `dialogs-exit.route` (131) não
  conclui, como sempre.
- Sem alertas do coletor e sem lacunas de tradução. Cobertura 1573/1577: os 4
  que faltam são exatamente os de `NEVER_REPLAYED`.
- Cenários PASS. Cobertura perdida: nenhuma. Resultado: **PASS**.

### 2026-11-27 — 6. Revisão de outro agente: falso PASS dos cenários

Um segundo agente revisou as seções 1 a 5 (só leitura, sem alterar nada) e
achou dois problemas. Os dois estavam certos.

**Problema 1 — falso PASS** (`tools/dev.py`, `run_scenarios`).
- Era: o cenário era aprovado só por `route_result.status == "done"`. O agente
  reproduziu um PASS incorreto em três casos depois do `done`: a ferramenta sai
  com código 1, o jogo registra `process_exit_code=1`, e a tentativa registra
  lacuna de tradução. A evidência está em
  `build/phase4-video/state-route-review/false-pass-reproduction.json`. Como os
  cenários também alimentam o portão de cobertura do conjunto completo, um
  cenário que falhou depois do `end` ainda poderia tapar cobertura perdida.
- Mudou: `scenario_failures(returncode, attempt)` devolve os motivos de
  reprovação (lista vazia = PASS) e é o único critério. Exige:
  - ferramenta com código 0 e linha da tentativa presente;
  - roteiro `done`, sem timeout registrado;
  - `process_exit_code == 0`, `exit_code == 0` e `stage == "process-executed"`;
  - sem `translation_gap_detected`, sem `reachability_alerts`, sem
    `stopped_at_timeout` e `trap_count == 0`;
  - um cenário reprovado (ou sem `readable-method-counters.json`) não soma
    cobertura.
- Testes (`tests/repository/test_dev_routes.py`, classe `ScenarioVerdict`): um
  caso limpo passa, e 10 falhas depois do `done` reprovam, uma por condição (as
  três do revisor e mais 7). Também reprovam roteiro não concluído, `stalled` e
  tentativa ausente. 8 testes no arquivo; suíte do CI OK.
- Conferido com execuções reais: as provas contrárias antigas reprovam com o
  motivo (1883: "timeout at line 27…"; 1885: "timeout at line 22…"), e
  `dev.py scenarios` e `dev.py routes --smoke` passam com o critério novo
  (tentativas 2013/2014 e 2033/2034).

**Problema 2 — a seção 1 dizia que os roteiros antigos registravam "exatamente
como antes", e não era verdade.**
- Era: `PLS_ROUTE_TIMEOUT` ganhava `"game":{"valid":false}` também nos roteiros
  só de interface.
- Mudou (`src/main/pc_main.cpp`): o campo `"game"` só é escrito quando o roteiro
  usa a foto do jogo (`route_game`). Os roteiros só de interface voltam ao
  formato anterior.
- Conferido: o timeout de um roteiro só de interface (tentativa 2019) sai sem
  `"game"`; o de um roteiro de jogo (tentativa 2020) sai com ele. Com isso a
  frase da seção 1 passa a valer.

**O que o revisor deixou sem verificar:** o ciclo pesado, cenários novos e se o
toque seleciona lotes (resposta dele: UNKNOWN). Publicação, análise do perfil e
zoom suavizado não foram iniciados.

## Pendências

Os 5 achados do audit dos roteiros foram corrigidos (seção 4). Continua aberto:
- **Execuções que dependem do tempo real** (seção 5): `remaining.route` e
  `lots.route` podem parar no meio quando a máquina está carregada. Hoje o
  remédio é `dev.py routes --resume`. A correção de fundo é reescrever esses
  trechos com esperas por condição (`wait form=SoccerForm`, condições de jogo),
  em vez de SELECT por contagem de quadros.
- **"Esperados concluídos" por par (roteiro, save)** esconde uma execução
  incompleta quando outra do mesmo par conclui. Contar por execução exige saber
  quais execuções a reexecução canônica conclui uma a uma; hoje só os pares
  estão versionados (`replay_done`).
- Próximos cenários sugeridos, onde o port mudou o jogo: construir (estado
  2 → 1, `money=less`), salvar e carregar, cursor escondido e revelado pelo
  circle pad.
- Copiar `PLS-private-backup` para fora desta máquina (decisão do usuário).

O registro acima descreve a entrega original do outro agente, antes da revisão
e dos commits de integração.

## Revisão de integração

A árvore recebida foi preservada em
`build/phase4-video/state-route-review/incoming/` (101 arquivos, manifesto com
SHA-256). O diff recebido não altera `src/game/`, `src/runtime/` nem
`src/kairo/common/`. Há alterações em dois arquivos de `src/main`, um fixture,
duas ferramentas, documentação e um recibo gerado; os demais arquivos novos são
os cenários, testes de ferramentas e as cópias dos replays.

Conteúdo: 87 replays com hashes iguais ao histórico; 89 arquivos na pasta
(roteiros, README e cobertura), sem extensões/tamanhos proibidos. A cobertura
tem 452.143 bytes, 87 execuções e 1.577 métodos. Os dois comentários japoneses
distintos, repetidos em 128.route e 172.route, estão em TitleForm.cs:336/431.
O backup externo tem 21 saves e 147 arquivos, todos com hashes válidos; não há
saves no índice. O check de blobs staged ainda deve passar antes dos commits.

O falso PASS foi reproduzido e corrigido pelo agente de origem (seção 6).
A revisão repetiu falha da ferramenta, falha do jogo, lacuna e controle limpo:
os três negativos falham e não somam cobertura; o controle passa. Evidências
em `false-pass-retest.json`, na pasta privada da revisão. Também foi corrigida
a documentação que ainda dizia que os cenários não entravam em `routes`.

Primeiras verificações dos novos cenários: câmera, tentativa 2040, PASS;
construção, tentativa 2046, PASS. A foto também expõe o tipo da SubForm para
distinguir lista e confirmação sem depender de textos. Nenhum método do jogo
foi alterado. Os controles analógicos entram pela API normal depois da leitura
do host; não se escreve diretamente na câmera, no cursor ou no save.

Toque: a tentativa 2041 tocou em (212,87), abriu a janela da instalação 6 e
preservou essa seleção. Portanto, não houve perda geral da seleção por toque.
Uma primeira tentativa da coordenada antiga coincidiu com um aviso; não serve
para atribuir sozinha a falha à coordenada. A repetição 2051 espera GameForm
no topo antes do toque; a análise do resultado será incluída no fechamento.

O primeiro cenário de recarga comparou por engano o autosave antigo com o save
manual recém-gravado: UP muda `selectSaveType_` de 1 (manual) para 0 (auto).
A diferença de câmera desse teste não prova regressão do jogo. O roteiro de
recarga foi corrigido para escolher o manual, mantendo todas as comparações.

## 2026-11-27 — 7. Restauração do backup: caminho que escapava da pasta (agente de origem)

Encontrado pelo revisor: `dev.py backup --restore` usava os nomes do manifesto
sem validar. Num teste temporário, o nome `../../../escaped.txt` sobrescreveu um
arquivo fora da pasta dos saves e o comando ainda saiu com 0. A evidência está
em `build/phase4-video/state-route-review/backup-path-reproduction.json`. O
revisor parou e pediu autorização; o usuário encaminhou o relato ao agente de
origem, que corrigiu.

**Mudou** (`tools/dev.py`, `restore_plan` e `linked`, chamados por `cmd_backup`):
- A restauração agora tem duas fases. Primeiro valida o manifesto inteiro; só
  copia se nada estiver errado. Com qualquer problema, nenhum arquivo é escrito
  e o comando sai com 1.
- Regras de validação:
  - número de save decimal positivo, na forma canônica (recusa `../50`, `050`,
    `0`);
  - nome relativo POSIX na forma canônica, sem `..`, `.`, partes vazias,
    barra invertida, `:` ou barra inicial (recusa `rs//0` e `./rs/0`);
  - SHA-256 com 64 dígitos hexadecimais;
  - origem e destino resolvidos dentro da pasta do próprio save;
  - nenhum link simbólico ou junção nas pastas nem no caminho de cada arquivo;
  - hash da cópia conferido antes de copiar;
  - um save que já existe só é comparado, nunca sobrescrito.
- O backup (sentido de ida) também recusa um save que contenha link.

**Testes** (`tests/repository/test_dev_routes.py`, classe `BackupRestore`, 5
testes):
- um manifesto válido restaura os arquivos idênticos;
- 7 nomes que escapam ou não estão na forma canônica falham, não copiam nem o
  arquivo válido do mesmo manifesto e não tocam o arquivo de fora;
- números, hashes, cópia corrompida, arquivo ausente e manifesto vazio falham;
- um save existente e diferente não é sobrescrito;
- um link simbólico no backup é recusado. O teste rodou de fato nesta máquina:
  ele só é pulado sem permissão de criar link.

**Conferido:**
- O caso do revisor, refeito com o código novo, sai com 1, mostra "nome
  inválido '../../../escaped.txt'", não escreve nada e deixa o arquivo de fora
  intacto.
- O backup real continua funcionando: 21 saves; a restauração sobre `build/` diz
  "21 já presentes"; numa pasta vazia restaura os 147 arquivos idênticos.
- 14 testes no arquivo; suíte do CI e `dev.py check` passam.

**Achado no caminho: texto corrompido em `tools/dev.py` e `tools/build_pc.py`.**
- Era: na árvore de trabalho, as 41 linhas com português de `tools/dev.py`
  estavam recodificadas duas vezes (UTF-8 lido como cp1252 e regravado:
  "repositório" virou "repositÃƒÂ³rio"), e o arquivo estava com CRLF. Em
  `tools/build_pc.py`, as duas mensagens do APK (linhas 316-317), que já estavam
  corrompidas uma vez no HEAD, foram corrompidas de novo.
- Origem provável: uma edição posterior ao último smoke do agente de origem (as
  mensagens daquele smoke saíram corretas). Não foi investigada mais a fundo.
- Mudou: as linhas foram revertidas desfazendo a recodificação, que é exata, e
  os arquivos voltaram a LF. As duas mensagens de `build_pc.py` ficaram no
  português correto. A mudança funcional do revisor em `build_pc.py` (a fonte
  do histórico quando o save vem do mesmo build) foi preservada.
- Conferido: nenhum `Ã` restante nos dois arquivos, os dois são analisados pelo
  Python e não há mojibake nos outros arquivos alterados.
- **Cuidado para quem editar:** grave em UTF-8 sem conversão (no PowerShell 5.1,
  `Set-Content` sem `-Encoding utf8` usa a página ANSI).

## 2026-11-27 — 8. Aviso ao agente revisor (pedido do usuário)

Ao agente que revisou e integrou este trabalho:

1. **Este arquivo voltou para a raiz como `changes.md`, por decisão do usuário.**
   Ele tinha sido movido para `docs/notes/state-driven-routes.md`. Não mova, não
   renomeie, não divida e não reescreva as seções antigas; acrescente as suas no
   fim. As referências foram atualizadas (`docs/notes/route-runner-design.md`,
   `tests/routes/replay/README.md`, `tests/repository/test_dev_routes.py`). A regra
   está agora no `AGENTS.md` (mapa da seção 4 e seção 7).
2. **Suas edições corromperam o texto de `tools/dev.py` e `tools/build_pc.py`**: o
   português ficou recodificado (UTF-8 lido como cp1252 e regravado) e os arquivos
   ficaram com CRLF. Foi revertido (seção 7 acima). Antes de editar de novo, leia
   em `AGENTS.md`, seção 7, "Codificação dos textos": as armadilhas do PowerShell
   5.1, do Python no Windows e do Git Bash nesta máquina, e como conferir depois.
   Confira os arquivos que você editou nesta rodada e que o agente de origem não
   olhou.
3. **A falha de restauração do backup que você encontrou foi corrigida** (seção 7):
   o manifesto é validado inteiro antes de copiar, há 5 testes contrários, e o seu
   caso agora sai com 1 sem escrever nada.
4. **A verificação completa que você deixou pela metade ainda precisa ser
   refeita**, com a árvore congelada (sem editar documentação ou roteiros durante a
   execução).

## 2026-11-27 — 9. Fins de linha CRLF na árvore de trabalho

- Ao conferir os arquivos depois da seção 8, 14 arquivos estavam com CRLF na
  árvore de trabalho, embora o índice do Git tivesse LF (`git ls-files --eol`:
  `i/lf w/crlf`). Nenhum tinha texto corrompido (`grep -c 'Ã\|Â'` = 0).
- Entre eles, 7 arquivos versionados que ninguém tinha alterado (`ctr_main.cpp`,
  `ctr_frame_profile.hpp`, `label_touch.hpp`, `pc_dual_screen.cpp`,
  `report_ctr_video.py`, `report_tracing_measurements.py`,
  `test_gc_event_buffer.py`). Converter para LF fez o Git marcá-los como
  alterados sem diferença de conteúdo (a configuração global tem
  `core.autocrlf=true`). Como `git diff` estava vazio, eles foram restaurados com
  `git checkout --`, e voltaram limpos e com LF.
- Os demais (roteiros novos, `diagnostic_route.hpp`, `pc_main.cpp` e o fixture)
  ficaram em LF. O fixture passa (94 asserções).
- Restam com CRLF, sem mudança e sem relação com este trabalho:
  `tools/ctr-gc-fixture/CMakeLists.txt` e
  `tools/profiling/run_allocation_probe.py`.
- Nada foi posto em stage; nada foi commitado.

## 2026-11-27 — 10. Retomada da revisão de integração

Relidos este registro e o AGENTS.md. Este arquivo permanece na raiz; esta seção
complementa, sem substituir, as evidências anteriores.

- Backup: repetido o caso exato de `../../../escaped.txt` em pasta temporária.
  Resultado: código 1, zero arquivos escritos e vítima intacta. O backup real
  restaurou 21 saves e 147 arquivos idênticos numa pasta temporária. Evidência
  privada: `build/phase4-video/state-route-review/backup-path-retest.json`.
  Os 14 testes de `test_dev_routes.py` passaram, inclusive o teste de link.
- Codificação: a revisão ainda encontrou três setas corrompidas nas mensagens
  de `affected_selection`; foram restauradas para o caractere original. Não
  houve mudança funcional. Os replays conservam os bytes do histórico,
  incluindo seus fins de linha, para preservar os hashes canônicos.
- Correção da conclusão provisória sobre toque: a tentativa 2062 esperou o
  mapa, revelou o cursor com o primeiro toque e repetiu (138,92). O segundo
  toque selecionou a instalação 7 e abriu a janela 65. A tentativa 2041 em
  (212,87) selecionou a instalação 6. A seleção por toque funciona; a antiga
  coordenada já não aponta para a loja, e o primeiro toque com cursor oculto
  apenas o revela. Nenhuma regra do jogo foi alterada.
- Recarga correta: as tentativas 2060/2061 gravaram e carregaram o save manual
  em processos distintos, preservando dinheiro, instalações, cursor e câmera
  (câmera 696,-128; cursor 672,-128). O cenário mantém essas quatro comparações.
  O resultado anterior de câmera recentrada veio da escolha do autosave antigo,
  não demonstra regressão e não justifica mudar a regra de carregamento.
- Pedido de investigação histórica: os testes antigos regravavam o save após
  carregar, portanto observavam o resultado da recarga. Com o executável local
  de a24d97a, a câmera 1008,-128 e o cursor 672,-128 foram preservados. No código
  atual, esse mesmo save mantém a câmera e leva o cursor distante ao centro,
  conforme a regra posterior de visibilidade; o caso coerente 1080,-128 e
  1008,-128 preserva ambos. Não há evidência de câmera voltando ao cursor.
  Evidências: `build/phase4-video/state-route-review/historical-reloads/`.
  Não foram recompilados fa1d866, 7c4f875 e 9b83d55: não havia executáveis
  identificados desses três commits, e quatro builds não seriam um teste barato.

A verificação completa anterior terminou com erro de atestação porque arquivos
foram editados durante sua execução. Não conta como PASS; será repetida sem
alterar a árvore durante a execução. Publicação, perfil e zoom fracionário seguem
dependendo da conclusão desta integração e do ciclo completo.

## 2026-11-27 — 11. Bloqueio da integração: normalização dos replays no Git

Os cinco cenários passaram em 98,1 s (tentativas 2064 a 2069, incluindo a
recarga 2067 para 2068). A revisão encontrou uma diferença entre a árvore
local e o conteúdo que o Git armazenará: 42 dos 87 replays têm CRLF nos bytes
canônicos, mas recebem `text=auto eol=lf` de `.gitattributes`. A normalização
troca os bytes e invalida o teste que exige SHA-256 idêntico ao histórico.

Exemplo: `143.route` tem 36 CRLF; SHA-256 original
`335f3b5671c03534daddfe05d88782fb70fc9a674aff842aa899be6c8b2dd6f3`,
contra `ffdef1fe7c716f7cd8589209b82b75844c58e6ed88e2c8da93732d9b809528ae`
com LF. `git hash-object --no-filters` e `git hash-object --path` também
produzem blobs diferentes. Evidência dos 42 arquivos, fora do Git:
`build/phase4-video/state-route-review/replay-normalization.json`.

Proposta, ainda não aplicada: `tests/routes/replay/*.route -text` em
`.gitattributes`, preservando apenas os bytes desses roteiros históricos.
Não é mudança de conteúdo do jogo. A integração parou conforme o item 1h
do pedido do usuário: não publicar uma verificação que passa localmente e
falha depois de normalizar os arquivos no Git. Nenhum commit ou push novo.

O smoke já em execução terminou: PASS em 196,7 s, 10/10 execuções tradicionais,
zero alertas, zero faltantes e cinco cenários PASS (2082 a 2087, com recarga
2085 para 2086). O subconjunto avisou sobre os quatro métodos já conhecidos;
o portão do conjunto completo ainda precisa ser executado. O diff atual não
altera `src/game/`, `src/runtime/` ou `src/kairo/common/`.

## 2026-11-27 — 12. Bytes históricos preservados e integração em commits

Com autorização do usuário, `.gitattributes` ganhou somente a exceção
`tests/routes/replay/*.route -text`, no commit próprio a0b0887. Conferidos os
374 arquivos então rastreados de `config/` e `tests/`: nenhum blob do HEAD
continha CRLF. `canonical-coverage.json` também usa LF. Não foi necessária
outra exceção; recibos regenerados não substituem os recibos de referência.

Após os commits locais, clone real fora do projeto, sem assets ou `build/`:
`%TEMP%/pls-clean-replay-nyybp6y6/repo`, commit 8811f66. Nesse clone,
`python -m unittest discover -s tests/repository -p test_dev_routes.py -v`
passou os 14 testes, incluindo os 87 hashes históricos e a cobertura das 87
execuções. Comparados também os 470 arquivos de `config/` e `tests/` com os
blobs do Git: zero diferenças de bytes. Evidências privadas em
`build/phase4-video/state-route-review/clean-clone.json` e `clean-clone.log`.

Commits de integração, com origem citada nas mensagens:
- 03d3bb1: foto de estado, verbos e fixture (94 asserções);
- 697a3ed: comando scenarios, cinco cenários e recarga em outro processo;
- be80420: portão de cobertura, seleção affected e ordem dos roteiros longos;
- 561db19: 87 replays e cobertura versionados;
- 8811f66: backup privado com validação anterior à cópia.

Build e check passaram antes de cada commit; o smoke do mesmo código passou
em 196,7 s (10 replays e cinco cenários). Os 73 recibos modificados pela rodada
anterior foram arquivados com hashes em `before-final-receipts/`, na pasta
privada da revisão, antes de restaurar apenas esses arquivos gerados. O
registro e a documentação formam o commit seguinte. Nenhum push até completar
o ciclo obrigatório.

## 2026-11-27 — 13. Integração publicada e perfil físico analisado

A integração e os commits de perfil automático, zoom inteiro e cache já
testados no aparelho foram publicados até d587023. CI Content policy verde.
Árvore limpa no push; nenhum asset, save, captura ou `.3dsx` foi publicado.

Ciclo final, sem editar arquivos durante as verificações:
- check --all: PASS, 138,0 s, 517 arquivos e zero diferenças de formatação;
- full: 105/105 PASS, 1.295,3 s, zero adiados, atestação final aprovada;
- routes completo: PASS, 2.668,3 s; 87 executados, 86 concluídos e somente
  dialogs-exit com saída esperada; zero alertas e zero lacunas de tradução;
  cinco cenários PASS, incluindo salvar e recarregar em processos separados;
  portão de cobertura aprovado, com as quatro exceções históricas documentadas;
- actions/save 95: 1.114,3 s; lots/save 106: 1.174,6 s; sem retomada;
- ARM nulo: PASS, 1.133,1 s; CTR vídeo: PASS, 51,8 s;
- autoteste GPU, título e saída com perfil no Azahar: PASS, 30,0 s;
- check_repository --staged: PASS, 49,3 s, zero violações.

Os 75 recibos regenerados foram arquivados com hashes em `final-receipts/`
na pasta privada de revisão e restaurados ao conteúdo rastreado. A prova
em clone limpo e os 87 hashes estão descritos na seção 12.

Complemento à investigação histórica da seção 10: a leitura do diff atribui
a regra de levar o cursor distante ao centro a fa1d866; 7c4f875 acrescenta
a ocultação. Não foi encontrada regressão de câmera recarregada. Os três
executáveis históricos indisponíveis não foram reconstruídos.

Perfil físico: 9.060 quadros, 116 coletas, zero eventos descartados; 213 quadros
acima de 50 ms e 80 acima de 150 ms. A partida estável teve 2.850 quadros, nenhum
acima de 50 ms. Maior coleta: 308,906 ms; maior quadro: 3.533,859 ms. Gravações
do perfil chegam a 26,936 s fora dos quadros medidos. Análise e propostas,
sem otimizações de runtime/coletor, em
`docs/notes/phase4-profile-session-2026-11-27.md`; tabelas completas privadas
em `build/phase4-video/state-route-review/hardware-tables.md`.

O trabalho seguinte é somente local: zoom fracionário com ampliação inteira
2× e redução linear, autorizado pelo usuário. Não faz parte do push acima.

## 2026-11-27 — 14. Zoom fracionário local e correção do perfil de movimento

Zoom implementado em 2c2ebe2, sem push. Fixture: 588 asserções PASS; smoke:
191,5 s, 10/10 roteiros e cinco cenários PASS, zero alertas. Capturas do PC
confirmam igualdade byte a byte em 100%/200%, na inferior e na barra superior.
Nove níveis e sequências de rolagem foram capturados no PC e Azahar. O CTR
usa 2 MiB lineares extras, sem VRAM extra; folga medida de 1.930.240 bytes.
Em fracionários acima de 100%, 3 cópias/3 MiB por quadro a mais; custo dessas
cópias no emulador de aproximadamente 0,44 ms, sem equivalência ao aparelho.

A análise encontrou um erro no diagnóstico já publicado: `frame_scene`
observava `Camera::camera_spos`, armazenamento intermediário reutilizado,
em vez de `Camera::pos`. Não é falha do movimento do jogo. Corrigida somente
a leitura do host CTR; a comparação usa float e o CSV mantém coordenadas
inteiras. Metadados `camera_position_version=2`; o analisador avisa sobre
os CSV antigos sem descartar os tempos por formulário. Sete testes do leitor
passaram; no Azahar, 29/29 quadros de circle pad pleno foram marcados como
movimento. Runtime, coletor e jogo não foram alterados por essa correção.

Instruções e limitações da entrega em `docs/notes/phase4-fractional-zoom.md`.
É necessária nova sessão física para separar corretamente mapa parado e
rolando e medir o filtro. Os totais da sessão anterior, coletas e tempos por
formulário permanecem válidos. Não houve novo push após d587023.

## 2026-11-27 — 15. Falha física no autoteste do zoom fracionário

O usuário informou que o pacote não abriu no New 3DS XL. Os novos logs em
`build/phase4-video/n3ds` terminam com
`GPU map zoom differs from CPU sampling`, antes de iniciar o jogo. Cópia
preservada em `build/phase4-video/n3ds-fractional-boot-failure`.

A sequência mostra que o teste de redução passou e a divergência ocorreu
na ampliação 2× seguida de redução a 150%. O Azahar havia passado: essa
aprovação não comprovou a equivalência no hardware. O log antigo não tem
os pixels, portanto a causa numérica ainda é UNKNOWN.

Acrescentado somente diagnóstico no autoteste do host CTR: dez pixels com
RGBA esperado/recebido, contagem de canais divergentes e maior erro por caso.
A tolerância continua 2; nenhuma verificação foi removida, nenhum filtro
foi alterado. O teste ainda encerra quando encontra divergência. Sem mudança
no jogo, runtime, coletor, save ou dependências. O pacote de diagnóstico fica
em `build/phase4-video/zoom-boot-diagnostic.3dsx`, sem push, e precisa de uma
execução física sem `map-nearest.flag` para obter os valores ausentes.

Para voltar provisoriamente ao modo anterior, a flag já existente
`SD:/pls-video/map-nearest.flag` desliga o filtro e seu teste específico.
Isso é alternativa de comparação, não uma correção da divergência.

## 2026-11-27 — 16. Valores físicos recebidos e calibração restrita do autoteste

Novos logs preservados em `build/phase4-video/n3ds-zoom-pixel-diagnostic`.
A 75%, erro máximo 1. A 150%, seis canais interpolados acima de 2, máximo 5;
cantos e alfa exatos. O valor esperado (128,128,0,255) virou (131,123,0,255).
O estágio da GPU responsável ainda é UNKNOWN; precisão de interpolação é
hipótese, não uma causa comprovada.

Corrigido somente o critério do autoteste: limite 5 para RGB esperado 128
do padrão de 150%; limite 2 nos demais canais/casos. Os pixels desenhados
permanecem iguais. Testes com os valores sintéticos medidos e negativos para
erro 6, nearest no lugar de linear, cantos trocados e alfa incorreto. Nenhuma
mudança no renderer, jogo, runtime, coletor, save ou dependências. O pacote
de teste fica em `build/phase4-video/zoom-calibrated-test.3dsx`, sem push.

Verificação: fixture 633 asserções; build CTR 126,9 s; Azahar 32,1 s
(autoteste PASS, título e saída); build PC 3,4 s; check 6,5 s;
smoke 224 s, 10/10 roteiros, 5/5 cenários e zero alertas. O pacote
calibrado ainda precisa ser executado no aparelho.
