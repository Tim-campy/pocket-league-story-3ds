# Vídeo da Fase 4 — teste privado no aparelho

Escopo: título e barra de rótulos. Não iniciar campanha, gestão ou partida
nesta entrega. O desempenho do Azahar não comprova o desempenho do console.

Validado no Azahar: título GPU, barra inferior, entrada e armazenamento
ROMFS/SD. O teste abaixo documenta o aceite realizado no aparelho físico.

**Reteste físico passou com `2542b15`:** título, controles básicos, oito
sondagens GPU, autoteste e 300 amostras, com capturas das duas telas. As três
execuções físicas estão registradas: 900 amostras, nenhum total acima de
50 ms; maior total 4,961773 ms, excluindo a pausa para manter 20 fps.
Resultados por execução em `docs/design/phase4-video.md`. O primeiro teste havia
falhado com tela preta no autoteste GPU. Usar a revisão indicada abaixo.
Se continuar preta após 30 segundos, não é necessário esperar cinco minutos:
conservar `sd:/pls-video/stderr.log` da raiz do cartão, fora da pasta `3ds`.
O rastreamento permanece para comparar as próximas execuções.

## Instalação

Depois da validação do artefato indicada em `docs/design/phase4-video.md`,
copiar a cópia aprovada `build/phase4-video/title-approved.3dsx` para
`/3ds/pls-video/ctr_video.3dsx` no SD. Abrir pelo Homebrew Launcher já
instalado. Os assets autenticados do APK do usuário estão no ROMFS desse
arquivo; não é necessário copiá-los separadamente. O arquivo é privado,
fica em `build/` e não pode ser publicado.

Revisão aprovada (o build de trabalho da segunda entrega tem uma falha conhecida
na gestão e não deve substituir esta cópia para jogar):
**48.742.900 bytes**, SHA-256
`ab63a1685518657ceb6eb77f4e2aa3d8c91d7fc269c1473cd8a897fc61404b25`.
Ela verifica limpeza, desenho sem textura e desenho com textura separadamente,
em alvos 64×64 e 8×8, antes do autoteste original. Esta revisão escreve a
saída de coordenadas inteira no shader, preservando os valores `xy` do desenho.
O teste anterior passou na limpeza 64×64, mas travou no desenho sólido.
Começar o teste com o console completamente desligado; ligar e abrir o Launcher.
No Homebrew Launcher, identificação própria “Dual Screen Port” e ícone
geométrico de duas telas, sem marca ou arte do jogo.

O programa cria `/pls-video/` no SD. Suas preferências ficam em
`/pls-video/preferences/`, separadas do benchmark nulo. Não substituir os
saves do usuário por saves de teste.

## O que observar

1. Aguardar o título: jogo na superior, barra na inferior, sem imagem
   invertida, cortes, cores trocadas ou letras ilegíveis. “Site” foi removido
   por decisão do usuário; sua antiga área fica vazia/desativada.
2. Deixar o título parado por pelo menos 20 segundos. O perfil descarta
   60 quadros de aquecimento e registra os 300 quadros seguintes. Se o
   aparelho estiver lento, aguardar mais até gerar os arquivos.
3. Usar o direcional para mudar a seleção sem iniciar o jogo. Abrir a
   confirmação de saída por START; testar seleção, A para confirmar uma
   opção e B para cancelar. Testar também o rótulo de saída pelo toque.
   START abre o diálogo do port na inferior; “Quit” da barra abre o diálogo
   original na superior, conservando os dois caminhos atuais. É possível
   abrir HiScores e voltar por B/Y, sem entrar na gestão.
   Não confirmar a opção Start do menu do título nesta entrega.
4. L/R e circle pad não devem provocar movimento indevido no título.
   X não deve abrir navegador. A funcionalidade “Site” não existe mais.
5. Repetir três vezes. Relatar modelo do console, tempo aproximado até o
   título, resposta dos botões/toque e qualquer falha visual ou travamento.

## Evidência

Enviar os `profile-N.csv`, `profile-N-top.png`, `profile-N-bottom.png` e
`stderr.log` de `/pls-video/`. O CSV e as capturas recebem um novo número a
cada execução; `stderr.log` e `stdout.log` são sobrescritos na inicialização,
portanto copiar os logs entre execuções. São arquivos privados com conteúdo
do jogo: não entram no Git. Se a listagem FTP não mostrar arquivos, reiniciar
o servidor FTP e reconectar o cliente antes de concluir que a gravação falhou:
isso revelou os arquivos do primeiro teste físico bem-sucedido.

As colunas de lógica CPU, desenho CPU e espera da GPU são separadas.
Upload/readback são subconjuntos instrumentados, não parcelas adicionais
para somar ao total. O tempo de quadro medido não inclui a espera deliberada
para manter 20 fps. Orçamento do New 3DS: 50 ms por quadro.

Se aparecer `PLS_VIDEO_ERROR`, conservar o log e interromper o teste.
O aceite do título no aparelho autoriza a decisão sobre o próximo bloco;
não presume aceite da gestão ou da partida.

## Conferência no PC

```powershell
python tools/dev.py run --capture build/captures/phase4-check:60
```

Setas selecionam; A confirma; S volta; M abre o diálogo de saída; mouse na
inferior aciona os rótulos. Conferir o mesmo título/barra de antes, com a
remoção de Site já aprovada. O PC continua usando o rasterizador CPU.
