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
