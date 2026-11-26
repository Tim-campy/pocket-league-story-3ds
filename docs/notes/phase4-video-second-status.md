# Segunda entrega de vídeo — diagnóstico de 2026-11-26

## Estado

A primeira entrega foi aprovada no New 3DS XL e publicada em `6e5e7d3`, com
CI Content policy verde. A segunda está local. O bloqueio de memória da gestão
foi superado pelos dois passos autorizados; gestão e partida abriram no Azahar.
A validação completa e o desempenho físico ainda estão pendentes.

| Ciclo anterior ao push da primeira entrega | Resultado | Tempo |
|---|---|---:|
| check --all | PASS | 129,0 s |
| full | 105/105 PASS | 1.467,6 s |
| routes completo | PASS; 87 processadas, 86 concluídas; saída intencional em dialogs-exit; 0 alertas | 4.499,1 s |
| arm (backend nulo) | PASS | 2.125,7 s |
| check_repository --staged | 1.511 entradas, 0 violações | 137,9 s |
| ci | completed success | 1,4 s |

Os 51 recibos gerados foram preservados em `build/phase4-video/` e restaurados
ao conteúdo versionado antes do push. Nenhum asset ou executável foi publicado.

Validação local do novo perfil: build PC PASS em 13,8 s, check PASS em 2,2 s,
smoke 10/10 e zero alertas em 204,8 s. Comparação anterior/posterior do título
no PC: 160/160 quadros idênticos na superior e 160/160 na inferior, zero pixels
diferentes. Evidência: `build/phase4-video/gameplay-pc-comparison.json`.
Build CTR efetivo do perfil: PASS em 58,8 s; com log da falha de alocação:
PASS em 46,3 s. Uma tentativa anterior de 45,4 s não recompilou o host porque
a cópia preservou timestamps antigos; foi descartada como evidência e refeita.
Commits locais: `a8f342c` (somente a condição de compilação autorizada dos
medidores; build/check e smoke 10/10 em 189,7 s), `d7971ac` (contadores GPU),
`74297cf` (perfil e medidor de boot), `d7edd29` (log de alocação malsucedida;
build 3,9 s, check 10,1 s). A checagem de conteúdo do perfil passou em
88,5 s: 1.512 entradas, zero violações. Nenhum desses commits foi publicado.

## Bloqueio e opções ainda não aplicadas

Carregar o save 50 reproduziu duas vezes `GPU texture allocation failed:
1024x512`. `GameForm::GameScreenLayout` pede o tamanho da vista dividido por
0,60, mais um pixel; `Offscreen::resize` arredonda para potências de dois.
O backend atual reserva cor RGBA8 e profundidade de 24 bits para cada alvo.

| Memória no ponto da falha | Bytes |
|---|---:|
| VRAM total | 6.291.456 |
| VRAM ocupada antes do novo alvo | 3.443.712 |
| VRAM livre | 2.847.744 |
| Memória linear livre | 16.515.328 |
| Nova cor 1024×512×4 | 2.097.152 |
| Nova profundidade 1024×512×3 | 1.572.864 |
| Novo alvo completo | 3.670.016 |
| Déficit mínimo com a política atual | 822.272 |

A falha já ocorre na cor, embora o total livre seja maior que ela: bancos e
continuidade do espaço são a hipótese, não uma medição dos maiores blocos.
Mesmo resolvendo essa distribuição, cor mais profundidade excedem o total.
O inventário não mostrou alvo VRAM aposentado aguardando descarte; antecipar
essa fila não resolve. Não é falta de memória linear.

Opções apresentadas ao usuário:

1. Reutilizar alvos de trabalho na VRAM e conservar resultados em texturas
   lineares, com cópias pela GPU. É a opção recomendada para limitar o conjunto
   residente, mas exige verificar preservação de pixels, atualizações parciais,
   leitura de alvos e custo de sincronização. Risco maior de implementação.
2. Compartilhar/reduzir profundidade onde a semântica permitir e reorganizar
   bancos. Menor mudança, mas não garante espaço para os próximos alvos.

