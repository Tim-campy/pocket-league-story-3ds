> Decisao do usuario: preservar o comportamento original e investigar o custo da carga. A proposta de incrementar antes do retorno foi rejeitada; nao aplicar. A rodada continua.

# ResourceManager.LoadStart: retorno antes do incremento

Estado: diagnostico confirmado no perfil New 3DS do Azahar; proposta abaixo
NAO aplicada ao tradutor, ao jogo ou a API. Nao e uma medicao em hardware.

O C# reconstruido, `reference/src/KairoLibrary/kairo/unity/ui/ResourceManager.cs`,
metodo `LoadStart(JarInflater,int)`, inicializa `loadTask[k][1]` com zero.
O incremento fica na clausula final do `for`. Quando a carga ultrapassa
`YieldTime` (150 ms), o callback retorna antes dessa clausula. A proxima
invocacao retoma o mesmo indice. Isso tambem repete o ultimo item de uma
fatia de carga quando a fatia, mas nao um item individual, excede o limite.

Uma primeira sonda com logs por metodo revelou milhares de cargas. Como os
logs poderiam perturbar o tempo, ela foi substituida por uma sonda minima:
recebe os dois operandos ja avaliados da comparacao e devolve exatamente
`elapsed >= budget`. Registra somente os primeiros 16 retornos e depois um
a cada 1.000. Nao muda o relogio, o limite, os indices ou o retorno.
Essa segunda execucao tambem repetiu `group=0,item=0`; entre as observacoes
7 e 16 o intervalo acumulado do callback ate concluir o primeiro item foi de 2.291 a 2.710 ms, sempre contra 150 ms. O primeiro frame nao
terminou. Esta evidencia refuta uma espera permanente de mutex como causa
desse trecho especifico; nao certifica todas as primitivas/threads do port.

Proposta apresentada e rejeitada pelo usuario, exclusivamente na camada Kairo (nao aplicar):

```diff
 if (num19 > 0 && JSystem.CurrentTimeMillis() - num17 >= YieldTime)
 {
+    loadTask[k][1]++;
+    loadCnt_++;
     return;
 }
```

O indice local `l` nao precisa ser incrementado ao sair do callback. O caminho
que nao retorna continua usando os incrementos originais. A proposta evita
recarregar o item concluido, mas muda um comportamento do original e por isso
nao esta autorizada pela regra de fidelidade so por melhorar desempenho.
Alternativa sem alterar esse controle: investigar/reduzir o custo da carga
na API ate cada item terminar abaixo do limite; nao ha ainda medicao que
prove ser suficiente no ARM11.

`tests/kairo/resource_yield_model.py` demonstra com duracoes sinteticas o
retorno sem progresso, a repeticao no limite, a proposta e o caminho rapido.
E uma fixture do controle, nao um teste de desempenho nem a execucao do jogo.

## Controle de velocidade do emulador (continuidade)

O intervalo de 2.291 a 2.710 ms acima foi observado com `frame_limit=0`
(velocidade ilimitada). Nao representa custo de hardware ARM11. Com o mesmo
3DSX (SHA-256 `00969139f91149c1e1033c22171bc5bc71dc397b31bea1e97823761496fd994a`),
mesmo perfil New, CPU 100%, save inicial restaurado e somente `frame_limit`
alterado para 100, o primeiro `host_update` terminou sem mudar LoadStart.

A sonda de fases mediu a primeira imagem repetida: fonte 1.657 bytes, RGBA
37.088 bytes; copia 265.464 ns, hash do PNG 388.487 ns, busca 10.004 ns,
`Catalog::read` 110.693.292 ns e criacao 10.257 ns. Na execucao ilimitada,
a etapa de leitura dessa imagem ocupava 2,15 a 2,56 segundos no relogio
emulado. Sao tempos de diagnostico com sondas, nao benchmark de frame.

