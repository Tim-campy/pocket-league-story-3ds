# Fase 3 — proposta 1 e 2: divisão das telas e legibilidade (para escolha do usuário)

Estado: **proposta, não implementada**. Esboços em texto; capturas recortadas
nas resoluções-alvo, se forem feitas, ficam fora do Git (`build/`), porque
contêm imagens do jogo.

## O que o jogo original permite (fatos do fonte)

- A escala lógica é `min(largura, altura) × 100 / 240`
  (`IApplication.GetScaleRatio`): **o lado menor lógico é sempre 240**, e o outro
  lado cresce com a proporção da tela (`SurfaceBase.GetGameWidth/GetGameHeight`,
  `SurfaceBase.cs:1356-1375`). No celular em pé, a área lógica é 240 × (≥ 240);
  no PC do port, 240 × 280.
- Num painel de 320 × 240 o jogo roda em **320 × 240 lógicos, escala 1 (pixel a
  pixel)**; num de 400 × 240, em 400 × 240. As telas centram o conteúdo com
  `GetGameWidth/GetGameHeight` (por exemplo `(GetGameHeight() − 240)/2` no título),
  então larguras maiores que 240 são suportadas pelo próprio jogo. Quanto do
  layout fica bom em paisagem: `UNKNOWN` até o protótipo (o jogo foi feito para
  retrato; em paisagem as janelas de 240 de largura ficam centradas com sobras
  laterais).
- O mapa e a partida são vistas de câmera: a área visível cresce com a largura
  (`Camera` usa `VIEW_W = GetGameWidth`), e a câmera tem limites próprios
  (`Camera.SetCameraRect`).
- Toque: tudo o que é tocável é registrado por `GameView.AddTouch` no frame e
  testado em coordenadas lógicas; teclas fazem a mesma navegação na maioria das
  telas (ver a proposta de controles).

3DS: tela superior 400 × 240 (sem toque); inferior 320 × 240 (toque resistivo).

## Alternativa A — jogo inteiro na tela inferior, superior como painel

```
 superior 400×240 (sem toque)          inferior 320×240 (toque)
 +--------------------------------+    +--------------------------+
 | data, dinheiro, fama, placar   |    |  jogo completo, 320×240  |
 | da última partida, próximos    |    |  lógico, escala 1        |
 | jogos, dica do assistente      |    |  (mapa, menus, partida,  |
 | (desenhado pelo port a partir  |    |   diálogos, teclado)     |
 |  do estado do jogo)            |    |                          |
 +--------------------------------+    +--------------------------+
```

- Prós: o jogo funciona como no original, tudo tocável onde está; menor risco;
  escala 1 (texto nítido).
- Contras: a tela superior não mostra o jogo; o painel superior é conteúdo novo
  (exige ler estado do jogo, não muda a lógica); 320×240 é mais baixo que o
  retrato original (janelas altas precisam caber em 240 — o jogo já centra em
  240, mas listas longas rolam mais).

## Alternativa B — vista na superior, interface na inferior

```
 superior 400×240                      inferior 320×240 (toque)
 +--------------------------------+    +--------------------------+
 | mapa de gestão / partida       |    | menus, janelas, botões,  |
 | (câmera do jogo, 400 de        |    | rótulos das teclas, mapa |
 |  largura lógica)               |    | reduzido para tocar      |
 +--------------------------------+    +--------------------------+
```

- Prós: aproveita as duas telas; a partida e o mapa ganham área.
- Contras: exige separar o desenho de cada formulário em duas superfícies
  (vista × janelas), o que o jogo não faz — muitas janelas desenham sobre a
  vista; tocar no mapa (construir, selecionar jogador) passa a ser na inferior
  com uma cópia do mapa ou por cursor; mais trabalho e mais risco de divergência
  visual. Só a camada de plataforma muda, mas o roteamento de desenho por
  formulário é extenso.

## Alternativa C — como A, mas a partida vai para a superior

Gestão, menus, diálogos e entrada de texto ficam como em A (inferior, escala 1).
Durante a partida (`SoccerForm`), a vista do campo vai para a superior em 400 ×
240 e a inferior mostra placar, painel de status e os comandos tocáveis da
partida (retângulo de status, formação, intervalo).

- Prós: o momento mais "televisivo" usa a tela grande; menos trabalho que B
  (uma única tela muda de lugar, e a partida tem poucos elementos tocáveis).
- Contras: duas configurações de tela; a troca no início/fim da partida precisa
  ser suave.

## Por tela (o que precisa de toque e o que só se vê)

| Tela | Toque necessário | Só visualização | A | B | C |
|---|---|---|---|---|---|
| Título, slots | itens do menu, setas de página, ícone de idioma | logotipo, animação | inferior | superior: arte; inferior: menu | inferior |
| Gestão (mapa) | lotes, jogadores, técnico, arrastar câmera | cidade, campo de treino | inferior | superior: mapa; inferior: ações/cursor | inferior |
| Menus e janelas (`SubForm`) | linhas, abas, setas, barras de rolagem | textos de ajuda | inferior | inferior | inferior |
| Partida | retângulo de status, formação no intervalo | campo, jogadores, placar | inferior | superior: campo | superior: campo; inferior: status/comandos |
| Resultados, prêmios | avançar | listas, renda | inferior | superior | inferior |
| Diálogos do port | botões | título, mensagem | inferior | inferior | inferior |
| Entrada de texto | teclado | — | swkbd (sistema) | swkbd | swkbd |

## Proposta 2 — escala e legibilidade dos textos

- O jogo desenha texto com as fontes do APK em tamanhos lógicos pequenos
  (`Font.SetSize`, 10–16 px lógicos nas janelas). Em 320 × 240 na escala 1, um
  texto de 10 px tem 10 pixels de altura na tela inferior do New 3DS XL (cerca
  de 133 ppi, ~1,9 mm) — legível, como no celular de 2011 a 2014 para o qual o jogo
  foi feito; na tela superior em 400 × 240 (~120 ppi no XL), ~2,1 mm.
- Escala 1 é a única sem reamostragem; qualquer escala não inteira borraria o
  texto rasterizado (o port rasteriza o TTF do APK por tamanho, então dá para
  rasterizar direto no tamanho final se uma escala ≠ 1 for escolhida).
- 3DS original (tela inferior de 3,0" no modelo comum): mesmo número de pixels,
  pixels maiores no XL e menores no comum; medir no aparelho.
- Recomendação para decidir: alternativa A ou C na escala 1; checar no aparelho
  as janelas com mais texto (manual, explicações de instalação, eventos).

## Proposta 5 — protótipo no PC

Depois da escolha: host PC com duas janelas (400 × 240 e 320 × 240, ampliáveis por
inteiro), mesma API de desenho, para validar a alternativa antes do 3DS.
