# Fase 3 — protótipo de duas telas no PC (etapa 1, só plataforma)

Estado: **protótipo funcionando (2026-11-17).** Decisão: [phase3-decision.md](phase3-decision.md).
Estudo: [phase3-feasibility.md](phase3-feasibility.md). Nenhuma linha do código do jogo
mudou: o protótipo está em `src/main/pc_dual_screen.{hpp,cpp}`, `src/main/pc_main.cpp`
e `src/kairo/platform/sdl/backend.{hpp,cpp}`.

## Como rodar

```
python tools/build_pc.py --apk APK --diagnostic-generated build/<snapshot> --configuration Release \
  --run --run-seconds 90 --diagnostic-save-from-attempt 50 --virtual-clock 1767225600000,1000,50 \
  --diagnostic-route tests/routes/menu-explore.route --dual-screen 2 --dual-capture build/<pasta>:10
```

- `--dual-screen N`: janela de cima 400×240 e de baixo 320×240, ampliadas N vezes
  (pixels inteiros, sem filtro).
- `--dual-capture DIR:K`: grava as duas telas em BMP a cada K quadros. Só em
  `build/`, nunca no Git (são imagens do jogo).
- Teclado (padrão do Azahar para os botões): A = `A`, B = `S`, X = `Z`, Y = `X`,
  L = `Q`, R = `W`, START = `M`, SELECT = `N`. Direcional = setas; circle pad =
  `I`/`J`/`K`/`L`. Um controle USB (SDL GameController) também funciona, por posição
  dos botões no padrão Nintendo; o analógico esquerdo é o circle pad.

## O que cada botão faz (sem mudar o jogo)

| Botão | Ação |
|---|---|
| A | tecla de confirmar do jogo (`KEY_SELECT`) |
| B | aperta a tecla programável cujo rótulo é "Back"/"戻る"; sem esse rótulo, nada (não chama o fluxo que abre o diálogo de sair) |
| Y | aperta a tecla cujo rótulo é "Menu"; dentro de um menu, o mesmo que B |
| X | tecla programável esquerda, quando tem rótulo (Save, Switch, Demolish...) |
| START | diálogo de sair do jogo |
| Direcional | setas do jogo (seguradas: o cursor acelera como no original) |
| Circle pad | no mapa, o arraste de câmera que o original aceita (opção i do estudo); o cursor acompanha o centro |
| L/R | **não ligado ainda** (o zoom exige pinça com dois dedos simulados) |

A tela de baixo mostra os botões com o significado atual, a tela de cima do jogo,
os rótulos e a última entrada. Os rótulos aparecem traduzidos pela própria tradução
do jogo (`Graphics::DrawString` → `translate_text`), sem texto copiado para o port.
Os diálogos do port (`Dialog.Show`) aparecem e são respondidos na tela de baixo
(toque, A, B e setas).

## Resultados

Execução: tentativas de diagnóstico 220 (300 s, 188 quadros capturados) e 221
(90 s), `menu-explore` a partir do save 50, sem lacuna de tradução.

**Bom:**
- O jogo roda em 400×240 sem mudança: título, gestão, menus de dois níveis e
  diálogos.
- Os menus cabem nos 240 de altura.
- A lógica dos botões a partir dos rótulos funciona em todas as telas vistas: no
  mapa, B fica inativo, X é "Save" e Y é "Menu"; num menu, Y e B são "Back".
- A janela de baixo tem toque próprio e não interfere no toque da de cima.

