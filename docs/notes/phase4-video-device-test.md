# Vídeo da Fase 4 — teste privado no aparelho

Escopo: título e barra de rótulos. Não iniciar campanha, gestão ou partida
nesta entrega. O desempenho do Azahar não comprova o desempenho do console.

Validado no Azahar: título GPU, barra inferior, entrada e armazenamento
ROMFS/SD. O teste abaixo é o aceite pendente no aparelho físico.

**Primeiro teste físico falhou:** tela preta no autoteste GPU. Para investigar,
usar a revisão com rastreamento de boot indicada no relatório mais recente.
Se continuar preta após 30 segundos, não é necessário esperar cinco minutos:
conservar `sd:/pls-video/stderr.log` da raiz do cartão, fora da pasta `3ds`.
O rastreamento localiza a operação pendente; ainda não é uma correção confirmada.

## Instalação

Depois da validação do artefato indicada em `docs/design/phase4-video.md`,
copiar `build/phase4-ctr/ctr_video.3dsx` para
`/3ds/pls-video/ctr_video.3dsx` no SD. Abrir pelo Homebrew Launcher já
instalado. Os assets autenticados do APK do usuário estão no ROMFS desse
arquivo; não é necessário copiá-los separadamente. O arquivo é privado,
fica em `build/` e não pode ser publicado.

Revisão atual de diagnóstico para substituir o anterior no mesmo caminho:
**48.742.908 bytes**, SHA-256
`dbf681961dd22d1491bd7646dd3ef03b5c742c0d8a2b2b4a51f545f208441724`.
Ela verifica limpeza, desenho sem textura e desenho com textura separadamente,
em alvos 64×64 e 8×8, antes do autoteste original. Não muda o desenho do jogo.
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
do jogo: não entram no Git.

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
