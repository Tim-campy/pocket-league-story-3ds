# Rodada de execução e medição do coletor

Base: checkpoint local `3f4ddf9`. Documento de trabalho; medições ainda
pendentes não são resultados da nova base.

## Fluxo SDL

A tentativa privada 37 compilou em Release, mas o processo saiu com código 1
após o frame 1207. O log registra `PLS_OFFSCREEN_EXCEPTION=Overlapping GC ranges`.
Não houve lacuna de tradução. O código de saída zero do script de build não
significa que o processo do jogo terminou com sucesso: o recibo separa os dois.

Causa reproduzida na fixture `retired_dynamic_payload_address`: o mapa de
intervalos de payloads era reconstruído com workers parados, mas permanecia
ativo depois de retomá-los. Um buffer podia liberar seu endereço, e a alocação
seguinte de um objeto naquele endereço colidia com o intervalo obsoleto.
O teste falhou com a mesma exceção antes da correção. `Heap::resume` agora
descarta esses intervalos dinâmicos; os corpos dos objetos e intervalos
explicitamente mantidos permanecem. A coleta seguinte reconstrói os payloads
antes de varrer referências internas. Não muda a lógica do jogo.

A tentativa 38, com a correção, percorreu título, saves, gestão, partida,
resultado e retorno à gestão. Capturas locais: frame 960 (partida), 4200
(resultado 1–0), 4980 (receita), 5280 (gestão). Foram apresentados 5742 frames.
O processo foi encerrado pelo limite deliberado de 310 segundos; o recibo
registra `stopped_reason=timeout`, sem translation gap. Capturas, save e logs
permanecem em `build/pc-diagnostic-release/attempts/38/`, fora do Git.
Esse replay antecede a ampliação de contabilidade descrita abaixo; não é
prova antecipada de uma versão posterior do runtime.

A tentativa 39 repetiu o fluxo com a contabilidade ampliada e as correções
atuais do coletor. Apresentou 5.666 frames, sem exceção nem gap de tradução,
até o limite deliberado de 310 segundos. As capturas 3960/4200 mostram a
tela de bônus após a partida (placar 0–0); 5280 mostra o tutorial sobre a
gestão e 5640 a gestão com os botões Save/Menu. Foram inspecionadas
visualmente. A cobertura acumulada passou de 751 para 773 métodos do jogo;
1768/1958 seguem compilados e 190 permanecem todo. Não é uma temporada
completa nem comparação de comportamento com Android. O resultado da
partida difere do replay 38; as duas execuções não fixaram a semente do RNG.

Executável da tentativa 39, SHA-256:
`69666c07ccdc8481204e9543e11c5634c7801c7ea935dedcabf08426dd7f52ac`.

## Contabilidade de memória

O heap passa a separar corpos e buffers externos. `Descriptor.retained_ranges`
enumera também payloads nativos sem ponteiros (por exemplo RGBA de imagens),
sem tratá-los como arestas de referência. Nos pontos seguros, uma união de
intervalos evita duplicação de views, armazenamento inline e strings SSO.
Capacidades atuais, inclusive crescimento de um objeto já existente, entram
no limiar. `external_growth_bytes` mede crescimento líquido positivo entre
observações, não todas as chamadas malloc nem churn intermediário.

O padrão permanece 1 MiB; `PLS_GC_THRESHOLD_BYTES_DEFAULT` permite seleção no
build e `PLS_GC_THRESHOLD_BYTES` no lançamento. Texto inválido, zero, negativo
ou overflow são rejeitados. O custo de atualizar capacidades será medido no
frame e não é presumido gratuito. Estes números descrevem corpos e ranges
declarados; fragmentação do alocador e memória opaca de bibliotecas exigem
contabilidade separada, não são inferidas como payload gerenciado.

A duração da coleta inclui a captura inicial de pilha/registradores. O máximo
por janela usa um acumulador próprio, inclusive quando há mais de uma coleta
no mesmo frame (antes esse caso era reportado como zero).

O motor passou 58 assertions após essa ampliação. A alteração do código
também expôs retenção conservadora nas fixtures de descarte: com zero raízes
explícitas, o snapshot ainda continha um endereço antigo. As verificações
que exigem descarte exato foram isoladas de pilhas/registradores de chamadas
anteriores; continuam exigindo zero objetos e testando ciclos, workers e
raízes somente em registradores. Nenhuma regra de rastreamento foi relaxada
para fazer esses testes passar.

## Pendências de medição

