# Plano de cobertura do percurso (critério 3)

Objetivo: executar no PC, pelo diagnóstico com entradas gravadas e relógio
virtual, todo método do jogo alcançável por um jogador, e explicar cada método
que fica de fora.

## Estado (2026-11-13)

| Estado em `config/translation.csv` | Métodos |
|---|---:|
| `runs` (executado em diagnóstico validado) | 780 |
| `translated` (compilado, nunca executado) | 988 |
| `todo` (sem corpo; ver `docs/notes/translation-pending.md`) | 190 |

Os não executados, por grupo (lista completa em
[`coverage-never-reached.md`](coverage-never-reached.md)):

| Grupo | Métodos | Como cobrir |
|---|---:|---|
| Jogo: dados e regras | 365 | roteiros de temporada (abaixo) |
| Jogo: telas e formulários | 276 | roteiros de menu (abaixo) |
| Serviços removidos (cobrança, amigos, rede, Tapjoy, Android) | 517 | testes das políticas offline, não roteiro de jogador |
| Depuração (`DebugForm`) | 20 | fora do percurso; registrar como não alcançável no produto |

## Roteiros

Cada roteiro é um replay gravado (`replay.txt`) com save de partida conhecido,
executado pelo diagnóstico no PC; o resultado alimenta
`config/phase2-diagnostic-attempts.json` e o livro-razão.

1. **Abertura nova:** título → novo jogo → nomeação (entrada de texto pela
   política atual) → primeira semana. Cobre `BootForm`, `TitleForm`,
   inicializações de `UserData`, `AppData`.
2. **Gestão em todos os menus:** cada entrada do menu principal e de cada
   submenu ao menos uma vez, com confirmação e cancelamento: treino,
   formação, contratação e troca (`TradeData`), patrocinadores
   (`SponsorData`), inquilinos (`TenantData`, `game.Tenant`), ações de
   torcida (`FanActData`, `FanBonusData`), técnico (`SupervisorData`),
   ranking (`RankForm`). Cobre a maior parte de `form.SubForm`,
   `main.AppData`, `surface.GameView`.
3. **Partidas variadas:** vitória, empate, derrota; partida pulada e
   assistida; cada tipo de competição disponível. Cobre `game.*`,
   `SoccerForm`, `GameForm`.
4. **Temporada completa:** avanço rápido até o fim da temporada, premiações,
   virada de ano, evento anual (`EventData`), condições de fim de jogo. É o
   roteiro mais longo; usa o save de diagnóstico com avanço acelerado pelo
   próprio jogo, sem alterar regras.
5. **Save e carga:** gravar, sair, recarregar em cada estado acima; save
   corrompido/ausente pelo caminho original de erro.
6. **Políticas offline:** chamar diretamente cada ponto de serviço removido
   (cobrança indisponível, amigos sem rede, anúncios ausentes) por fixture,
   porque nenhum jogador chega a eles no port. Conta como "verificado por
   política", não como `runs`.

## Regra de fechamento

Um método fica fora do roteiro só com motivo registrado: depuração, serviço
removido (coberto pela fixture de política), ou código morto comprovado (sem
chamador alcançável no fonte reconstruído). A meta do critério 3 é zero
métodos `translated` sem um dos três estados: `runs`, `política`, `morto`.

## Dependências

- Roteiros 1 e 2 dependem da política de entrada de texto e do painel de
  idioma, que são decisões de tela/controle (Fase 3); até lá, usam a política
  atual de diagnóstico.
- Roteiro 4 depende de `MatchForm.Run` e da cadeia `KairoBase.ConnectLogin`
  só se o jogo exigir modo online para avançar; a verificar.

## Como executar um roteiro hoje (levantamento de 2026-11-13)

- **Caminho:** `tools/build_pc.py` com o `pc_game.exe` diagnóstico
  (instrumentado por `PLS_METHOD_SCOPE`). O caminho nulo (`build_null.py`) é
  só benchmark e não registra métodos.
- **Comando de um segmento** (modelo das tentativas 46–49):
  `python tools/build_pc.py --apk APK --diagnostic-generated build/<snapshot> --configuration Release --run --run-seconds 600 --metrics --diagnostic-save-from-attempt 31 --virtual-clock 1767225600000,1000,50 --diagnostic-title-anchor 16 --diagnostic-select-frame <f> ... --diagnostic-key-frame <f>:<TECLA> ... [--diagnostic-dismiss-popups-until-frame <f> [--diagnostic-unlabeled-popups-only]]`
  — antes: tradução do jogo e `translator/diagnostic_snapshot.py`.
