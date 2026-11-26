# Vídeo e controles — revisão local de 2026-11-26

A segunda entrega aprovada no aparelho foi publicada em `8e3eecf`, com CI verde.
Os ajustes abaixo ficam locais até novo teste do usuário. O executável privado
com assets deve permanecer em `build/`; nada dele vai ao Git ou ao CI.

## Inferior nativa

GamePad desenha em 320×240, escala 100%, com a fonte existente de 14 px e
posições inteiras. Antes havia escala interna de 75% e composição posterior de
400×240 para 320×192: um glifo de 14 px chegava a aproximadamente 8,4 px.
Esse reamostramento era a causa da perda de legibilidade. A cobertura antialias
do próprio glifo FreeType é independente e permanece.

`src/kairo/api/screen_layout.hpp` concentra a região da barra: x=0, y=176,
largura=320, altura=64. Sobram 176 px acima. Botões: x=3/244, y=201, 73×37;
as áreas de toque usam as mesmas dimensões do desenho. Textos, ações e ordem
permanecem. Os diagnósticos exclusivos do PC ficam em y=144/160, acima da barra.
O caminho de uma tela dos roteiros/backend nulo mantém o layout anterior.

Comparação do título: 160/160 quadros superiores idênticos, zero pixels
diferentes. Evidência: `build/phase4-video/adjustments-native-title-comparison.json`.

## Zoom e suavização

GameScreenLayout pede 667×401; o alvo é arredondado para 1024×512 RGBA32.
RenderGameScreen desenha a cena nele. `_draw` amplia o recorte para 400×217,
em y=23; a interface restante fica fora do zoom. ResetOffscreen só marca
redesenho, sem realocar o alvo a cada mudança.

| Escala | Recorte | Destino |
|---|---|---|
| 100% | 400×217 | 400×217 |
| 130% | 307×166 | 400×217 |
| 150% | 266×144 | 400×217 |
| 170% | 235×127 | 400×217 |
| 200% | 200×108 | 400×217 |

A divisão é inteira. Mesmo em 200%, 108→217 não é um dobro exato no eixo
vertical. Vizinho mais próximo mantém contornos nítidos, mas distribui pixels
desigualmente nas escalas fracionárias; durante rolagem essa distribuição pode
oscilar. Não é filtragem linear.

Há nove chamadas a SetLinearFilterEnable: TitleForm.Init (condição <=480),
MyFormBase.SetTouchValue, AppData.NewGame/LoadGame (3) e GamePad.AddTouch/
DrawSoftLabel (4). Oito passaram a false; uma já era false. O setter já é vazio
no port **e no C# reconstruído**, Canvas.cs:1604. IsLinearFilterEnable lê
QualitySettings antiAliasing, que retorna zero no port. GameForm/SoccerForm
pedem Point; o backend CTR usa GPU_NEAREST; a CPU não implementa bilinear.
ResourceManager reconhece pt/bi/tri, mas não foi encontrado literal de recurso
bi/tri no código pesquisado. A hipótese de suavização ativa no 3DS foi refutada.

Capturas válidas: `build/phase4-video/zoom-verified-before-filter/` e
`zoom-verified-after-filter/`, arquivos `zoom-100-top.bmp` até `zoom-200-top.bmp`
nos cinco níveis acima. Comparação: zero pixels diferentes em cada par de
96.000 pixels, conforme `zoom-verified-filter-comparison.json`.

As primeiras capturas `zoom-before-filter/` e `zoom-after-filter/` foram
descartadas como prova dos níveis: uma cópia local preservou datas antigas,
fazendo Ninja reutilizar o objeto do host com a pinça anterior. Um log temporário
confirmou o problema; ele foi removido. Os fontes foram regravados com datas
atuais e build/check/smoke e capturas foram repetidos. Não se alteraram tools/.

O zoom original é escala inteira livre. L/R agora publica -1/0/+1 por quadro;
GameForm usa `management_zoom_percent_per_frame=2` (40 pontos percentuais/s a
20 Hz), mantendo os limites 75–200. L+R é neutro. A pinça existente permanece;
não há alocação nova por quadro. Margem 60×30, ocultação do cursor e rolagem
contínua na borda conservam as regras aprovadas.

Desenhar sprites diretamente no tamanho final exigiria reformar RenderAll,
meshes/caches, origem, clip e ordem de efeitos. Não foi feito. A alternativa
de ampliação inteira seguida de ajuste linear precisaria de um alvo e uma
passagem adicionais, além de amostragem bilinear no PC; um alvo RGBA32 de
1024×512 ocupa 2 MiB. Custo de tempo: UNKNOWN. Nenhum filtro alternativo aplicado.

## C-Stick e menus

API: `CStickState { int32_t x, y; } read_c_stick()`, eixos de -32767 a 32767;
o backend nulo deixa ambos em zero. No CTR, IR é opcional, inicializado apenas
no New 3DS; serviço indisponível não impede o boot. O PC usa analógico direito
ou T/F/G/H (cima/esquerda/baixo/direita).

Constantes em `src/kairo/api/c_stick.hpp`: zona morta radial 8000, cadência
máxima 20 Hz, histerese 5 graus além da borda dos oito setores. Depois da zona
morta, a faixa restante é normalizada proporcionalmente. Na inclinação máxima,
o movimento é o mesmo do direcional seguro; inclinações menores pulsam menos.
O direcional tem prioridade e sua implementação não muda. Retas seguem os
eixos da tela; diagonais conservam a proporção 2:1 do movimento existente.
Não há salto inicial de lote, conforme a decisão final do usuário.

A primeira inclinação revela e move o cursor oculto; A só revela. Construção
segue as mesmas regras; a janela de demolição mantém seu alvo fixo. Na partida
o C-Stick não atua. Campos novos são estado de entrada, sem referências
gerenciadas e sem Serialize/Deserialize.

Menus e diálogos recebem circle pad pela plataforma, sem editar sua lógica no
jogo: direção cardinal dominante, espera inicial de 6 quadros e repetição a
cada 3 quadros (20 Hz). C-Stick fica neutro nesses formulários.

## Teste manual

PC: `python tools/dev.py run --save 50`. I/J/K/L move câmera; T/F/G/H move cursor;
setas continuam iguais; Q/W diminui/aumenta zoom enquanto seguro. Testar também
os analógicos esquerdo/direito. A confirma, S volta, X abre menu, Z salva.
Tocar em Save/Menu/Back/Quit na inferior. Conferir cursor oculto, primeira
inclinação, bordas em 200%, prioridade das setas e seleção por circle pad.

No aparelho, usar o novo executável privado indicado no relatório, conservando
`/pls-video/preferences/` e o backup dos saves. L/R deve parar ao soltar; testar
C-Stick leve e forte, menus com circle pad, construção e uma partida, depois
salvar, sair e carregar. No modelo original, C-Stick deve permanecer neutro.

As medições recebidas do hardware e a proposta de cache não aplicada estão em
[phase4-video-n3ds-second-delivery.md](phase4-video-n3ds-second-delivery.md).
Só o título teve janela completa; gestão/menu/partida requerem nova rodada.
FreeType já era dependência do PC e do ARM nulo antes deste bloco; histórico,
licença e alternativa estão em THIRD_PARTY.md e docs/toolchain.md.
