# Fase 3 — estudo de viabilidade da decisão de 2026-11-16 (somente leitura)

Base: [phase3-decision.md](phase3-decision.md). Fontes: C# reconstruído em
`reference/src` (`AC` = Assembly-CSharp, `KL` = KairoLibrary). Estudo feito por
leitura do fonte; os pontos centrais foram conferidos linha a linha
(`Camera.cs:836-840`, `FormManagerBase.cs:1050-1062`, `GameForm.cs:1371-1384`,
`AppData.cs:5310-5313`). O resto vem da leitura e pode ter desvios de linha.
O que o fonte não decide fica `UNKNOWN`.

Códigos de tecla: `LEFT=1<<16`, `UP=1<<17`, `RIGHT=1<<18`, `DOWN=1<<19`,
`SELECT=1<<20`, `SOFT1=1<<21` (rótulo esquerdo), `SOFT2=1<<22` (rótulo direito).
Tipos de toque (`KL/kairo/unity/surface/TouchEvent.cs`): 0 DOWN, 1 UP, 5 CLICK,
8 GRID_DRAG, 12 PINCH.

## Resumo

| Item | Viável na etapa 1 sem mudar o jogo? | Observação principal |
|---|---|---|
| a. Controles | **sim, com duas ressalvas** | quase todo toque já injeta uma tecla; o circle pad "só câmera" e o reenquadramento "só fora da vista" não existem no original |
| b. Menus na inferior | etapa 2 | cada janela é um formulário próprio, mas todos desenham numa única superfície de 240×240 lógicos; ~3–5 dias de plataforma + ajustes nos menus |
| c. Registro | etapa 2 | três pontos de gancho cobrem tudo; textos já vêm dos assets; só na sessão (sem mudar o save) |
| d. Painel da partida | etapa 2 (leitura) | placar, tempo, tática, fôlego, aura, ações por jogador já existem; posse e chutes do time precisam ser somados |
| e. 400×240 | confirmado para o mapa no PC atual | tentativa 656 (2026-11-24): mapa em 400×240 e `GamePad` na inferior; as limitações de largura e barra observadas em 2026-11-17/18 são históricas ([phase3-prototype.md](phase3-prototype.md)); partida e CTR não verificados nessa execução |

## a. Controles

### Fatos que decidem o mapeamento

1. **Quase todo componente tocável injeta uma tecla** (`AC/surface/GameView.cs:1253-1822`):
   linhas de menu e listas (seleciona + `SELECT`), setas de página (tecla de
   direção), "toque para avançar" (`AddTouch(2)` em tela cheia = `SELECT`),
   barras de rolagem e de volume (as listas também rolam pelas setas). O caminho
   por tecla já existe no original para quase tudo.
2. **Rótulos programáveis são casados pelo texto, não pelo lado.**
   `AppData.IsPushSoftLabel(n)` (`AC/main/AppData.cs:2033-2044`) é verdadeiro se o
   rótulo `n` está em qualquer lado e a tecla desse lado foi pulsada. Então o
   port pode mandar `SOFT1` ou `SOFT2` conforme o texto do rótulo.
3. **Escape só conhece "戻る"/"Back"** (`KL/kairo/unity/ui/Canvas.cs:338-339`,
   `1169-1226`). Sem rótulo de voltar, chama `ProcessBackKey`. `SubForm` engole
   (`SubForm.cs:11326`). `GameForm`, `SoccerForm` e `TitleForm` não tratam, e cai
   em `ShowTerminationDialog` (`FormManagerBase.cs:1050-1062`, conferido): **no
   mapa, Escape abre o diálogo de sair do jogo.**

### Mapeamento proposto (etapa 1, só plataforma)

