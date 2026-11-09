# Primeiro título no PC após 5b02ef6

## Evidência e limites

Em 9/11/2026, a tentativa privada Release 12 apresentou 303 frames. A inspeção
do framebuffer capturado no frame 300 identificou o título. Isso é observação
visual; não comprova a execução de todos os corpos emitidos, correspondência
pixel a pixel, menu navegável ou partida completa. Nenhum método é promovido
para runs/verified por inferência a partir desse número de frames.

Executável da tentativa: SHA-256
`9e8bed22742e3e7aaeafa099ebde320b7e3447b61033a5abe04a8c2950a6d143`.
Snapshot privado: build/game-diagnostic-bootstrap-20261109-j. Continha 1.697
corpos candidatos e 52 guardas fatais de tradução/bootstrap. Uma guarda não
devolve um valor fictício: registra o ID e encerra a execução. Este experimento
Release anterior à compilação canônica não promove a contagem normal compilada.

O próximo bloqueio observado foi
`M:form.TitleForm.SetTouchValue(System.Int32,System.Int32)`.
Sua cadeia até MyFormBase.SetTouchValue dependia do setter de orientação de
IApplication. O setter foi acrescentado com a conversão inteira do original;
o host PC aceita a orientação física atual e Auto, recusando rotações ainda
não implementadas. Não há decisão implícita de telas ou teclado para o 3DS.

## Medidas Release da tentativa 12

| Medida | Bytes |
|---|---:|
| Working set antes de Main | 49.737.728 |
| Working set no primeiro frame | 91.729.920 |
| Working set após 60 frames | 165.724.160 |
| Pico de working set após 60 frames | 166.907.904 |
| Commit privado após 60 frames | 144.998.400 |
| Páginas executáveis MEM_IMAGE residentes, EXE e DLLs | 38.363.136 |
| Framebuffer RGBA em uso | 268.800 |
| Pico do payload da textura temporária de apresentação | 268.800 |
| Rings de áudio | 65.536 |
| Buffers de trabalho de áudio | 32.768 |
| Resampler disponível no instante / pico | 8.192 / 16.384 |
| Payload do callback de áudio | 8.192 |

No checkpoint de 300 frames, a fatia depois dos primeiros 60 contém 240
amostras: tempo total médio 51,0880975 ms, mediana 51,08635 ms, p95
51,8483 ms, máximo 52,6352 ms. Desenho do jogo: média 11,6740158333 ms,
mediana 11,52085 ms, p95 15,7755 ms, máximo 25,2242 ms. O total inclui o
limitador de frames; não é uma medida exclusiva de CPU de desenho.

Esses números são do processo Windows, não uma previsão de consumo no 3DS.
Payload, commit privado e RSS não são somados. Fontes, texturas de todas as
imagens e heap gerenciado não estavam separados nessa tentativa. O sampler
posterior mede capacidades e bytes residentes de intervalos conhecidos,
explicitando cobertura parcial, sem atribuir overhead desconhecido.

O resumo final sofreu intercalação com o marcador de falha: sete registros
JSON eram válidos e um inválido. As estatísticas acima usam o checkpoint
válido de 300 frames. A saída completa dos resumos e das guardas passou a
compartilhar o mutex do logger; o registro inválido anterior é preservado.

## Referência Android

O S22 Ultra SM-S908E recebeu o APK original com autorização expressa, substituindo
a baseline de teste anterior. O APK instalado foi autenticado pelo hash esperado
`d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8`.
O usuário concluiu as permissões e confirmou que o jogo estava aberto.

A atividade original abriu o título. Um toque em START abriu a seleção de saves;
nenhuma partida nova foi criada nessa comparação. As capturas 1080×2316 ficam
somente em build/android-original-comparison/, ignorado, e não são fonte de assets.

| Evidência local | SHA-256 |
|---|---|
| original-opened.png | 6cfcd377f2e1cb74f1a8b5db066a02c6b541a2d64bceefb1cca18863e6ed778e |
| original-start-menu.png | 5fef40825e4486575b8992f46b0e4b6c6c7113e47dda9cd48851785010b4cb7f |
| PC frame-300.bmp, tentativa 12 | 6da472a2c17f69da4d43b24c10860193cfdaf478d5f6d21e384a8894f4e1169f |

Inspeção visual inicial: mesmos recursos de título e mesma ordem dos elementos
principais. A janela PC de 240×280 tem proporção diferente da área útil observada
no telefone; rodapé/versão aparecem cortados no PC. É uma discrepância registrada,
não uma comparação pixel a pixel aprovada. O layout observado no telefone é
vertical, divergindo da descrição histórica landscape no AGENTS.md; isso não
autoriza uma distribuição de telas no 3DS. Comparação visual do menu PC ainda
pendente nesta evidência inicial.

As sete divergências ref/out e JMath.Sin(-0) continuam UNKNOWN no Android:
abrir o aplicativo original não executou esses probes semânticos.

