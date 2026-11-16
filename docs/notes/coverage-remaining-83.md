# Os 83 alcançáveis ainda não executados: chamadores, condições e receitas

Análise só de leitura (2026-11-15) sobre `build/claude-left.txt`. Nada foi
compilado nem executado; os caminhos de arquivo são relativos a
`reference/src/Assembly-CSharp/` (jogo) ou `reference/src/KairoLibrary/`
(motor). O estado `runs` dos métodos vizinhos citados vem de
`config/translation.csv`. Onde uma condição não foi verificada, está marcada
`UNKNOWN`.

## Resumo

| Classe | Métodos |
|---|---:|
| (A) exercitável no port com a entrada atual | 37 |
| (B) não exercitável hoje (com motivo e evidência) | 44 |
| (C) incerto | 2 |
| **Total** | **83** |

Fatos de plataforma usados na análise (derivados do fonte):

- **Geometria.** Janela de 240x280. Em `SurfaceManager.AdjustSurfaceLayout`
  (`surface/SurfaceManager.cs:126-138`): escala da view 100, escala do pad
  240*100/320 = 75; `num10 = 280-240 = 40`; `num9 = 40*0,75 = 30`;
  `num7 = 160*0,75 = 120`. Como 30 <= 40 < 120, `mode = 1`, igual ao inicial
  (`surface/GamePad.cs:348`), e `gpad_.SetMode` nunca é chamado. A view do
  jogo ocupa y 0..239 e o pad os 40 px de baixo, logo **coordenadas do jogo =
  pixels da janela para y < 240**.
- **DEBUG em tempo de execução é falso.** `Config.DEBUG = true` na
  KairoLibrary (`kairo/common/cfg/Config.cs:31`), mas `IApplication.Awake`
  chama `Config.Create(typeof(MyConfig))` (`kairo/unity/ui/IApplication.cs:170`),
  que copia `MyConfig.DEBUG = false` (`cfg/MyConfig.cs:9`) para `Config`
  (`Config.cs:159-178`; port: 27 cópias, `docs/notes/phase2-bootstrap-bridge.md`).
  `TRIAL_VERSION = false`, `SMART_PASS = AMAZON = false`, `ADMOB_ENABLE = false`.
- **Despacho de toque.** `GameView.OnTouchEvent` (`surface/GameView.cs:1253-1335`)
  primeiro chama `MyFormBase.OnTouchEvent` do formulário do topo; se devolver
  `false`, o manipulador do GameView não roda. Só se registram componentes
  quando o formulário corrente é o do topo, exceto dois `SubForm` de menu
  (`GameView.cs:862-869`). `GameView.Get/Set` sempre usam o formulário do topo
  (`GetTouchValueAccessor`, `GameView.cs:1248-1251`); é assim que
  `Form.GetTouchValue/SetTouchValue` são chamados.
- **Tipos de evento** (`kairo/unity/surface/TouchEvent.cs`; geração em
  `SurfaceBase.DoEvent`, `SurfaceBase.cs:735-925`): pressionar gera ENTER(2) e
  DOWN(0); soltar perto do ponto inicial (< 15 px) gera CLICK(5) e UP(1);
  mover pressionado gera DRAG(7), GRID_DRAG(8) ou CELL_DRAG(9) conforme a
  opção; ON(13) a cada frame para o componente sob o dedo
  (`SurfaceBase.cs:664-681`); PINCH(11/12) só com dois ponteiros
  (`SurfaceBase.cs:931-959`).

### Componentes de toque do GameView por id

| id | Manipulador | Onde é criado |
|---|---|---|
| 1, 18, 24 | `OnTouchDlgPage` (setas de página) | `RankForm.cs:141-142`, `TitleForm.cs:622-623` (janela de slots de save), `SubForm.cs:2359…7221` (vários diálogos paginados), `SoccerForm.cs:1826-1827` (painel de status na partida), `UserData.cs:3225`; id 18 na janela de preço do ingresso `SubForm.cs:6999-7003`; id 24 em `SubForm.cs:2619…6237` |
| 26 | `OnTouchDlgPage2` | só `UserData.cs:3229` (seta ao lado do nome do time, menu de edição, fase 0, `et_cur[0] != 1`) |
| 5 | `OnTouchKeyPress` | **nenhum lugar** |
| 6 | `OnTouchKeyDown` | tela de configuração: `SubForm.cs:11855`, `11926`, `11930` (`DrawConfig_en`) e `11703…11778` (`DrawConfig_jp`) |
| 7 | `OnTouchKeyUp` | **nenhum lugar** |
| 10 | `OnTouchList` | **nenhum lugar** |
| 13 | `OnTouchVScrollButton` | criado pelo próprio GameView em `EndTouchRegist` (`GameView.cs:493-502`) acima/abaixo de uma lista id 11 que tenha barra id 12/15, quando a primeira/última linha visível está sendo tocada |
| 17 | `OnTouchCamera` (GameView, vazio) | `GameForm.cs:1122/1126`, `SoccerForm.cs:1815/1819`; **consumido** antes por `GameForm.OnTouchEvent` (`GameForm.cs:1617-1624`) e `SoccerForm.OnTouchEvent` (`SoccerForm.cs:3404-3411`) |
| 19 | `OnTouchTrackBar` | barras de volume BGM/SE da configuração (`SubForm.cs:11717`, `11869`) |
| 20, 21 | `OnTouchKeyClick` (já `runs`) | setas de volume da configuração, com `ExtendValues(65552/65554)` |
| 27 | `OnTouchRect` | só o anúncio Kairo do título (`TitleForm.cs:556/560`), desenhado só em japonês (`TitleForm.cs:539`) |

---

## (A) Exercitáveis: receitas

Teclas: `UP`=0x20000, `DOWN`=0x80000, `LEFT`=0x10000, `RIGHT`=0x40000,
`SELECT`=0x100000, `SOFT1`=0x200000 (rótulo esquerdo), `SOFT2`=0x400000.
"Toque" = press+release no mesmo ponto; "arrastar" = press, move(s), release.

