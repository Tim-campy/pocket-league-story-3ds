# Rodada do prototipo de coletor por rastreamento

## 1. PROGRESSO

Consolidacao publicada: **d3420d2**, sucessor de 009287d, com **109/109 checks PASS** e gate de conteudo **1.202 entradas / zero violacoes**. Inclui buffer de verificacao de assets no heap, resolucao de caminhos SD com fallback e cache autenticado do auditor Android. PROGRESS.md foi regenerado pela verificacao.

**Parada pelo item 2g:** nenhum dos quatro kernels com referencias atingiu razao coletor proprio/Mono <= 1. O runtime/emissor de producao nao foram convertidos. A elisao metodo a metodo nao foi generalizada. Experimento e este relatorio ficam locais; nao houve segundo checkpoint apos a consolidacao.

Cobertura inalterada: jogo 1.768/1.958 compilados, 751 runs, 190 corpos e 22 slots pendentes. Portaveis 374 compilados/exercitados, 373 verificados, 172/172 raizes. Fronteira 252 verified, 1 implemented, 522 todo; 26 integracoes offline pendentes.

## 2. O QUE FOI FEITO

- Consolidacao completa e publicacao antes das medicoes do novo runtime.
- Prototipo separado: mark/sweep nao movel, mapas exatos dos tipos projetados/arrays, ponteiros comuns, raiz conservadora na pilha e CONTEXT x64, busca de faixa para ponteiros internos.
- Os cinco corpos gerados foram extraidos mecanicamente, sem mudar comandos, verificacoes ou aritmetica. Tipos projetados mantem apenas campos utilizados; inicializadores estaticos reais ficam fora, com valores capturados restaurados pelo harness. TypeInitState original e suas consultas foram mantidos.
- BDWGC 8.2.12: somente PC, build local estatico single-thread, mesmos corpos e harness do prototipo proprio.
- Tres execucoes por variante, ordem alternada, cinco lotes de 16.000 chamadas por kernel em cada execucao. Sem compilador/emulador concorrente.
- Testes basicos PASS: arestas exatas, campo escalar nao tratado como ponteiro, ponteiro interno, ciclo nao alcancavel, raiz na pilha e falha por limite de heap.
- Falhas de preparacao preservadas: macro min/max do Windows e helper cs_require ausente no ambiente projetado. Corrigidas antes das medicoes, sem alterar os corpos gerados.

## 3. HIPOTESES E KERNELS

Mediana de 15 lotes por variante, ns/chamada brutos. Reset de estado fora do cronometro. Mono x86 historico versus C++ MSVC x64 /O2 /fp:strict; nao sao arquiteturas iguais.

| Kernel | Mono | Atual | Proprio | BDWGC | Proprio/Mono |
|---|---:|---:|---:|---:|---:|
| Camera.ConvertScreenToCamera | 8.50625 | 133.63750 | 48.63125 | 58.10625 | 5.717120 |
| Team.Cal_evaCoatMulti9block | 36.30000 | 1090.15000 | 316.65000 | 296.52500 | 8.723140 |
| Team.GetSum | 36.85625 | 951.43125 | 248.98750 | 229.11875 | 6.755638 |
| GameUtil.ChRectHitRect | 11.54375 | 6.26875 | 5.83750 | 5.83125 | 0.505685 |
| AppData.InsertGameObject | 103.45000 | 1020.50625 | 129.42500 | 113.78750 | 1.251087 |

**CONFIRMADA:** os prototipos proprio e BDWGC mantiveram os 80/80 resultados da baseline C++ em cada uma das tres execucoes (240/240 por variante). Os 11 casos divergentes do Mono em Cal_evaCoatMulti9block continuam divergentes; no total, igualdade Mono/C++ 69/80 por execucao. Nao se alterou float para fazer o coletor passar.

**REFUTADA para este prototipo:** trocar a representacao de referencias, conservando a emissao restante, basta para atingir <=1x Mono nos quatro kernels. Os quatro falharam no criterio; o predicado geometrico sem referencias ficou abaixo de 1x.

**CONFIRMADA por construcao do experimento:** nao ha coleta dentro das chamadas cronometradas. As coletas sao solicitadas antes/depois dos lotes, e os corpos nao alocam em seus caminhos de sucesso. O tempo residual nao e pausa de marcacao/varredura.

