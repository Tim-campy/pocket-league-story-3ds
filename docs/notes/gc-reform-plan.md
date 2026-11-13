# Plano curto: reforma do coletor (aguarda aprovação)

Estado: **proposta**. Só começa se o v5 falhar no New 3DS e o usuário aprovar.
Se o v5 passar, este plano vira item do `docs/backlog.md` (provável requisito
para o 3DS original).

## Por que

Medição no Azahar (suíte, New, 2026-11-13), coletas na janela de menu com
~25 mil objetos vivos e ~16,5 MB retidos:

| Coleta | Objetos mortos | Pausa |
|---|---|---|
| 21 | 10.366 | 69,6 ms |
| 22 | 2.203 | 30,9 ms |
| 23 | 1.085 | 25,2 ms |

Ajuste linear: ~21 ms fixos (marcação + contabilidade de faixas externas para
25 mil vivos) + ~4,6 µs por objeto morto. No PC, a remoção de mortos já era
27 de 36 ms. O custo por morto vem das estruturas externas por objeto: registro
em `blocks` (tabela de hash), entrada em `ranges` (`std::pmr::map`, árvore),
balde em `fixed_pages` e um `free` do `malloc` por objeto. O custo fixo vem de
percorrer essas mesmas estruturas e de `account_retained`, que revisita as
faixas de todos os vivos a cada coleta e a cada frame.

Reduzir a frequência (v5) cortou de 6 para 3 coletas no menu, mas a coleta de
transição de tela continua acima de 50 ms (previsão no console ~105 ms).

## O que muda (só `src/runtime/tracing_gc.*`; interface `gc::Heap` mantida)

1. **Heap por classes de tamanho:** blocos de 16 KiB alinhados, cada um com
   objetos de uma classe (16, 32, 48 … 2 KiB). Cabeçalho do bloco: classe,
   descritor por objeto em vetor compacto, bitmap de marcas, bitmap de
   alocados, lista livre.
2. **Marcas em bitmap** no cabeçalho do bloco; limpar marcas = zerar bitmaps.
3. **Tabela de páginas** (endereço >> 14 → bloco) para a pesquisa conservadora
   de ponteiros de pilha e registradores e para `contains`/`identity`. Substitui
   `blocks` + `ranges` + `fixed_pages` para objetos pequenos.
4. **Objetos grandes** (> 2 KiB) em lista própria, ordenada por endereço, com
   o registro atual.
5. **Varredura preguiçosa por bloco:** a pausa só marca; cada bloco é varrido
   na próxima alocação da sua classe (ou em fatias no fim do frame, com
   orçamento de tempo). Destrutores nativos dos mortos rodam na varredura do
   bloco, como hoje, sem chamar código gerenciado.
6. **Nenhuma estrutura externa por objeto.** `identity` passa a ser um
   contador de geração por fenda (slot), gravado no cabeçalho do bloco.
   Faixas externas (`memory_ranges`) contabilizadas por delta na alocação e
   na varredura, não revisitadas a cada frame.

Fica igual: marcar e varrer sem mover, preciso no heap pelos descritores,
conservador em pilhas e registradores, pontos seguros, threads cooperativas,
`scrub_below`, rastreio de raízes de diagnóstico, liberações explícitas
imediatas.

A tentativa anterior de varredura preguiçosa (rejeitada em 2026-11-12) mantinha
as estruturas por objeto; o custo só mudava de lugar. Aqui a varredura de um
bloco é percorrer dois bitmaps.

## Meta e medição

- Pausa de transição no menu (Azahar) < 15 ms; previsão no console < 25 ms.
- Mesmo método de antes e depois: suíte no Azahar com `--gc-trace`, motor
  isolado no PC, e o benchmark v6 no aparelho.

## Testes

- `tools/test_tracing_gc.py` (401 asserções) sem enfraquecer nenhuma; novas
  asserções para classe de tamanho, troca de bloco, objeto grande, geração de
  fenda (identidade não reaproveitada), varredura preguiçosa interrompida por
  nova coleta, ponteiro interior conservador em cada classe.
- `GcFixtures` e os demais fixtures semânticos; `test_portable.py`.
- Fixture CTR do coletor (`tools/run_ctr_gc_fixture.py`) no Azahar.
- Suíte ARM completa (boot, menu, partida) e verificação completa (`--full`).

## Esforço estimado

| Etapa | Estimativa |
|---|---|
| Alocador por classes + tabela de páginas + objetos grandes | 1,5 sessão |
| Marcas em bitmap, identidade por geração, contabilidade por delta | 1 sessão |
| Varredura preguiçosa por bloco | 0,5–1 sessão |
| Testes novos, fixtures, CTR, suíte ARM, v6 | 1 sessão |
| **Total** | **4–4,5 sessões** |

Risco principal: a pesquisa conservadora e a identidade de objetos são usadas
por `managed_alive`/`managed_identity` (referências fracas e caches). A
mudança de identidade por geração precisa preservar "objeto morto nunca
reaparece vivo com a mesma identidade".