### A1. Treino especial completo (8 métodos)

Chamadores: menu → submenu de treino, item `num4 == 1` → `SubForm(45)`
(`SubForm.cs:7541-7548`). Em `type_ 45` (`SubForm.cs:8996-9107`):
`select_ 0..2` = vagas de jogador, 3 = escolher treino, 4 = "実行する".

1. Em 45, na vaga 0: `SELECT` → `SubForm(47)` (lista de jogadores) → `SELECT`
   (`TRA_PLAYER[0]` definido, `SubForm.cs:9150-9180`).
2. `DOWN` até `select_ == 3`, `SELECT` → `SubForm(46)` (`SubForm.cs:9065-9071`).
   O desenho de 46 roda **`SubForm.Draw_trainingIcon`** (`SubForm.cs:4839`) e
   **`TrainingData.GetTrainingAddParamNum`** (`SubForm.cs:4879`, se a média de
   `eff_[m]` > 0). `SELECT` (ou o rótulo Voltar) roda
   **`TrainingData.RemoveNew`** (`SubForm.cs:9131/9141`); `SELECT` só fixa o
   treino se houver pontos de pesquisa (`ChResearchPoin`), senão evento 12.
3. `select_ == 4`, `SELECT`: exige um jogador atribuído e pontos de pesquisa
   suficientes (`SubForm.cs:9073-9095`) → `SubForm(49)`. O `Init` de 48/49
   roda **`PlayerData.SetTrainingAddParam`** (`SubForm.cs:1712-1734`); o
   desenho de 49 roda **`SubForm.SetWinCharaTraining`** (`SubForm.cs:4909-4911`)
   enquanto `training_cnt < TRA_ANIME_TIME2[2]`.
4. Esperar o fim da animação e `SELECT` → **`PlayerData.AddPhysicalParam(int[])`**
   (`SubForm.cs:9222-9229`).

Estado necessário: pontos de pesquisa do tipo do treino (o roteiro atual só
abre a tela 45). Sem pontos, os passos 3–4 não acontecem.

### A2. Política de treino do técnico e treino no campo (5 métodos)

`SubForm(50)` ("監督"): menu Info, item 13 (`SubForm.cs:7786-7790`), toque no
técnico no mapa (`GameForm.cs:1823-1826`) ou edição `et_cur[0]==3`
(`UserData.cs:2596-2600`). Em `type_ 50` (`SubForm.cs:9245-9290`) só
`LEFT`/`RIGHT` mudam `select_`; `UP`/`DOWN` não. **`RIGHT` uma vez e depois
`SELECT`** (com `select_ != selectTrainingPolicy_`) roda
**`UserData.ChangeTraining`** (`SubForm.cs:9290`). Os roteiros
`actions.route`/`lots.route` usam `DOWN` ou não chegam ao tipo 50; por isso
o método não rodou.

`ChangeTraining` (`UserData.cs:5052-5073`) põe todos os `TArea` no estado 13 →
`TGroupArea.ChangeState(13)` → **`TPlayer.StopTraining`** para todo jogador
de grupo (`TGroupArea.cs:379-386`). Precisa de jogadores no campo de treino
(semana normal no GameForm).

Corrida (`tMode 4`, área `m == 1`, `UserData.cs:4733`): só recebe jogadores
na distribuição das sobras (`UserData.cs:4895-4924`). Com a política 0
(padrão, `UserData.cs:1447`) ou 2, `num25` nunca é incrementado, então todas
as sobras vão para a área 0. **Só a política 1 ("全員で練習") sorteia
`Random(2)` entre as áreas 0 e 1.** Receita: política índice 1 (`RIGHT` uma
vez a partir de 0, `SELECT`), depois deixar o treino ciclar no mapa. Quando o
`TArea` chega ao estado 12, o `TGroupArea` da corrida entra em 11 →
**`TPlayer.AddCommandRunningRegist`** (`TGroupArea.cs:316-326`; também
`TGroupArea.cs:653-662`) → o script do jogador ao chegar a cada canto roda
**`TPlayer.AddCommandRunning`** (`TPlayer.cs:1205/1241`). Depende do sorteio
e de haver sobras (excesso de capacidade ou número ímpar nos grupos
tMode 0/1, `UserData.cs:4876-4890`); pode exigir vários ciclos ou semanas.

### A3. Instalações no mapa (6 métodos)

- **`Tenant.DestructTenant`** e **`Tenant.OutUserTPlayers`**: tocar uma
  instalação construída (estado 1) no mapa → `SubForm(65)`
  (`GameForm.cs:1842-1847`); o rótulo esquerdo padrão de 65 é "撤去"
  (`SubForm.cs:535`, `{10, 2}`; exceto `flag_ & 2`, `SubForm.cs:1946-1952`).
  `SOFT1` → `SubForm(66)` (`SubForm.cs:9858-9864`); `select_ 0` + `SELECT` →
  `DestructTenant` (`SubForm.cs:9881-9889`) → `OutUserTPlayers`
  (`Tenant.cs:291-297`).
- **`Tenant.StrenghTenant`**: `TenantData.StrengthTenant` já roda, mas só
  chama `Tenant.StrenghTenant` para instâncias **construídas** daquele tipo
  (`TenantData.cs:339-352`). Receita: lista de reforma de instalações
  `SubForm(60)` (`SubForm.cs:7761`) → escolher um tipo comum **que exista no
  mapa** → `SubForm(63)` → `select_ 0` + `SELECT` com dinheiro
  (`SubForm.cs:9760-9776`). Roda também `OutUserTPlayers` (`Tenant.cs:299-304`).