| Botão | Ação (camada de plataforma) |
|---|---|
| A | `SELECT` |
| B | pulsa a tecla do lado cujo rótulo é "Back"/"戻る"; se nenhum, **nada** (não chama `ProcessBackKey`, que leva ao diálogo de sair) |
| Y | pulsa a tecla do lado cujo rótulo é "Menu"; nos menus abertos, igual a B (fecha) |
| X | `SOFT1` se o rótulo esquerdo não for vazio |
| direcional | setas |
| L / R | evento de pinça (tipo 12) com passo ±k pelo `OnTouchCamera` público; pular a faixa 100–140 de `pinchScaleValue_`, que dá a mesma escala 100 |
| circle pad | câmera (ver abaixo) |
| START | diálogo de término (`DoTerminationDialog`, já portado) |

### Por tela

| Tela | Toque | Equivalente | Rótulos esq. (X) / dir. |
|---|---|---|---|
| Título | menu (id 0), banner Kairo (id 27, só japonês), **botão de idioma** (id 3, valor 20160614) | direcional+A; banner removido; **idioma não tem caminho por tecla** → painel do port (SELECT do 3DS ou toque na inferior) | Site (removido) / **Exit** (diálogo de sair) |
| Slots de save | setas, linhas | direcional+A (`TitleForm.cs:360-412`) | — / Back |
| Mapa (`GameForm`) | arrastar câmera (id 17), toque em lote/jogador (CLICK → `Collision`+SELECT), faixa superior (= Menu) | cursor + A abre a janela sob o cursor (`GameForm.cs:731-737`); Y = Menu | Save / Menu |
| Construção (estado 1) | idem | idem | — / Back |
| Menus `SubForm` 3–12, 22 | linhas, toque fora = fechar | direcional+A; B | Save (3), Site (12, removido) / Back |
| Listas, páginas, abas | id 11/24/1/18 | direcional | Explain, Remove, Demolish / Back |
| Botões de salto de lista (id 2, `0x1500C8`) | toque | efeito `UNKNOWN` (tipo `0x150000` não está em `MyFormBase.SetTouchValue`) | — |
| Política do técnico (`SubForm` 50) | ←/→ | direcional | — / **Back ↔ Confirm** (`SubForm.cs:9261-9268`): com a seleção mudada não há Back; B não faz nada, A confirma |
| Entrada de texto (tipo 71; `FriendForm`) | `FepPanel` nativo | `swkbd` com o `maxLength` do jogo; validação do jogo depois do OK | — |
| Escalação (`UserData` edição) | células, lista, setas | `Update_edit` por teclas | Formation/Confirm, Switch, Bench / Back |
| Partida (`SoccerForm`) | pinça (id 17), retângulo de status (= RIGHT), setas de tática, metade inferior (= SELECT, especial da aura) | ←/→ tática; A especial; L/R zoom | — / Menu |
| Resultados (estados 14–16) | avançar | A; X = Switch | Switch / — |
| Ranking | setas | direcional; B | — / Back |
| Painel de idioma | nativo (`KairoPlugin.StartLanguagePanel`) | lista do port (já existe offline) | — |
| GamePad virtual | — | substituído pelos botões físicos | — |

### Câmera pelo circle pad (fatos)

- O arraste do mapa (`GameForm.OnTouchCamera`, `:1627-1744`): DOWN coloca o
  cursor no ponto tocado e o esconde; DRAG (após 4 px) chama
  `SetCameraPosition(início − delta)`, que faz `cursor_pos = (x,y)` e
  `pos = cursor_pos` (`:1746-1757`); UP liga inércia (`touchCameraSpeed_`). **No
  original o cursor é sempre o centro da câmera durante o arraste.**
- Sintetizar o arraste (DOWN/DRAG/UP, nunca CLICK) é código original puro, mas
  **move o cursor junto**.
- Alternativa sem mover o cursor: escrever só `Camera.pos` e chamar
  `SetCameraRect()` (já roda todo quadro, `Camera.cs:359`). Mas `SetCameraRect`
  (`:685-741`) limita `pos` ao retângulo do mapa ±120 e **prende o cursor dentro
  da área visível**: o cursor não fica parado; é arrastado pela borda da vista.
  E escrever estado do jogo a partir da plataforma não é "entrada que o
  original aceita".
