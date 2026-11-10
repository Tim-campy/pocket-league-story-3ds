> Decisao do usuario: preservar o comportamento original e investigar o custo da carga. A proposta de incrementar antes do retorno foi rejeitada; nao aplicar. A rodada continua.

# Checkpoint de diagnostico do runtime ? apos b2acf47

## 1. PROGRESSO

Consolidacao publicada: **75f0dad**, com **108/108 verificacoes aprovadas**. Nenhuma otimizacao nova foi adotada nesta rodada de diagnostico. A verificacao completa deste checkpoint terminou com **109/109 checks aprovados**. A rodada continua com a decisao recebida de preservar o carregador original.

Cobertura preservada: jogo 1.768/1.958 metodos compilados, 751 exercitados, 190 corpos e 22 slots pendentes. Portaveis: 374 compilados, 373 verificados, 172 raizes. Fronteira: 252 verified, 1 implemented, 522 todo. Permanecem 26 integracoes de politica offline. Esta rodada nao acrescentou cobertura de jogo.

## 2. O QUE FOI FEITO NESTA RODADA

- Consolidacao das otimizacoes anteriores, verificacao completa e publicacao.
- Contabilidade exclusiva das amostras CPU com inlining do PDB; 2.397 amostras em 300 frames.
- Captura privada de 80 entradas reais e comparacao de cinco kernels entre DLLs reconstruidas no Mono e objetos C++ Release da baseline.
- Distribuicao ARM por metodo, vinte maiores e anatomia estatica Camera/Map nas duas arquiteturas.
- Sondas progressivas ARM localizaram repeticao no carregador; fixture de diretorios refutou a suspeita inicial de bloqueio na enumeracao.
- Sonda minima confirmou o retorno antes do incremento sem logs por metodo. Dois snapshots enumeraram as tres threads. Proposta de correcao e fixture preparadas, nao aplicadas.
- Primeira medicao por chamada tinha overhead de cronometro grande; foi substituida por lotes de 16 chamadas com estados independentes e verificacao dos globais capturados. Os tempos descartados nao entram nas tabelas.

## 3. HIPOTESES E MEDICOES

**CPU: referencias dominam as amostras, nao alocacao.** O denominador abaixo e o total amostrado dentro das janelas, nao tempo de parede. Cada amostra aparece uma vez. Zero amostras nao significa custo inexistente.

| Categoria | Amostras | % |
|---|---:|---:|
| runtime/refcount | 905 | 37.755528 |
| runtime/reference-copy-other | 692 | 28.869420 |
| game-logic | 180 | 7.509387 |
| system | 134 | 5.590321 |
| runtime/array-access-and-bounds | 130 | 5.423446 |
| runtime/type-init | 120 | 5.006258 |
| native-kairo/other | 72 | 3.003755 |
| system/compiler-security | 64 | 2.670004 |
| runtime/conversions-generics-other | 37 | 1.543596 |
| system/interrupt | 19 | 0.792657 |
| unattributed/native | 14 | 0.584063 |
| native-kairo/drawing-batches | 10 | 0.417188 |
| portable-kairo | 10 | 0.417188 |
| runtime/strings | 6 | 0.250313 |
| native-kairo/offscreen | 1 | 0.041719 |
| native-kairo/text-metrics | 1 | 0.041719 |
| native-kairo/input | 1 | 0.041719 |
| runtime/allocation-destruction | 1 | 0.041719 |
| native-kairo/sound | 0 | 0 |
| runtime/exceptions | 0 | 0 |
| **Total** | **2397** | **100** |

Refcount mais copias de referencias: 66,624948%. Array-access-and-bounds inclui acesso e nulo; limites isoladamente continuam UNKNOWN. As linhas refcount identificam rotinas, nao apenas suas instrucoes atomicas. 14 amostras nativas continuam nao atribuidas.

**Comparacao Mono/C++: igualdade parcial, 69/80 casos.** Tempos brutos medianos de cinco lotes de 16.000 chamadas; reset/aquecimento fora do cronometro. Controle vazio Mono 4,17 ns/chamada; C++ 1,82 ns/chamada.