Decisão posterior do usuário: inventariar primeiro; depois compartilhar a
profundidade se usada (ou remover se não usada). Só então, se qualquer tela
ficar com menos de 1 MB de VRAM livre, usar alvos de trabalho reutilizados e
cópias GPU para texturas lineares. Ambos os caminhos foram autorizados apenas
no backend CTR, em commits separados, preservando formato, resolução e pixels.
O inventário inicial está em `phase4-video-target-inventory.md`.

Não se pode simplesmente renderizar diretamente numa textura linear:
[citro3d 1.7.1, renderqueue.c](https://github.com/devkitPro/citro3d/blob/v1.7.1/source/renderqueue.c)
exige VRAM em `C3D_RenderTargetCreateFromTex`. A seção acima preserva o diagnóstico
anterior à autorização. O resultado dos passos implementados está no inventário;
nenhum caminho CPU foi usado para contornar a falha, e o jogo não foi alterado.

Evidência privada: `build/phase4-video/gameplay-allocation-repro/` e
`gameplay-management/`. O `result.json` do auxiliar registra apenas o título;
o erro posterior está no stderr da execução. Ele não significa gestão aprovada.

## Medidor de boot ligado e desligado

Seis execuções no Azahar 2126.2, mesmo executável, modelo New 3DS, relógio a
100%, diretórios privados novos. O medidor agrega recursos somente até o
primeiro título; foi confirmado desligado nas 1.800 amostras posteriores.
O arquivo vazio `/pls-video/boot-trace-off.flag` o desliga desde o início.

| Execução | Ligado, ms | Desligado, ms |
|---|---:|---:|
| 1 | 18.320,925 | 18.237,392 |
| 2 | 18.371,042 | 18.437,874 |
| 3 | 18.421,315 | 17.986,656 |
| Média | 18.371,094 | 18.220,641 |

Diferença observada: **+150,453 ms (0,826%)**. A amplitude desligado é
451,218 ms e a diferença pareada muda de sinal: não permite atribuir toda a
diferença ao medidor. Custo no aparelho: **UNKNOWN**. A causa da variação física
anterior de 16,808 a 28,412 s também é **UNKNOWN**; estas execuções de emulador
não a explicam. Evidência: `build/phase4-video/boot-meter-comparison.json`.

Decomposição ilustrativa da primeira execução ligada, em ms:

| Etapa | Tempo |
|---|---:|
| Arquivos/logs iniciais | 145,438 |
| Runtime/ROMFS/globalização | 76,674 |
| Catálogo de assets | 1.101,211 |
| Serviços e armazenamento | 443,303 |
| Inicialização GPU | 8,314 |
| Diagnósticos e autoteste GPU | 24,753 |
| Inicialização do aplicativo e host | 3.025,655 |
| Carregamento até primeiro título | 13.495,556 |

Dentro do carregamento: lógica wall 11.240,209 ms; desenho wall 731,810 ms;
upload de texturas 249,958 ms; espera GPU 1,870 ms. São subconjuntos e **não
devem ser somados novamente** à tabela. Fontes: três inicializações,
118,475 ms no total, dos quais 117,522 ms na leitura de arquivos. O relógio
começa em `main`, excluindo o carregador Homebrew e inicializadores anteriores.

## Perfil por quadro e memória

SELECT inicia 60 quadros de aquecimento e 300 amostras na tela atual. Troca de
formulário, tipo de janela, zoom ou modal cancela a janela; rolagem é permitida.
CSV inclui lógica, desenho CPU, espera GPU, total, uploads, leituras, comandos,
trocas de textura, câmera, analógico, coletas e transições. A escrita do CSV e
das capturas fica fora do intervalo medido, assim como a espera para 20 fps.
`session-N.txt` registra máximos e eventos de coleta. Sem referências
gerenciadas retidas pelo perfil; amostras em buffers nativos de tamanho fixo.

| Tela / plataforma | Amostras | Lógica média | Desenho CPU médio | Espera GPU média | Total médio | Maior total | >50 ms |
|---|---:|---:|---:|---:|---:|---:|---:|
| Título / Azahar, primeira ligada | 300 | 0,134 ms | 3,216 ms | 0,005 ms | 4,300 ms | 5,565 ms | 0 |
| Título / Azahar, seis execuções | 1.800 | — | — | — | — | — | 0 |
| Menu, mapa parado/rolando nos dois zooms, partida / New 3DS | 0 | UNKNOWN | UNKNOWN | UNKNOWN | UNKNOWN | UNKNOWN | UNKNOWN |

Transições/GC dessas telas contra 150 ms: **UNKNOWN**. Desempenho do 3DS
original: **UNKNOWN**. Nenhum número do Azahar é desempenho do aparelho.
No título das seis execuções: 39–57 comandos e 35–53 trocas de textura por
quadro. Troca conta mudança de identidade, primeira associação e desassociação;
não equivale ao número de chamadas redundantes a `C3D_TexBind`.

No primeiro título ligado: texturas lineares 5.402.880 bytes, VRAM
3.443.712 bytes, linear livre 17.101.568 bytes, VRAM livre 2.847.744 bytes.
Glifos rasterizados a partir das fontes do APK: cache CPU RGBA por face/tamanho,
limite de 1 MiB e 4.096 entradas; cache GPU limitado a 1 MiB/4.096 entradas.
Na amostra: 21 entradas GPU, 8.448 bytes; buffers CPU de fontes e glifos
201.528 bytes (exclui estruturas internas do FreeType e dos contêineres).
Não há fontes ou glifos incorporados ao código ou ao Git.

## Fidelidade e próximos testes

Gestão nos dois zooms, menu, diálogo, partida e resultado: comparação PC/Azahar
**UNKNOWN**, bloqueada antes do mapa. Não há confirmação de japonês e inglês
nessas telas. O título aprovado permanece como evidência apenas dessa tela;
mistura/alfa, clip, texto, escala e offscreen no restante ainda precisam de
comparação. Não confundir o autoteste de primitivas com fidelidade do jogo inteiro.

Fixtures privadas já preparadas em
`build/phase4-video/second-delivery-fixtures/management/preferences` (save 50) e
`before-match/preferences` (save 31). Quando houver build jogável, fazer backup
de `/pls-video/preferences` no SD e copiar o conteúdo de **uma** fixture para
essa pasta. Nunca misturar conjuntos nem sobrescrever o único backup.

Por enquanto, conservar o título aprovado em
`build/phase4-video/title-approved.3dsx`, instalado como
`/3ds/pls-video/ctr_video.3dsx`. O autoteste é automático em cada inicialização;
aceite: `PLS_VIDEO_SELF_CHECK=PASS` em `/pls-video/stderr.log`. Sair pelo Quit
e reiniciar a conexão FTP antes de recolher logs, para evitar listagem em cache.
Não pedir ao usuário uma partida completa com o build atualmente bloqueado.

Após resolver o bloqueio: três inicializações físicas, medir cada cena com
SELECT, jogar uma partida inteira, salvar, sair, reabrir e carregar. Para
rolagem, iniciar SELECT já segurando o circle pad, manter movimento e evitar
as bordas; repetir após mudar o zoom. A coleta física e comparação ligada/
desligada do medidor permanecem pendentes.

### Teste físico independente: somente o custo do medidor de boot

Há uma cópia privada identificada em `build/phase4-video/boot-profile.3dsx`,
48.760.108 bytes, SHA-256
`e3261b5a29fb55bd30352409063eaa11e7bbcaea7bb548adcba80ba4a48b2aa4`.
É o diagnóstico testado no Azahar, **não validado ainda no aparelho**, e tem
a falha de gestão descrita acima. Copiar para
`/3ds/pls-video-profile/boot-profile.3dsx`, conservando o executável aprovado.

Para medir: iniciar com o console completamente desligado, aguardar o título
e mais 25 segundos, sair pelo Quit e recolher `/pls-video/stderr.log`,
`profile-N.csv` e `session-N.txt` antes da próxima execução. O log é reescrito
no boot seguinte. Fazer três pares, alternando sem o arquivo
`/pls-video/boot-trace-off.flag` (medidor ligado) e com esse arquivo vazio
(desligado). Não carregar save nem iniciar campanha nessa revisão. Conservar
as mesmas condições entre execuções e relatar qualquer falha do autoteste.
