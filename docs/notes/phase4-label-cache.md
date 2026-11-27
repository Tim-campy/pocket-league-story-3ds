# Cache somente da barra inferior — 2026-11-27

O backend CTR compara até 128 comandos, em dois arrays fixos, e as versões
das texturas usadas. Se forem iguais, conserva o alvo da barra. Mudanças nos
comandos, limpeza explícita ou troca do alvo invalidam o resultado. Fontes
que são outros alvos de render e excesso de comandos usam o caminho comum.
Não são armazenadas referências gerenciadas nem criadas texturas/alvos extras.
Os handles nativos usados na comparação continuam sujeitos à fila de liberação
segura. Não há cache novo para o mapa, título, menus ou composição final.

## Verificação e limites

PC: build 2,1 s, check 1,9 s, smoke 10/10 e zero alertas em 132,1 s.
Após acrescentar a captura direta: build 2,6 s, check 1,7 s, smoke 10/10,
zero alertas em 119,1 s.
CTR: build 526,5 s. O autoteste permanente do boot passou com `label_cache=1`:
confere pixels conservados, ausência de nova cópia e invalidação por movimento.

Comparação no Azahar 2126.2, mesmo executável, flag `labels-no-cache.flag`
presente/ausente, dados em `build/phase4-video/label-cache-{off,on}-retry/`.
As médias abaixo são do emulador, não previsão do desempenho no aparelho.

| Tela estável | Quadros sem/com | Cópias médias sem/com | Tempo das cópias ms sem/com |
|---|---:|---:|---:|
| Título | 486 / 484 | 6 / 3,006198 | 0,856919 / 0,419796 |
| Gestão 100% | 419 / 104 | 8 / 5 | 1,151774 / 0,711166 |
| Menu da gestão | 234 / 233 | 8 / 5 | 1,150859 / 0,712513 |

A sessão com cache teve 1.419 reutilizações e sete invalidações, 1.426 quadros,
17 coletas e zero descartes. A sessão sem cache teve 1.222 quadros, 17 coletas
e zero descartes. O estado inicial alterado explica a média pouco acima de
três cópias no título. A gestão teve durações/escalas diferentes, pois também
foi usado o zoom; os tempos totais não isolam o ganho do cache da lógica.
O custo e a pausa de gravação no aparelho ainda são UNKNOWN.
A folga de VRAM foi a mesma nas três telas e nos dois modos: 1.930.240 bytes.
No título, a folga linear mínima também foi igual: 15.039.232 bytes. As folgas
da gestão/menu variaram com a duração/carga de assets, sem indicar alocação de
outro alvo pelo cache.

A primeira tentativa por teclado não confirmou a saída e não gravou o perfil;
foi descartada. O helper local passou a exigir confirmação da gravação antes
de encerrar o processo do emulador.

Capturas da janela mostraram rótulos ausentes ou preservados indevidamente.
A hipótese de defeito no conteúdo do alvo foi refutada pelas capturas nativas,
nas duas configurações: zero diferenças nos 76.800 pixels do título e do mapa;
no menu, zero nos 75.520 pixels fora da área do relógio. Só 17 pixels do relógio
mudaram entre os horários. Conferido tanto o alvo transparente dos rótulos
quanto a composição final da inferior. Evidência:
`build/phase4-video/label-cache-native-pixels.json`, capturas nas pastas
`label-native-check/` e `label-native-off/`. As capturas da janela não são usadas
como prova de equivalência.
A tentativa de capturar a área de trabalho não isolou a janela e foi descartada.
A prova quantitativa cobre os alvos GPU; a apresentação no aparelho com esta
revisão continua dependendo do teste físico.

## Captura direta opcional

Com `/pls-video/capture-check.flag`, SELECT grava os alvos superior, inferior e
rótulos em `/pls-video/captures/<quadro>-{top,bottom,labels}.png`. A leitura GPU
e o PNG ficam fora do quadro medido, mas perturbam a sessão; usar apenas para
comparação visual e remover a flag antes do benchmark. O caminho normal não
faz essa leitura. Recompilação CTR dessa verificação: 49,4 s.

Para a sessão normal de 15 minutos, remover também `labels-no-cache.flag` e
`profile-minimal.flag`. Jogar, salvar e sair pelo jogo. Copiar `video-N-frames.csv`,
`video-N-gc.csv` e `video-N-meta.txt` juntos; SELECT não é necessário.
