# Verificação por grupos: dependências medidas (2026-11-13)

Levantamento só por leitura dos 122 checks de `tools/verify_phase2.py`
(nenhum build executado). Base para trocar a chave "árvore inteira" por
chaves por grupo. **Ainda não implementado.**

## Grupos

| Grupo | Caminhos |
|---|---|
| runtime (R) | `src/runtime/**`; em `src/kairo/common/`: `semantic_runtime*`, `managed_*`, `allocation_probe.hpp`, `source_allocation_probe.hpp`, `memory_ranges.hpp`, `platform_condition.hpp`, `mono_collator_methods.inc`, `mono_unicode_methods.inc` |
| portable | `src/kairo/common/generated/**` (saída do tradutor; separado do kairo para não invalidar ~40 checks) |
| kairo (K) | resto de `src/kairo/**` e `src/main/**` |
| game (G) | `src/game/**` |
| translator (T) | `translator/**`, `tests/translator/**` |
| reference (F) | `reference/src/**` (o check `reference` lê o submódulo inteiro) |
| config (C) | entradas de `config/` incluídas no snapshot |
| scripts | cada check é chaveado pelo próprio script **mais** os helpers compartilhados abaixo, não pelo grupo `tools/**` inteiro (quase todo check importa `pc_compiler.py`) |

**Helpers compartilhados (invalidam muitos checks):** `tools/pc_compiler.py`,
`tools/csharp_subset/inventory.py`, `tests/translator/run_semantic_fixtures.py`,
`translator/translate.py`, `translator/Translator.cs`,
`translator/EmissionUnits.cs`, `translator/test_portable.py`,
`tools/test_input.py`, `tools/native_api_proof.py`, `tools/generated_build.py`,
`translator/report_paths.py`, `tools/run_native_process.py`,
`tools/build_pc.py`, `tests/translator/gc_test_support.hpp`, `CMakeLists.txt`.

## Mapeamento (resumo)

- **Só scripts/externos (O):** tracing-measurements, float-discriminants-x86,
  float-cal-models, resource-yield-control-model, syntax-inventory-tests,
  cmake-header-dependencies, mono-collation-source, mono-number-format-source,
  service-policy, android-GC/Unicode/math-static.
- **F+O:** gc-source-contract, reference, culture-bound-inventory,
  legacy-assets, offline-analytics-contract.
- **R+O (+T):** tracing-gc-engine, tracing-gc-allocation-visibility,
  ctr-gc-layout, tracing-native-roots, os 14 `runtime-*Fixtures`, streams,
  binary-reader, stream-reader, stack-collection, runtime-type-init,
  runtime-exception-objects, runtime-encoding, string-ops,
  historical-float-parse, runtime-regex, runtime-path,
  mono-collation-differential, collation-license-audit,
  unicode-regeneration-audit, mono-floating-format, scalar-min.
- **T (+R,K):** lowering, content, value-type, matrix-point, shared-field,
  surface-adapter, image-metadata (+F), ref-out, goto-case, service-policy
  lowering, vector-iterator, effective-core-profile (T),
  culture-characterization (T), checkpoint-comparison (T),
  portable-differential, portable-split (+F), diagnostic-leaf-guards,
  incremental-emission, source-allocation-attribution.
- **K+R (APIs da plataforma, com F/C conforme o caso):** input, forms,
  forms-execution, graphics*, offscreen, storage, media, sound, dialog,
  bootstrap-order, surface, system leaves, application-*, text-input,
  diagnostics instrumentation, pc-memory/metrics, threads, globalization,
  shared-fields, allocation-sites, delegate, literal, ui-dispatch,
  prepared-native-textures, direct-kairo-adapter, resource-trace-events (K).
- **Tradução do jogo:** game-diagnostic-inventory (T,F,C,K,O;
  sem G), game-partial-compile (todos, inclusive G).
- **Conservadores (todos os grupos):** progress, repository-tests,
  sdl-and-assets (CMake ALL + glob de `src/game`), content-lowering,
  incremental-emission, float-arm-emission-regression.

## Cuidados que a chave por grupo sozinha não cobre

1. **Produtores que reescrevem entradas:** portable-compile
   (`generated/**`), game-partial-compile (`src/game/**`),
   mono-collation-generation (`mono_*.inc`), service-policy
   (`service-overrides.json`), culture-bound-inventory, gc-source-contract,
   as duas traduções (`*translator-syntax.csv`). A chave de um consumidor tem
   de ser calculada **depois** do produtor rodar.
2. **Artefatos fora da chave:** `build/pc/pls_semantics.lib` (usado por
   scalar-min e diagnostic-leaf-guards sem reconstruir; fresco só se
   sdl-and-assets rodou antes), `build/generated/mono-*`,
   `build/translator/KairoLibrary-*`, `build/culture-inventory/input.json`.
   A chave precisa incluir o hash desses artefatos ou do recibo do produtor.
3. **Recibos lidos entre checks** (`config/phase2-*.json`, fora do
   snapshot): ex. mono-collation-differential lê o recibo de
   culture-characterization, que roda depois na lista. Incluir o hash do
   recibo lido na chave do consumidor.

## Próximo passo

Implementar a chave por grupo com essas regras, mais um teste de mecanismo
(mudar um arquivo de cada grupo e conferir quais checks invalidam), e medir o
tempo de uma mudança pequena por grupo.
