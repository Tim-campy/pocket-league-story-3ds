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