- **Entradas:** teclas SELECT, UP, DOWN, LEFT, RIGHT, SOFT1, SOFT2 como
  pulsos em frames fixos (1..12000, crescentes), contados a partir da âncora
  do título; dispensa automática de pop-ups; relógio virtual.
- **Resultado:** cada tentativa grava `build/pc-diagnostic-release/attempts/<N>/`
  (log, capturas a cada 60 frames, save) e uma linha em
  `config/phase2-diagnostic-attempts.json`; `python tools/progress`
  recalcula `runs` a partir de todas as tentativas, revalidando seus hashes
  (as pastas de tentativas em `build/` precisam ser mantidas).
- **Saves de partida:** tentativa 31 (jogo novo até a escalação); 35–49
  (partida completa e volta à gestão).

**Lacunas:** sem formato de roteiro nem gravador (o roteiro é escrito por
tentativa e erro com as capturas); sem avanço rápido (cada segmento ≤ 10 min,
encadeados pelo save — roteiro 4 exige muitos segmentos); sem "esperar pelo
formulário X"; estados `política` e `morto` ainda não existem no livro-razão.

## Execução de 2026-11-13 (tentativas 50–54)

| Tentativa | Roteiro | Resultado | `runs` |
|---|---|---|---:|
| 50 | Partida completa (parâmetros da 49) sobre a tradução nova | sem lacuna de tradução; 1.161 métodos concluídos (49: 1.160); save pós-partida gravado | 780 |
| 51 | Menus a partir do save 31 | mensagens do assistente bloquearam o menu | 784 |
| 52 | Idem, com dispensa de janelas sem rótulo | save 31 está antes de uma partida: "Menu" iniciou a partida | 791 |
| 53 | Menus a partir do save 50 (pós-partida), 1 nível | menu principal e telas de cada item (ex.: Cup Match, Special Practice) | 803 |
| 54 | Menus em 2 níveis | um SOFT2 a mais fechou o menu; navegação cega saiu do trilho | 806 |

**Cobertura atual: 806 de 1.958 métodos com execução comprovada** (era
780). Nenhuma tentativa encontrou lacuna de tradução. O roteiro 2 precisa de
navegação que confira a tela (ou um roteiro escrito tela a tela com as
capturas); o modelo "entrar/voltar/descer" às cegas atinge só o primeiro
nível. Saves úteis: 31 (antes da 1ª partida), 50 (gestão após a partida).

## Roteiros com condições (2026-11-14)

Gancho somente leitura e executor por condições no build de diagnóstico
(`src/main/diagnostic_route.hpp`; projeto em
`docs/notes/route-runner-design.md`; teste isolado 38 asserções). Roteiros em
`tests/routes/` (só teclas e condições; nenhum dado do jogo).

| Tentativa | Roteiro | Resultado |
|---|---|---|
| 55 | `menu-trace` (1ª versão) | carga até `GameForm` em 183 frames; esperou rótulo por texto (os rótulos são o texto japonês original) e esgotou o tempo |
| 56 | `menu-trace` | concluído no frame 912; estrutura: Menu = `SubForm` profundidade 2; item → sub-janela profundidade 3 |
| 57 | `menu-explore` (6 itens × 5 subitens, 2 níveis, gerado) | sem lacuna de tradução; parou no passo 162 de 203 pelo limite de 480 s |

Cobertura após 55–57: **809 métodos com execução comprovada** (era 806).
| 59 | `menu-explore`, 600 s | sem lacuna; passo 192 de 203; a dispensa genérica se perde em sub-janelas aninhadas (profundidade até 8) e volta à gestão; nenhum método novo |

**Conclusão:** o gancho e o executor funcionam; o explorador genérico
"entrar/voltar" não basta. Os roteiros de segundo nível, de serviços offline
(amigos, presentes, escalações, `MatchForm.Run`) e de temporada precisam ser
escritos tela a tela (condições por profundidade/rótulo, com capturas), e a
temporada exige segmentos encadeados pelo save. Pendente.

