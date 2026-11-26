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
| Circle pad | Câmera independente na gestão; cursor fica oculto ao ultrapassar a margem e acompanha logicamente o centro; direcional revela e move, A apenas revela; direcional rola continuamente na margem; sem ação na partida | B.1 e decisões de 2026-11-24/25 | Etapa 2 no PC; entrada CTR neutra até a Fase 4; regras finais abaixo |
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

## Câmera independente na gestão — primeira versão, 2026-11-24 (histórico)

As regras desta primeira versão foram substituídas pelas decisões de 2026-11-25
registradas ao final deste documento. Os testes abaixo descrevem aquela versão.

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

## Câmera na gestão — rolagem contínua, 2026-11-25

A regra de salto visível abaixo foi substituída pela seção seguinte; velocidade,
margens, limites e rolagem contínua permanecem aprovados.

Decisão do usuário após testar no PC. A velocidade aprovada permanece em
`management_pan_pixels_per_frame = 6`, dividida pelo zoom (120 pixels/s por eixo
a 20 quadros/s). O direcional move o cursor até a margem e, enquanto continua
pressionado para fora, desloca a câmera nessa mesma velocidade; o cursor só
avança conforme a câmera abre espaço. Não há salto ou animação nova da câmera.
Uma entrada no circle pad ou no direcional cancela a inércia residual do arraste
de toque, para ela não puxar a câmera de volta ao cursor. O arraste sem essa
intervenção continua funcionando.

O circle pad move só a câmera enquanto o cursor permanece na região segura.
Ao ultrapassar essa região, o cursor abandona a posição antiga e vai para o
centro da tela, limitado pelas bordas já existentes do cursor. O usuário aprovou
`management_lot_margin_x = 60` e `management_lot_margin_y = 30`: metade da
extensão projetada do lote, para mantê-lo inteiro visível inclusive a 200%.
Consideram-se 400×240 e os 23 pixels da barra superior.

Se o centro não tiver um lote selecionável, não se procura outro lote nem se
move a câmera; não se confirma construção/demolição sem alvo válido. A prévia
de construção acompanha o cursor, preserva o tipo escolhido e ainda exige A
para construir. Menus e diálogos suspendem o movimento; a confirmação de
demolição mantém seu `tenantId_`, sem trocar de alvo. A partida segue inalterada.

Zoom L/R mantém a câmera e só leva o cursor ao centro se ele ultrapassar a nova
margem. O começo da pinça deixa de selecionar o ponto do toque sintetizado:
ao reconhecer a pinça, o jogo restaura o cursor anterior e ignora o clique final
do gesto. Os campos temporários desse gesto não entram no save.

`ReframeManagementCursor` e todas as suas chamadas em A e na entrada/confirmação
da construção foram removidos. `KeepManagementCursorVisible` ajusta somente
o cursor. Não há regra especial restante para buscar um cursor distante.
`Serialize`/`Deserialize`, formato de save e textos visíveis não mudam.

Teste manual da regra atual:

```
python tools/dev.py run --save 50 --seconds 600 --route tests/routes/camera-manual.route --capture build/captures/camera-revision:20
```

1. I/J/K/L: a câmera move; o cursor permanece até a margem e então vai ao centro.
2. Segure uma seta: na margem, a câmera deve rolar continuamente, sem salto;
   o cursor espera espaço e nunca sai da vista. Repita nos quatro sentidos.
3. Q/W: confira os limites de zoom. A câmera não busca o cursor.
4. X abre o menu, S volta. Com menu/diálogo aberto, I/J/K/L não movem nada.
5. Na construção, confira o salto da prévia e confirme apenas com A. Na janela
   de demolição, confira que o alvo permanece o mesmo.
6. Confira bordas/cantos e salve com Z; ao recarregar, o cursor deve estar visível.

A limitação do executor foi registrada em `docs/backlog.md` para decisão do usuário.