- **`TenantData.ProcStrenSpecialTenant`**: mesma tela 63 para estádio, área de
  treino ou expansão da área de treino (`IsTAreaOrStadiumTenant`,
  `SubForm.cs:9777-9783`). Aparecem na lista 60 se `state_ != 0`
  (`SubForm.cs:1556-1570`); exige `!IsMaxLv()` e dinheiro.
- **`MapMain.UpdateTrainingCoatNum`**: reforma da **expansão da área de
  treino** (`TENANT_ID_TRAININGAREA_SPRED`, `TenantData.cs:416-423`).
  Liberação desse tipo no save: `UNKNOWN`.
- **`TenantData.GetGoodsIncomeRate`**: construir a loja de produtos (dado com
  `flag_ & 4`, `TenantData.cs:215-218`) e terminar uma partida. O bônus de
  renda do `SoccerForm` (`state_ 10`, `SoccerForm.cs:953-959`) chama
  `GetGoodsPrice`, que só chega a `GetGoodsIncomeRate` se existir um tenant
  desse tipo (`SoccerForm.cs:3261-3279`).

### A4. Janela de preço do ingresso, `SubForm(68)` (3 métodos)

Ações de fãs `SubForm(39)` (menu, item 14, `SubForm.cs:7716-7723`) → escolher
a ação com `FanActData.type_ == 0` → `SubForm(40)` → `select_ 0` + `SELECT`
com pontos de pesquisa (`SubForm.cs:8727-8740`) → `SubForm(68)`.

- `Init` → **`SubForm.SetTicketWindowBtmMsg`** (`SubForm.cs:1980-1983`);
  `LEFT`/`RIGHT` também a chamam (`SubForm.cs:9926-9958`).
- O desenho → **`SubForm.Draw_btmMsg(g,str,dy)`** e, por ela,
  **`Draw_btmMsg(g,str,dy,bool,bool)`** (`SubForm.cs:7021`, `12006-12009`).
- Bônus: as setas id 18 (`SubForm.cs:6999-7003`) servem para A6.

### A5. Toques em telas comuns (10 métodos)

- **`GameView.OnTouchDlgPage`** + **`GameView.AddEffect`**: tocar uma seta de
  página id 1/18/24 com valor 16/18 (o efeito exige `v` em 16..19, no DOWN,
  `GameView.cs:1351-1378`). Na janela de recordes (`RankForm`, título →
  "ハイスコア"), as setas ficam em ~(44,42) e ~(193,42) (`RankForm.cs:141-142`).
  Alternativas: setas da janela de slots do título (`TitleForm.cs:622-623`,
  ~(34,54) e ~(203,54)) ou do ingresso (A4).
- **`TouchEffectManager.RemoveEffect(int)`**: o efeito vive 8×50 ms do relógio
  do jogo (`TouchEffect.cs:63-70`). Ele só sai por `RemoveEffect(int)` se um
  formulário fizer `Init`/`Finish` antes disso: `MyFormBase.Init/Finish` →
  `RemoveSurface(view_)` (`MyFormBase.cs:82/104`) →
  `RemoveEffect(int)` (`TouchEffectManager.cs:86-95`). Receita: tocar a seta do
  slot de save no título e, em até ~7 frames (com o relógio virtual de 50
  ms/frame), `SELECT` para abrir o slot, ou tocar a seta do `RankForm` e
  `SOFT` para fechar.
- **`GameView.OnTouchDlgPage2`**: menu de edição do time (`SubForm(26)`, menu
  `SubForm.cs:7565/7705`), fase 0 com o cursor fora da linha 1. Tocar a seta à
  direita da linha do nome do time (`UserData.cs:3229`, x = `num2+171`,
  y = `num3+36`). CLICK roda o ramo 5; UP roda o ramo 1, que faz
  `Set(786433)` e depois `KeyClick(SELECT)` (`GameView.cs:1380-1422`).
- **`MyFormBase.SetTouchValue`**: `SubForm.SetTouchValue` delega para a base
  os tipos fora de 131072/1310720/262144/1376256 (`SubForm.cs:11625-11645`).
  Dois caminhos: o toque da seta acima (`0xC0000` → `et_cur[0]`,
  `MyFormBase.cs:368`); ou qualquer opção da configuração (abaixo), que envia
  `Tv(393216..720896, …)` (`SubForm.cs:11926/11930`). Efeito colateral: altera
  e grava a configuração do sistema.
- **`GameView.OnTouchKeyDown`**: configuração `SubForm(14)` (menu
  `SubForm.cs:7611` ou `7836`; em inglês desenha `DrawConfig_en`, que já
  roda). Pressionar qualquer rótulo de linha (id 6, `SubForm.cs:11855`) ou
  qualquer opção de valor (id 6, `11926/11930`). O manipulador só age no
  DOWN (`GameView.cs:1513-1533`).
- **`GameView.OnTouchTrackBar`**: na mesma tela, pressionar a barra de BGM ou
  SE (id 19, `SubForm.cs:11869`, x de `num4+25` até `num5-25`), **mover**
  horizontalmente e soltar. O CELL_DRAG(9) só nasce de um move com o dedo
  pressionado (`SurfaceBase.cs:845`).
- **`GameView.OnTouchVScrollButton`**: lista com linhas id 11 e barra id 12,
  por exemplo patrocinadores `SubForm(42)` (`SubForm.cs:4363` + `4426`, menu
  `SubForm.cs:7765-7771`) ou história do clube `SubForm(77)`
  (`SubForm.cs:7369` + `7412`). Pressionar e manter a **última** linha visível:
  no frame seguinte, `EndTouchRegist` cria o id 13 abaixo da lista
  (`GameView.cs:497-502`). Ainda pressionado, mover o dedo para baixo da
  lista; o ON(13) por frame (`SurfaceBase.cs:664-681`) chama o manipulador
  (`GameView.cs:1711-1748`). Com a primeira linha e movimento para cima, o
  efeito é simétrico.