## Rodada de 2026-11-14: cobertura sobre os alcançáveis

A análise estática (`tools/callgraph`, `config/phase2-reachability.json`)
reduz o alvo do critério 3 aos **1.248 métodos alcançáveis no port**. Os
demais estão justificados em `docs/coverage-never-reached.md` (89 por
política, 35 só depuração, 586 inalcançáveis no original).

| Tentativa | Roteiro | Resultado | Executados / alcançáveis |
|---|---|---|---|
| 60 | `season` (1ª versão, `--fast`) | 24.448 frames em 452 s (~54 fps); chegou ao fim do ano 1; o jogo encerrou por uma confirmação | 827 / 1.248 |
| 61 | `season` (espera com dispensa) | 600 s; travou na escolha de fim de ano ("dispensar jogador"): "Back" devolvia à mensagem | 827 |
| 63 | traço do fim de ano (save 62) | a confirmação "Dismiss Player? Yes/No" vem com "No" marcado | — |
| 64 | `season` com `when ... key LEFT/SELECT` | passa da escolha; entra na sequência "Dismiss Player? N/30" (dispensas repetidas) | **828 / 1.248 (66,3%)** |
| 65 | salvaguarda (693 métodos vigiados) | 0 alertas | 828 + 39 creditados = 867 |
| 66 | `season` respondendo "Não" (save 64, `--fast`, 600 s) | 32.400 frames; do ano 1, mês 12 ao ano 5, mês 1: 4 viradas de ano, 3 temporadas completas; `RecordReset`, `CustomerNumReset`, `SupervisorData.LvUp` executados | **835 + 39 = 874 / 1.248 (70,0%)**; 157 justificados; 217 restantes |

Nenhuma tentativa teve lacuna de tradução, exceção não tratada ou tela presa
fora do próprio laço de decisão do jogo. O executor ganhou o passo
`when <condição> key <tecla>` (tecla condicional, sem espera; 41 asserções no
teste isolado), e as capturas continuam a cada 300 frames além do frame
12.000 quando há roteiro.

**Pendente (próxima rodada):** completar a sequência de dispensas e a virada
de ano; roteiros de loja/cobrança (~56 métodos alcançáveis), `SpForm` (19),
`RankForm` (13), `LanguageForm` (11), `HttpForm`/`ConnectForm` (~30);
serviços offline (amigos, presentes, escalações, `MatchForm.Run`, cobrança,
registro) em execução; saves (criar, carregar, sobrescrever, autosave,
carregar de sessão anterior).

**Correção da sequência de dispensas (2026-11-15).** O jogo não deixa o time
ficar abaixo de 11 jogadores: no tipo 72 do `SubForm` (`form/SubForm.cs`),
"Sim" só abre a lista de dispensa com mais de 11 membros; senão mostra o
evento 121 e repete a pergunta. A rota antiga respondia "Sim" e ficava presa
nesse laço (apontado pelo usuário). A rota agora responde "Não" (`RIGHT`,
`SELECT`), que executa o evento 116 e fecha. Save do jogo: vaga única;
autosave semanal em `GameForm.cs:1325` (`SaveGame(true)`), coberto pela
temporada; save manual pela tecla esquerda (`SubForm(16)`), rota `saves.route`.

## Tentativas 67–76 (2026-11-15)

| Tentativa | Roteiro | Resultado | Exercitados / alcançáveis |
|---|---|---|---|
| 67 | `saves` (save 66) | save manual (`SubForm(16)`, `AppData.SaveGame()`), três semanas, sobrescrita; fim no frame 630 | — |
| 68 | `saves` (save 67, sessão nova) | carrega o save gravado na 67 (mesma data 5a 1M 3s); sobrescreve de novo | — |
| 69–73 | `touch-title` (foco, toque no idioma, Hi Scores, mapa) | 69/71/72 param em `LanguageForm.Update` (NRE/IOOR), 73 completa: falha intermitente → estáticos sem raiz (`docs/notes/unrooted-cross-unit-statics.md`) | — |
| 74–76 | `touch-title` após a correção do tradutor | 3/3 completas (frames 1125–1126), código de saída 0 | **867 + 43 = 910 / 1.248 (72,9%)**; 156 justificados; 182 restantes |

