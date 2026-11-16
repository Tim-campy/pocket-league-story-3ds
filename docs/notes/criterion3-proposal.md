# Critério 3: proposta de cumprimento (2026-11-16)

Números de `config/phase2-reachability.json` (`python tools/callgraph/analyze.py`).

| Medida | Valor |
|---|---:|
| Alcançáveis no original (alvo) | 1248 |
| Executados no PC | 993 |
| Creditados (inicializadores e acessores executados por outro caminho) | 45 |
| **Exercitados** | **1038** (83.2%) |
| Justificados | 202 |
| Restantes, com receita | 8 |
| Fora do alvo: inalcançáveis no original / por política / só depuração | 586 / 89 / 35 |

## Justificados por categoria

| Categoria | Métodos | Base |
|---|---:|---|
| `billing-offline` | 95 | política offline (cobrança desligada) |
| `language-pack-download` | 20 | política offline (painel de idioma sem download) |
| `support-upload` | 19 | política offline + teclas sem equivalente no toque |
| `implicit-object-members` | 13 | só leitura do fonte |
| `pad-geometry` | 9 | geometria da tela do port (240x280) |
| `japanese-language` | 8 | idioma en-US do port |
| `touch-accessor-unused` | 6 | só leitura do fonte |
| `dead-in-original-render-and-scripts` | 6 | só leitura do fonte |
| `pinch-gesture` | 6 | sem gesto de pinça no host |
| `hidden-keypad` | 6 | teclas ocultas + laço do SendSaveData (sondado, tentativa 127) |
| `dead-in-original` | 4 | só leitura do fonte |
| `touch-component-never-created` | 4 | só leitura do fonte |
| `support-upload-helpers` | 2 | só leitura do fonte |
| `type-initializer-runs-uncredited` | 1 | inicializador executado sem crédito (execução observada) |
| `script-commands-unused-by-data` | 1 | varredura das tabelas de script do APK |
| `trial-or-billing` | 1 | só leitura do fonte |
| `network-error` | 1 | política register_local (sondada) |

## Justificativas que dependem só de leitura do fonte

Total: 36 métodos.

Sem política, dado ou execução que as confirme; cada uma cita o trecho do fonte
em `config/coverage-justifications.json`.

### `implicit-object-members` (13)

Static-analysis over-approximation: the analysis assumes the runtime may call ToString/GetHashCode/Equals on every instantiated type; no game path calls them on these types.

- `Assembly-CSharp::form.BootForm::GetHashCode()->System.Int32`
- `Assembly-CSharp::form.BootForm::ToString()->System.String`
- `Assembly-CSharp::form.GameForm::GetHashCode()->System.Int32`
- `Assembly-CSharp::form.GameForm::ToString()->System.String`
- `Assembly-CSharp::form.RankForm::GetHashCode()->System.Int32`
- `Assembly-CSharp::form.RankForm::ToString()->System.String`
- `Assembly-CSharp::form.SoccerForm::GetHashCode()->System.Int32`
- `Assembly-CSharp::form.SoccerForm::ToString()->System.String`
- `Assembly-CSharp::form.SubForm::GetHashCode()->System.Int32`
- `Assembly-CSharp::form.SubForm::ToString()->System.String`
- `Assembly-CSharp::form.TitleForm::GetHashCode()->System.Int32`
- `Assembly-CSharp::form.TitleForm::ToString()->System.String`
- `Assembly-CSharp::system.form.LanguageForm::ToString()->System.String`

### `dead-in-original` (4)

Dead in the original: SoccerForm states 1 and 15 are set only by debug code; GameForm.selectTenantData_ is never assigned.

- `Assembly-CSharp::form.GameForm::SetBuildBtmMessage(System.String,System.Int32)->System.Void`
- `Assembly-CSharp::form.SoccerForm::Draw_newPlayerPopular(kairo.unity.ui.Graphics)->System.Void`
- `Assembly-CSharp::form.SoccerForm::Draw_topBar(kairo.unity.ui.Graphics)->System.Void`
- `Assembly-CSharp::form.SoccerForm::GetDrawTBAROff(System.Int32)->System.Int32`

### `dead-in-original-render-and-scripts` (6)

The only reader is GameView.OnTouchVScrollBar case 8 (GameView.cs:1660-1662), raised as TYPE_GRID_DRAG only for components whose TouchOption has dragGridW/H (SurfaceBase.cs:821-840). The match edit scroll bar id 22 (UserData.cs:3457 -> AppData.DrawVerticalScroll3, AppData.cs:2959-2965) gets only args; GameView.AddTouch builds dragCell/dragGrid only when DrawVerticalScroll returns a layout, i.e. ids 12/14 (GameView.cs:779-845). No other SoccerForm component calls Get. Probed in attempt 149: drags on the bar raise no GetTouchValue.

- `Assembly-CSharp::form.FormManager::Resume()->System.Void`
- `Assembly-CSharp::form.SoccerForm::GetFirstScript()->System.Int32[]`
- `Assembly-CSharp::form.SoccerForm::GetTouchValue(System.Int32,System.Int32)->System.Int32`
- `Assembly-CSharp::game.Map::Draw_copyArea(kairo.unity.ui.Graphics,System.Int32[])->System.Void`
- `Assembly-CSharp::game.MapMain::Draw_copyArea(kairo.unity.ui.Graphics,System.Int32[])->System.Void`
- `Assembly-CSharp::game.Player::ChangeState(System.Int32)->System.Void`

### `touch-component-never-created` (4)

Dead in the original: no GameView.AddTouch in Assembly-CSharp creates component ids 5, 7 or 10; id 17 is registered only while GameForm/SoccerForm is top (GameView.cs:862-869), and their OnTouchEvent consumes it with return false (GameForm.cs:1617-1624, SoccerForm.cs:3404-3411), so the empty GameView.OnTouchCamera is not reached.

