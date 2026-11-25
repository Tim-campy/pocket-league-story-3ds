# Mudanças em relação ao original

Lista do que o port faz de forma diferente do Pocket League Story original
(Android) e da tag `v1.0.0-faithful`, que o reproduz. Cada item tem a decisão do
usuário que o autoriza e a etapa em que entra. Uma mudança de comportamento no
código do jogo entra aqui no mesmo commit que a faz (`AGENTS.md`, seção 9), com o
commit, o que muda, a decisão e como verificar. Mudanças só de forma (formatação,
comentários, nomes locais) não entram: não mudam o código de máquina.

| Item | O que muda | Decisão | Etapa / estado |
|---|---|---|---|
| Registro de eventos com custo do fim do mês | O registro de eventos passa a incluir o custo de fim de mês | B.5, 2026-11-17 | Fase 3, etapa 2 (pendente) |
| Idioma padrão | Console em idioma diferente de japonês e inglês inicia em inglês | B.6, 2026-11-17 | Fase 3 (pendente; a escolha atual do idioma está em `docs/design/`) |
| Botões do 3DS | B aciona só o rótulo de voltar e não age no mapa nem na partida; START abre o diálogo de encerramento (`DoTerminationDialog`), inclusive no título | B.2, 2026-11-17 | Protótipo da etapa 1 (`src/main/pc_dual_screen.cpp`, feito) |
| Circle pad | Câmera independente na gestão; direcional reenquadra só fora da vista; sem ação na partida | B.1 e autorização de 2026-11-24 | Etapa 2 no PC; entrada CTR neutra até a Fase 4; detalhes e testes abaixo |
| Barra de rótulos (`GamePad`) | Vai para a tela de baixo | B.3, 2026-11-17 | Feito no protótipo PC em 2026-11-20; confirmado na tentativa 656; CTR pendente |
| Largura de 400 na tela de cima | O mapa ocupa 400×240 no protótipo atual; a limitação observada em B.4 é histórica, não um bloqueio atual da gestão | B.4, 2026-11-17 | Confirmado no PC, tentativa 656 (2026-11-24); partida e CTR não verificados nessa execução |
| L/R | Zoom no mapa (pinça sintetizada) | B.7, 2026-11-17 | Feito no protótipo PC em 2026-11-19; CTR pendente |
| Serviços Android | Removidos, com políticas offline (registro local; cobrança indisponível sem conceder itens pagos; anúncios removidos) | decisões da Fase 2 | Feito |

## Entrada independente do circle pad — 2026-11-24

Autorização explícita do usuário: fornecer dois eixos inteiros por quadro na API,
sem alterar runtime, coletor, formulários ou desenho. `read_circle_pad()` em
`src/kairo/api/circle_pad.hpp` retorna `CirclePadState { x, y }`, na faixa
−32767 a +32767; positivo significa direita/baixo. A zona morta SDL é 12000
por eixo, com reescala linear do restante da faixa. I/J/K/L fornecem inclinação
máxima; teclas opostas se cancelam. Sem produtor (nulo/CTR), o estado é zero.

O PC deixa de sintetizar arraste a partir do circle pad. Este commit prepara a
entrada; o consumo pela câmera do jogo entra no commit seguinte. L/R mantêm o
caminho de pinça existente. Verificação: build, check, smoke e teste local dos
65536 valores SDL (faixa, zona morta, monotonicidade e leitura atômica dos eixos).
Não altera textos do jogo nem o formato de save.

## Câmera independente na gestão — 2026-11-24

Decisão explícita do usuário, primeiro item da etapa 2. O circle pad desloca
somente a câmera na gestão, inclusive durante a construção. O direcional move
o cursor; só reenquadra quando ele sai da vista, pelo deslocamento necessário
para voltar com margem de um lote. O movimento existente é imediato, sem nova
animação. A partida continua seguindo a bola e não lê o circle pad.

`Camera::PanManagement` e `Camera::ReframeManagementCursor` concentram o novo
comportamento; `GameForm` chama o primeiro uma vez por quadro e o segundo antes
de A sobre o mapa e da entrada/confirmação da construção. Y e diálogos gerais
preservam a câmera. O caminho de toque e a pinça L/R continuam existentes.
Na construção, a atualização do cursor só é chamada com o direcional pressionado;
não se ativa nesse estado a inércia de toque usada na gestão normal.

Constantes em `src/game/game.Camera.cpp`: `management_pan_pixels_per_frame = 6`
(120 pixels/s a 20 quadros/s, por eixo, na inclinação máxima),
`management_lot_margin_x = 120` e `management_lot_margin_y = 60` (projeção de um
lote de 2×2 células, em unidades do mapa). A velocidade é dividida pelo zoom;
o limite do mapa prevalece quando impede obter a margem completa. A tela é 400×240 e a
barra superior existente ocupa 23 pixels. O centro da câmera fica dentro de
`CAMERA_RECT`; o recuo fixo antigo de 120 foi retirado para permitir alcançar o
cursor nas bordas com zoom alto. O cursor mantém seus limites próprios no mapa,
mas deixa de ser limitado pela posição da câmera.

