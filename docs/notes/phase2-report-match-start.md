## 1. PROGRESSO

Base: ce1dbd6. Encerramento solicitado pelo usu?rio ap?s o terminal da verifica??o.

| Invent?rio | Base | Final |
|---|---:|---:|
| M?todos originais do jogo compilados | 1760/1958 (89,89%) | 1768/1958 (90,30%) |
| Jogo com retorno normal registrado | 0 | 677 |
| Jogo com equival?ncia verificada | 0 | 0 |
| Pendentes de compila??o | 198 | 190 |
| Defini??es virtuais ausentes | 24 | 22 |
| Ra?zes port?veis compiladas/exercitadas | 172/172 | 172/172 |
| Port?veis incluindo depend?ncias, em fixtures | 374 | 374 |
| Port?veis com execu??o registrada em jogo | UNKNOWN | 196 |

Fronteira: 252 verified, 1 implemented, 522 todo, entre 775 s?mbolos. Sem
retirada de m?todo compilado; oito ganhos. Equival?ncia completa Android UNKNOWN.

## 2. O QUE FOI FEITO NESTA RODADA

- Integrado o formatador Mono default-G: 85.264/85.264 observa??es pr?prias.
- Fechados SoccerForm.Update/_update/Update_main, GameManager.Collision/
  CollisionBall_proc/HitShootPlayer e GamePad.OnTouchEvent/SetLayoutMode.
- Partida efetiva: tentativa32, FH11:35 no frame1260, SH31:48 no frame3360.
  Timeout180,078s; nenhuma lacuna registrada. Partida completa n?o alcan?ada.
- Contadores diagn?sticos e promo??o runs por script, sem promo??o verified.
- Perfil exclusivo em quatro ?reas; menu medido separadamente.
- Captura PNG local com callback, leitura RGBA independente e regras de pausa.
- Verifica??o completa final: **104/104 PASS**, com **73 testes de reposit?rio**.

?ltimas corre??es de perfil/captura passaram na su?te, mas n?o foram novamente
exercitadas em partida antes do encerramento pedido. N?o foi criado outro APK.

## 3. HIP?TESES

- CONFIRMADA: formata??o num?rica bloqueava a emiss?o da cadeia da partida;
  a integra??o liberou os corpos e a execu??o chegou ao segundo tempo.
- CONFIRMADA: a macro de perfil provocava MSVC C1001 no AssetReader normal;
  c?pia privada sem macro compilou, e chamada C++ comum resolveu o corpus.
- REFUTADA: remover s? os par?nteses externos da macro bastaria; o erro permaneceu.
- CONFIRMADA: um timeout pode cortar o ?ltimo JSON; s? registro terminal
  incompleto ? descartado, nunca uma linha completa inv?lida.
- CONFIRMADA: o finally de Capture s? limpa pausa quando ela n?o estava ativa
  no in?cio; n?o reativa pausa mudada pelo callback. Fixtures cobrem os casos.
- INCONCLUSIVA: propor??o do custo de CPU que vem da tradu??o. Camera n?o aloca
  arrays/objetos nem strings no corpo observado, mas tem tempor?rios de
  refer?ncia e acessos verificados adicionais; falta o controle isolado.

Negativos: fixture invalidada por edi??o concorrente; colis?o no prepare do
tradutor; timeout de split ao competir com outro build; C1057 por corte de macro;
primeira corre??o de corte excessivamente restrita; C1001; header Capture vis?vel
s? ao SDL; coleta interrompida por registro terminal incompleto. Todos preservados
no di?rio; a verifica??o completa final passou ap?s as corre??es aplic?veis.

## 4. PENDENTES POR GRUPO

190 corpos e 22 defini??es virtuais; integra??o das 26 pol?ticas offline ainda
pendentes; partida completa; compara??o Android; perfil atualizado da partida;
controle de sobrecarga do tradutor. Entre os 198 pendentes da base, cinco tiveram
entrada/retorno na tentativa32 e 193 n?o tiveram entrada registrada. N?o
interpretar esse ?ltimo n?mero como prova de inacessibilidade.