A primeira contabilidade por união de intervalos foi medida no menu, sem
contadores de métodos/alocações: 300 frames, média de CPU agendada
39,27699633333334 ms, p95 44,0075 ms, máximo 204,1325 ms. ETW perdeu zero
eventos; exclusão de DPC/ISR permanece UNKNOWN. Das 11.174 amostras,
4.534 foram classificadas em tracing-GC e 2.304 em memory-accounting;
2.099 ficaram em native não atribuído. O maior ponto individual foi a
busca no mapa de blocos feita por `Heap::Impl::resume`.

Essa medição expôs passagens redundantes: `inspect` percorria todos os
objetos com callback vazio, e `resume` percorria faixas mesmo quando só
existiam as faixas dos corpos. A correção preserva a união completa dos
buffers e evita essas passagens. Ganho posterior ainda exige nova medição.
Os buffers conhecidos do cache de fontes e mixer de áudio passaram a ser
expostos à contabilidade; estruturas opacas das bibliotecas seguem separadas.

## Janelas funcionais da revisão atual

Executável nulo `411bca5e13a2f23b9e3d028091a307e932828411f0105fed72c6ee3db11c3c94`,
sem contadores por método, perfil ou probe de `new`. As duas janelas
terminaram com código zero e 300 frames; forms 4 (menu) e 2 (partida).
Havia compilação concorrente, portanto durações abaixo são observações do
coletor, não comparação controlada de CPU com a baseline.

| Medida | Menu 661–960 | Partida 1201–1500 |
|---|---:|---:|
| Alocações gerenciadas na janela | 28800 | 15681 |
| Bytes de corpos e crescimento externo contabilizados na janela | 4021200 | 2474504 |
| Crescimento externo positivo observado | 651600 | 651424 |
| Coletas | 4 | 3 |
| Pausa acumulada (ns) | 396838300 | 513261000 |
| Maior coleta (ns) | 113398300 | 330143600 |
| Contabilidade acumulada na janela (ns) | 2931363400 | 3370595300 |
| Corpos retidos ao fim (bytes) | 3487840 | 3052592 |
| Buffers externos ao fim (bytes) | 10226748 | 10259414 |
| Total conhecido ao fim (bytes) | 13714588 | 13312006 |
| Pico conhecido desde o início (bytes) | 29941893 | 30024872 |

O contador de alocações gerenciadas não mede todas as solicitações C++
`new`; a execução separada com esse contador está no fim desta nota.
O pico inclui aquecimento, não é o
pico de texturas entre telas. Recibos gerados por
`tools/report_tracing_measurements.py`, com hashes dos logs privados.

O `.text` virtual do executável nulo atual mede 6.928.097 bytes, contra
13.296.977 do histórico preservado, SHA-256
`4a54214603dde6461315adc51279c3d5cf54f692514bb231d9bf8e23dad2a02c`.
Os arquivos PE têm 9.793.024 e 15.819.264 bytes, respectivamente. São duas
revisões completas, não uma ablação que isole apenas a conversão do GC.
`tools/profiling/measure_pe_sections.py` mede as regiões sem carregar nem
alterar os executáveis; isso não mede páginas residentes de código.

Comparação pontual de texturas: no frame 900, a tentativa histórica 35 e a
tentativa atual 39 registram exatamente 9.147.128 bytes de capacidade
conhecida de texturas. Áudio conhecido: 98.304 bytes; fontes: 203.365 bytes,
também iguais nesse ponto. Isso não mede o pico entre transições. A parcela
residente variou durante a compilação concorrente e não é usada como prova
de redução da memória exigida pelo port.

A tentativa de coletar a partida no mesmo diretório falhou: dois coletores
concorreram e o ETL não continha os eventos exigidos pelo analisador. O
analisador recusou a medição (`Missing trace anchor or target thread
ownership`); nenhum tempo de partida foi inferido desse arquivo. O runner
agora mantém um arquivo aberto exclusivamente por processo para impedir
dois coletores no mesmo diretório. Uma tentativa anterior sem elevação
também foi recusada pelo WPR e não produz medição válida.

A tentativa posterior de elevar o WPR foi cancelada na janela do Windows;
o replay aguardou um coletor que não iniciou e não produziu medição válida.
Não houve nova tentativa de elevação depois desse cancelamento. CPU atual
por ETW, incluindo a comparação de partida com 9,035818666666666 ms da
baseline, permanece UNKNOWN.