- **`GameView.Set(TouchValueAccessor,int,TouchComponent)`**: o único chamador
  é `OnTouchMainMenu` com submenu aberto (`GameView.cs:1580-1585`). Receita:
  abrir o menu principal (`SubForm` tipo 3, linhas id 8, `SubForm.cs:10402`),
  `SELECT` numa linha para abrir o submenu (linhas id 9, `SubForm.cs:10423`)
  e tocar outra linha do menu principal, ainda visível. Os toques de menu
  são aceitos porque os dois formulários são menus (`GameView.cs:862-869`).
- **`SoccerForm.SetTouchValue`**: na partida (`SoccerForm` `state_ 0`, painel
  de status fechado), tocar o retângulo x 120..239, y 0..59 (id 2, valor
  0x10012, `SoccerForm.cs:1831-1834`). `OnTouchDlgCmd` faz
  `Set(0x10012)` (`GameView.cs:1425-1437`), o que chama
  `SoccerForm.SetTouchValue(65536,18)` → `MyFormBase.SetTouchValue` →
  `KeyClick(RIGHT)` e abre o painel. Também roda no intervalo pela seta id 26
  (abaixo).
- **`SoccerForm.GetTouchValue`**: no intervalo, o `SoccerForm` muda para o
  `state_ 6` (`GameManager.cs:405-411`) e desenha `Draw_edit(g, true)`
  (`SoccerForm.cs:1875-1897`) com o `SoccerForm` no topo. Entrar em
  "formação" (fase 1) e **arrastar** a barra id 22 (`UserData.cs:3457`,
  `AppData.cs:2961`, x ≈ 221..223): `OnTouchVScrollBar` chama `Get(v)`
  (`GameView.cs:1650-1708`), que chama `SoccerForm.GetTouchValue(262144)`
  (`SoccerForm.cs:3369-3385`). Nenhum outro componente do `SoccerForm` lê
  `Get`.

### A6. Foco (2 métodos)

O host agora executa `Suspend`/`Resume` de todos os formulários da pilha
(`IApplication.cs:463-476`).

- **`SoccerForm.Resume`**: perder e recuperar o foco **durante uma partida**
  (`SoccerForm` na pilha).
- **`BootForm.Resume`**: perder e recuperar o foco **durante a tela de boot e
  carregamento**, antes do título (`BootForm.cs:251-255`). O roteiro precisa
  agir antes do `anchor` do título. Se o executor de roteiros permite isso:
  `UNKNOWN`.

### A7. Saves e fim de jogo (3 métodos)

- **`DelayEvent.Deserialize`**: o único chamador é `AppData.Load`
  (`AppData.cs:2452-2459`, `num = ReadInt(bins[16])`). Exige um save gravado
  com evento adiado pendente. `Serialize` (`AppData.cs:2260-2266`) e o
  construtor de 7 argumentos (comando de script 5, `AppData.cs:4482-4489`) já
  rodam, então esses saves existem. Receita: salvar enquanto
  `delayEvents_.Size() > 0` (logo depois de um evento com espera) e
  **carregar** esse slot pelo título (Continuar).
- **`TradeData.IsPlayerInMember`**: chamado só em `ReflectContinueGameData`
  (`UserData.cs:6085-6100`) no `NewGame` (`UserData.cs:1536-1538`), se o
  `sysSave_.bins[4]` gravado no fim de jogo por `SetContinueGameData`
  (`GameForm.cs:1363-1369`, `UserData.cs:5930-5975`) marcar uma troca.
  Receita: numa partida-carreira em que alguma `TradeData` tenha `state_ != 0`
  (troca já oferecida), chegar ao fim de jogo (ano 7, mês 3) e iniciar um
  novo jogo.
- **`AppData.DrawTrophyEffect`**: `TitleForm._draw` → `Draw_trophy` desenha
  se `sysSave_.ints[10] > 0` (`TitleForm.cs:501`, `AppData.cs:5859-5866`). O
  campo é gravado na tela de pontuação final quando a pontuação supera o
  recorde (`SubForm.cs:11406-11430`). Receita: fim de jogo com pontuação
  acima do recorde, depois **voltar ao título** com o mesmo `sysSave`.

### A8. Salários no menu de membros (2 métodos, condicionais)

Edição do time (`SubForm(26)` ou intervalo), fase 0, `et_cur[0] == 1` +
`SELECT` → fase 10 → 6 (`UserData.cs:2654-2666`, `3087`). Na fase 6, `SOFT1`
(rótulo "切替", `UserData.cs:2903`, `2968-2971`) quatro vezes leva a
`editMemDispMode == 4` (salário, `UserData.cs:3648-3702`). Em inglês
(`en-US`):

- **`AppData.DrawMoney3`**: `editTest_team.Length == 4`,
  `sysSave_.ints[14] != 1` (opção "moeda" da configuração) e salário >= 1000
  (`UserData.cs:3664-3674`).
- **`AppData.DrawMoney2`**: `editTest_team.Length == 5`, ou seja, mais de 4
  jogadores numa linha DF, MF ou FW, por formação (`UserData.cs:2400-2407`,
  `3688-3702`).

Se algum salário chega a 1000 no save usado: `UNKNOWN`
(`PlayerData.GetSallay`, `PlayerData.cs:972-979`). Alternar a opção de moeda
na configuração troca o ramo.

---

## (B) Não exercitáveis hoje

### B1. Gesto de pinça (6 métodos)

`GameForm.SetScale`, `GameForm.GetScaleRange`, `GameForm.ResetOffscreen` e os
mesmos três do `SoccerForm`. `SetScale` (que chama `GetScaleRange` e
`ResetOffscreen`) só tem dois chamadores. O primeiro é `OnTouchCamera`, caso
12 = PINCH (`GameForm.cs:1730-1741`, `SoccerForm.cs:3437-3448`), gerado só
com dois ponteiros (`SurfaceBase.cs:931-959`). O segundo é a trava em `Draw`
(`GameForm.cs:1093-1097`, `SoccerForm.cs:1779-1783`), que só dispara se
`scale_` sair de [min, max+40]. `scale_` começa em 100 (`GameForm.cs:264`,
`SoccerForm.cs:495`) e só muda dentro de `SetScale`; com a largura 240, min é
60 e max 200 (`GameForm.cs:1777-1790`).