Salvaguarda: 0 alertas nas tentativas 67–76 (o registro da 70 é o rastreio
pedido com `--trace-method`). Pendente: travamento da 70 com `Dialog.Show`
vigiado (`UNKNOWN`).

## Tentativas 84–97 (2026-11-15): partidas, liga e ações de gestão

**Diferença de $0,3K (67 → 68): não é divergência de save.** No quadro 540 da
tentativa 67 (14 quadros antes da última gravação, no 554) o dinheiro era
$500,9K; a 68 carrega o save com exatamente $500,9K. Os $501,2K do fim da 67
são receita acumulada depois da gravação, nunca salva.

**A rota `season` não jogava partidas.** O time só joga quando está inscrito em
liga ou copa (`GameForm` estado 2, "bus gather"); a rota apenas passava semanas.
A Liga aparece no submenu Partidas só com a flag de evento 1, ligada pelo comando
de evento 19, que a tabela local de eventos (APK do usuário, fora do Git) associa a
cadeias de eventos após resultados em copas. Daí a rota de carreira.

| Tentativa | Rota | Resultado | Novos sobre os pendentes |
|---|---|---|---:|
| 86 | `actions` (1ª versão, save 68) | inscreveu numa copa; demais itens do menu não batiam | 1 |
| 87 | `career` (save 68): copa + 6 semanas, 40 ciclos | Liga destravada; inscrição e partidas de liga | 18 |
| 88–90 | `career` (save 87) | parou no início: save retoma direto num dia de jogo | 2–3 |
| 91 | `career` (save 87, cabeçalho com espera de uma partida inteira) | troféu de liga, instalação liberada | 20 |
| 93 | `career` (save 91) | saturou (mesmos 18) | 18 |
| 94 | `actions` (save 93) | ações dentro da preparação da partida: o cursor saiu do "Kickoff" | 3 |
| 95 | `actions` + `dismiss` que dá o pontapé inicial (SELECT na partida sem diálogo) | contratação, negociação, patrocínio, torcida, escalação | 39 |
| 97 | `actions` com o cursor do menu principal acompanhado (ele persiste e dá a volta) | completa | 52 |

Depois do registro: **926 executados + 45 creditados = 971 / 1.248 (77,8%)**;
156 justificados; 121 restantes. Executor de rotas: `dismiss` agora aperta SELECT
quando a tela principal é `SoccerForm` sem diálogo (49 asserções). Rotas geradas:
`tests/routes/make_career_route.py`, `tests/routes/make_actions_route.py`.

**Pendente:** construir instalação (`Tenant.BuildTenant`), treino
(`ChangeTraining`, `TrainingData`, comandos de treino), novo jogo (`NewGame`),
fim de jogo no ano 7 (`SetClearPoint`, `SetContinueGameData`), toque em
`GameView`/`GamePad`/`SoccerForm`, telas restantes de `SubForm`.

### Tentativas 99–101 (2026-11-15)

| Tentativa | Rota | Resultado | Novos |
|---|---|---|---:|
| 99 | `actions` + técnico (política de treino) + varredura do mapa (save 97) | o cursor do mapa anda, mas `SELECT` não abre a construção (lotes ocupados ou fora do cursor); bloco do técnico sem efeito | 0 |
| 100 | `career` (save 99) | do ano 6, mês 6 ao ano 7, mês 7 | 0 |
| 101 | `career` (save 100) | quase só partidas de liga nas capturas | 0 |
| (102) | `career` (save 101) | encerrada pelo sistema por falta de memória | — |

**Correção:** o fim de jogo não é no ano 7, mês 3 da tela. `GameForm` testa
`save_.ints[1] == 7 && save_.ints[2] == 3` com contadores a partir de zero (a versão
de avaliação usa `ints[1] + 1`): o fim é no **ano 8, mês 4** da tela
(`SetContinueGameData`, `SubForm(19)`, depois `SetClearPoint`).

Cada rodada de 600 s avança poucos meses: as partidas de liga ocupam quase todo
o tempo. Construir/demolir instalação exige a câmera do mapa sobre um lote
(`camera.subTenant_`) e `SELECT` na tela de gestão (`GameForm.cs:1827`);
política de treino: Informações → Técnico (`SubForm` 50), mudar a seleção e
confirmar (`ChangeTraining`).

## Rodada de fechamento do critério 3 (2026-11-15/16)

