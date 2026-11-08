# Threads gerenciadas no host PC

`managed_thread.hpp/.cpp` implementa a fundação System.Threading.Thread usada pelo
C# gerado de `java.lang.JThread`; não reescreve JThread à mão. A API recebe
`Delegate<void()>`, conserva identidade de CurrentThread e oferece Start,
Interrupt, Sleep, Join, ThreadState, IsAlive e Priority. As classes de exceção
ThreadStateException e ThreadInterruptedException derivam de SystemException.

`python tests/translator/run_thread_fixtures.py` compila fontes próprios contra
o Mono externo e o .NET10, sem carregar código do jogo. Foram **64/64**
observações equivalentes, 32 por perfil, com **9 diferenças históricas**.
Outras **7/7 observações** confirmaram a cultura dos workers no perfil histórico;
o total diferencial nativo é **71/71**. Nesse segundo corpus, o .NET10 difere em
quatro observações e é apenas contraste, sem alegar implementar sua herança de
ExecutionContext. Mais **20 invariantes nativos** passaram para GC e lifetimes.
O recibo é `config/phase2-thread-tests.json`; ele não promove métodos gerados.

O [Thread.cs histórico](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/System.Threading/Thread.cs)
tem Priority getter sempre Lowest e setter vazio (linhas 652–661). A fixture
confirmou esse comportamento no SDK: inclusive valores inválidos são aceitos e
get/set de uma thread parada não lançam. Preservar isso no perfil histórico não
é stub novo. `JThread.SetPriority` ainda atualiza o campo priority_ no C# gerado,
como o original. No contraste .NET, as prioridades são validadas, threads mortas
lançam e o backend Windows usa GetThreadPriority/SetThreadPriority reais.
O backend de prioridade moderno em outro SO fica explicitamente NotSupported.

Interrupt não mata nem aborta a thread. O pedido fica pendente até Sleep/Join;
pedidos repetidos coalescem e o próximo wait lança ThreadInterruptedException,
consumindo o pedido. Isso foi exercitado antes de Start, durante execução sem
wait, durante Sleep(-1), durante Join e depois da parada. Sleep(0) também é ponto
de entrega. Os estados medidos foram Unstarted=8, Running=0, WaitSleepJoin=32 e
Stopped=16. Recomeçar a mesma thread ou dar Join antes de Start lança o tipo
histórico correto.

Cada worker entra em GcMutatorScope. Sleep e Join liberam seu mutex e visitam
gc_safepoint a cada intervalo de espera de até 1 ms; não bloqueiam o coletor
indefinidamente numa espera nativa. O emissor continua responsável pelos pontos
seguros em métodos e backedges de código gerado. O callback e seus alvos são
arestas rastreadas; a captura forte de self do worker o conserva durante execução.
Os testes coletaram o ciclo Thread→delegate→alvo→Thread depois de Join e provaram
que Sleep, Join e laço cooperativo não perdem alvos durante GC. Um coletor no
worker também passou enquanto o host aguardava em Join.

`GcNativeBlockingScope` cobre esperas nativas prolongadas depois da conversão de
todos os argumentos para valores nativos. Seu contador por thread é separado dos
parkers de safepoint e admite aninhamento. O último destructor espera a coleta
em curso antes de permitir reentrada gerenciada; um scope interno não remove o
externo. Entrar em execução/GC/alocação gerenciada dentro dele falha explicitamente.
O contrato proíbe também acessar String/Ref/Delegate enquanto bloqueado; os guards
não instrumentam todo acesso C++ a um objeto. A fixture manteve uma coleta em
tracing por 1.200 ms, acima do timeout cooperativo, e comprovou coleta de ciclos,
preservação do scope externo e reentrada adiada de host/worker.

Exceções não tratadas no callback terminam o processo; não são descartadas para
o jogo continuar em estado inválido. Não há Abort/Suspend/ThreadPool/monitores ou
ExecutionContext CLR completo. A cultura histórica de um worker inicializa do
default de processo, sem herdar o override do pai. Isso foi medido ao criar um
filho com o pai em tr-TR, iniciá-lo depois em fr-FR e criar um neto após override
de-DE: filho e neto continuaram en-US. O host configura explicitamente esse default
em `set_default_collation_culture`; a inicialização por thread é lazy. O .NET10
contrasta com herança fr-FR/de-DE. Código gerenciado não deve ser executado por workers
nativos arbitrários que não se registrem no protocolo de GC.

O backend é de PC nesta fase. O ABI e o suporte de threads/esperas do 3DS serão
tratados na Fase 4, sem instalar SDK agora. As medições de boot/memória/frame time
do jogo não são inferidas dos testes de threads.