- `Assembly-CSharp::surface.GameView::OnTouchCamera(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)->System.Void`
- `Assembly-CSharp::surface.GameView::OnTouchKeyPress(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)->System.Void`
- `Assembly-CSharp::surface.GameView::OnTouchKeyUp(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)->System.Void`
- `Assembly-CSharp::surface.GameView::OnTouchList(System.Int32,System.Int32,kairo.unity.surface.TouchEvent)->System.Void`

### `touch-accessor-unused` (6)

GameView.Get/Set address only the top form (GameView.cs:1248-1251). BootForm registers no touch component; RankForm only page arrows id 1, whose handler emits KeyDown/KeyUp (GameView.cs:1351-1378); GameForm only id 17 (consumed) and id 4 value 22, which OnTouchKeyClick turns into KeyClick, not Set (GameView.cs:1462-1482).

- `Assembly-CSharp::form.BootForm::GetTouchValue(System.Int32,System.Int32)->System.Int32`
- `Assembly-CSharp::form.BootForm::SetTouchValue(System.Int32,System.Int32)->System.Void`
- `Assembly-CSharp::form.GameForm::GetTouchValue(System.Int32,System.Int32)->System.Int32`
- `Assembly-CSharp::form.GameForm::SetTouchValue(System.Int32,System.Int32)->System.Void`
- `Assembly-CSharp::form.RankForm::GetTouchValue(System.Int32,System.Int32)->System.Int32`
- `Assembly-CSharp::form.RankForm::SetTouchValue(System.Int32,System.Int32)->System.Void`

### `support-upload-helpers` (2)

Only caller is SpForm (SpForm.cs:665, SpForm.cs:743); SubForm has its own GetBoxFooterY.

- `Assembly-CSharp::form.MyFormBase::GetBoxFooterY(System.Int32)->System.Int32`
- `Assembly-CSharp::form.MyFormBase::Push(System.String,System.String)->System.Boolean`

### `trial-or-billing` (1)

Callers are TRIAL_VERSION branches (GameForm.cs:1355-1358, SubForm.cs:7845-7852), MyBilling (MyBilling.cs:102, billing disabled) and DebugForm.

- `Assembly-CSharp::form.SubForm::MakeTalkForm(System.Int32,System.String,System.String)->form.SubForm`

## Restantes (8), com receita

Ver `docs/coverage-plan.md` (rodada de 2026-11-16) e `docs/notes/coverage-remaining-83.md`.


## Reexecução de todas as rotas sob estresse moderado (2026-11-16)

Build de diagnóstico (salvaguarda de inalcançáveis ativa), coletor em estresse
`--gc-stress-every 50 --gc-stress-poison` (quarentena 256 MiB), `--fast`,
limite de 600 s por rota, uma rota por vez a partir do seu save. O laço do
primeiro script sobreviveu a um encerramento por falta de memória e rodou em
paralelo com o retomado: as rotas de `actions` a `delay-load` rodaram duas vezes
cada (tentativas vizinhas), sem diferença de resultado entre as cópias.

| Rota (save) | Tentativas | Resultado | Coletas de estresse |
|---|---|---|---:|
| `newgame` (vazio) | 171 | completa, quadro 880 | 7.004 |
| `dialogs` (vazio) | 172 | completa; 7 diálogos com os botões esperados | 9.688 |
| `dialogs-exit` (vazio) | 173 | o Sim encerra o jogo (quadro 214), como no original | 5.021 |
| `touch-title` (50) | 174 | parou na tela de slots: o toque em (120,170) não cai num save no perfil 50 (rota feita para o 68) | 10.479 |
| `touch-title` (68) | 196 | completa, quadro 1.171 | 12.788 |
| `screens` (50) | 175 | completa | 8.825 |
| `saves` (50) | 176 | completa | 8.248 |
| `menu-trace` (50) | 177 | completa | 8.176 |
| `menu-explore` (50) | 178 | completa, quadro 11.328 | 27.647 |
| `season` (64) | 179 | 600 s esgotados no passo 1.690, avançando | sem resumo (encerrada pelo tempo) |
| `actions` (97) | 180, 181 | 600 s esgotados no passo 849, avançando | idem |
| `lots` (101) | 182, 183 | 600 s esgotados no passo 508/534, avançando | idem |
| `career` (87) | 184, 185 | 600 s esgotados no passo 704/717, avançando | idem |
| `remaining` (107) | 186, 187 | completa; rodou `TPlayer.StopTraining` (política do técnico com jogadores no campo) | 22.542 / 22.553 |
| `match-touch` (31) | 188, 189 | completa | 11.654 / 11.665 |
| `ui-touch` (107) | 190, 191 | completa | 9.276 / 9.286 |
| `after-end` (107) | 192, 193 | completa | 7.390 / 7.407 |
| `delay-load` (46) | 194, 195 | completa | 7.812 |

- Alertas da salvaguarda (método classificado inalcançável executado): **nenhum**.
- Estouro do encontro de threads do coletor: **nenhum**. Lacuna de tradução: nenhuma.
- Diálogos de erro do jogo (`Main.OnUpdate`): nenhum.
- Exceções lançadas e capturadas pelo próprio jogo: só `JInteger.ParseInt`
  (formatos de número tratados pelo chamador) e `HttpObject.Connect/_connect`
  (HTTP offline).
- Telas presas: nenhuma do jogo; a do `touch-title` (save 50) é incompatibilidade
  rota/save.
- Não refeito: a cadeia completa da carreira até o fim do jogo (dezenas de trechos
  de 600 s); o fim do jogo está coberto pelo save da tentativa 107 (`after-end`).