| Metodo | Mono ns | C++ ns | Razao C++/Mono | Iguais |
|---|---:|---:|---:|---:|
| Camera.ConvertScreenToCamera(int[],int[]) | 10.43750 | 121.07500 | 11.600000 | 16/16 |
| Team.Cal_evaCoatMulti9block | 35.28125 | 1153.93750 | 32.706820 | 5/16 |
| Team.GetSum | 34.30000 | 953.78125 | 27.807034 | 16/16 |
| GameUtil.ChRectHitRect(float...,bool) | 23.48125 | 6.23750 | 0.265637 | 16/16 |
| AppData.InsertGameObject (10 argumentos) | 103.28750 | 1006.16250 | 9.741377 | 16/16 |

GetSum e o predicado de colisao sao equivalentes parciais isolaveis dos dois metodos maiores solicitados, nao medicoes de Get_playerReceivePosEva/CollisionBall_proc inteiros. A razao inclui Mono x86 versus MSVC x64.

- **CONFIRMADA:** os 11 casos divergentes de Cal_evaCoatMulti9block diferem em 25 celulas por uma unidade; modelo com produto intermediario mais largo reproduz 16/16 resultados Mono, float32 reproduz 16/16 C++. Android permanece UNKNOWN. Nenhuma mudanca aritmetica adotada.
- **CONFIRMADA:** ResourceManager.LoadStart retorna ao atingir 150 ms antes do incremento persistente do indice; na sonda minima ARM, grupo 0/indice 0 repetiu com intervalo acumulado do callback de 2.291?2.710 ms nas observacoes 7?16.
- **REFUTADA:** enumeracao de cinco saves como causa da parada. Fixture simples/recursiva e Storage.GetFiles completaram; o fluxo real saiu de AppData.LoadSystem.
- **INCONCLUSIVA:** ganho de qualquer nova elisao, noinline, icamento de limites ou /fp:precise. Esses experimentos de frame ainda nao foram executados neste checkpoint.

## 4. PENDENTES E ANATOMIA

| Arquitetura / metodo | Total | Jogo+cola | Gestao refs | Refcount | Array+limites | Excecoes | Init tipos | Chamadas runtime | Outros |
|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| ARM11 / Camera | 319 | 31 | 74 | 72 | 83 | 16 | 5 | 10 | 28 |
| ARM11 / Map.Draw_coat | 7289 | 2607 | 2172 | 1276 | 117 | 312 | 13 | 417 | 375 |
| x64 / Camera | 186 | 48 | 16 | 84 | 30 | 2 | 3 | 2 | 1 |
| x64 / Map.Draw_coat | 1722 | 806 | 143 | 630 | 50 | 19 | 7 | 48 | 19 |

Contagem estatica, nao ciclos. ARM inclui entrada e auxiliares exclusivos; x64 somente entrada, portanto escopos diferentes. Pools literais ARM: Camera 28 bytes; Map 424 bytes, excluidos das instrucoes. ?Jogo+cola? inclui prologos e cola gerada.

ARM: 1.198 metodos vinculados com IL mapeado; 18 identidades nao resolvidas por este analisador. Camera: 1.304 bytes de codigo/67 de IL = 19,462687; Map.Draw_coat: 29.580/1.437 = 20,584551 (incluindo auxiliares). Distribuicao e vinte maiores em runtime-cpu-diagnostic.md.

| Experimento solicitado | Ganho em ms | Variacao de tamanho | Estado |
|---|---|---|---|
| Elisao de referencias nao escapantes | UNKNOWN | UNKNOWN | Nao executado nesta rodada |
| Helpers frios noinline | UNKNOWN | UNKNOWN | Nao executado |
| Limites por laco com prova | UNKNOWN | UNKNOWN | Nao executado; nenhuma verificacao removida |
| /fp:strict vs precise | UNKNOWN | UNKNOWN | Nao executado; strict preservado |
| -Os / LTO / sem GC de secoes | UNKNOWN | UNKNOWN | Matriz pendente; baseline O2, GC de secoes, sem LTO |

