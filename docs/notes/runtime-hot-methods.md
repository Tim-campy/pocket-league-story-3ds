# Cinco kernels: Mono historico versus C++ Release

O oraculo executa as DLLs reconstruidas da fase anterior, nao metodos reescritos para o benchmark. O nativo liga os mesmos objetos Release da baseline do jogo; nao recompila nem substitui os cinco corpos. UnityEngine so e resolvida como referencia externa do oraculo Mono, fora da arvore do port e fora do link nativo.

Entradas: 16 chamadas reais por metodo capturadas nos frames 1201?1500 da partida (80 casos). Valores, arquivos de captura e saidas permanecem privados em build/. Estado mutado restaurado fora da janela medida. Cinco lotes de 16.000 chamadas; cronometro envolve grupos de 16 estados independentes. O runner recusa grupos cujos globais capturados diferem. Inicializadores e aquecimento ficam fora da janela.

| Metodo | Mono ns/chamada | C++ ns/chamada | C++/Mono | Saidas identicas |
|---|---:|---:|---:|---:|
| Camera.ConvertScreenToCamera(int[],int[]) | 10.43750 | 121.07500 | 11.600000 | 16/16 |
| Team.Cal_evaCoatMulti9block | 35.28125 | 1153.93750 | 32.706820 | 5/16 |
| Team.GetSum (subconjunto isolavel de Get_playerReceivePosEva) | 34.30000 | 953.78125 | 27.807034 | 16/16 |
| GameUtil.ChRectHitRect(float...,bool) (predicado de colisao) | 23.48125 | 6.23750 | 0.265637 | 16/16 |
| AppData.InsertGameObject (10 argumentos) | 103.28750 | 1006.16250 | 9.741377 | 16/16 |

Valores sao medianas dos cinco lotes e incluem invocacao do delegate/std::function e cronometro amortizado. Controle vazio: Mono 4,17 ns/chamada; C++ 1,82 ns/chamada. Preferimos os valores brutos acima a tratar a subtracao de dois tempos pequenos como custo exato. Microbenchmark nao inclui coleta, carga de assets, reset dos estados ou callbacks de plataforma no tempo medido.

Mono e o executavel x86 do Unity 5.3.4f1 (toolchain historica conhecida como Mono/smcs 2.6.5); seu `--version` declara `Mono JIT compiler version 2.0 (Visual Studio built mono)`, arquitetura x86 e Boehm. O nativo e MSVC x64, /O2 /fp:strict. Portanto a razao inclui diferencas de runtime, JIT, ABI e arquitetura: nao e a sobrecarga isolada de uma unica regra do tradutor. Nao representa Android nem ARM11.

## Comparacao funcional

**69/80 estados finais identicos byte a byte; 11 divergentes.** Todas as divergencias sao em Cal_evaCoatMulti9block: 25 celulas diferem por uma unidade. Um modelo de produto com intermediario mais largo reproduz os 16 resultados Mono; arredondar o produto para float32 antes da conversao inteira reproduz os 16 resultados C++. Isso sustenta a causa numerica, mas nao mede o JIT Android. O port continua com o contrato float32 aprovado; nenhuma opcao aritmetica foi alterada. A igualdade total solicitada NAO foi obtida.

GetSum substitui somente o nucleo isolavel de avaliacao de Get_playerReceivePosEva; ChRectHitRect substitui somente um predicado de CollisionBall_proc. Nao atribuir seus tempos aos dois metodos completos.

## Reproducao

Com a baseline nula e snapshot autenticado ja construidos: `python tools/profiling/capture_hot_inputs.py` prepara o executavel privado; executa-lo com assets, copia do save 31 e replay da tentativa 35, total 1500 e janela 1201?1500. Em seguida `python tools/profiling/run_hot_methods.py` recompila os hosts, liga os objetos existentes, executa ambos e compara as 80 saidas. Nenhum dado capturado e publicado.

Hashes dos insumos ficam no recibo privado `build/hot-methods/comparison.json`. As cinco funcoes nativas permanecem nos objetos originais da baseline; o host e separado.