**Evidencia estrutural, nao atribuicao de ciclos:** a desmontagem do proprio registra 7 sitios de chamada de inicializacao de tipos em Camera, 7 em Cal_evaCoatMulti9block, 5 em GetSum, e 10 chamadas de auxiliares de lambdas em InsertGameObject. Ha conversoes numericas e verificacoes de nulo/limites preservadas. As contagens estaticas incluem caminhos frios; o percentual de tempo de cada categoria residual e UNKNOWN. Nao generalizar o fracasso deste prototipo para todos os possiveis emissores com GC.

## 4. PENDENTES E TAMANHO

Tamanho COFF anterior ao link: entrada e COMDATs auxiliares associados ao metodo. Nao e a soma final apos folding/remocao do linker.

| Metodo | Entrada atual | Entrada propria | Entrada+auxiliares atual | Entrada+auxiliares propria |
|---|---:|---:|---:|---:|
| Camera.ConvertScreenToCamera | 644 | 430 | 4583 | 1525 |
| Team.Cal_evaCoatMulti9block | 447 | 956 | 5460 | 3879 |
| Team.GetSum | 848 | 895 | 5764 | 4325 |
| GameUtil.ChRectHitRect | 194 | 372 | 618 | 796 |
| AppData.InsertGameObject | 761 | 1058 | 14017 | 5600 |

.text dos executaveis de medicao: atual 984.353 bytes, proprio 68.449, BDWGC 109.889. **Nao tratar a diferenca como reducao do produto:** o atual liga a implementacao completa e dependencias dos tipos, enquanto os prototipos usam uma projecao. O tamanho de codigo JIT nativo do Mono nao foi medido; o tamanho PE/IL do harness nao o substitui.

A condicao de parada impediu conversao, novas medicoes de frame e fase ARM. Permanecem UNKNOWN: media/p95/maximo por frame com novo GC, nova contabilidade de 100% da CPU, alocacoes por frame, quantidade/duracao de coletas em jogo, pico de texturas entre telas, .text do jogo convertido e desempenho ARM.

Prototipo nao inclui ainda: workers cooperativos, teste de raiz exclusivamente em registradores, referencias fracas, finalizacao, mapas completos gerados pelo Roslyn, objetos nativos da API ou varredura ARM. A captura CONTEXT x64 existe, mas o teste de pilha nao prova sozinho o caso exclusivamente em registrador. Nao e um coletor pronto para producao.

## 5. TOOLCHAIN E PONTO FLUTUANTE

BDWGC/proveniencia em docs/toolchain.md e THIRD_PARTY.md; scripts em tools/gc-prototype. Fonte e artefatos privados autenticados por source-input-manifest.json, projection.json e measurement.json sob build/gc-prototype. Fontes/arquivos do jogo nao foram incluidos nesses scripts.

Leitura preliminar do fork oficial Unity Mono, revisao b6587926c0f146c8b12985744f33a13b39a22d57; a identidade exata com o JIT/configuracao do APK permanece UNKNOWN:

- [method-to-ir.c:1128](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/method-to-ir.c#L1128): R4 e R8 usam STACK_R8.
- [mini-arm.c:4099](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/mini-arm.c#L4099): caminho VFP emite aritmetica ADDD/SUBD/MULD/DIVD.
- [mini-arm.c:3986](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/mini-arm.c#L3986): load/store R4 convertem entre armazenamento single e registrador double.
- [mini-arm.c:3508](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/mini-arm.c#L3508): conversao explicita R4 faz estreitamento e reampliacao. [Retorno R4:4011](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/mini-arm.c#L4011) tambem converte antes da passagem pelo ABI.
- [mini-x86.c:3149](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/mini-x86.c#L3149), [3180](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/mini-x86.c#L3180) e [3309](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/mini-x86.c#L3309): backend x87; stores/conversoes R4 usam memoria single, aritmetica usa a pilha FP. Isso nao torna o x86 o oraculo Android.
- [emit_stloc_ir:5334](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/method-to-ir.c#L5334) e [restricao de locais R4:10816](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/method-to-ir.c#L10816): a regra exata de estreitamento precisa acompanhar o lowering/otimizacoes; nao se assume que toda atribuicao C# equivalha a store efetivo.

Hipotese de emissao a confirmar: manter single em armazenamento R4, promover valores carregados para temporarios double de avaliacao e estreitar nos pontos reais de conversao/armazenamento/ABI. A regra completa de stloc, argumentos e otimizacoes ainda nao foi fechada. **Nao foi adotada, nem foi preparado um executor Android nesta rodada**: houve parada pelo criterio 2g. As 80 entradas e resultados Mono/C++ existentes permanecem locais; nao equivalem a esse futuro teste Android.

Arquivos lidos, sem incorporacao de codigo da VM:

| Arquivo mono/mini | SHA-256 |
|---|---|
| mini.c | `81e7edf0e204cd1318676008e7bba3a63e982daa7d621f5ebcf3e6e290df8f86` |
| method-to-ir.c | `ef429a524b59ab25f43f412725e52322dc4d4b83f590c9dfc835cf6d504f3380` |
| mini-x86.c | `c54064a164e1906d3449c46ecfb9d849a2535e586bda1326d56b74cf65a32f38` |
| mini-arm.c | `bcff9d335db0636b811a240b49f260517c2fa76ef6652be65cf39d64ed0c2c08` |
| mini-arm.h | `1f9068dcb2c97812369c78be285b1681b972fbca59a61a7a05691b2e2b6bd3b2` |
| mini-x86.h | `ba6267dc3d843cf2adcdb196fe855d21333fcc712a4ed909b797d95be91c2c4b` |
| mini-ops.h | `b0ba0c730a1dc727928b61c54fd5729f0c357ab1a37b368828f550fc5a79bdcc` |

## 6. INVENTARIO DE COMPORTAMENTO E RECURSOS

Leitura preparatoria, **nao inventario transitivo concluido**:

- Busca no C# dos dois assemblies nao encontrou declaracoes de finalizador nem mencoes a WeakReference. Isso nao inventaria finalizadores internos das bibliotecas de plataforma.
- 12 declaracoes diretas de IDisposable: InputStream, OutputStream, DataInputStream, DataOutputStream, InterstitialAd, AdMobView, ImageAtlasManager, ImageAtlas.AtlasRegion, KairoBase.ConnectObject, Material, Offscreen e MeshBuilder. Nao conta todos os Dispose por heranca ou por convencao.
- JRuntime.Gc chama GC.Collect(0); JSystem.Gc encaminha. Foram localizadas nove chamadas de alto nivel a JSystem.Gc em AppData, GameManager (duas), FormManagerBase, SubForm, GameForm (duas), BootForm e SoccerForm. Busca direta nao encontrou chamadas a GetGeneration/MaxGeneration/CollectionCount/WaitForPendingFinalizers no fonte do jogo/KairoLibrary.
- Inventario anterior identifica 24 sitios de criacao de workers (nao 24 threads simultaneas), em docs/notes/runtime-thread-inventory.md. Thread.entry, Sleep e Join possuem pontos cooperativos no runtime atual. Falta verificar cobertura por caminho de cada worker; nao se declarou rendezvous completo.
- Image.Unuse despacha Release a UI; Image.Dispose, ResourceManager.Dispose/UnuseAllImages/DisposeJarImages, SoundBase.Dispose e Offscreen.Dispose/OnDestroy sao caminhos explicitos a preservar. SoundBase.Dispose solicita UnloadAsset e remove a instancia da lista; Font.Dispose zera guiStyle_. Nao se mediu o pico entre telas com novo GC.

Nenhum asset, entrada capturada, DLL original ou biblioteca Unity foi incluido no Git ou no link nativo. BDWGC e fontes do JIT ficaram em build/. Nenhuma mudanca de design de telas ou logica do jogo.

## 7. BLOQUEIOS

O bloqueio desta rodada e o criterio de desempenho nao atendido, nao falta de autorizacao para converter. A autorizacao existe, mas esta condicionada ao criterio. Por isso nao se converteram emissor/runtime, nao se rodou uma partida com novo GC e nao se executou ARM novo. Nao foi removida nenhuma verificacao de limites.

As reducoes observadas no prototipo nao sao uma garantia de ganho de frame; a projecao e single-thread e exclui integracoes de recursos. O criterio e identico ao solicitado, sem flexibilizacao posterior para aceitar o resultado.

## 8. RECOMENDACAO

Manter o checkpoint d3420d2 como base. Para uma proxima rodada, decidir se primeiro se reduz o custo residual da emissao (inicializacao repetida, chamadas de auxiliares e representacao de acesso a arrays, preservando verificacoes), mantendo o gate <=1, ou se outro gate de adocao deve ser definido. Nao recomendar conversao integral como se o criterio tivesse passado.

A referencia Android de ponto flutuante deve ser testada separadamente antes de qualquer mudanca. Nenhuma CPU final PC/ARM pode ser prometida a partir destes kernels.