### B2. Idioma japonês ou outro idioma (9 métodos)

O port roda em `en-US`; o painel offline de idioma não muda de língua.

| Método | Guarda |
|---|---|
| `SubForm.DrawConfig_jp` | `Jp()` ou código de idioma diferente de ja-JP/en-US/`*` (`SubForm.cs:2329-2341`) |
| `SubForm.Draw_multiParam(…,int anchor)` | `!MyFormBase.En()` (`SoccerForm.cs:2561-2564`); a sobrecarga de 5 argumentos não tem chamador fora dela |
| `AppData.DrawNumImageComma_en` | `MyFormBase.Jp()` (`SubForm.cs:3402-3404`) |
| `AppData.DrawSeb(…,w1000,h1000)` e `(…,maxWidth,maxHeight)` | `MyFormBase.Jp()` no desenho do menu (`SubForm.cs:10324-10326`); a de 8 argumentos é o único chamador da de 10 (`AppData.cs:2711-2714`) |
| `TitleForm.UpdateKairoAdClickNum()` e `(int)` | toque id 27 do anúncio Kairo, desenhado só se `Jp()` (`TitleForm.cs:539-561`), tratado em `TitleForm.cs:870-904` |
| `GameView.OnTouchRect` | id 27 só existe no anúncio acima; no `state_ 0` o `TitleForm.OnTouchEvent` o consome e devolve `false` (`TitleForm.cs:868-904`) |

### B3. Geometria do pad nunca escolhida pela superfície do port (8 métodos)

Com 240x280 o modo fica em 1 (ver Resumo); `Config.DEBUG` é falso.

| Método | Guarda |
|---|---|
| `GamePad.SetMode` | troca de modo em `AdjustSurfaceLayout` (`SurfaceManager.cs:136-139`, nunca difere) ou toque nos componentes 21/22 do pad (`GamePad.cs:638-670`). O 22 é desenhado só no modo 0 (`GamePad.cs:874`); o 21 no modo 1 só se `altura - 240 >= 160*0,75` (`GamePad.cs:908-912`), e aqui 40 < 120 |
| `GamePad.AddTouch(g,x,y,id)` | chamadas só no modo 0 (`GamePad.cs:839-874`), no ramo DEBUG (`905-906`, `962`) e no id 21 acima (`911`) |
| `GamePad.DrawWatch`, `GamePad.DrawBattery` | só modo 0 (`GamePad.cs:872-873`) ou modo 2 (`974-975`) |
| `GamePad.DrawSoftLabelImage` | só via `DrawSoftLabel` com `IsSmallSideView()`, que exige o modo 2 (`GamePad.cs:1004-1008`, `1021-1025`) |
| `GamePad.GetSideSize` | só `GameView.GetSideSoftWidth` no modo 2 (`GameView.cs:372-380`) |
| `GamePad.SetLayoutMode` → `SurfaceManager.SetLayoutMode` | só pelo componente 17 do pad (`GamePad.cs:701-706`, `1254-1259`), que nunca é registrado em `GamePad.Draw` (`GamePad.cs:756-1000`) |
| `TouchEffectManager.Clear` | único chamador: componente 18 do pad (pausa de depuração, `GamePad.cs:708-713`), nunca registrado |

### B4. Componentes de toque inexistentes ou consumidos (4 métodos)

- `GameView.OnTouchKeyPress` (id 5), `GameView.OnTouchKeyUp` (id 7) e
  `GameView.OnTouchList` (id 10): nenhum `GameView.AddTouch` de Assembly-CSharp
  usa esses ids. Todos os ids literais e variáveis foram conferidos; os ids
  variáveis são do `GamePad` (outra superfície) e do `TitleForm` (id 0).
  Mortos no original.
- `GameView.OnTouchCamera` (corpo vazio, `GameView.cs:1801-1803`): o id 17 só
  é registrado com o `GameForm`/`SoccerForm` no topo e corrente
  (`GameView.cs:862-869`), e os dois o consomem em `OnTouchEvent` com
  `return false` (`GameForm.cs:1617-1624`, `SoccerForm.cs:3404-3411`).
  Ressalva: se um formulário for empilhado entre o `Draw` e o `DoEvents`
  seguinte, um evento residual chegaria aqui. Esse caminho não foi observado
  e o corpo é vazio.

### B5. Get/SetTouchValue de formulários sem componentes que os usem (6 métodos)

`GameView.Get/Set` só falam com o formulário do topo (`GameView.cs:1248`).

- `BootForm.GetTouchValue` e `SetTouchValue`: o `BootForm` não registra nenhum
  componente (não há `AddTouch` em `form/BootForm.cs`), e diálogos empilhados
  sobre ele são o próprio topo.
- `RankForm.GetTouchValue` e `SetTouchValue`: só registra as setas id 1
  (`RankForm.cs:141-142`), cujo manipulador gera apenas `KeyDown`/`KeyUp`
  (`GameView.cs:1351-1378`).
- `GameForm.GetTouchValue` e `SetTouchValue`: só registra o id 17 (consumido)
  e o id 4 com valor 22 (`GameForm.cs:1130`). Em `OnTouchKeyClick`, 22 tem a
  metade alta zero, logo gera `KeyClick` e não `Set` (`GameView.cs:1462-1482`).
  Os auxiliares desenhados pelo `GameForm` (`DrawPopupMessage`,
  `Draw_helpMessage`, `DrawEffect`, `Draw_training`, `Draw_battlePic`,
  `Draw_moveToBus`) não registram toques.

### B6. Mortos no original (5 métodos)

