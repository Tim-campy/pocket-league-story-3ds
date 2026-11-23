# `stress_and_poison`: falha intermitente do teste do coletor (item 4b, 2026-11-23)

`tools/test_tracing_gc.py` (`tests/translator/tracing_gc_fixtures.cpp`) falhava em
cerca de 1 de 10 execuções, sempre em `stress_and_poison`: asserção 405 (o objeto
sem raiz não foi recolhido) e, depois de uma primeira correção, 407 (o heap não
termina vazio). O coletor e o teste não mudavam desde `b9c136f` (2026-11-15).

## Diagnóstico (rastreador de raízes)

Fixture compilada com `/DPLS_GC_ROOT_TRACE=1`, com `pls::gc::root_trace_target`
apontado para o objeto escondido. Na execução que falhou:

- `kind=stack thread=0`, palavra no quadro de `pls::gc::make<Node>` (e, em outra
  execução, também no quadro de `Heap::safepoint`) da **própria thread isolada**,
  com o endereço do objeto: o quadro da chamada que o devolveu deixou o endereço
  numa posição que as chamadas seguintes, na mesma profundidade, não sobrescrevem.
  A varredura conservadora da pilha leu essa palavra como raiz.
- Na asserção 407, a thread principal acabara de ler `roots[0]` e entrou em espera
  com o ponteiro em registradores salvos.

É resíduo de pilha e registradores criado pelo próprio teste (o mesmo tipo
documentado em 2026-11-12, `docs/notes/claude-session-1.md`), não defeito do
coletor: um ponteiro conservador verdadeiro deve manter o objeto vivo.

## Correção (teste; asserções iguais)

1. A criação do objeto escondido e as 8 alocações que coletam rodam em duas ações
   `isolated` separadas: a segunda thread começa com a pilha limpa (o `isolated`
   zera a área que suas chamadas vão ocupar).
2. A coleta final usa `collect_without_caller_roots` (o mutador sai do heap e a
   coleta roda numa thread nova), como as demais asserções de heap vazio do arquivo.

Resultado: 0 falhas em 300 execuções (antes: 3 em 30, depois 10 em 100 com uma
tentativa intermediária que limpava a pilha na mesma thread, e 1 em 200 só com o
item 1).

## `diagnostic-leaf-guards`

Causa diferente: o supervisor (`run_native_process`, limite de 10 s) não registrou a
guarda fatal uma vez, com a máquina carregada pela verificação completa; 3/3
isolado. Não relacionado a raízes do coletor. Registrado como intermitente de
ambiente.
