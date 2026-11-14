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