- `Map.Draw_copyArea` e `MapMain.Draw_copyArea`: o ramo de cópia incremental
  fica no `else` de `if (num == 2)`, e `num = 2` é atribuído
  incondicionalmente antes do teste (`GameForm.cs:1012-1014`,
  `SoccerForm.cs:1698-1699`).
- `Player.ChangeState`: só é chamado pelo comando de script 2
  (`Player.cs:2475-2478`, `TPlayer.cs:500-503`). O único emissor,
  `AddCommandChangeState` (`Player.cs:2642-2645`), não tem chamadores.
- `SoccerForm.GetFirstScript`: a fila `script_` do `SoccerForm` só recebe
  `AddCommandCard`, sob `Config.DEBUG_CMD` (`SoccerForm.cs:1176-1179`). Os
  demais `AddCommand*` do `SoccerForm` (`SoccerForm.cs:743-781`) não têm
  chamadores, então `Script()` nunca entra no laço.
- `FormManager.Resume` (`void`): `FormManagerBase.Resume()`
  (`FormManagerBase.cs:713-722`) não tem nenhum chamador no C# do jogo ou do
  motor. O ciclo de pausa chama o `Resume()` de cada formulário
  (`IApplication.cs:463-472`), não o do gerenciador.

### B7. Só alcançáveis por formulários ou serviços já justificados (6 métodos)

- `MyFormBase.GetBoxFooterY` e `MyFormBase.Push(string,string)`: o único
  chamador é o `SpForm` (`SpForm.cs:665`, `SpForm.cs:743`). O `SubForm` tem a
  própria `GetBoxFooterY` (`SubForm.cs:10707`), que já roda.
- `SubForm.MakeTalkForm(int,string,string)`: `GameForm.cs:1355-1358`
  (`TRIAL_VERSION`), `SubForm.cs:7845-7852` (`TRIAL_VERSION`),
  `MyBilling.cs:102` (cobrança), `DebugForm.cs:1022`.
- `AppData.Draw(string)` e `AppData.Draw(string,bool)`: só de
  `AppData.SendSaveData` (`AppData.cs:5534-5736`), já justificado como
  teclado oculto.
- `AppData.GetHttpErrorText`: só no `catch` de `CgiRegist` em `BootForm.Run`
  (`BootForm.cs:415-430`). No port, `CgiRegist` é a política
  `register_local` (`config/service-overrides.json`, primeira entrada), que
  devolve a resposta local e não lança exceção.

### Entradas propostas para `config/coverage-justifications.json`

Não gravadas. O `match` é aplicado a `tipo::método(assinatura)->retorno`
(`tools/callgraph/analyze.py:640-645`).

```json
[
  {
    "group": "pinch-gesture",
    "match": "^form\\.(GameForm|SoccerForm)::(SetScale|GetScaleRange|ResetOffscreen)\\(",
    "reason": "SetScale (which calls GetScaleRange and ResetOffscreen) runs only on TYPE_PINCH (OnTouchCamera case 12: GameForm.cs:1730-1741, SoccerForm.cs:3437-3448), which needs two pointers (SurfaceBase.cs:931-959), or from the Draw clamp (GameForm.cs:1093-1097, SoccerForm.cs:1779-1783), which never fires: scale_ starts at 100 and only SetScale changes it (range 60..240 at width 240)."
  },
  {
    "group": "japanese-language",
    "match": "^(form\\.SubForm::(DrawConfig_jp|Draw_multiParam)\\(|main\\.AppData::DrawSeb\\(kairo\\.unity\\.ui\\.Graphics,System\\.Int32,System\\.Int32,kairo\\.unity\\.ui\\.Seb,kairo\\.unity\\.ui\\.Image\\[\\],System\\.Int32,System\\.Int32,System\\.Int32(,System\\.Int32,System\\.Int32)?\\)|main\\.AppData::DrawNumImageComma_en\\(|form\\.TitleForm::UpdateKairoAdClickNum\\(|surface\\.GameView::OnTouchRect\\()",
    "reason": "Japanese or non-English locale only; the port runs en-US and the offline language panel cannot switch: DrawConfig_jp (SubForm.cs:2329-2341), Draw_multiParam !En() (SoccerForm.cs:2561-2564), DrawNumImageComma_en Jp() (SubForm.cs:3402-3404), scaled DrawSeb Jp() menu (SubForm.cs:10324-10326), Kairo house ad and its touch id 27 drawn only when Jp() (TitleForm.cs:539-561, handled at 870-904)."
  },
  {
    "group": "pad-geometry",
    "match": "^(surface\\.GamePad::(SetMode|SetLayoutMode|DrawWatch|DrawBattery|DrawSoftLabelImage|GetSideSize)\\(|surface\\.GamePad::AddTouch\\(kairo\\.unity\\.ui\\.Graphics,System\\.Single,System\\.Single,System\\.Int32\\)|surface\\.SurfaceManager::SetLayoutMode\\(|surface\\.TouchEffectManager::Clear\\()",
    "reason": "Port surface is 240x280: AdjustSurfaceLayout computes pad mode 1, equal to the initial mode (SurfaceManager.cs:126-139, GamePad.cs:348), so SetMode is never called; these members need pad mode 0 or 2, a screen with >=120 px under the view for pad component 21 (GamePad.cs:908-912), the never-registered pad components 17/18 (GamePad.cs:701-713), or DEBUG (false at run time via Config.Create(MyConfig))."
  },
  {
    "group": "touch-component-never-created",
    "match": "^surface\\.GameView::(OnTouchKeyPress|OnTouchKeyUp|OnTouchList|OnTouchCamera)\\(",
    "reason": "Dead in the original: no GameView.AddTouch in Assembly-CSharp creates component ids 5, 7 or 10; id 17 is registered only while GameForm/SoccerForm is top (GameView.cs:862-869), and their OnTouchEvent consumes it with return false (GameForm.cs:1617-1624, SoccerForm.cs:3404-3411), so the empty GameView.OnTouchCamera is not reached."
  },
  {
    "group": "touch-accessor-unused",
    "match": "^form\\.(BootForm|RankForm|GameForm)::(GetTouchValue|SetTouchValue)\\(",
    "reason": "GameView.Get/Set address only the top form (GameView.cs:1248-1251). BootForm registers no touch component; RankForm only page arrows id 1, whose handler emits KeyDown/KeyUp (GameView.cs:1351-1378); GameForm only id 17 (consumed) and id 4 value 22, which OnTouchKeyClick turns into KeyClick, not Set (GameView.cs:1462-1482)."
  },
  {
    "group": "dead-in-original",
    "match": "^game\\.(Map|MapMain)::Draw_copyArea\\(|^game\\.Player::ChangeState\\(|^form\\.SoccerForm::GetFirstScript\\(|^form\\.FormManager::Resume\\(",
    "reason": "Dead in the original: UpdateOffscreen forces num = 2 before the copy-area branch (GameForm.cs:1012, SoccerForm.cs:1698); script command 2 is enqueued only by AddCommandChangeState, which has no callers (Player.cs:2642); SoccerForm.script_ is filled only by DEBUG_CMD AddCommandCard (SoccerForm.cs:1176-1179); FormManagerBase.Resume() has no call site (FormManagerBase.cs:713)."
  },
  {
    "group": "support-upload",
    "match": "^form\\.MyFormBase::(GetBoxFooterY|Push\\(System\\.String,System\\.String\\))",
    "reason": "Only caller is SpForm (SpForm.cs:665, SpForm.cs:743); SubForm has its own GetBoxFooterY."
  },
  {
    "group": "trial-or-billing",
    "match": "^form\\.SubForm::MakeTalkForm\\(System\\.Int32,System\\.String,System\\.String\\)",
    "reason": "Callers are TRIAL_VERSION branches (GameForm.cs:1355-1358, SubForm.cs:7845-7852), MyBilling (MyBilling.cs:102, billing disabled) and DebugForm."
  },
  {
    "group": "hidden-keypad",
    "match": "^main\\.AppData::(SendSaveData|Post|ResourceReDownload|Draw)\\(",
    "reason": "Hidden title commands need keys 2/1024/2048 (STAR), which no Android touch device produces, and they send data to the network; AppData.Draw(string[,bool]) is the SendSaveData screen (AppData.cs:5534-5736)."
  },
  {
    "group": "network-error",
    "match": "^main\\.AppData::GetHttpErrorText\\(",
    "reason": "Only in the catch of CgiRegist in BootForm.Run (BootForm.cs:415-430); the offline register_local policy returns the local response and never throws."
  }
]
```

