# Sessão Claude 1 — orientação, memória do boot ARM e retenção conservadora

Datas: 2026-11-11 e 2026-11-12. Base: `45ebd7d`. Fatos medidos; hipóteses marcadas.

## 1. Ambiente: código de página do console

`cl.exe` e `csc` localizam mensagens no código de página de saída do console
(OEM 850 nesta máquina). O prefixo do `/showIncludes` saiu como
`Observa\x87\xc6o` (850) contra `Observa\xc3\xa7\xc3\xa3o` (65001), medido
alternando `SetConsoleOutputCP`. O Ninja compara bytes com o prefixo gravado em
UTF-8 pelo CMake. Falharam `cmake-header-dependencies` e `portable-differential`
(decodificação UTF-8). Correção: `tools/pc_compiler.py:utf8_console()` fixa 65001
durante o processo e restaura ao sair; chamado por `environment()`,
`verify_phase2.py`, `test_portable.py` e `run_semantic_fixtures.py`.

## 2. Verificação retomável

`verify_phase2.py` grava um recibo por check em
`build/phase2-verification/receipts/`, com chave = hash do snapshot de código,
APK, DLLs gerenciadas, produtor e comando. Relançar pula checks válidos;
`--full` força tudo. A aprovação final recalcula o estado e recusa se algum
recibo não vale para a árvore no fim. `--jobs N` (padrão 1) define
`PLS_BUILD_JOBS`, que limita Ninja/`cmake --build` em `generated_build.py`,
`build_pc.py` e testes que compilam. Pico de memória por check medido com Job
Object (toda a árvore de processos). Execução completa com `--jobs 1`: 0,7 h.

| Check mais pesado | Pico comprometido |
|---|---:|
| game-partial-compile | 1.258.958.848 bytes |
| sdl-and-assets | 608.370.688 bytes |
| portable-split-differential | 608.079.872 bytes |

Resultado negativo: a primeira execução retomável aprovou os 122 checks, mas a
aprovação foi recusada porque `config/collation-license-audit.json` (recibo,
reescrito pelo próprio check) entrava no snapshot de código. Corrigido.

## 3. Salto de memória no boot ARM (29 → 94 MB)

Sonda de pilha (`build/arm-allocation-failure-probe`, Azahar New 100%):
`std::bad_alloc` em `MemoryStream.ToArray`, a partir de
`JarInflater.GetData` ← `ResourceManager.LoadStart` ← `TitleForm.Init`.
`LoadStart` chama `RunOnUiThread(..., true)` em laço; no port isso executa
em linha na thread de UI, então todo o carregamento do título ocorre num único
`host_update`. O coletor só verificava o limite no fim do frame: entre o frame
de boot 480 e a falha, 0 coletas, registro 26.664 → 38.265 objetos, `malloc`
28.893.376 → 95.370.432 bytes. Causa: lixo das cópias por arquivo de
`GetData`, nunca coletado durante o carregamento.

Correção (plataforma/runtime; `LoadStart` intacto):

- `cs::gc_loading_safepoint()` coleta se o limite de volume foi atingido;
  chamado no retorno da chamada `RunOnUiThread` em linha **mais externa**
  com espera (`IApplication::inline_ui_depth`).
- Resultado negativo registrado: a primeira versão coletava também em
  chamadas aninhadas (`Image.Use` é uma chamada em linha dentro da fatia).
  A coleta (~23 ms no emulador) entrou no cronômetro de 150 ms da fatia e
  disparou o comportamento original de retornar antes do incremento: o mesmo
  item foi recarregado indefinidamente (coletas 100–876 idênticas, 19.590 →
  18.795 objetos). Nessa execução o `malloc` estabilizou em 29.285.528 bytes;
  a primeira coleta reduziu 29.154 objetos a 6.891.
- No CTR, `collect`/`inspect` passaram a esperar a rendezvous com sondagem de
  1 ms com prazo (`wait_condition_for`), como o restante do runtime faz por
  causa de `arm11-condition-wakeup.md`. Efeito isolado: pendente (ver §6).
- `--gc-trace` em `build_arm11_null.py` (`PLS_GC_TRACE`): uma linha por coleta,
  apenas diagnóstico.

## 4. Retenção conservadora nos testes do coletor

Diagnóstico `PLS_GC_ROOT_TRACE` (desligado por padrão, `tracing_gc.cpp`):
após a marcação, reenumera as raízes sem marcar e informa as que alcançam
`root_trace_target`, com tipo, palavra a partir do SP, vizinhos, quadro
(desenrolado com `RtlVirtualUnwind` no coletor) e vtable do objeto (DbgHelp).

| Fixture | Raiz medida | Classificação |
|---|---|---|
| GcFixtures, asserção 11 | slot não inicializado do quadro de `Heap::collect` (thread principal), valor interior a buffer de delegate em endereço reaproveitado | resíduo de pilha |
| GcFixtures, asserção 8 | thread principal em espera nativa; slot vizinho a endereços de retorno velhos de `Array<int>::at`; valor interior a `Array<Object*>` reaproveitado | resíduo de pilha |
| Stack, "Popped slot releases…" | mesmo slot (palavra 75) do quadro de `Heap::collect`, contendo o item marcado na coleta anterior | resíduo do próprio coletor (defeito) |

A varredura cobre apenas a parte viva: do SP capturado até o topo
(`copied_low` = SP de `capture`). Nenhuma área abaixo do SP é varrida.

Correções:

- Coletor: `Heap::collect` executa o corpo e depois zera até 16 KiB de pilha
  morta abaixo do chamador, limitado ao fundo registrado da pilha da thread
  (pilhas pequenas do CTR). Remove a autorretenção de um ciclo.
- Testes: coletas de `GcFixtures` em thread de trabalho unida
  (`isolated_gc_collect`) e `scrub_stack()` antes de cada ciclo. Asserções
  inalteradas.

| Medida | Antes | Depois |
|---|---:|---:|
| GcFixtures native-only, ambiente completo | 19/40 falhas | 0/400 e 0/200 |
| GcFixtures, ambiente vazio | 2/40 | — |
| Stack GC | 40/40 falhas (20/20 vazio) | 0/200 |
| Motor isolado | 401 PASS | 401 PASS |
| Fixture CTR (New/Old) | 403/403 | 403/403 |

## 5. PC: partida completa

Release 43 (save da tentativa 31, entradas da 41): 5.753 frames, 709 métodos
do jogo e 197 portáveis, sem lacuna; capturas mostram fim da partida (0–0) e
retorno à gestão. A Release 41 terminou 0–1: placar não determinístico.
Resultado negativo: a Release 42 omitiu `--diagnostic-save-from-attempt 31` e
parou na seleção de saves vazia.

## 6. Pendências

Boot ARM até título/menu/partida nos perfis New e Old com a correção de
fatias; isolamento da sondagem da rendezvous; relógio virtual para semente
fixa; benchmark de hardware; limpeza adiada (candidato em
`build/claude-gc-lazy/`, não medido).