Perfil de três execuções por cenário/versão, comparação dos timeouts anteriores
e evidência de compatibilidade do save: [verificação de 2026-11-25](notes/camera-profile-2026-11-25.md).
O usuário autorizou as medições com a carga externa existente; não são resultados
de máquina ociosa. Construção/demolição e interrupção da inércia de toque ainda
exigem a conferência visual indicada no roteiro manual acima.

## Cursor oculto durante a exploração — 2026-11-25

O bloqueio da primeira pressão do direcional descrito nesta seção foi substituído
pelo ajuste seguinte; a ocultação e o comportamento de A continuam aprovados.

Decisão do usuário após testar a rolagem contínua. Quando circle pad ou zoom
ultrapassam a margem de 60×30, o cursor deixa de ser desenhado. Enquanto oculto,
sua posição lógica acompanha continuamente o centro limitado às bordas do mapa,
sem procurar um lote válido e sem deslocar a câmera para buscar o cursor.
Enquanto estiver dentro da margem, mover a câmera preserva o cursor visível no
mesmo ponto. Velocidade e rolagem do direcional não mudam.

A primeira pressão de direcional ou A apenas revela o cursor no centro: não
move nem abre janela/constrói. Essa pressão fica consumida até soltar as teclas
dirigidas ao cursor; só uma nova pressão executa o comando normal. Menus e
diálogos continuam congelando o movimento. A partida não usa essa regra.

Conforme aprovação explícita do usuário para as informações associadas:

- Somem o destaque do lote, os marcadores de jogador/técnico e a ficha do jogador
  sob o cursor. Ao revelar, a seleção é recalculada no centro atual.
- Na construção, o marcador do local some, o tipo escolhido é preservado e A
  continua necessário para confirmar depois de revelar. Os demais lotes mantêm
  seus contornos neutros; instalações existentes não somem.
- Avisos antigos da construção são substituídos pela instrução genérica já
  existente para escolher o local. Não há texto novo.
- Rótulos de salvar/menu/voltar e informações gerais (dinheiro, data, pesquisa,
  acontecimentos) permanecem; não descrevem um alvo selecionado.
- A demolição usa a janela original com alvo fixo, sem prévia móvel. O primeiro
  A revela; o seguinte pode abrir a janela do alvo atual. Uma janela já aberta
  conserva o alvo e a confirmação, sem movimento de câmera ou cursor.

Dois booleanos transitórios controlam ocultação e consumo da pressão; nenhum
entra no save. Deserialize apenas reinicia esses estados e a exibição do cursor;
a sequência de leituras e todos os bytes serializados permanecem inalterados.
Ao carregar, o cursor reaparece. Não há alocação nova por quadro.

Teste manual:

```
python tools/dev.py run --save 50 --seconds 600 --route tests/routes/camera-manual.route --capture build/captures/cursor-hidden:20
```

I/J/K/L: passe da margem e continue movendo; nenhum cursor deve saltar à vista.
Pressione e segure A ou uma seta: apenas revela, inclusive durante a repetição.
Solte e pressione novamente: ação/movimento normal. Repita com Q/W (zoom),
construção e bordas. Salve com Z enquanto oculto e recarregue: cursor visível,
na posição lógica central gravada. Confira que ficha, destaque e avisos antigos
não indicam um alvo enquanto o cursor está oculto.

Verificação local: entrada mantida de A/seta apenas revelou, e a pressão seguinte
moveu de x=780 para x=837 com a câmera em x=780. Oculto, o cursor acompanhou o
centro; na borda direita ficou em x=1195 com câmera em x=1200, respeitando o
limite anterior. Zoom preservou a câmera. Save feito oculto recarregou visível:
a primeira seta já moveu. Capturas confirmaram ocultação/retorno do cursor e do
destaque, com salvar/menu preservados na inferior. Evidências locais:
`build/camera-validation/hidden-revision-r2` e `hidden-reload-revision-r1`.
Construção/demolição foram revisadas no código; conferência visual pelo usuário
permanece no roteiro acima. O executor continua sem asserções dessas invariantes.