Na janela válida do menu intermediário, o contador gerenciado aumentou de
413.895 para 442.695 alocações: 28.800, ou 96 por frame. Isso não conta todas
as solicitações C++ `new`. Houve quatro coletas e 526.549.600 ns acumulados
de pausa; a atualização de contabilidade consumiu 9.641.669.200 ns. O pico
conhecido desde o início foi 29.833.632 bytes; o fim da janela reteve
13.516.451 bytes, sendo 3.488.304 de corpos e 10.028.147 externos. Não são
RSS nem pico de texturas entre transições.

## Partição completa das amostras intermediárias

11.174 amostras dentro dos 300 frames, categorias exclusivas. A fração
exata de cada linha é contagem/11.174; as porcentagens abaixo são arredondadas.
652 IPs tinham informação de inlining. O código embutido foi atribuído pela
cadeia de símbolos; helpers genéricos sem chamador comprovado ficam não
atribuídos. Esta tabela não representa a versão posterior às correções.

| Categoria | Amostras | % |
|---|---:|---:|
| Runtime: tracing GC | 4534 | 40,576338 |
| Runtime: contabilidade de memória | 2304 | 20,619295 |
| Nativo não atribuído | 2099 | 18,784679 |
| Sistema | 665 | 5,951316 |
| Runtime: alocação/destruição | 323 | 2,890639 |
| API Kairo: outros | 312 | 2,792196 |
| Runtime: arrays/limites | 209 | 1,870413 |
| Runtime: inicialização de tipos | 168 | 1,503490 |
| Lógica do jogo | 125 | 1,118668 |
| Runtime: conversões/genéricos/outros | 125 | 1,118668 |
| Sistema: interrupções | 94 | 0,841239 |
| Runtime: strings | 83 | 0,742796 |
| Kairo portável traduzida | 43 | 0,384822 |
| Sistema: segurança do compilador | 40 | 0,357974 |
| API Kairo: desenho/batches | 25 | 0,223734 |
| API Kairo: texto/métricas | 16 | 0,143190 |
| Runtime: helpers de referência | 3 | 0,026848 |
| API Kairo: som | 2 | 0,017899 |
| Runtime: exceções | 2 | 0,017899 |
| Runtime: refcount nativo residual | 1 | 0,008949 |
| API Kairo: entrada | 1 | 0,008949 |
| **Total** | **11174** | **100** |

O único sample classificado em refcount pertence a `Collator::GetContraction`,
que copia um `shared_ptr<vector<shared_ptr<ContractionData>>>` nativo. Não é
uma cópia de referência gerenciada do jogo. A análise detalhada e seus hashes estão no recibo gerado
`config/phase2-tracing-measurements.json`.

## Experimentos independentes concluídos

A [ablação](tracing-gc-ablation.md) executou as dez variantes e o oracle
Mono. O piso manual e os resultados negativos estão preservados; nenhuma
remoção de nulo, limites ou mudança de ponto flutuante foi adotada.

As [fixtures ARM](tracing-gc-arm-stacks.md) passaram 60 assertions em cada
perfil do Azahar. A [triagem de ponto flutuante](float-discriminants.md)
concluiu 36 observações discriminantes no Mono x86. O APK local de teste
Android foi montado, mas não executado em aparelho. Boot completo ARM,
medição posterior de CPU e pico de texturas entre telas continuam pendentes.


## Alocações C++ na base atual

Execução separada, com contador de alocação e sem contadores de métodos;
não serve como medição de CPU. Cada janela possui 300 frames.

| Cenário | Solicitações `new` | Bytes solicitados | Solicitações/frame | Bytes/frame |
|---|---:|---:|---:|---:|
| Menu | 194420 | 27741692 | 648,0666666666667 | 92472,30666666667 |
| Partida | 132449 | 19014481 | 441,49666666666667 | 63381,60333333333 |

Na partida, `Heap::Impl::range` responde por 79448 solicitações/4449088
bytes e `Heap::adopt` por 16055/1926600: nós dos índices do coletor.
`Heap::collect` aloca três buffers que somam 7266437 bytes, por
`dead.reserve(s.blocks.size())`. São custos introduzidos pelo GC, não
alocações exigidas pelo C# original. As análises privadas estão em
`build/tracing-measurement-round/{menu,match}-allocations.json`; os recibos
públicos são gerados por `tools/report_tracing_measurements.py`.
As 9597 expressões de alocação observadas na partida são um proxy no nível
do fonte, não uma contagem de alocações do heap CLR; a razão de 13,801083671980827
não deve ser apresentada como medição direta do Mono.