Não há novos campos gerenciados, alocações por quadro ou textos visíveis.
`Serialize` e `Deserialize` não mudam: os cinco vetores já existentes permitem
gravar câmera e cursor separados. A versão fiel volta a limitar o cursor à vista
na atualização seguinte à carga; não preserva a adaptação ao executar nela.

Teste manual no PC:

```
python tools/dev.py run --save 50 --seconds 600 --route tests/routes/camera-manual.route --capture build/captures/camera-manual:20
```

1. No mapa, use I/J/K/L (ou analógico esquerdo). Observe o mapa se mover sem
   mudar o lote do cursor. Setas movem o cursor; dentro da vista, a câmera para.
2. Afaste a câmera até o cursor sair. Uma seta deve trazer o cursor à vista com
   margem; os próximos passos dentro dela não devem continuar arrastando a câmera.
3. Repita com Q/W (L/R, afastar/aproximar). Confira as quatro bordas do mapa.
4. Com a câmera afastada, X (Y do 3DS) abre o menu; S volta. A câmera deve permanecer
   onde estava. A sobre o mapa deve reenquadrar antes de abrir a ação do lote.
   Confira também a entrada e confirmação da construção.
5. Z (X do 3DS) salva. Reabra o programa, escolha o save manual no título e
   confirme que câmera e cursor continuam separados. Para o save anterior à
   partida, execute `python tools/dev.py run --save 31 --seconds 600`, escolha
   o autosave no título e avance os diálogos; na partida, I/J/K/L não devem
   controlar a câmera. O roteiro de preparo acima destina-se ao save 50.

O novo roteiro apenas prepara o mapa e deixa tempo para interação. O executor
não injeta eixos nem observa coordenadas/lote: não há asserções automáticas dessas
invariantes. O usuário decidiu manter esse limite e testar manualmente, sem
alterar `tools/`, `diagnostic_route.hpp` ou `pc_main.cpp`.

### Evidência de save e entrada no PC

Testes locais em `build/camera-validation/`, sem alteração do executor: teclas
enviadas à janela SDL e leitura dos cinco vetores no save gravado pelo próprio
jogo. Save 50 carregado; câmera deslocada sem alterar o cursor; save manual
recarregado mantendo a separação. Abrir/fechar Y e os diálogos de salvar
preservou as posições. Um passo do direcional com o cursor fora da vista
reenquadrou; o passo seguinte, já visível, manteve a câmera parada.

O mesmo save separado abriu e foi salvo novamente num build isolado dos fontes
exatos da tag `v1.0.0-faithful` (`0605b75`), em
`build/faithful-camera-native/`. Nesse build, o cursor foi limitado à vista,
como faz o original. `Serialize`/`Deserialize` permanecem idênticos.

O save 31 também carregou e chegou a `SoccerForm`; a hipótese de que ele
ficaria parado no mapa foi refutada pelos diálogos iniciais e pela entrada na
partida. Controle analógico físico e execução no 3DS: `UNKNOWN`.

Build PC: PASS (tentativa 759, 16 s). Check: 185 listas de rastreamento, 178 classes,
296 slots e 4230 literais, sem problemas. Smoke: 10/10, zero alertas, 217 s.
No teste com zoom de 200%, após encerrar a pinça, o circle pad levou a câmera
de x=1008 a x=783 e manteve o cursor em x=987. O primeiro comando direcional
reenquadrou para x=1010; o seguinte manteve essa posição. A primeira tentativa
de comparar antes de encerrar a transição da pinça foi inconclusiva: o cursor
mudou durante essa transição, antes do deslocamento isolado pelo circle pad.
As asserções de
coordenadas acima são evidência local dos saves, não capacidade do executor.

Limitação observada na regressão: `lots.route` com save 106 repete os diálogos
de demissão no fim de ano. A mesma alternância de pilhas aparece na referência
canônica e no replay fiel anterior. Os passos `dismiss ... optional` permitem
avançar após o prazo sem comprovar que cada diálogo foi resolvido; portanto,
conclusão do roteiro não equivale a validar cada ação pretendida. Na repetição
atual (tentativa 861), a execução saiu desse ciclo e voltou ao mapa sem diálogo
no quadro 20039, sem intervenção manual. O executor não foi alterado.

Regressão completa em 2026-11-25: 87 execuções, 86 concluídas; apenas
`dialogs-exit.route` encerra o jogo como na referência. A primeira rodada levou
4176 s e teve dois cortes por tempo. Repetidos sem alterar código ou prazo:
`lots.route`/save 106 concluiu em 1029,9 s e `actions.route`/save 95 em 1147,8 s.
Nenhum alerta de salvaguarda ou lacuna de tradução nos resultados individuais.
