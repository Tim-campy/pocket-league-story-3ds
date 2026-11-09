# Consultas de memória do runtime no PC

JRuntime.FreeMemory/TotalMemory encaminham a JavaPlugin.FreeMemory/TotalMemory.
No Android, os originais consultam o heap Java; no outro ramo consultam o heap
Mono do Unity. O port não possui nenhuma dessas VMs. Os adaptadores gerados
conservam a espera na thread de UI e consultam o allocator nativo do backend.

O corpus tem três usos no jogo: GameForm.Draw, GameForm.cs:1287–1288, imprime
os dois valores; GameView.Draw, GameView.cs:1860, imprime FreeMemory. São
diagnósticos de memória, não controle de carregamento ou decisão de gameplay.
As condições e comandos desses corpos permanecem no C# traduzido.

No backend Windows, runtime_memory.cpp enumera os heaps do processo. Cada heap
é bloqueado separadamente durante HeapWalk. Soma-se cbData dos blocos ocupados
ou livres, excluindo registros de região e intervalos não comprometidos.
FreeMemory devolve o payload livre; TotalMemory, payload livre mais ocupado.
São duas consultas independentes, como no original. Falhas lançam exceção;
não se fornece uma quantidade inventada. Outros providers ainda não implementados
falham explicitamente.

Os campos e a disciplina de enumeração vêm de
[HeapWalk](https://learn.microsoft.com/en-us/windows/win32/api/heapapi/nf-heapapi-heapwalk)
e [PROCESS_HEAP_ENTRY](https://learn.microsoft.com/en-us/windows/win32/api/minwinbase/ns-minwinbase-process_heap_entry).
Não se aloca nem se acessam objetos gerenciados dentro de HeapLock; a thread
fica estacionada para o GC enquanto espera o allocator. Isso evita reter o
protocolo de mutação enquanto outra thread precisa concluir uma coleta.

O teste próprio cria um heap privado e aloca três blocos, inclusive um grande.
A soma ocupada confere com HeapSize antes e depois de liberar um deles. Também
consulta os heaps reais do processo e verifica a rejeição de handle nulo:
nove verificações, recibo config/phase2-runtime-memory-tests.json.

Essa medição é do allocator nativo inteiro. Não é RSS, memória reservada,
overhead do heap, memória exclusiva do jogo ou soma de categorias. Ela não
substitui a medição solicitada para um primeiro frame estável. A enumeração
sequencial também não é uma fotografia atômica de todos os heaps.