## Reprodução

Após gerar o Game, o experimento privado usa
`python -B translator/diagnostic_snapshot.py --allow-uncompiled --output build/<novo-snapshot>`
e `python -B tools/build_pc.py --apk <APK-local> --diagnostic-generated build/<novo-snapshot> --configuration Release --run --metrics`.
Para exercer a entrada real KEY_SELECT após 120 frames, acrescente
`--diagnostic-select-frame 120`. Somente o host privado injeta essa entrada;
o tradutor não substitui o fluxo de TitleForm por um menu próprio.

Os caminhos/hashes de cada tentativa, fontes congeladas, logs e capturas são
registrados pelo builder em config/phase2-diagnostic-attempts.json. As capturas
e os arquivos de save do experimento permanecem em build/, isolados do perfil
normal. Nenhum APK adicional foi montado e nenhum asset foi publicado.

## Tentativa 13: título e seleção de saves

Build Release privado k: 1.707 corpos candidatos, 38 slots virtuais sem corpo e
quatro guardas de bootstrap. Executável SHA-256
`66d4678001855cbf22ddf1cf02ee05050c91bc6db88f570bef8c0545d46b8b1f`.
O host acionou Canvas.KEY_SELECT após 120 frames; TitleForm.Update processou
a entrada e abriu a seleção de saves. A captura do frame 300 mostra esse menu:
SHA-256 `ee2b36669eb8ee01f8d74c65e01ccf371342a6a0712b53284677cb781152f43a`.
Os 20,062 segundos terminaram pelo timeout do supervisor, sem marcador de lacuna.
Não é crash espontâneo nem prova de partida. Os seis registros de métricas
foram válidos; zero registros inválidos nesta tentativa.

Comparação por inspeção com original-start-menu.png: mesma ordem de título do
diálogo, opção automática, opção manual e instrução inferior; mesmo estado de
save vazio. Fontes, escala e área útil não são pixel a pixel idênticas. O rodapé
continua cortado no viewport PC atual. Não foram publicados os textos dos assets
nem as capturas; o menu é desenhado pelo código traduzido e assets locais.

Após 60 frames (ainda no título), RSS 158.285.824 bytes, commit privado
149.008.384 bytes, páginas executáveis EXE/DLL residentes 27.869.184 bytes.
O primeiro frame teve RSS 80.064.512 bytes. Os seguintes valores são a união
de intervalos conhecidos dentro de cada categoria, consultada por páginas
residentes; não são páginas inteiras atribuídas a pequenos objetos:

| Categoria, cobertura parcial | Capacidade conhecida | Payload residente conhecido |
|---|---:|---:|
| Texturas RGBA, incluindo framebuffer | 7.693.944 | 7.693.944 |
| Buffers próprios de áudio | 98.304 | 98.304 |
| TTF e caches RGBA de fontes | 191.669 | 191.669 |
| Corpos rastreados, arrays e strings gerenciadas | 3.550.780 | 3.550.780 |

Faltam overhead de allocator/control blocks, containers ainda não instrumentados,
alocações internas de FreeType/Vorbis/SDL, recursos GPU e pilhas. RSS não é
decomposto por subtração. O contador de áudio mantém separadamente resampler e
callback, cujos endereços não são expostos. O sampler de residência do processo
levou 3.337.900 ns após 60 frames; esse campo não inclui a enumeração prévia dos
buffers. Amostras de processo/categorias são sequenciais, não atômicas.

No checkpoint 300, os 240 frames após os primeiros 60 (título e transição/menu)
tiveram total médio 51,1037858333 ms, mediana 51,0827 ms, p95 51,8657 ms,
máximo 52,1133 ms. Desenho: média 11,4408320833 ms, p95 16,4398 ms.
O período inclui pacing; não é uma medida de partida completa ou do 3DS.

## Tentativa 14: avançar do save vazio

O mesmo snapshot k foi recompilado apenas para a sequência de entradas do host:
KEY_SELECT nos frames 120 e 180. A primeira abre o menu; a segunda escolhe o slot
vazio. Em 11,578 segundos a guarda identificou `M:form.SubForm.Update`.
O diagnóstico estático segue até KairoPlugin.StartFepPanel, ainda sem binding
nessa fotografia. Não foi removida a opção de novo jogo nem o painel de nomes.
O supervisor encerrou nesse marcador, sem promover o corpo parcial a runs.
Os cinco registros de métricas foram válidos, sem intercalação de JSON.

O executável da tentativa 14 tem SHA-256
`850265f68d7b8c322f5d0bb267b0c0191fafdee9a8269f81d4701446ec15a9ef`,
10.591.744 bytes de arquivo e seção PE .text de 8.655.169 bytes virtuais
(8.655.360 bytes em arquivo). É uma medida estática do programa Windows,
separada das páginas executáveis EXE + DLL do sampler; não é residência
exclusiva de código, tamanho ARM nem uma previsão de RAM do Nintendo 3DS.