Com limite 100%, o carregador progrediu: retornou no item 1 com 202 ms e no
item 2 com 201 ms, preservando a repeticao do ultimo item da fatia. O fluxo
concluiu update, RenderAll e soundPump e chegou a host_draw. Nao concluiu o
primeiro frame durante esta observacao; o processo ainda estava ativo e foi
encerrado deliberadamente apos arquivar os logs. Nao houve evidencia de crash.

Evidencias privadas: `build/arm11-startup-trace/image-run-1794334411180177400`
e `image-limit100-1794334664273446200`. A proxima sonda separa canonicalizacao,
abertura, alocacao, leitura, teste de fim e hash dentro de Catalog::read,
alem da carga de fontes. Nenhuma correcao do jogo ou da API foi adotada.

## Parada posterior no desenho: pilha da verificacao de fontes

A execucao `catalog-font-1794335518374728100` terminou os marcadores de update,
RenderAll e soundPump, mas parou apos `FONT before_verify`. A chamada seguinte
e `Catalog::verify`, dentro de `Font::raster`. No ELF dessa sonda, o simbolo
`__stacksize__` contem 0x8000 (32.768 bytes). O prologo de Catalog::verify
(endereco 0x011bec88 nessa variante) faz push de nove registradores (36 bytes),
subtrai 65.536 de sp e depois outros 452: frame de 66.024 bytes antes das
chamadas. O buffer local `std::array<uint8_t,65536>` excede sozinho a pilha
principal. Isso e um defeito da API nativa no alvo, nao do controle original.

Foi preparada uma variante privada que troca apenas esse buffer por
`std::vector<uint8_t>(65536)`: mesmo tamanho, ordem das verificacoes, leituras,
SHA-256 e erros de integridade. Confirmada na execucao `heap-buffer-1794335863847467400`: passou por
FONT after_verify, leitura de 50.788 bytes da fonte, inicializacao FreeType,
STARTUP after_host_draw, STARTUP after_end_frame e WARMUP_END=1. A execucao
produziu a amostra do frame 960 e o relatorio final de memoria. Nas sondas
ate 601 o form era 0 (carga); nao ha prova de menu/partida nessa janela,
portanto ela nao sera usada como benchmark dessas telas. Ao final, malloc
registrou 9.892.440 bytes usados; intervalos conhecidos: texturas 3.690.392,
fontes 65.536, heap gerenciado 2.717.349, audio 0 bytes. Nao sao RSS nem uma
particao exaustiva da memoria do processo.

A correcao do buffer foi aplicada a API nativa. O teste do catalogo no PC
validou 3.027 registros, 718 vinculos de PNG e 21 recursos brutos (15 distintos
da vista decodificada). A verificacao completa do checkpoint ainda deve ser
renovada antes de publicar. Nenhuma alteracao no controle do C#.

Na mesma sonda, a primeira imagem carregada (37.088 bytes RGBA) teve
93.839.207 ns em caminho, 348.724 ns em abertura, 66.536 ns em alocacao,
7.338.982 ns em leitura, 739.277 ns em EOF e 8.103.834 ns em SHA-256.
A soma e 110.436.560 ns, sem incluir logs/fechamento. Esses tempos usam o
relogio emulado e sondas; nao sao tempos definitivos de hardware.

## Custo de resolucao de caminho

Nas primeiras 64 leituras da sonda catalog-font, categorias resource/baked_array,
a mediana de `path(entry)` foi 64,7622575 ms; a mediana da soma das demais
etapas foi 1,8564875 ms. Esse conjunto ainda nao representa as imagens.