Resultados negativos: a primeira compilação foi recusada por alteração de fonte
durante o build; a repetição estável passou. O primeiro auxiliar de interação
esperava igualdade exata de câmera/cursor na borda, ignorando o limite de x=1195;
foi corrigida a expectativa, sem mudar o jogo, e a repetição passou.

Aceite local: build e check aprovados (185 listas, 178 classes, 296 slots,
4231 literais, zero problemas); smoke em 212 s, 10/10 execuções, zero alertas,
zero lacunas e nenhuma repetição por suspensão. Sem push nesta entrega.

## Direcional revela e move imediatamente — 2026-11-25

Decisão do usuário após testar o cursor oculto, esclarecida como movimento normal
na primeira pressão, sem salto de um lote inteiro: o direcional revela o cursor
no centro lógico e já executa o movimento contínuo existente no mesmo quadro.
Segurar a seta continua o movimento/repetição normal, inclusive a rolagem suave
na margem. A primeira pressão de A continua apenas revelando, sem abrir janela
nem confirmar construção; A precisa ser solto antes de uma nova confirmação.
Construção usa o mesmo movimento. A janela de demolição já aberta mantém o alvo
fixo e congela o movimento, como antes. Sem alteração de save, textos ou velocidade.

Para conferir, rode o comando de teste da seção anterior, use I/J/K/L até ocultar
o cursor e segure uma seta: ele deve aparecer e começar a mover imediatamente.
Oculte novamente e segure A: deve apenas aparecer. Q/W continuam dando zoom.

Verificado no PC: A manteve câmera/cursor em x=1116 sem abrir janela; a primeira
seta mantida moveu o cursor de x=732 para x=950 e iniciou a rolagem da câmera
até x=810. Build e check passaram; smoke 10/10, zero alertas e lacunas, 172 s.
Capturas e saves locais: `build/camera-validation/hidden-immediate-revision-r1`.

## 2026-11-25 — remover a ação Site do título

Decisão explícita do usuário durante o primeiro bloco de vídeo da Fase 4:
remover a funcionalidade de abrir o site pelo título, em vez de adiar um
navegador para o 3DS. `TitleForm` deixa de mostrar o rótulo esquerdo Site e
de processar seus dois caminhos de abertura. A tecla X fica sem ação nesse
estado do título; as demais funções de X em outras telas continuam iguais.
O rótulo direito de sair continua presente. Não há texto novo nem alteração
de formato ou conteúdo do save.

Verificar no PC e no 3DS: abrir o título, conferir a ausência de Site na barra,
apertar X e conferir que nenhum navegador abre; sair continua disponível.
Esta alteração visual é separada da comparação de capturas que verifica a
neutralidade do novo contrato de telas e dos encaixes de GPU no backend PC.

## 2026-11-25 — raiz explícita de assets no ROMFS do vídeo CTR

Autorizado pelo usuário: o backend de vídeo fornece `romfs:/` ao catálogo,
sem trocar o diretório global. Apenas esse build reconhece a raiz ROMFS;
PC e benchmark nulo conservam seus caminhos. O catálogo mantém confinamento,
existência, tamanho e autenticação pelos mesmos caminhos de validação.
Saves e configurações continuam em `/pls-video/preferences/` no SD.

O benchmark anterior usa assets separados no SD. O protótipo de vídeo os
embute no ROMFS para que o teste privado no aparelho use um único `.3dsx`,
com o conjunto autenticado correspondente ao executável. Isso não é uma
otimização de desempenho demonstrada. O arquivo cresce pelo payload e pelo
índice/alinhamento do ROMFS; os dados continuam sendo lidos conforme usados,
não se presume que todo o pacote fique residente em RAM. Tamanho, boot e
memória serão registrados no relatório do bloco.