**Ruim / a resolver:**
1. **A área do jogo continua com 240 de largura.** A vista do mapa e as janelas
   ficam num quadro de 240 centralizado, com faixas pretas de 80 px de cada lado.
   Isso **corrige o estudo**: a afirmação de que o mapa aproveita os 400 de largura
   não se confirmou. O `SurfaceManager` (KairoLibrary) dimensiona a `GameView` em
   240 × escala. Aproveitar a largura exige mudar esse leiaute (camada KairoLibrary:
   decidir se é plataforma ou código do jogo antes de mexer).

   **Investigação B.4 (2026-11-18), medida no protótipo** (`PLS_PC_LAYOUT_TRACE=1`
   em `pc_dual_screen.cpp` imprime o que a plataforma informa; sonda temporária,
   já revertida, nas chamadas de tela cheia e de viewport):
   - A plataforma informa ao jogo o que deveria: aplicação 400×240, `Canvas`
     400×240, escala automática e fixa 100, escala de resolução 100, barra de
     status 0. Nenhum valor da camada reimplementada limita a largura a 240.
   - O jogo chama `Fullscreen(false)` e depois `Fullscreen(true)`, isto é, o
     `SurfaceManager.AdjustSurfaceLayout` (Assembly-CSharp, código traduzido)
     escolhe o modo 2 (sem altura para a barra: 240 − 240 < 30). Não chama
     `GetViewport` (modo de leiaute 0).
   - Mesmo assim, a captura mostra a vista do mapa em 240×192, centralizada em
     x = 80, com a barra da `GamePad` nos 48 px de baixo. Portanto o quadro de 240
     é decidido **dentro do código traduzido** (`SurfaceManager`/`GamePad`/
     `GameView`/`GameForm`, Assembly-CSharp e KairoLibrary portável), não pela
     plataforma. A linha exata que fixa 240 é `UNKNOWN`: medi-la exige sonda no
     código gerado, cujo snapshot tem hash conferido.
   - **Conclusão pela regra da decisão B.4:** aproveitar os 400 exige editar
     código traduzido; fica para depois do congelamento. Nada foi mudado.
   - O próprio jogo tem caminho largo (`GameForm.GetTopBarOffT` e afins testam
     `GetGameWidth() > 240`), o que indica que o original previa vistas mais
     largas que 240; o teste de mapa e partida em 400 depende dessa mudança.
2. **A barra de rótulos (Save/Menu) toma os ~48 px de baixo da tela de cima.** Essa
   barra é a superfície `GamePad` do próprio jogo, uma segunda superfície que ele já
   desenha abaixo da vista. Levar a `GamePad` para a tela de baixo daria os rótulos
   traduzidos e tocáveis do próprio jogo e liberaria a altura em cima. É o caminho
   natural da etapa 1, e fica como próximo passo (precisa de destino de desenho e
   toque por superfície na plataforma).
3. **Título:** os rótulos "Site" e "Quit" ficam nos cantos, e o ícone de idioma
   (canto superior direito) fica fora do quadro de 240, só por toque.
4. ~~L/R (zoom) não ligados.~~ **Ligados (2026-11-19, decisão B.7):** no mapa, R aproxima e
   L afasta, pela mesma pinça de dois dedos que o original aceita (`SurfaceBase` →
   `GameForm.OnTouchCamera`, caso 12, `pinchScaleValue_`): o host sintetiza
   `ACTION_DOWN`, `ACTION_POINTER_2_DOWN`, `ACTION_MOVE` com os dedos se afastando ou
   aproximando 6 px por quadro, e os dois `UP` ao soltar. Medido: `GameForm.SetScale`
   chamado 34 vezes num teste com R por 60 quadros e L por 60; capturas mostram o
   zoom aplicado. Teste sem teclado: `PLS_PC_DUAL_HOLD="R:700-760,L:1000-1060"`.
   **B.3 feito (2026-11-20):** a plataforma redireciona o desenho da superfície
   `GamePad` para uma imagem própria, mostrada na tela de baixo a 80 % (320×192).
   Mecanismo: o jogo reinicia o `Graphics` de exibição antes de cada superfície
   (`SurfaceManagerBase.Draw`, ordem `GameView`, `GamePad`, `GameBanner`; medido: 4
   reinícios por quadro, o primeiro é o do `Canvas`); o gancho
   `Graphics::display_reset_hook` (vazio fora do protótipo) troca o alvo no 3º e o
   devolve no 4º. Toque na tela de baixo vai ao jogo só onde a `GamePad` desenhou
   (alfa ≠ 0), convertido para as coordenadas dela (não testado por roteiro: `UNKNOWN`).
   **Tela de cima sem a barra:** mapa e menus limpos nos 400×240; título com a arte
   num quadro de 240 centralizado (o ícone de idioma continua em cima: é da
   `GameView`). **Tela de baixo:** só os botões dos cantos (Save/Menu, Back, Site/Quit)
   a 80 %, pequenos e um pouco borrados; o resto fica vazio (espaço para a etapa 2).
5. Painel provisório com sobreposição de texto em dois botões (L/R, START).
6. Não medido: desempenho do desenho duplo; leitura no tamanho real do 3DS.