| Parcela | Menu m?dia/p95 ms | Partida preliminar m?dia/p95 ms |
|---|---:|---:|
| L?gica traduzida | 3.376/4.614 | 6.947/9.560 |
| API Kairo | 3.849/4.566 | 3.295/4.110 |
| Raster CPU | 15.495/18.877 | 12.957/15.415 |
| Composi??o/apresenta??o | 1.162/2.077 | 1.124/2.059 |

Menu: tentativa34, frames661..900 (240). Partida: tentativa32, frames1201..1500
(300), classifica??o anterior de texto/cache; deve ser repetida. Pacing fora;
overhead incluso, sem corre??o por microbenchmark. N?o extrapolar para ARM11.

Dez maiores tempos exclusivos acumulados na janela preliminar da partida:

| M?todo | Chamadas | ms acumulados |
|---|---:|---:|
| `game.Map.Draw_coat` | 600 | 775.865 |
| `game.Camera.ConvertScreenToCamera` | 1099628 | 288.622 |
| `game.GameManager.Collision` | 300 | 92.726 |
| `game.Team.Get_playerReceivePosEva` | 11188 | 66.906 |
| `game.GameManager.Collision_proc` | 138600 | 57.279 |
| `game.Team.GetSum` | 17790 | 54.938 |
| `game.Player.Update_moveArea` | 6600 | 47.120 |
| `main.AppData.DrawZSortObjects` | 600 | 40.086 |
| `game.Team.Cal_evaCoatMulti9block` | 10200 | 38.439 |
| `main.AppData.InsertGameObject` | 53618 | 33.733 |

A frequ?ncia das convers?es e os la?os de mapa/colis?o existem no C# original.
N?o foram removidos nem simplificados. A magnitude adicional causada por
refer?ncias/bounds/checks da tradu??o continua UNKNOWN. Os dez do menu e tempos
inclusivos est?o em config/phase2-menu-profile.json.

## 5. TOOLCHAIN

Roslyn5.8.0-1.26319.2; .NET10.0.10; Mono2.6.5/Unity5.3.4f1 como or?culo; MSVC19.51;
C++17 /fp:strict; Release /O2; SDL2.32.10; FreeType2.15; ogg1.3.6; vorbis1.3.7.
Num?rico: Mono oficial b6587926c0f146c8b12985744f33a13b39a22d57, MIT/X11, tabelas
24.576bytes locais. Fonte/hash/licen?a em docs/toolchain.md e THIRD_PARTY.md.
Nenhuma instala??o no sistema ou prepara??o 3DS/Azahar.

## 6. COMPONENTES EXTERNOS E METADADOS

Refer?ncia C# somente leitura. Identidades originais por assinatura completa;
execu??o validada por logs/exe/inputs e arquivos gerados. Nenhuma normaliza??o
ou edi??o de DLL. Nenhum asset/bin?rio original/captura no Git. Cola??o mant?m
337.358bytes MIT e 46.832bytes LGPL autorizados e separados. Controle moderno
num?rico falhou8/85.264 e n?o foi adotado. Permanecem UNKNOWN no Android os sete
casos ref/out, Sin(-0) e diferen?as de trigonometria/arcos.

## 7. BLOQUEIOS

Parada por pedido do usu?rio, n?o por falta de autoriza??o/depend?ncia. N?o h?
nova decis?o necess?ria para retomar a partida. Medi??o causal dos hotspots e
valida??o Android continuam pendentes. N?o foi iniciada nova execu??o ap?s o
pedido de encerramento; resultados privados anteriores permanecem dispon?veis.

## 8. SUA RECOMENDA??O

Na pr?xima rodada: retomar o autosave at? o resultado final da partida; medir
partida com as mesmas fronteiras refinadas do menu; isolar Camera e acessos a
arrays antes de qualquer otimiza??o; depois corpos/slots e pol?ticas offline.
O prot?tipo privado build/hotspot_probe.py foi preparado, n?o executado e n?o
publicado. S? iniciar novo trabalho ap?s o pr?ximo prompt.