| Tentativa | Rota | Resultado | Novos |
|---|---|---|---:|
| 104 | estresse N=1 no boot (repetição da 78) | 513.909 coletas, sem estouro do encontro | — |
| 105–107 | `lots` (técnico, varredura por toque) | 107 chegou ao fim de jogo: `SetContinueGameData`, `SetClearPoint`, tela de pontuação | 9 |
| 108–111 | `newgame` (perfil vazio, painel de texto com `type`/`accept`) | todos os `NewGame`, `BuildTenant`, `ReflectContinueGameData` | 21 |
| 113–114 | `screens` (foco em cada tela, placar p.2) | depois da correção do `host_focus`: `Resume` de 5 formulários | 6 |
| 115–119 | `remaining` (receitas A de `docs/notes/coverage-remaining-83.md`) | treino especial completo, política do técnico, corrida no campo, preço do ingresso, toques de configuração e menu | 30 |

Justificativas individuais: 46 novas (pinça, japonês, geometria do pad,
componentes de toque inexistentes, mortos no original, comandos de script sem
uso nos dados distribuídos, inicializador de tipo sem crédito), com evidência no
fonte em `config/coverage-justifications.json` e `docs/notes/coverage-remaining-83.md`.

Depois do registro: **982 executados + 45 creditados = 1.027 / 1.248 (82,3%)**;
**202 justificados**; **19 restantes**, todos com receita (A) documentada:
demolir/reforçar instalação construída, estádio e área de treino, loja de produtos,
foco e toque na partida (`SoccerForm.Resume/Get/SetTouchValue`), foco no boot,
save com evento adiado, novo jogo após o fim com troca oferecida, troféu no título,
salários na edição do time, seta da edição do time, barra de volume, rolagem de lista.

## Rodada de 2026-11-16: diálogos e receitas restantes

| Tentativa | Rota (save) | Resultado | Novos |
|---|---|---|---:|
| 122–131 | `dialogs`, `dialogs-exit` (perfil vazio) | 6 pontos de `Dialog.Show` com todos os botões; achados: lacuna do `DoTerminationDialog`, ponte `on_back` ausente, `TerminateCheck` ausente (corrigidos, `docs/design/dialogs.md`) | 1 |
| 133 | `after-end` (107) | foco no boot → `BootForm.Resume`; troféu no título → `AppData.DrawTrophyEffect` | 2 |
| 134–142 | carregar slots de saves longos | só o automático do save 46 tinha evento adiado pendente → `DelayEvent.Deserialize` | 1 |
| 143 | `after-end` (107): novo jogo na página 2 depois do fim | `UserData.ReflectContinueGameData` → `TradeData.IsPlayerInMember` | 1 |
| 145–149 | `match-touch` (31) | foco na partida → `SoccerForm.Resume`; retângulo de status → `SoccerForm.SetTouchValue`; barra de formação não chama `GetTouchValue` (justificado) | 2 |
| 150–155 | varreduras do mapa (107) | toques caem em jogadores do campo de treino; a câmera chega à borda sem instalação visível; janela 65 não abriu | 0 |
| 156–158 | `ui-touch` (107) | barras de som em y 99/122 → `OnTouchTrackBar`; rolagem segurando a última linha dos patrocinadores → `OnTouchVScrollButton` | 2 |
| 159–170 | salário e seta da edição (107, 31) | seta id 26 da linha do nome na escalação da partida → `OnTouchDlgPage2`; modo salário alcançado, mas `DrawMoney3` exige salário ≥ 1000 unidades (os do save: 19–37); `DrawMoney2` exige linha com 5 jogadores: a formação 4-5-1 foi aplicada, mas a grade de membros não abriu depois dela | 1 |

Depois do registro: **992 executados + 45 creditados = 1.037 / 1.248 (83,1%)**;
**202 justificados**; **9 restantes** (8 depois da reexecução: `TPlayer.StopTraining` rodou na rota `remaining` a partir do save 107, tentativas 186/187; total 993 + 45 = 1.038 / 1.248, 83,2%):
- Instalações (6): `Tenant.DestructTenant`, `Tenant.OutUserTPlayers`,
  `Tenant.StrenghTenant`, `TenantData.ProcStrenSpecialTenant`,
  `MapMain.UpdateTrainingCoatNum`, `TenantData.GetGoodsIncomeRate`. Bloqueio:
  posição das instalações no mapa e bits de `flag_` (2 = removível, 4 = loja,
  16 = expansão da área de treino) vêm de `tenantData.txt` do APK; a reforma
  pela lista 60 inicia uma "pesquisa" e fecha a janela (`StrengthTenant` de
  dados roda; o de instância só para tipos construídos).