- Direcional no original (`Camera.Update_normal`, `:743-842`, conferido em
  `:836-840`): a cada passo `pos.Set(cursor_pos)` — **a câmera recentra no
  cursor a cada passo, não só quando ele sai da vista.** Como o cursor nunca
  fica fora da vista (limite acima), "voltar a enquadrar se fora" não existe.
  Ter exatamente a regra pedida exige mudar `Camera.cs:840` e o limite do
  cursor em `SetCameraRect`: **mudança de lógica, depois do congelamento.**
- Partida: `SoccerForm.OnTouchCamera` tem DOWN e DRAG vazios (`:3420-3423`): o
  original não tem arraste de câmera na partida (a câmera segue a bola). O
  circle pad não faz nada na partida, ou o pan é escrito novo (etapa 2).
- Em 400 de largura, o limite fixo ±120 de `SetCameraRect` supõe vista de 240:
  a vista pode mostrar até 80 px além da borda do mapa (fundo azul,
  `GameForm.cs:1116`). Impacto visual `UNKNOWN` até o protótipo com jogo.

## b. Menus na tela inferior

- Cada janela é um formulário na pilha (`FormManagerBase`), que se desenha
  sozinho. Mas **só o `GameView` desenha formulários** (`GameView.Draw` →
  `formMan_.Draw`, `GameView.cs:1824-1839`), em espaço lógico 240×240, e todo
  toque é registrado no `GameView` (`AddTouch` estático, `:588-666`; altura 240
  fixa em `:501`).
- Precedente: o `GamePad` já é uma segunda superfície (`SurfaceManager.cs:72-74`)
  que desenha relógio e bateria quando há menu no topo.
- Escurecimento: feito pelo formulário de baixo (`GameForm.cs:1259-1269`, cor
  `MENU_BACK`) ou por `Draw_backBlackAlpha` sobre o tamanho do `GameView`.
- Recortes (`ClipRect`) usam coordenadas locais da janela: independentes.
- Centragem: `SubForm.Draw` soma `(largura do GameView − 240)/2` (`:2003-2033`),
  exceto menus sobre o mapa ou a partida; `AppData.DrawWindow` centra em 120 e
  em `(VIEW_Y + 240)/2` (`AppData.cs:2580-2608`).
- Formulários de baixo só são redesenhados quando `drawall_` está ligado
  (`FormManagerBase.cs:932`); como o menu de baixo continua visível nos outros
  quadros: `UNKNOWN`.

| Classe | Janelas (`SubForm.type_`) | O que falta |
|---|---|---|
| A. roteáveis sem mudar o jogo | diálogos 1/16/21/23, conversa 0, evento 13, configuração 14, manual 15, notícias 17, jogadores 27–35, 47, atividades 39–41, patrocínio 42–44, treino 45/46/49, técnico 50–52, contratação 53–56, copa 58/59, instalações 60–66, time 67, ingresso 68, registro 71, demissão 72, finanças 74, histórico 77; `RankForm`, `BillingForm` | plataforma: superfície inferior com o próprio retângulo, `AddTouch` registrando na superfície que está desenhando, `GameView` respondendo as dimensões da inferior durante o desenho dela. Janela de 240 centrada em 320 (margens de 40) |
| B. mudança pequena | menus 3–12 e 22 (`IsMenu`); "menu embaixo" de `BillingForm`/`MatchForm` | menus ancorados no mapa (`x_,y_` = (0,25) / (1,24)); toque fora para fechar cobre a vista inteira; escurecimento no `GameForm`; redesenho do menu de baixo |
| C. misturadas (ficam na superior) | transições 24/25/69/75/76, fogos 38, resultado da liga 37, ônibus/batalha 78/79, edição de formação 26, sobreposições internas do `GameForm` (popups, barra superior, ajuda) e do `SoccerForm` (resultados 9–16) | separá-las exige dividir código do jogo |

Estimativa (etapa 2): superfície inferior + toque por superfície + classe A: 2–3
dias; classe B: 1–2 dias; classe C fica na superior.

