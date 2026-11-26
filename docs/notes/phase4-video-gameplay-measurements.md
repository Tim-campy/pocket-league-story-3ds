# Vídeo de gestão e partida — medições locais de 2026-11-26

Segunda entrega, sem push. Estes números são do **Azahar 2126.2**, modelo
New 3DS, relógio a 100%, e não medem o New 3DS XL físico. O aparelho precisa
de três execuções. New 3DS físico e 3DS original: **UNKNOWN** para estas telas.
Carga externa do Windows não foi controlada; não interpretar variação pequena
como regressão do código. Inventário e memória anterior/posterior:
`phase4-video-target-inventory.md`.

Passo menor em `1c64e5f`; alvos reutilizados em `ccb0d45`, ambos locais.
Validação do segundo: build PC PASS 2,2 s; check PASS 2,5 s; smoke PASS
10/10, zero alertas e zero reexecuções por suspensão em 182,0 s; build CTR
PASS 32,3 s; check_repository --staged PASS, 1.514 entradas e zero violações
em 64,7 s. O autoteste GPU passou nas execuções de partida, japonês, recarga
e novo jogo do artefato final. Nenhuma dependência nova foi acrescentada.

## Quadros

Cada linha contém 300 quadros após 60 de aquecimento. Médias em ms; o total
inclui o restante do host, além das três colunas discriminadas. Espera GPU
inclui as cópias de alvos; não somar o custo das cópias novamente. Máximo é o
maior quadro da janela, sem esconder salvamentos ou coletas.
Nessas oito janelas, excluir quadros com coleta ou transição não muda o máximo:
os picos de aproximadamente 427 ms da gestão não registraram coleta.

| Tela | Lógica | Desenho CPU | Espera GPU | Total | Máximo | >50 ms | Desenhos média/máximo | Trocas de textura média/máximo |
|---|---:|---:|---:|---:|---:|---:|---:|---:|
| Título EN | 0,133 | 4,334 | 0,904 | 6,200 | 7,150 | 0 | 47,06/51 | 43,06/47 |
| Mapa 100% parado EN | 2,342 | 16,292 | 1,220 | 21,023 | 426,752 | 1 | 220,34/272 | 79,88/123 |
| Menu EN | 0,178 | 23,731 | 1,220 | 26,332 | 26,406 | 0 | 352/352 | 184/184 |
| Mapa 75% parado EN | 3,830 | 20,158 | 1,220 | 26,409 | 426,849 | 2 | 302,28/308 | 82,25/84 |
| Mapa 75% rolando EN | 2,150 | 21,325 | 1,219 | 25,914 | 426,841 | 1 | 325,05/367 | 91,86/116 |
| Mapa 100% rolando JP | 2,715 | 17,206 | 1,218 | 22,350 | 427,008 | 1 | 244,12/273 | 84,73/107 |
| Menu JP | 0,176 | 21,737 | 1,221 | 24,483 | 24,819 | 0 | 307/307 | 133/133 |
| Partida EN | 2,778 | 26,549 | 1,222 | 31,660 | 34,677 | 0 | 373,22/431 | 84,68/91 |

Rolagem observada em 264/300 quadros no zoom 75% e 257/300 no 100%; as
inversões do analógico incluem instantes neutros. A primeira tentativa de
rolagem 100% EN foi interrompida por diálogo e **não** entrou como rolagem.
O máximo do mapa 100% EN contém 408,246 ms de lógica, contra 1,220 ms de
espera GPU média. Salvamento periódico é hipótese para esses picos, não causa
confirmada por rastreamento. Não houve alteração de lógica/coletor para reduzi-los.

## Transições e coletas

| Sessão Azahar | Quadros | Maior quadro estável, ms | Estáveis >50 ms | Maior transição, ms | Maior pausa GC, ms |
|---|---:|---:|---:|---:|---:|
| Gestão e menus EN | 13.915 | 727,048322 | 30 | 4.663,967627 | 424,002342 |
| Partida completa EN | 29.343 | 466,662634 | 18 | 4.964,120994 | 482,496384 |
| Repetição curta da partida EN | 3.129 | 167,294101 | 5 | 4.800,158766 | 319,886779 |

Esses números excedem 150 ms no emulador. As maiores transições incluem
carregamento/inicialização de formulários e coleta; os perfis não permitem
atribuir todo esse tempo ao desenho. São resultados negativos a confirmar
no aparelho, sem otimização adicional de runtime/coletor. O custo de cópias
fica em aproximadamente 1,15 ms por quadro nas janelas de gestão/partida.

## Texto e armazenamento

