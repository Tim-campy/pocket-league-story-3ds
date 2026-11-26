# Segunda entrega de vídeo — teste privado no New 3DS XL

Executável para teste, sem publicação: `build/phase4-video/gameplay-test.3dsx`.
48.765.264 bytes; SHA-256
`03a3f6bb608dc522f7126f6b640009e55e3e8e326fcbb59c5987a0484f4c8ea1`.
Contém assets do APK do usuário no ROMFS; não distribuir nem enviar ao CI.
O título aprovado anterior permanece em `build/phase4-video/title-approved.3dsx`.

## Instalar e chegar às telas

1. Fazer backup de `/pls-video/preferences/` do SD antes de trocar saves.
   Copiar o executável para `/3ds/pls-video/ctr_video.3dsx`. Começar com o
   console desligado completamente, ligar e abrir pelo Homebrew Launcher.
2. Para gestão, copiar **o conteúdo inteiro** de
   `build/phase4-video/second-delivery-fixtures/management/preferences/`
   para `/pls-video/preferences/`. Para véspera da primeira partida, usar
   `build/phase4-video/second-delivery-fixtures/before-match/preferences/`.
   Não misturar arquivos das duas pastas. São cópias privadas dos saves PC
   50 e 31; os originais permanecem intactos.
3. No título: Start, escolher o slot já preenchido, A. Para jogo novo, usar
   slot vazio, conservar os nomes padrão e escolher Apply. Edição de nomes
   e teclado do sistema não fazem parte desta entrega.
4. Gestão: circle pad move câmera, L/R mudam zoom, direcional controla cursor,
   Y abre menu, B volta, X salva quando esse é o rótulo. Menus continuam na
   superior. A barra inferior responde ao toque. Na partida, circle pad e
   zoom não controlam câmera; avançar mensagens e início de cada tempo com A.

## Teste funcional curto

- Abrir gestão, rolar até as bordas e testar os dois zooms; observar cursor
  oculto/revelado e ausência de imagem antiga, quadrados pretos ou cintilação.
- Abrir um menu e diálogo, voltar ao mapa e verificar textos, transparência
  e sobreposição dos objetos.
- Jogar uma partida inteira, inclusive intervalo e resultado. Relatar qualquer
  falha gráfica ou botão que não responda, dizendo em qual tela ocorreu.
- Salvar, sair pelo jogo, abrir novamente e carregar. Conferir data, dinheiro
  e posição da câmera. Não substituir saves pessoais sem o backup do passo 1.

## Três execuções de medição

Não criar `inventory.flag` no aparelho: o inventário detalhado escreve logs
adicionais e não deve pesar no perfil. Em cada execução, deixar o título
parado por cerca de 20 s: a primeira janela é automática. SELECT inicia outra
janela (60 quadros de aquecimento + 300 medidos). Manter a mesma tela por
cerca de 18 s; se a forma, diálogo ou zoom mudar, a janela é cancelada.

Capturar, por SELECT, menu da gestão, mapa parado, mapa rolando em 100%, mapa
parado em 75%, mapa rolando em 75% e partida em andamento. Repetir três vezes,
preferindo sessões separadas por save para não ultrapassar 13 minutos por
execução. Durante rolagem, alternar o circle pad antes de atingir o limite do
mapa; o CSV registra quantos quadros realmente moveram a câmera. Anotar a
ordem das telas e os números de `profile-N.csv`.

Sair normalmente por START/Yes ou pelo rótulo Quit, para gravar também
`gpu-profile-N.csv`. Recolher da **raiz do SD**, `/pls-video/`:
`profile-*.csv`, `profile-*-top.png`, `profile-*-bottom.png`, `gpu-profile-*.csv`,
`session-*.txt`, `stdout.log` e `stderr.log`. Reabrir/reiniciar o FTP se a
listagem estiver em cache. Preservar cada execução numa pasta diferente de
`build/phase4-ctr/`; logs stdout/stderr são reabertos no próximo boot.

O autoteste GPU é permanente: roda automaticamente em cada boot, antes do
título. Aceite no stderr: `PLS_VIDEO_SELF_CHECK=PASS`. Para medir a diferença
do medidor de boot, fazer depois três pares de partidas do executável até o
título, com e sem o arquivo vazio `/pls-video/boot-trace-off.flag`; remover
o arquivo ao terminar. Nenhuma instrumentação de carga de assets fica ligada
durante a gestão ou partida.

Os CSVs permitem separar lógica, desenho CPU, espera GPU, cópias e memória.
Limites físicos: 50 ms/quadro; 150 ms em transições/coletas. Se uma tela
ultrapassar, a próxima ação será apresentar a decomposição e opções, sem
otimização de runtime/coletor por conta própria. Números atuais do emulador:
`phase4-video-gameplay-measurements.md`.