- `AppData.DrawMoney3`: salário ≥ 1000 (`UserData.cs:3664-3674`); o máximo de
  salário vem dos dados (`PlayerData.salary_[1]`): `UNKNOWN`.
- `AppData.DrawMoney2`: grade de membros com uma linha de 5 jogadores; a rota
  aplicou 4-5-1 na escalação da partida, mas não entrou na grade depois.
- `TPlayer.StopTraining`: `ChangeTraining` com jogadores em grupos de treino no
  campo (`TGroupArea.cs:379-386`); não verificado nesta rodada.

## Critério 3 aprovado (2026-11-16, condicionado) e tentativa dirigida das instalações

Decisão do usuário: critério 3 aprovado como cumprido, condicionado à tentativa
dirigida das janelas de instalações e à justificativa de `DrawMoney2/3`.

**Geometria lida do fonte e dos dados locais** (subagente, conferida em execução):
lotes fixos em `test.gmap` (`MapMain.LoadMap`, 15 lotes), câmera salva em
`bins[13]` (`Camera.pos`, float32 big-endian), instalações em `bins[15]`
(`Tenant.Serialize`). Toque = (120 + sx − pos.x, 140 + pos.y − sy), centro do
lote (30(a0+a1)+30, 15(a1−a0)−15); o clique (menos de 4 px de movimento) abre a
janela sozinho (`GameForm.cs:1690-1718` → `OepnWindowFromMainDisp`). Decodificador
local de saves (só leitura, fora do Git).

**Achado:** o save 107 tem uma única instalação construída, o escritório
(tipo 0, `flag_` 0, não removível), e a câmera salva o deixa em y = 0, fora da
área de toque; os outros 14 lotes estão vagos. As varreduras anteriores não
podiam abrir a janela 65. **Não há defeito no toque do port**: com a coordenada
calculada, o escritório abriu a 65 e o lote vago abriu a 61 na primeira tentativa
(tentativa 199).

| Tentativa | Rota (save) | Resultado |
|---|---|---|
| 199 | geometria (107) | 65 no escritório, 61 no lote 6 |
| 200 | `facilities-build` (107) | Gift Shop construída no lote 6 (`BuildTenant`) |
| 202 | `facilities-upgrade` (200) | `Tenant.StrenghTenant`, `OutUserTPlayers` |
| 206 | `facilities-demolish` (200) | 65 com "撤去" → 66 → `Tenant.DestructTenant` |
| 207 | `facilities-goods` (200) | partida com a loja: `TenantData.GetGoodsIncomeRate` |
| 208–209 | `facilities-special` (107) | Re-Sod e estádio: `TenantData.ProcStrenSpecialTenant` |
| 212–217 | Re-Sod até o nível 3 | "Expand Field" não aparece: liberada pelo comando de script 21 do evento 345 (dados), não disparado na carreira gravada |

Também corrigido nos roteiros: carregar um slot manual já gravado abre um
submenu (Continue/New Game/Delete) e exige um SELECT a mais; e roteiros que
deixam semanas correr perto de dezembro caem na pergunta de dispensa de fim de
ano (o usuário observou duas vezes).

**`DrawMoney3`:** justificado por dados (`data-gated-salary`): exige no time um
jogador com salário interno ≥ 1000; o elenco inicial tem 5–90 e os saves
gravados mostram 19–37 nas duas moedas (tentativas 157 e 218); só 30
contratáveis com `salary_[1]` ≥ 1000 chegam lá depois de partidas suficientes.

**`DrawMoney2`:** alcançável (formações 4-5-1 A, 3-5-2 A e 5-3-2 têm 5 numa
linha, `UserData.cs:2336`, `2402-2407`); a troca para 4-5-1 funciona, mas o
roteiro não reabriu a grade de membros depois dela (o menu principal reposiciona
o cursor). Continua com receita.

**`MapMain.UpdateTrainingCoatNum`:** alcançável só depois do evento 345; com receita.
