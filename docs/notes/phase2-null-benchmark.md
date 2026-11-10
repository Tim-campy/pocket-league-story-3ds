# Benchmark sem saída gráfica — trabalho em andamento

O marco funcional está publicado em `07e50fb`: partida completa e retorno à
gestão, descritos em `phase2-match-complete.md`. As medições abaixo pertencem
ao backend nulo subsequente e não substituem a validação visual SDL/Android.

## Baseline PC

Executável Release sem contadores por método, sem rasterização, apresentação
ou dispositivo de áudio. Mantém métricas de texto, chamadas da API e estado do
jogo. SHA-256 da baseline:
`d88a031019df3e5bc088cd579a8111edac4585697001a8ffdb085136fdaf499e`.
Saves próprios das tentativas 25 (menu) e 31 (partida), entradas provenientes
dos recibos das tentativas 34 e 35. Cada janela tem 300 frames.

| Janela | CPU escalonada média ms | p95 ms | máximo ms |
|---|---:|---:|---:|
| Gestão, frames 661–960 | 8.349977333333333 | 12.2372 | 13.048 |
| Partida, frames 1201–1500 | 11.840512 | 16.4336 | 19.5489 |

Métrica calculada pela interseção das trocas de contexto ETW com os intervalos
QPC de cada frame, somando as threads do processo. Zero eventos perdidos e
zero quebras nas cadeias de escalonamento. O preset utilizado não registrou
DPC/ISR: a subtração do tempo de interrupções é **UNKNOWN**. Portanto, são
tempos de CPU escalonada, sujeitos também ao custo da coleta externa, não uma
medida exata de CPU útil. GetProcessTimes mostrou granularidade insuficiente
para percentis por frame e não fundamenta esta tabela.

Resultados locais: `build/null-pc/runs/1794271113479752100` (gestão) e
`build/null-pc/runs/1794271193434104300` (partida). Leitor reproduzível:
`tools/setup_etw_reader.py`, `tools/profiling/EtwRead.cs` e
`tools/analyze_null_cpu.py`. ETLs, símbolos, saves e capturas não são publicados.

Uma execução separada instrumentou apenas as solicitações C++ new/new[]:

| Janela | Alocações | Bytes solicitados | Coletas cíclicas na janela |
|---|---:|---:|---:|
| Gestão | 4134181 | 157800168 | 0 |
| Partida | 3781148 | 140525988 | 0 |

Não inclui malloc interno de FreeType/CRT. Zero coletas na janela implica zero
pausas do coletor cíclico nessa janela, não ausência de coleta no aquecimento.
O campo longest_collection_ns desses logs é cumulativo e não representa o
máximo da janela. O runtime combina contagem de referências com coleta
cooperativa de ciclos, solicitada pelos caminhos explícitos de GC.

## Ajustes sob validação

A amostragem mostrou aquisição/liberação de SRWLock e TypeInitState::run nas
pilhas. O caminho de tipos já inicializados passou a usar leitura atômica com
acquire; a conclusão é publicada com release somente após sucesso. Falhas,
recursão e sincronização da primeira inicialização continuam no caminho lento.
Fixture diferencial de inicialização: 24/24 casos aprovados.

O registro de objetos do coletor retinha referências fracas expiradas até uma
coleta explícita. A manutenção agora remove somente registros expirados;
não antecipa coleta de objetos vivos nem de ciclos. No teste sintético de
100000 arrays temporários, o acréscimo de heap ocupado caiu de 22097063 para
167679 bytes. Fixture diferencial GC: 26/26 casos; despacho/UI: 29 assertivas.
O impacto destes ajustes no jogo e no ARM11 ainda está **PENDENTE**.

## ARM11: execução ainda não medida

O jogo, runtime e API foram compilados com devkitARM e backend nulo. A fixture
ARM11 de relógio, thread, condition_variable, GC e tamanhos de tipos passou.
O jogo chegou ao carregamento de recursos, mas falhou numa alocação de 37088
bytes em Image.Load, chamada por ResourceManager.LoadStart. Nesse ponto o
alocador informou 78299840 bytes ocupados e 22297920 livres. Isso não distingue
fragmentação, retenção e limitações do ambiente; não comprova que o jogo não
cabe no aparelho. A nova manutenção dos registros será testada nesse caso.

O backend nulo reserva somente 4096 bytes de heap linear, sem vídeo ou DSP;
isso não define a política do futuro backend gráfico. O heap normal desta
execução foi de 100663296 bytes. O Azahar informou uso da região de aplicação
maior que a capacidade reportada e ConfigureNew3DSCPU não implementado: esses
contadores e a velocidade do modo New exigem cautela. Ainda não há janela
válida de benchmark ARM11, nem resultado do perfil antigo.

O orçamento de 50 ms vem de Main.OnUpdate, que solicita SetTargetFps(20)
(`reference/src/Assembly-CSharp/main/Main.cs:93`). Mesmo uma medição válida no
emulador não substituirá o aparelho físico.

## Revisão de arquivos ao encerrar

Revisão executada durante a consolidação seguinte, preservando fontes, recibos,
entradas reproduzíveis, saves próprios, dependências autenticadas e evidências
das baselines. Resultado e inventário: [runtime-cleanup.md](runtime-cleanup.md).