## c. Registro de acontecimentos

| Fonte | Ponto comum | Texto (assets) |
|---|---|---|
| Popups (41 chamadas) | `AppData.AddPopupMessage(id,args)` (`AppData.cs:5310`), **antes** da checagem de duplicata (`:5313`, que descarta o 3º igual) | `UserData.POPUP_MEM` traduzido por `text.txt` |
| Conversas do assistente (tipo 0) | primeira exibição da `SubForm` (`SubForm.Update`, `untilActiveHide_` de verdadeiro para falso, `:7443`) | `talk.txt` |
| Eventos (tipo 13) | idem | `evtmsgs.txt` |
| Notícias (tipo 17) | idem | `news.txt` (título) |
| Eventos de script (dinheiro, contratação, técnico, fãs) | `AppData.ExecuteScript` (`:4509`) gera popups/janelas acima | idem |
| Finanças | `AppData.AddMoney/SubMoney(valor, registro)` (`:3726`, `:3738`); já acumulado por mês em `udat_.records_` | rótulos `LT` |
| Custos do fim do mês | `GameForm.ProgressTime` (`:1371-1384`, conferido): salário do técnico e manutenção; o total `num7` é calculado e não usado; o popup `POPUP_MEM[0]` "維持費 <0>支払いました" existe sem chamador — **hoje não aparece ao jogador** | `text.txt` |
| Resultado da partida | `SoccerForm._update` estado 2 (`:1192-1206`): placar, V/E/D, artilheiros (`gm_.scorerListUserTeam`), renda (`bonus_in_param`) | composto de dados + nomes dos times |
| Balões de negociação | transitórios | não registrar |
| Lesões | **não existem no jogo** (nenhum resultado para 怪我/injur*) | — |

- Três ganchos (popups, primeira exibição de janela de mensagem, dinheiro/fim de
  mês) cobrem todas as fontes. `Push` não serve: insere fora da ordem de
  exibição.
- Entrada: data do jogo + uma linha de texto sem marcação (`<po=…>`, `<br>`,
  `<co=…>`). Conversas e eventos: primeira página ou título.
- Tamanho: anel de ~64 entradas; a inferior mostra 14–16 linhas.
- **Só na sessão** (recomendado): os popups já não entram no save
  (`popupMessages_` é lista de tempo de execução). Persistir exigiria arquivo
  separado por slot, não mudar o formato do save.
- Mostrar o custo do fim do mês (hoje invisível) é conteúdo novo: decisão do
  usuário.

## d. Painel da partida

| Dado | Campo | Hoje desenhado em |
|---|---|---|
| Placar | `GameManager.score_[2]` | barra superior (`SoccerForm.UpdateOffscreenTopBar`) |
| Times, uniformes | `gm_.teamId_[2]` → `apdat_.tData_[]` | barra superior |
| Tempo, tempo de jogo | `gameTime_` (0..2700), `halfTime` | `SoccerForm.Draw_main` |
| Situação (saída, lateral, escanteio, falta, gol, cartão) | `gm_.state_` | `GameManager.Draw` |
| Posse (instante) | `gm_.gameState_` (0/1/2 solta) | — (sem total; somar por quadro) |
| Formação | `gm_.team_formationPage_[2]` → `formationData_[].formation_`; `Team.formationType_` | só janela de depuração |
| Tática | `SoccerForm.statusAmeftoMode_` (Normal / drible / passe longo) | painel de tática |
| Fôlego | `Player.physical_hp_` / `PlayerData.GetPhysicalHpMax` | barra sobre o jogador |
| Aura | `PlayerData.auraPoint_` (0–10000) | painel de status |
| Ações por jogador | `PlayerData.actscoreNum_[17]` (0 chute, 1 passe, 5 gol, 8–13 disputas, 14 cabeçada, 15 defesa; 2–4 `UNKNOWN`) | não desenhado durante a partida |
| Chutes do time | somar `actscoreNum_[0]` | — |
| Cartões | `time_card`, `time_team`, `time_pId` | `GameManager.Draw` |
| Adversário | `tData_[teamId_[1]]` (`name_`, `warPotential_`, `formationType_`), `homeAway_` | barra superior |
| Minimapa | `apdat_.map_.Draw_miniMap` quando `save_.ints[12]==1` | encaixe na inferior `UNKNOWN` |

