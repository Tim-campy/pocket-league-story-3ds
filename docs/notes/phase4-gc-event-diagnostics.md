# Diagnóstico de coletas do vídeo — 2026-11-27

Primeira alteração em `src/runtime/` depois do congelamento
`v1.0.0-faithful`. Autorizada pelo usuário exclusivamente para diagnóstico:
o perfil automático precisa correlacionar pausas com a quantidade de objetos
e o tamanho do heap, sem criar um `std::vector` a cada quadro.

## Limite da alteração

`GcEvent`, declarado em `src/kairo/common/semantic_runtime.hpp`, recebe quatro
inteiros: bytes e objetos antes/depois. `gc_collect_as`, em
`src/runtime/managed_gc_bridge.inc`, copia esses valores das duas estatísticas
que já obtinha. A cópia ocorre dentro da seção crítica já existente de registro
do evento, depois da medição da pausa. Não há leitura adicional das estatísticas,
alocação, trava nova nem alteração da ordem das operações preexistentes.

A sobrecarga `gc_events_after(sequence, output, capacity, dropped)` escreve em
memória fornecida pelo chamador. Mantém os eventos mais recentes que cabem e
conta tanto os sobrescritos pelo anel existente de 64 posições quanto os que
não cabem na capacidade informada. Ponteiro nulo equivale a capacidade zero.
O leitor antigo que devolve `std::vector<GcEvent>` permanece intacto.

Algoritmo, limiares, agendamento, marcação, varredura, sincronização e envenenamento
do coletor não foram objeto desta autorização.

## Imagens e texturas

`Image` já é um objeto gerenciado. Seu `trace_edges` visita referências a bytes
de origem, nomes, tarefas e outras imagens. Os vetores nativos de pixels e o
handle `gpu_image_` não são arestas gerenciadas. A memória linear/VRAM da GPU
não passa a ser percorrida pelo coletor por causa deste diagnóstico. A destruição
do handle continua enfileirando a liberação para o ponto seguro da thread de
desenho. Mais objetos gerenciados com vídeo podem explicar parte da diferença
de pausas, mas a causa e a contribuição quantitativa são UNKNOWN até a nova
medição; não se pode deduzi-las apenas de 114 ms versus 435 ms.

## Validação

- Leitura limitada: cinco execuções aprovadas, com alocação proibida durante
  as chamadas, limites e descarte conferidos e comparação com o leitor antigo
  (`python tools/test_gc_event_buffer.py`, 3,2 s incluindo compilação).
- Coletor: cinco execuções aprovadas, 408 assertivas em cada uma, incluindo
  `stress_and_poison`; primeira compilação/execução por `test_tracing_gc.py`
  em 6,4 s, seguida de quatro execuções do mesmo fixture.
- PC: build aprovado em 712,0 s; check aprovado em 1,8 s.
- Ainda pendentes nesta revisão local: verificação completa, roteiros completos
  com estresse e comparação das funções de coleta do ARM nulo. Nenhum push
  contendo este diagnóstico está autorizado nesta entrega.