A entrada `hidden-keypad` substitui a existente: o padrão só ganha `|Draw`.
A `support-upload` é uma segunda regra com o mesmo grupo da já existente.

---

## (C) Incertos

- **`cfg.MyConfig..cctor`** (estado `embedded`). No original roda no boot:
  `Config.Create(typeof(MyConfig))` lê todos os campos estáticos por reflexão
  (`IApplication.cs:170`, `Config.cs:159-178`), e `TitleForm.Init` lê
  `MyConfig.SMART_PASS/AMAZON` (`TitleForm.cs:184`, `917`). **Não há
  dobramento de constantes:** os campos são `static bool`/`int`, não `const`.
  No C++ gerado, cada acesso a campo chama `cs_init_b89c480114cef140()` com
  `TypeInitState::run("cfg.MyConfig", …)`
  (`src/game/game_generated_type_b89c480114cef140.cpp:71-112`). O
  inicializador provavelmente roda no port. Falta crédito porque a regra de
  `tools/callgraph/analyze.py:616-633` só credita um `.cctor` quando algum
  método do próprio tipo roda, e `MyConfig` não tem métodos executados (o
  `.ctor` nunca é chamado). Não verificado: se o diagnóstico registra o
  `TypeInitState::run` (`UNKNOWN`). Sugestão: creditar `.cctor` quando um
  método que lê um campo estático do tipo roda (aqui `TitleForm.Init` e o
  `Config.Create` do bootstrap), ou instrumentar o `TypeInitState::run` no
  build de diagnóstico.
- **`PlayerData.AddPhysicalParam(int,int)`**: chamado só pelos comandos 28–32
  de script de evento (`AppData.cs:4801-4850`, em `ExecuteScript`, que aumenta
  um parâmetro físico de todo o elenco). Não foi verificado quais eventos dos
  assets usam esses comandos nem quais são as suas condições (`termsScript_`),
  e isso exigiria ler o conteúdo dos assets. Se algum evento comum os usa, o
  método passa a (A), disparando esse evento.

---

## Lista completa