O `.3dsx` contém assets do APK do usuário: somente em `build/`, nunca no Git,
anexos, publicação ou CI. Uma distribuição futura deve fornecer ferramentas
para montar o pacote localmente a partir do APK do próprio usuário, não o
pacote com assets. `.gitignore` ignora `build/` e `*.3dsx`; o check de conteúdo
recusa ambos mesmo se forem adicionados à força.

Verificar: smoke e capturas do PC; no Azahar, ler ROMFS e criar/carregar save
e gravar configuração no SD na mesma execução, sem alterar o diretório.

## 2026-11-25 — primeiro backend de vídeo GPU no 3DS

Decisão do usuário para a primeira entrega da Fase 4: o título usa citro3d
na tela superior 400×240; a barra original é composta na inferior 320×240.
O destino vem da identidade da superfície, não da contagem de reinícios de
Graphics. PC e nulo conservam a rasterização anterior. Não há som, teclado
do sistema, mudança de regras ou formato de save neste bloco.

Imagens, texto e primitivas seguem o backend GPU; recursos nativos só são
liberados na thread de desenho, fora do quadro e após a conclusão dos
comandos. A ordem das profundidades é remapeada para preservar diferenças
que o formato float24 da GPU não representa na escala original. Gestão e
partida ainda não têm aceite de vídeo: dependem do teste do título no aparelho.

Apresentação própria no Homebrew Launcher, autorizada pelo usuário: título
“Dual Screen Port”, descrição “Unofficial port - video test”, autor
“Port contributors” e ícone geométrico original de duas telas. O ícone é
gerado em `build/`; não usa marca nem arte do jogo.

Verificação: autoteste GPU de recorte assimétrico, cores, alfa, tons de
cinza, amostragem de alvo, sobreposição e descarte; título no Azahar;
comparação das capturas PC e smoke. Perfil e instruções do aparelho em
`docs/design/phase4-video.md` e `docs/notes/phase4-video-device-test.md`.

## 2026-11-25 — entrada nativa no primeiro vídeo CTR

Autorização do usuário para o bloco de vídeo: A/B/X/Y, START, direcional,
L/R, circle pad e toque inferior passam pelo HID do console. Mantêm o
mapeamento do protótipo PC; o analógico publica `read_circle_pad` e não
simula direcional. L/R conservam a pinça na gestão, com eventos preparados
na inicialização e rastreados por uma raiz, sem alocar a cada quadro.

START apresenta a confirmação existente na inferior; botões e toque usam
coordenadas locais 320×240. O toque na barra original mantém o caminho do
jogo: a confirmação de saída desse caminho ainda aparece na superior.
Não se moveu menu ou diálogo do jogo neste bloco. PC e nulo não mudam.

Verificação no Azahar: seleção do título, HiScores e retorno por B/Y,
START com A/B/direcional e toque, X sem Site, L/R e circle pad sem movimento
no título. Gestão/partida e calibração física do analógico dependem do
aceite do aparelho. Sem alteração de texto, regra ou formato de save.

### Diagnóstico após a primeira falha física do vídeo

O New 3DS XL do usuário parou no autoteste GPU, depois dos registros de ROMFS
e modelo do console. Acrescentados marcadores com flush no SD antes/depois
das operações desse teste, para distinguir desenho, transferência e espera.
O rastreamento desliga quando o autoteste termina; não altera regras, texto,
save ou o caminho CPU. Pode acrescentar tempo de I/O durante o autoteste.
A causa física ainda não foi identificada; não se declara a falha corrigida.

Em 2026-11-26, o log físico localizou a espera depois de submeter limpeza e
primeiro desenho, antes da cópia de readback. O autoteste passou a verificar
essas operações separadamente, com e sem textura, em alvos 64×64 e 8×8,
antes do teste original. São sondagens de boot, sem mudança no desenho do
jogo nem trabalho adicional nos quadros seguintes. A correção física segue
pendente de identificar a operação que não termina.