O fonte oficial da libctru 2.7.1, revisao
`62b7c42c88b1ee837f513358409d2e5c8f9001a9`, explica por que consultas de
metadados podem ser caras: [archive_dev.c, archive_stat](https://github.com/devkitPro/libctru/blob/62b7c42c88b1ee837f513358409d2e5c8f9001a9/libctru/source/archive_dev.c#L820)
tenta abrir como arquivo, e, se falha, tenta abrir como diretorio; fecha o
handle apos obter os atributos. As entradas stat/lstat usam essa mesma
funcao (linhas 71-72). Isso sustenta a investigacao da canonicalizacao, mas
nao mede sozinho quantas chamadas cada canonical faz nem autoriza eliminar
validacoes. Nenhum cache de caminhos ou desvio de verificacao foi aplicado.
SHA-256 do arquivo consultado:
`45b9ee7cc880593613bc5598d7655953e321cb4f5f07611af87b2e513ceb28e7`.
O fonte consultado ficou apenas em build/; nao foi incorporado ao runtime.

## Fixture de caminho, ainda sem adocao

No mesmo perfil New/100%, uma fixture separada comparou 26 caminhos normais
(de diferentes tipos do catalogo) por canonicalizacao e por composicao sob
a raiz seguida de consulta de existencia. Todos os 26 resultados foram
iguais. Totais acumulados: 2.170.630.235 ns contra 13.320.613 ns. Essa fixture
nao elimina o custo do SHA nem mede frame. A primeira execucao falhou porque
o arquivo privado de entradas estava em CRLF e getline reteve CR; repetida
com LF, passou. Esse erro da fixture foi arquivado, nao atribuido ao jogo.

A alternativa continua privada: faltam casos invalidos/nao normalizados e
restricao comprovada ao dispositivo SD da libctru (sem links simbolicos).
Nao aplicar esse atalho no PC nem em dispositivos arbitrarios; canonical
protege a contencao de caminhos com links nesses ambientes. Todas as
validacoes atuais permanecem no codigo de producao.

## Verificacao completa: falha externa preservada

A tentativa posterior a correcao passou 105 checks e parou em
android-math-static por falha DNS ao consultar raw.githubusercontent.com.
A repeticao isolada passou nas duas ABIs. A tentativa completa continua
registrada como FAIL/incompleta; nao foi convertida manualmente em PASS.
O auditor agora conserva os dois fontes upstream fixados em build/deps/,
verificando SHA-256 tanto no download quanto em todo uso do cache. Tres
fixtures confirmam funcionamento offline, rejeicao de cache adulterado e
rejeicao de download incorreto. Nenhum fonte upstream foi incorporado ao
runtime. Uma nova verificacao completa e obrigatoria antes da publicacao.

A fixture ampliada identificou uma diferenca para caminho vazio: a composicao
mantinha uma barra final que canonical removia. A alternativa foi recusada
nessa forma. Foi preparada uma revisao que usa canonical para caminhos vazios,
com terminador de diretorio, pontos, componentes nao normalizados ou dispositivo
diferente de sdmc. A revalidacao ainda esta pendente. Nenhuma dessas variantes
foi aplicada ao Catalog de producao.

## Integracao local em validacao

A revisao restrita a sdmc passou nos 26 arquivos e 15 casos de borda da
fixture privada (1.985.233.844 ns em canonical, 15.018.350 ns na alternativa,
somas de 26 chamadas). Foi integrada localmente em Catalog::path sob __3DS__;
PC e outros dispositivos mantem canonical. Entradas especiais e falhas na
consulta de existencia tambem usam canonical; os guardas de raiz permanecem.

A nova fixture publica tests/kairo/asset_path_test.cpp compara a implementacao
real com canonical para todo o catalogo e 16 casos especiais. No PC passou
3.027/3.027 e 16/16; tambem passaram 686 casos do oraculo de fonte e 7.966
assertivas nativas de graficos/fontes. A execucao da fixture real no ARM esta
em andamento. Nenhum indice ou retorno de LoadStart foi modificado.

A fixture real terminou no ARM: 3.027/3.027 caminhos e 16/16 casos especiais
iguais. Somas: canonical 224.718.853.349 ns, implementacao atual 1.688.348.022 ns.
A melhoria se refere a resolucao de caminhos; nao e uma medida de frame nem
elimina leitura ou SHA-256. Log/prova privados: asset-path-production-pass.log
e asset-path-production-proof.json em build/arm11-startup-trace/. O proximo
passo e o boot real com essa API; ainda nao afirmar menu/partida ARM.
