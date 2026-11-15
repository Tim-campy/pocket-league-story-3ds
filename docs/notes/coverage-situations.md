# Situações de jogo que acionam os alcançáveis não executados (2026-11-14)

Levantamento só por leitura (subagente) sobre os 420 métodos
`reachable-not-exercised` de `config/phase2-reachability.json`. Caminhos
relativos a `reference/src/Assembly-CSharp/`.

## Fatos do jogo usados nos roteiros

- Menu principal (`SubForm` `type_` 3, `form/SubForm.cs:1125`, despacho `:7507`):
  0 Partidas → 5 (exige flag 8), 1 Treino especial → 45, 2 Gerenciar → 7
  (flags 2/4/16/32), 3 Editar time → 26, 4 Informações → 11, 5 Configurações → 12.
- Submenus: Partidas 6 Liga → `SubForm(33,0)` (flag 1), 8 Copas → 58,
  9 Desistir; Gerenciar 12 Trocas → 53 (flag 16), 14 Torcida → 39 (flag 2),
  15 Instalações → 60 (flag 4), 16 Patrocínio → 42 (flag 32); Informações
  13 Técnico → 50; Configurações 20 Salvar → 16, 21 Opções → 14, 22 Manual → 15,
  23 Ranking → `RankForm`, 24 Sair.
- Os desbloqueios vêm da tabela de eventos dos assets (`GameForm._update`,
  `form/GameForm.cs:684-690`; comandos em `main/AppData.cs:4636-4776`). Quais
  eventos ligam cada flag é UNKNOWN sem extrair os termos do APK local.
- Calendário em `save_.ints[1..4]`; virada de ano em `form/GameForm.cs:1343`;
  final no ano 7, mês 3 (`:1363`).

## Grupos (métodos)

| Grupo | Métodos | Como cobrir |
|---|---:|---|
| Cobrança, KairoService, amigos, escalações | 89 | inalcançáveis no port offline (banner sem toque por política; `KairoService` só criado por caminhos removidos): justificar em grupo |
| Artefatos do livro-razão (`.cctor`, lambdas, delegate) | 56 | creditar pelo dono/hospedeiro executado |
| Progressão do jogo | 129 | novo jogo (`type_` 71), liga, instalações, torcida, patrocínio/trocas, treino, virada de ano, final (ano 7), desbloqueios por evento, salvar, trocar jogadores |
| Toque | 44 | passo `touch/drag/pinch` no executor (`Canvas::OnTouchEvent` já existe) |
| `HttpForm`/`LanguageForm` | 25 | `LanguageForm` por toque no título; `HttpForm` só com download de pacote de idioma (online): justificar ou apresentador de teste devolvendo -1 |
| `SpForm` (suporte/upload) | 22 | só com tecla 0x800 ou modo de pad 0; envia ao servidor: justificar |
| Geometria de tela | 14 | modos de pad 0/2 e escalas que a superfície do port não usa: justificar |
| `ToString`/`GetHashCode` implícitos | 12 | sobreaproximação da análise: justificar |
| Ciclo de vida (`OnSuspend/OnResume`, `Resume`) | 11 | passo `focus off/on` no executor |
| `RankForm` | 11 | título → 2º item, ou Configurações → Ranking (só teclas) |
| Comandos ocultos de teclado (`STAR`) | 7 | teclas 2/1024/2048 inexistentes no Android; rede: justificar |

Mortos no original apesar da análise: `SoccerForm.Draw_topBar`,
`GetDrawTBAROff`, `Draw_newPlayerPopular` (estados 1 e 15 só em depuração),
`GameForm.SetBuildBtmMessage` (`selectTenantData_` nunca atribuído).
