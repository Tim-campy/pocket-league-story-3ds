# Fase 2: primeira partida no diagnóstico PC

Base publicada: ce1dbd6. Esta nota distingue compilação, execução e equivalência.

## Marco funcional

A tentativa Release 32 carregou um autosave criado pelo próprio diagnóstico.
A captura privada `build/pc-diagnostic-release/attempts/32/frames/frame-1260.bmp`
mostra o primeiro tempo em 11:35; a captura 3360 mostra o segundo em 31:48.
Terminou pelo limite de 180,078 s, sem marcador de lacuna de tradução.
Não comprova partida completa nem equivalência visual/comportamental Android.
As capturas e saves continuam ignorados pelo Git.

Os dados autenticados estão em `config/phase2-match-start.json` e no histórico
`config/phase2-diagnostic-attempts.json`. A inspeção da captura identifica a tela;
os logs numéricos não declaram uma tela por inferência.

## Compilação e execução

O jogo passou de 1.760 para 1.768 métodos originais compilados, sem retirada:

- SoccerForm: Update, _update e Update_main.
- GameManager: Collision, CollisionBall_proc e HitShootPlayer.
- GamePad: OnTouchEvent e SetLayoutMode.

O formatador Mono default-G foi ligado ao emissor/build. O caso próprio de
concatenação numérica confirma avaliação esquerda para direita. O componente
numérico conferiu 85.264 observações contra Mono; oito diferenças do controle
STL moderno foram preservadas e esse controle não foi adotado.

Contadores do diagnóstico registram entradas, retornos normais e saídas por
exceção. O script promove apenas `runs`, com vínculo único ao método original
e prova de execução; não promove `verified`. O conjunto das tentativas 31, 32 e
34 registrou 677 métodos originais do jogo e 196 portáveis. As fixtures próprias
continuam separadas da execução em jogo.

Dos 198 pendentes da base ce1dbd6, cinco tiveram entrada/retorno registrados na
tentativa 32. Outros 193 não tiveram entrada registrada: isso não prova que
sejam inacessíveis ou desnecessários. Faltam 190 corpos compilados após os oito
ganhos; essa contagem não deve ser confundida com a base de 198 usada na medição.

## Perfil do menu

Tentativa 34, Release, 240 frames 661..900; captura900 inspecionada como menu de
gestão. Tempos exclusivos, sem pacing; overhead de instrumentação incluído.

| Parcela | Média ms | p95 ms |
|---|---:|---:|
| Lógica traduzida do jogo | 3,375820 | 4,6135 |
| API Kairo independente de plataforma | 3,848581 | 4,5657 |
| Rasterização CPU | 15,494874 | 18,8766 |
| Composição/apresentação | 1,161905 | 2,0767 |

As duas primeiras parcelas somam 7,224401 ms médios; somar seus p95 não produz
o p95 da soma. Não é uma previsão do desempenho ARM11.

`config/phase2-menu-profile.json` contém os dez métodos mais caros, tanto
exclusivos quanto inclusivos. O perfil preliminar da partida na tentativa32
usava a classificação anterior de texto/cache; deve ser repetido com a revisão
que distingue métricas/cache de fontes e produção de pixels.

O custo de Camera.ConvertScreenToCamera é relevante por frequência, não por
uma alocação grande: houve 1.099.628 chamadas nos 300 frames 1201..1500 da
partida preliminar. O corpo original faz aritmética e quatro acessos a arrays.
O corpo C++ observado não cria strings nem arrays/objetos nesse método, mas
materializa referências temporárias para preservar avaliação e faz os acessos
verificados do runtime. A medição isolada dessa sobrecarga ainda é pendente;
não atribuir todo o custo ao original nem ao tradutor sem esse controle.

## Captura e limites

Capture agora entra pelo adaptador normal, enfileira a captura do framebuffer
e grava PNGs no perfil local. Não é utilizada a guarda privada nas execuções
novas. Callback, bytes RGBA, erros, duas solicitações e restauração de pausa
possuem fixtures próprias. O finally segue o original: só limpa a pausa se ela
não estava ativa ao solicitar a captura; não reativa pausa alterada pelo callback.

As dimensões pedidas escalam o framebuffer corrente. Não se simulam os outros
aparelhos/aspectos do exportador Unity, e a API inteira não foi declarada
equivalente ao Android. Nenhum arquivo capturado entra no repositório.

Resultados negativos e correções de integração, incluindo MSVC C1001 com macro
de perfil, exposição do contrato de captura e registro terminal truncado no
timeout, estão em `phase2-after-ce1dbd6.md`.

Próximo marco: partida completa, perfil atualizado da partida e diagnóstico dos
custos de tradução; depois corpos/slots e políticas offline ainda pendentes.