Duplicacao de templates/helpers por inlining nos 20.643.008 bytes de .text: UNKNOWN. Nao confundir o inventario de simbolos compartilhados com uma medicao de duplicacao.

## 5. TOOLCHAIN

MSVC 14.51.36231, Release /O2 /fp:strict, Windows SDK 10.0.26100.0; TraceEvent 3.2.8 e DbgHelp com PDB. Mono do Unity 5.3.4f1: --version declara JIT 2.0, x86, Boehm, apesar da identificacao historica Mono/smcs 2.6.5. ARM: devkitARM r68/GCC 16.1.0, libctru 2.7.1, Azahar 2126.2. Nenhuma dependencia nova instalada nesta rodada. Hashes e opcoes preexistentes permanecem em docs/toolchain.md; hashes das medicoes em runtime-cpu-diagnostic.md e recibos privados.

## 6. ARM, COMPONENTES EXTERNOS E CONTEUDO

**Primeiro frame ARM: nao concluido.** Repeticao do carregador confirmada; nao se pode fornecer ms/frame New/Old ou validar o benchmark de hardware com esse fluxo. A imagem .3dsx existente nao foi promovida a benchmark concluido. O emulador foi encerrado apos salvar evidencias.

| Thread observada | Estado / primitiva |
|---|---|
| 1 | Ativa: collation numa captura, svcSendSyncRequest/FSUSER_OpenDirectory em outra; marcadores mostram recarga do indice 0 |
| 2 | Servico APT em svcWaitSynchronizationN |
| 3 | svcArbitrateAddress/CondVar_WaitTimeout, prazo proximo de 1 ms; chamador logico acima da primitiva UNKNOWN |

Os 24 sitios estaticos de criacao convergem para Thread.Start. O ELF mostra pthread_create -> __syscall_thread_create -> threadCreate, core_id=0, prioridade 0x3f, pilha default 32.768 bytes. Isso nao exige outro nucleo de aplicacao no Old3DS, mas nao prova execucao/compatibilidade de todos os caminhos. Registros RSP nao foram tratados como unwind certificado. Auditoria em runtime-thread-inventory.md.

Nenhum asset/captura de jogo/dado de entrada entra no Git. As tabelas de resultados publicadas contem contagens e tempos. Nenhuma DLL original e ligada ao port; o oraculo gerenciado resolve UnityEngine externamente somente para carregar as DLLs reconstruidas.

## 7. PENDENCIAS E DECISAO RECEBIDA

A correcao proposta avanca loadTask[k][1] e loadCnt_ antes do retorno por tempo em ResourceManager.LoadStart. Ela evita recarregar o item concluido, mas altera um comportamento original. O usuario decidiu preservar esse comportamento e investigar o custo da carga; a proposta nao sera aplicada. Codigo de producao permanece intacto. Diff e quatro testes do modelo em resource-loading-yield-decision.md. Alternativa: preservar o controle e investigar/reduzir a carga ate cada item terminar abaixo de 150 ms, sem garantia medida de viabilidade.

Este checkpoint e parcial; a rodada continua: os experimentos dirigidos, a quantificacao de duplicacao inline e a matriz de tamanho/tempo permanecem pendentes. Nao foram rotulados como aprovados nem como ganho zero.

## 8. RECOMENDACAO

1. Separar o custo do callback e da carga na API, preservando o retorno por tempo original conforme decisao recebida; retomar primeiro frame e benchmark ARM quando o custo permitir.
2. Priorizar elisao comprovada de copias/refcount em Camera e kernels com arrays, medindo cada alternativa isoladamente na mesma partida. Nao retirar atomicos globalmente: o inventario nao prova confinamento de todos os objetos.
3. Depois medir helpers frios, icamento seguro e matriz Os/LTO. A amostragem mostra margem alta, mas nenhuma reducao adicional em ms foi demonstrada nesta rodada. Eliminar idealmente todo o custo classificado de referencias sugeriria um teto teorico, nao atingivel automaticamente; nao ha base para prometer uma CPU final especifica no PC ou ARM.