Substituições durante a partida: não encontradas (só a edição do intervalo,
estado 6). Tudo isso é leitura de campos públicos: o painel não muda a lógica,
mas precisa do código do jogo legível (etapa 2).

## e. Layout em 400×240

**Atualização de 2026-11-24:** a tentativa 656 confirma o mapa em 400×240,
com a barra `GamePad` na inferior. A hipótese de limitação atual do mapa a
240 pixels foi refutada. As observações de 2026-11-17 abaixo ficam como histórico;
não justificam uma nova alteração de largura na gestão. A inspeção não incluiu a partida.

- Escala: `GetScaleRatio(240,240)` → área lógica 400×240 na superior e 320×240
  na inferior, ambas na escala 1.
- **Correção pelo protótipo (2026-11-17):** nas capturas, o mapa e a partida também ficam num quadro de 240 de largura, centralizado. O `SurfaceManager` dimensiona a `GameView` em 240 × escala, e o `VIEW_W` abaixo se refere a essa vista, não à tela. O parágrafo seguinte (leitura do fonte) fica como registro da hipótese refutada.
- **Aproveitam a largura (hipótese, refutada):** mapa (`VIEW_W = W − VIEW_X`, `VIEW_Y = 23`: vista
  400×217), partida (vista de câmera na largura toda). Com largura > 240 o jogo
  já soma +30 nos deslocamentos da barra superior e usa escala mínima 75.
- **Faixas laterais (janela de 240 centrada, 80 px de cada lado):** `SubForm`
  fora dos menus, título (centrado em X), `RankForm`, `SpForm`, `BillingForm`,
  `MatchForm`, `FriendForm`, `ConnectForm`, `LineupForm`. Menus sobre o mapa e a
  partida ficam à esquerda (`x_,y_`), não centrados.
- **Altura 240 sem folga:** `AppData.DrawWindow` sempre dispõe numa caixa de
  240×240; janelas de 228×204 ocupam y ≈ 29–233; a edição do time usa 240×240
  inteiro. Textos longos já são paginados (notícias 159×106, conversa 172×60).
  Nenhuma janela exige altura > 240.
- **Supõem altura > 240:** banner do título (`H−372−72`, removido); fundo do
  título ancorado embaixo (topo cortado se a imagem passar de 240: `UNKNOWN`);
  menu do título em `H−70`.

## Decisões que dependem do usuário

1. **Circle pad na etapa 1.** O original não tem "câmera sem cursor". Opções:
   (i) sintetizar o arraste original (cursor acompanha o centro da câmera,
   como no celular); (ii) mover só a câmera, com o cursor preso à borda da vista
   pelo limite original (escreve estado do jogo pela plataforma); (iii) adiar o
   circle pad para a etapa 2 e mudar a lógica (`Camera.cs:840` e o limite do
   cursor) depois do congelamento. Recomendação: (i) na etapa 1, (iii) na etapa 2.
2. **Reenquadramento só fora da vista:** no original a câmera recentra no cursor
   a cada passo do direcional. A regra pedida é mudança de lógica (etapa 2).
3. **B no mapa e na partida:** não há "Back"; o Escape original abre o diálogo
   de sair. Proposta: B não faz nada nessas telas; START abre o diálogo de sair.
4. **Partida:** o original não tem arraste de câmera; circle pad sem efeito na
   etapa 1?
5. **Título:** rótulo direito "Exit". B ou START para sair?
6. **Custo do fim do mês no registro:** hoje invisível ao jogador; registrar é
   conteúdo novo (texto do próprio asset).
7. **Idioma inicial = idioma do console:** os idiomas do APK são japonês e
   inglês; console em outro idioma → inglês?