| # | Método | Classe | Grupo |
|---|---|---|---|
| 1 | `cfg.MyConfig::.cctor` | C | crédito de inicializador |
| 2 | `PlayerData::AddPhysicalParam(int,int)` | C | evento dos assets |
| 3 | `PlayerData::AddPhysicalParam(int[])` | A | A1 |
| 4 | `PlayerData::SetTrainingAddParam` | A | A1 |
| 5 | `TenantData::GetGoodsIncomeRate` | A | A3 |
| 6 | `TenantData::ProcStrenSpecialTenant` | A | A3 |
| 7 | `TradeData::IsPlayerInMember` | A | A7 |
| 8 | `TrainingData::GetTrainingAddParamNum` | A | A1 |
| 9 | `TrainingData::RemoveNew` | A | A1 |
| 10 | `BootForm::GetTouchValue` | B | B5 |
| 11 | `BootForm::Resume` | A | A6 |
| 12 | `BootForm::SetTouchValue` | B | B5 |
| 13 | `FormManager::Resume` | B | B6 |
| 14 | `GameForm::GetScaleRange` | B | B1 |
| 15 | `GameForm::GetTouchValue` | B | B5 |
| 16 | `GameForm::ResetOffscreen` | B | B1 |
| 17 | `GameForm::SetScale` | B | B1 |
| 18 | `GameForm::SetTouchValue` | B | B5 |
| 19 | `MyFormBase::GetBoxFooterY` | B | B7 |
| 20 | `MyFormBase::Push(string,string)` | B | B7 |
| 21 | `MyFormBase::SetTouchValue` | A | A5 |
| 22 | `RankForm::GetTouchValue` | B | B5 |
| 23 | `RankForm::SetTouchValue` | B | B5 |
| 24 | `SoccerForm::GetFirstScript` | B | B6 |
| 25 | `SoccerForm::GetScaleRange` | B | B1 |
| 26 | `SoccerForm::GetTouchValue` | A | A5 |
| 27 | `SoccerForm::ResetOffscreen` | B | B1 |
| 28 | `SoccerForm::Resume` | A | A6 |
| 29 | `SoccerForm::SetScale` | B | B1 |
| 30 | `SoccerForm::SetTouchValue` | A | A5 |
| 31 | `SubForm::DrawConfig_jp` | B | B2 |
| 32 | `SubForm::Draw_btmMsg(g,str,int)` | A | A4 |
| 33 | `SubForm::Draw_btmMsg(g,str,int,bool,bool)` | A | A4 |
| 34 | `SubForm::Draw_multiParam(…,anchor)` | B | B2 |
| 35 | `SubForm::Draw_trainingIcon` | A | A1 |
| 36 | `SubForm::MakeTalkForm(int,string,string)` | B | B7 |
| 37 | `SubForm::SetTicketWindowBtmMsg` | A | A4 |
| 38 | `SubForm::SetWinCharaTraining` | A | A1 |
| 39 | `TitleForm::UpdateKairoAdClickNum()` | B | B2 |
| 40 | `TitleForm::UpdateKairoAdClickNum(int)` | B | B2 |
| 41 | `DelayEvent::Deserialize` | A | A7 |
| 42 | `Map::Draw_copyArea` | B | B6 |
| 43 | `MapMain::Draw_copyArea` | B | B6 |
| 44 | `MapMain::UpdateTrainingCoatNum` | A | A3 (liberação `UNKNOWN`) |
| 45 | `Player::ChangeState` | B | B6 |
| 46 | `TPlayer::AddCommandRunning` | A | A2 (sorteio) |
| 47 | `TPlayer::AddCommandRunningRegist` | A | A2 (sorteio) |
| 48 | `TPlayer::StopTraining` | A | A2 |
| 49 | `Tenant::DestructTenant` | A | A3 |
| 50 | `Tenant::OutUserTPlayers` | A | A3 |
| 51 | `Tenant::StrenghTenant` | A | A3 |
| 52 | `UserData::ChangeTraining` | A | A2 |
| 53 | `AppData::Draw(string)` | B | B7 |
| 54 | `AppData::Draw(string,bool)` | B | B7 |
| 55 | `AppData::DrawMoney2` | A | A8 |
| 56 | `AppData::DrawMoney3` | A | A8 |
| 57 | `AppData::DrawNumImageComma_en` | B | B2 |
| 58 | `AppData::DrawSeb(8 args)` | B | B2 |
| 59 | `AppData::DrawSeb(10 args)` | B | B2 |
| 60 | `AppData::DrawTrophyEffect` | A | A7 |
| 61 | `AppData::GetHttpErrorText` | B | B7 |
| 62 | `GamePad::AddTouch(g,x,y,id)` | B | B3 |
| 63 | `GamePad::DrawBattery` | B | B3 |
| 64 | `GamePad::DrawSoftLabelImage` | B | B3 |
| 65 | `GamePad::DrawWatch` | B | B3 |
| 66 | `GamePad::GetSideSize` | B | B3 |
| 67 | `GamePad::SetLayoutMode` | B | B3 |
| 68 | `GamePad::SetMode` | B | B3 |
| 69 | `GameView::AddEffect` | A | A5 |
| 70 | `GameView::OnTouchCamera` | B | B4 |
| 71 | `GameView::OnTouchDlgPage` | A | A5 |
| 72 | `GameView::OnTouchDlgPage2` | A | A5 |
| 73 | `GameView::OnTouchKeyDown` | A | A5 |
| 74 | `GameView::OnTouchKeyPress` | B | B4 |
| 75 | `GameView::OnTouchKeyUp` | B | B4 |
| 76 | `GameView::OnTouchList` | B | B4 |
| 77 | `GameView::OnTouchRect` | B | B2 |
| 78 | `GameView::OnTouchTrackBar` | A | A5 |
| 79 | `GameView::OnTouchVScrollButton` | A | A5 |
| 80 | `GameView::Set(va,int,c)` | A | A5 |
| 81 | `SurfaceManager::SetLayoutMode` | B | B3 |
| 82 | `TouchEffectManager::Clear` | B | B3 |
| 83 | `TouchEffectManager::RemoveEffect(int)` | A | A5 |

## Resultados negativos e hipóteses refutadas

- "`MyConfig..cctor` não roda porque as constantes foram dobradas":
  **refutada**. Os campos não são `const`, e o C++ gerado inicializa o tipo a
  cada acesso. É falta de crédito, não de execução (ver C).
- "Os `Get/SetTouchValue` de `BootForm`, `RankForm` e `GameForm` são
  exercitáveis tocando nessas telas": **refutada**. Nenhum componente que
  essas telas registram passa por `Get`/`Set`.
- "A corrida no campo de treino sai com a política padrão": **refutada**.
  `num25` nunca é incrementado em `UserData.cs:4917-4921`, então nas políticas
  0 e 2 todas as sobras vão para a área 0.
- O desenho de `DrawConfig_en` já roda: o que falta na configuração é o
  toque (ids 6 e 19), não a tela.
