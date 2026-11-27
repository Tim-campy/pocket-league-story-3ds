# tools/

**Porta de entrada: `python tools/dev.py <subcomando>`** (build, run, check, routes, full,
arm, ci, clean). Quem edita o jogo quase nunca precisa chamar outra ferramenta direto.
Tempos e regras de uso: `AGENTS.md`, seção 5.

## Ciclo de edição do jogo (chamadas pelo `dev.py`)

| Ferramenta | Para quê |
|---|---|
| `dev.py` | build/run/check/routes/full/arm/ci/clean |
| `build_pc.py` | build e execução do PC (diagnóstico de `src/game`, roteiros, capturas) |
| `build_arm11_null.py` | build do 3DS (backend nulo, `.3dsx`) |
| `run_readable_routes.py` | conjunto de roteiros (paralelo, refaz execuções atingidas por suspensão) |
| `verify_phase2.py`, `verification_groups.py` | verificação completa (os checks arquivados no congelamento ficam de fora) |
| `format_game_code.py` | formata o código do jogo (só espaços; recusa outra mudança) |
| `check_readable_support.py`, `check_readable_literals.py` | checks do código do jogo (com `tests/repository/test_gc_field_tracing.py`) |
| `check_repository.py` | regras de conteúdo antes do commit (formatos proibidos, 2 MB) |

## Provas e diagnóstico

| Ferramenta | Para quê |
|---|---|
| `compare_objects.py`, `cpp_tokens.py`, `preprocess_game.py` | provar que uma mudança é só de forma (objetos, tokens, pré-processador) |
| `compare_route_runs.py` | comparar duas execuções de um roteiro (passos, telas, saves) |
| `make_review_bundle.py` | pacote de código para revisão externa (`build/review/`) |
| `saves/diff_record.py` | diferenças campo a campo entre dois saves |
| `run_arm11_null.py`, `prepare_arm11_sd.py`, `benchmark_report.py` | Azahar e benchmark no New 3DS (`docs/benchmark-hardware.md`) |
| `report_ctr_video.py` | tabelas por tela, percentis e coletas dos arquivos `video-N-*` do perfil automático CTR |
| `profiling/` | perfis e comparação de código de máquina (`compare_arm_functions.py`) |
| `perf_bisect.py` | bissecção de regressão de desempenho |

## Assets do APK do usuário (pipeline local)

`extract-assets`, `convert-assets`, `convert_assets.py`, `prepare_ctr_assets.py`,
`build_asset_catalog.py`, `ctr_textures.py`, `inventory_assets.py` — ver `docs/assets.md`.

## Usadas pela verificação (não chamar à mão)

`test_*.py`, `inventory_*.py` (e os `*.cs` que elas compilam), `probe_*.py`,
`inspect_android_*.py`, `setup_*.py`, `generate_mono_collator.py`, `audit_collation_license.py`,
`report_tracing_measurements.py` (lê `build/ctr-gc-fixture/`, gerado por
`build_ctr_gc_fixture.py` + `run_ctr_gc_fixture.py`), `ctr-gc-fixture/`, `null-benchmark/`,
`cmake/`, `callgraph/`, `csharp_subset/`, `fp-discriminants/` (também o oráculo numérico
no Android, pendente com o usuário: `docs/notes/criterion4a-status.md`).

## Registro (não usar no trabalho atual)

- `translator-archived/` — o tradutor C# → C++ (aposentado no congelamento; nunca rodar).
- `archived/` — ferramentas da Fase 2 e do congelamento que nada mais usa.
- `progress`, `translate` — recusam rodar (livro-razão congelado; tradutor arquivado).
- `gc-ablation/`, `gc-prototype/` — experimentos do coletor da Fase 2 (citados em notas).