Inspeção visual no Azahar: inglês em título, mapa, menu, diálogos, partida e
resultado; japonês em título, mapa, notícia e menu, sem glifos ausentes nessas
amostras. Não equivale a verificar todos os caracteres dos idiomas.
Fontes vêm do APK do usuário; FreeType rasteriza glifos na CPU, cujo cache
conserva os bitmaps RGBA8 e os bytes das fontes. A coluna de faixas CPU inclui
esses dois grupos, não apenas glifos. No CTR, glifos são mantidos como RGBA8
linear na GPU, com dimensões em potências de dois e limite de cache de
1 MiB/4.096 entradas. Evicção libera somente no ponto seguro da GPU.

| Amostra | Cache GPU, bytes / entradas | Faixas de fontes CPU, bytes |
|---|---:|---:|
| Título EN | 8.448 / 21 | 201.528 |
| Partida EN, repetição curta | 33.792 / 81 | 215.220 |
| Título JP | 13.056 / 17 | 6.298.600 |
| Menu JP | 139.776 / 172 | 6.375.296 |

Novo jogo chegou ao mapa com nomes padrão. Sem teclado do sistema nesta
entrega: não usar a edição dos nomes. Carregar saves PC 31 e 50 passou;
uma partida completa chegou ao resultado 2–1. X gravou o save na gestão,
e outra execução carregou a data ano 1/mês 8/semana 4 e a câmera gravadas.
Evidências privadas: `work-target-newgame`, `work-target-match`,
`work-target-japanese` e `work-target-reload`, dentro de `build/phase4-video/`.

## Boot e instrumento

Comparação do medidor de assets, anterior à política final de memória:
três execuções ligado (média 18.371,094052 ms) e três desligado
(18.220,640783 ms). Diferença +150,453269 ms, 0,826%; os pares mudaram de
sinal e a dispersão desligado foi 451,218293 ms. Não permite separar todo o
custo do instrumento do ruído. O medidor fica desligado após o título.
Decomposição e dados individuais em `phase4-video-second-status.md`.
A variação física antiga de 17–28 s e custo físico ligado/desligado continuam
**UNKNOWN** até receber os novos registros de boot do aparelho.

## Comparação visual PC/Azahar

Capturas privadas em `build/phase4-video/`. PC e CTR usam o mesmo save de
origem, mas não a mesma semente/agenda de quadros; calendário, jogadores,
placar e mensagens variam. Não é uma comparação integral determinística.

| Tela | Evidência PC | Evidência Azahar | Diferença observada / limite |
|---|---|---|---|
| Título | gameplay-before-pc/captures | work-target-match-short/profile-1 | fase da animação diferente; desenho permanece centrado como no original |
| Mapa 100% | pc-management/000500 | work-target-management/profile-2 | datas, NPCs e aviso inferior distintos; 11.200 pixels estáticos de árvores idênticos |
| Mapa 75% | pc-management-zoom-min/000500 | work-target-management/profile-4 | datas, NPCs e cursor diferentes; 11.200 pixels estáticos idênticos, mesma escala |
| Menu | pc-management/000600 | work-target-management/profile-3 | mesma geometria, texto e camada translúcida; calendário, aviso e NPCs diferentes |
| Diálogo | pc-match/001200 | work-target-match/playing.png | mesmo texto “Our first goal!” e moldura; jogador, placar e fundo diferentes |
| Partida | pc-match/001980 | work-target-match-short/profile-2 | campo/câmera e posições diferem conforme simulação; recorte e ordem visual inspecionados |
| Resultado | pc-match/004020 | work-target-match/profile-3 | placar 2–0 no PC versus 2–1 CTR e público diferente; mesma janela, transparência e alinhamento |

Nos itens acima, não foi observada diferença persistente de mistura/alfa,
recorte, métricas de fonte ou composição de offscreen nas áreas comparáveis.
Isso é inspeção das amostras, não prova de equivalência de todas as operações.
O autoteste permanente cobre primitivas, textura, clip, alfa, cinza,
profundidade, amostragem e readback com verificações de pixels. A comparação
passo 2→3 e as diferenças brutas de pixels estão no inventário. Capturas de
perfil excluem o tempo da própria captura da janela medida.

Regressão PC antes/depois dos encaixes e da política CTR: 160/160 quadros da
superior e 160/160 da inferior idênticos, zero pixels diferentes. Evidência:
`build/phase4-video/work-target-pc-comparison.json`. A primeira tentativa de
zoom PC ocorreu antes do mapa; a seguinte foi curta e ficou num zoom
intermediário. Ambas foram descartadas da comparação 75%; o teste final
segurou L até o mínimo já definido pelo jogo, sem alterar seu código.
