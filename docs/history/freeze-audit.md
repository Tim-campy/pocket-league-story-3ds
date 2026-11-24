# Auditoria pré-congelamento (preparada em 2026-11-20; aguardando aprovação)

Nada aqui foi executado sobre `main`. O congelamento só acontece com aprovação
explícita do usuário (`AGENTS.md`, seção 4). Este documento reúne o estado de
cada critério com a evidência, o que muda de regra depois do congelamento, as
pendências que continuam abertas, o procedimento exato e o risco do ponto
flutuante. O resultado do ensaio em ramo separado fica na seção 6.

## 1. Critérios do congelamento

| Critério | Estado | Evidência |
|---|---|---|
| 1. Tradução completa | **cumprido** (aprovado em 2026-11-14) | `docs/history/PROGRESS-phase2.md`; 1.860 métodos emitidos, 0 rejeitados, 0 slots virtuais pendentes; `config/phase2-game-translation.json` |
| 2. Coletor e desempenho | **cumprido** — canônico (v6, 2026-11-14) e legível (três execuções com `result.txt`, 2026-11-20; marcado pela regra do usuário) | `docs/benchmark-hardware.md`; legível: `build/c6b-sd-readable/execucao-1..3`, `tools/hardware_window_report.py` |
| 3. Percurso completo no PC | **cumprido** (aprovado em 2026-11-16) | `docs/history/PROGRESS-phase2.md` (1.044/1.248 alcançáveis); C6b: legível = canônico na união de cobertura (1.573 métodos, `build/c6b-route-compare.json`) |
| 4a. Fidelidade do código gerado | **em andamento** | regra de ponto flutuante confirmada em emulador Android ARM; `ref` de campo nulo e `JMath.Sin(-0)` decididos; `BeforeFieldInit` e construtores iguais ao Mono (`type-init-translated`); falta a repetição em aparelho Android (`docs/notes/criterion4a-status.md`) |
| 4b. Telas | movido para a Fase 4 (decisão de 2026-11-16) | — |
| 5. Código legível e aprovado | **cumprido** (marcado pela regra do usuário de 2026-11-20, com o benchmark dentro do critério 2) | `docs/notes/readable-final-pass.md` (A1–A7, C6b etapas 1–4); jogo inteiro compila no PC e no ARM, roda os roteiros do critério 3, verificação completa 126/126 |

### Critério 2 no código legível (New 3DS XL, modelo 4, três execuções, 2026-11-20)

Mesmo pacote e mesmas janelas da v6 (menu 191–420, partida 1.201–1.500),
analisados pelo mesmo script para os dois (`tools/hardware_window_report.py`):

| Medida | v6 canônico | legível (exec. 1 / 2 / 3) | limite |
|---|---|---|---|
| Menu: média | 6,8–6,95 ms | 9,56 / 9,42 / 9,41 ms | — |
| Menu: coletas de `Finish` (pausa) | 105–111 / 45–48 / 40–41 ms | 107,6 / 48,4 / 40,5 — 103,5 / 45,8 / 39,4 — 103,8 / 45,8 / 39,8 ms | 150 ms |
| Menu: maior quadro com essas coletas | 112,7–118,8 ms | 117,6 / 113,8 / 113,9 ms | 150 ms |
| Menu: maior quadro sem coleta | ≤ 11,0 ms | ≤ 10 ms (p95 8,8–9,0) | 50 ms |
| Partida: média | 10,49–11,77 ms | 18,24 / 16,96 / 17,27 ms | 20 ms |
| Partida: maior quadro | 14,1–25,9 ms | 20,2 / **132,5** / 20,3 ms | 50 ms (estável) |
| Até o título | 14,3 s | 13,36–13,39 s | — |

As três coletas do menu repetem as da v6 (mesmos quadros 361, 397, 415, mesmas
pausas): são as explícitas de `Finish form.SubForm`, transição pela regra.

**Regra ampliada (decisão do usuário, 2026-11-23).** As duas coletas explícitas da
partida em `GameManager` (`Update`, meio do tempo de jogo, `GameManager.cs:446`;
`ChangeState(0)`, reinício após gol, `GameManager.cs:507`) também são transição,
limite 150 ms. O código legível marca cada `JSystem.Gc()` do jogo com o método C#
que a pediu (`pls::cs::GcCallSite`), e o benchmark registra essa origem; antes saía
`source=-`. Benchmark de 2026-11-23 (New 3DS XL, três execuções): essas coletas com
pausa 109–114 ms e quadro 121–124 ms (2 de 3 execuções); partida 9,7–10,6 ms; menu
6,5–6,7 ms. **Critério 2 cumprido** com a regra ampliada.
**A execução 2 tem uma coleta de 116,6 ms no quadro 1.353 da partida** (quadro
de 132,5 ms) que não ocorreu nas execuções 1 e 3 nem no Azahar. A classificação
dela (volume, carregamento, transição ou explícita) só está no `result.txt`
daquela execução, que não foi devolvido e foi sobrescrito pelas seguintes:
`UNKNOWN`. Se for volume, viola o limite de 50 ms do jogo estável.

**Rodada definitiva (três execuções com `result.txt`, 2026-11-20 15:40–15:49):**

| Medida | exec. 1 | exec. 2 | exec. 3 | limite |
|---|---|---|---|---|
| Menu: maior quadro estável | 13,75 ms | 13,46 ms | 13,57 ms | 50 ms |
| Menu: transições (3; maior pausa / maior quadro) | 104,4 / 114,5 ms | 103,9 / 114,0 ms | 103,8 / 113,9 ms | 150 ms |
| Partida: média | 16,96 ms | 18,68 ms | 17,27 ms | 20 ms |
| Partida: maior quadro (estável) | 19,09 ms | 20,47 ms | 20,29 ms | 50 ms |
| Coletas na partida (todos os tipos) | 0 | 0 | 0 | — |
| Até o título | 13,39 s | — | — | — |

Todas as medidas dentro dos limites; **critério 2 cumprido para o código
legível**. A coleta não classificada da rodada anterior (1 de 3 execuções, quadro
1.353) não se repetiu nas três novas; fica registrada. Observação: na execução 3,
`result.txt` é da rodada nova e `stdout.log`/`stderr.log` são da anterior; os
números acima vêm dos três `result.txt`.

**Resultado negativo — desempenho.** A partida legível é cerca de 50 % mais
lenta que a v6 (média 17–18 ms contra 10,5–11,8 ms; margem de 1,8 ms até o
limite de 20 ms). No Azahar (mesmo emulador, CPU média por quadro): canônico
atual 8,63 ms no menu e 15,94 ms na partida; legível 11,24 e 19,38 ms; v6 na
partida 8,87 ms. Há duas perdas somadas: (1) o canônico atual já é mais lento
que a v6 (as inicializações de tipo na entrada de métodos e construtores, A1 e
`BeforeFieldInit`, são o suspeito principal, ainda não medido) e (2) o legível
custa 22–30 % a mais que o canônico atual. **Recomendação: não marcar o
critério 2 para o legível antes de (a) repetir a execução com o `result.txt` de
cada rodada e (b) medir e reduzir a perda.**

## 2. O que muda de regra depois do congelamento

`AGENTS.md`:
- Seção 1: o C++ gerado pela última vez passa a ser o código-fonte; o tradutor é
  aposentado.
- Seção 4 (congelamento): tag `v1.0.0-faithful`; tradutor em
  `tools/translator-archived/`, somente leitura; `src/game/` editável.
- Regras 1–5 ("antes") deixam de valer; passam a valer as 6–9: edição direta de
  `src/game/`, toda mudança de comportamento em commit próprio e registrada em
  `docs/changes-from-original.md`, correções de fidelidade feitas à mão e
  registradas como tais, mudança de formato de save exige decisão do usuário,
  runtime evolui sem mudar a interface usada pelo código do jogo.
- Regra 4 ("nenhuma verificação de nulo ou de limites é removida") continua,
  pela regra 13 ("pare e pergunte" para remoção de verificações).
- Fase 5 (melhorias) passa a ser possível.

`CLAUDE.md`:
- "`src/game/` é saída do tradutor; erro de tradução se corrige no tradutor,
  regenerando" deixa de valer.
- "A lógica do jogo não muda antes do congelamento" deixa de valer; melhorias
  saem de `docs/backlog.md` com decisão do usuário.
- Comandos que deixam de existir: tradução do jogo, `tools/progress` sobre o
  livro-razão de tradução, `translator/readable.py`, `diagnostic_snapshot.py`
  (o diagnóstico passa a instrumentar a árvore editada), diferenciais do
  tradutor (`test_lowering`, `test_portable`, `readable.py lowering`).
- Checks que passam a valer sobre código editado à mão: mapa do coletor e de
  raízes (`tests/repository/test_gc_field_tracing.py src/game`), compilação PC e
  ARM, conjunto de roteiros do critério 3, verificação completa reduzida aos
  checks que não regeneram.

## 3. Pendências que continuam abertas e por que não bloqueiam

| Pendência | Por que não bloqueia |
|---|---|
| Teste numérico em aparelho Android (4a) | A regra foi confirmada no emulador Android ARM; o aparelho é repetição. Se divergir, a correção vira correção de fidelidade à mão (regra 7). Custo estimado na seção 5. |
| `AppData.DrawMoney2` | Alcançável, com receita (formação com 5 numa linha); decisão de 2026-11-16: pendência documentada, não bloqueante; código traduzido e compilado, só não executado. |
| `MapMain.UpdateTrainingCoatNum` | Alcançável só depois do evento 345; mesma decisão. |
| Comparação de telas (4b) | Movida para a Fase 4; depende da plataforma, que continua editável. |
| Reforma do coletor | Adiada pelo usuário em 2026-11-13; o runtime pode evoluir depois do congelamento sem mudar o código do jogo (regra 9). |
| Largura de 400 | Corrigida na plataforma em 2026-11-20 (leitura da orientação física); não toca o jogo. |

**Pendências que podem bloquear (decisão do usuário):** a perda de desempenho
do legível e a coleta não classificada (seção 1).

## 4. Procedimento exato do congelamento

Pré-condições: os cinco critérios aceitos pelo usuário; aprovação explícita.

1. **Última geração em modo legível.** `python translator/readable.py diagnostic`
   não serve (instrumentação de diagnóstico); a geração final é
   `translate.py --readable` para KairoLibrary e Assembly-CSharp, sem
   `--readable-diagnostic`, formatada com `translator/readable.clang-format`.
   O código com `PLS_METHOD_SCOPE` não entra na árvore final (ver item 8).
2. **Verificação completa integral:** `python tools/verify_phase2.py --apk APK --original-managed MANAGED --jobs 1 --full`.
3. **Conjunto de rotas:** `tools/run_readable_routes.py` sobre a árvore legível
   (com estresse do coletor) e `tools/compare_route_sets.py` contra o canônico;
   aceitar só com a mesma união de cobertura e 0 alertas.
4. **Substituição de `src/game/`** pela árvore legível do jogo e de
   `src/kairo/common/generated/` pela da KairoLibrary portável, em um commit
   único; o CMake volta aos padrões (os caminhos `PLS_GAME_SOURCE_DIR` e
   `PLS_PORTABLE_GENERATED_DIR` já apontam para essas pastas).
5. **Cabeçalhos dos arquivos:** troca de "GENERATED (readable mode) by
   translator/Translator.cs ... Do not edit." pelo cabeçalho de
   `docs/maintaining-game-code.md` (origem: reconstrução de
   `v1.0.0-csharp-reconstruction`, tradução por `v1.0.0-faithful`, editável).
6. **Tag `v1.0.0-faithful`** sobre esse commit, depois da verificação e das rotas.
7. **Tradutor** movido para `tools/translator-archived/` com nota "não executar
   sobre `src/game/`"; scripts que o chamam passam a falhar com mensagem clara.
8. **Instrumentação de diagnóstico:** depois do congelamento, o diagnóstico
   (roteiros, salvaguarda, cobertura por método) precisa de outra fonte de
   `PLS_METHOD_SCOPE`. Opções: manter a macro nos arquivos (custo zero fora do
   diagnóstico, mas ruído no código) ou um passo de build que a injete. Decisão
   do usuário (ver seção 6).
9. **Checks que passam a valer:** mapa do coletor e raízes sobre `src/game`
   (obrigatório), compilação PC e ARM, roteiros, verificação sem regeneração.
10. **O que deixa de rodar:** tradução, diferenciais do tradutor
    (`test_lowering`, `test_portable`, `readable.py lowering`, `test_ref`,
    `type-init-translated`, modelo de ponto flutuante por emissão), livro-razão
    de tradução, snapshot de diagnóstico do canônico.

## 5. Risco do ponto flutuante (3d)

A regra (operações `float` em binary64, estreitamento em armazenamentos,
conversões, argumentos e retornos) **não está concentrada** nos tipos
numéricos do runtime (`src/kairo/common/numeric_types.hpp`: `Single`,
`FloatEval`). Esses tipos cobrem locais e parâmetros por valor; campos,
elementos de array e retornos mantêm os tipos comuns, e a regra aparece
explícita no código do jogo legível (árvore de 2026-11-19):

| Forma explícita | Ocorrências no jogo | Arquivos |
|---|---|---|
| `static_cast<double>(...)` (alargamento) | 3.844 | 41 |
| lambdas `-> double` (expressão float com operandos de ordem visível) | 410 | 26 |
| `static_cast<float>(...)` (estreitamento ou literal negativo) | 4.261 | 54 |
| `pls::cs::Single(...)` / variáveis `pls::cs::Single` | 215 / 858 | 26 / 43 |
| `conv_i32/conv_i64` (float → inteiro sem estreitar) | 418 | 37 |

Os arquivos com mais alargamentos: `game.Ball` 886, `game.Player` 453,
`game.TPlayer` 411, `game.Team` 368, `game.Camera` 180, `TextLayout` 174.
KairoLibrary portável: 11 alargamentos. **Se o aparelho Android divergir**
(por exemplo, se as operações forem binary32 puras), a correção manual seria
em ~8.000 pontos de ~55 arquivos; a alternativa barata é **antes do
congelamento** estender o C1 a campos, arrays e retornos (os pontos passam a ser
operadores de `Single`/`FloatEval`, e a regra fica num arquivo só). Recomendo
decidir isso antes de congelar.

## 6. Ensaio em ramo separado

Executado em 2026-11-20 no ramo local `freeze-rehearsal` (commit `9e323be`, a
partir de `eddc7b9`), worktree `.claude/worktrees/freeze-rehearsal`. **Nenhuma tag,
nenhum push.** Fonte: a árvore legível de diagnóstico `build/c6b-readable-diag-2`
(a mesma validada no C6b).

### Resultado

| Passo | Resultado |
|---|---|
| Troca de `src/game` (404) e `src/kairo/common/generated` (115) pela árvore legível | feita; 519 arquivos com o cabeçalho de código mantido; corpos idênticos à árvore validada (comparação por arquivo) |
| Tradutor movido para `tools/translator-archived/` (+ `README-ARCHIVED.md`) | feito |
| Build PC (`pc_game`, CMake padrão, sem tradutor) | **PASS** — 7,37 MB, 109 s |
| Build ARM (`build_arm11_null.py --frozen`) | **PASS** — `.3dsx` 7.529.268 B, 1.956 s, 0 erros |
| Diagnóstico PC (`build_pc.py --frozen-diagnostic`) + `menu-explore` | **PASS** — passo 193, quadro 11.283 (igual ao legível), 0 alertas |
| Conjunto de 85 roteiros (`run_readable_routes.py --frozen`) | **PASS** — 87 execuções, 85 concluídas, 0 alertas, 0 lacunas; incompletas `actions` e `dialogs-exit`, iguais ao legível |
| Cobertura (união, métodos chamados) | 1.577 contra 1.578 do legível; só falta `PlayerData.Start_aura` (simulação da partida, depende da velocidade) |
| Verificação `--full` (seguindo após falhas) | 94 PASS, 32 FAIL — tabela abaixo |

### O que dependia do tradutor (e foi ajustado no ensaio)

1. **Partes `.inc`:** unidades grandes (`form.SubForm`) vêm em partes `.inc`; a
   troca precisa copiá-las e o cabeçalho também se aplica a elas (o primeiro build
   falhou por isso).
2. `build_pc.py` importava `translator/report_paths.py` → movido para `tools/`.
3. Builds ARM e de diagnóstico exigiam o `manifest.json` do snapshot gerado →
   modos `--frozen` (ARM) e `--frozen-diagnostic` (PC), que compilam o próprio
   `src/game`; o CMake aceita `src/game` sem manifesto.
4. Roteiros: `run_readable_routes.py --frozen --source-repo` (cópias de roteiro e
   saves continuam no histórico canônico).
5. **Instrumentação de diagnóstico** (`PLS_METHOD_SCOPE`, `api_call`,
   `diagnostic_runtime.hpp`) vem do tradutor. Proposta: congelar **com** as
   macros (sem efeito fora do build de diagnóstico); sem elas, roteiros,
   salvaguarda e contadores por método param.

### Checks que falham sem o tradutor (32)

| Classe | Checks | Destino proposto |
|---|---|---|
| Executam ou importam o tradutor (diferenciais e rebaixamento) | `portable-compile`, `portable-differential`, `portable-split-differential`, `lowering-differential`, `content-lowering`, `value-type-lowering`, `matrix-point-lowering`, `shared-field-lowering`, `surface-adapter-lowering`, `image-metadata-lowering`, `ref-out-lowering`, `goto-case-lowering`, `service-policy-lowering`, `source-allocation-attribution`, `diagnostic-leaf-guards`, `incremental-emission`, `vector-iterator`, `checkpoint-comparison`, `type-init-translated`, `float-arm-emission-regression`, `direct-kairo-adapter` | arquivados com o tradutor (validaram a tradução; o resultado está congelado) |
| Regeneração do jogo | `game-diagnostic-inventory`, `game-partial-compile` | param (não há mais geração) |
| Leem `build/translator/KairoLibrary-input.json` (artefato do tradutor) | `input`, `input-frame-source-probe`, `debug-input-snapshot`, `application-orientation` | reescrever para ler `src/kairo/common/generated` (testes da plataforma; devem continuar) |
| Livro-razão e alcançabilidade | `progress` (exige evidência da Fase 2 ligada ao gerado), `reachability-analysis` (monta o pedido de tradução) | `progress`: congelar o livro-razão; alcançabilidade: arquivar (critério 3 fechado) |
| `repository-tests` | 2 de 126 (`test_report_paths`, `test_diagnostic_leaf_manifest`) | ajustar caminho / arquivar |
| Ambiente do worktree (não é o tradutor) | `tracing-measurements` (falta `build/ctr-gc-fixture` local), `private-resource-catalog` (junção de `assets/`) | nada; passam no repositório principal |

Também param fora do `verify`: `update_phase2_progress.py`, `benchmark_generated_build.py`,
`tests/translator/run_*.py` (fixtures que traduzem C#), `fp-discriminants/*`.

### Checks que passam a valer sobre código mantido

`tests/repository/test_gc_field_tracing.py src/game` (mapa do coletor e raízes) e a
auditoria de raízes passam a ser a garantia do coletor para edições à mão; os 85
roteiros com estresse continuam (via `--frozen-diagnostic`).

### Conclusão

O congelamento é executável: PC e ARM compilam e o jogo percorre os 85 roteiros a
partir da árvore congelada, sem o tradutor. Antes do congelamento real faltam
(a) aplicar os ajustes 1–4 no `main`, (b) reescrever os 4 testes de entrada que
leem o artefato do tradutor, (c) decidir a instrumentação (item 5) e o destino
dos 23 checks arquivados, e (d) a aprovação do usuário.

## 7. Checks depois do congelamento (decisão do usuário, 2026-11-21)

Destino dos 32 checks que falharam no ensaio, conforme a proposta aprovada:

| Destino | Checks |
|---|---|
| **Arquivados com o tradutor** (validaram a tradução; o resultado está congelado e coberto pelos roteiros) — 21 | `portable-differential`, `portable-split-differential`, `lowering-differential`, `content-lowering`, `value-type-lowering`, `matrix-point-lowering`, `shared-field-lowering`, `surface-adapter-lowering`, `image-metadata-lowering`, `ref-out-lowering`, `goto-case-lowering`, `service-policy-lowering`, `source-allocation-attribution`, `diagnostic-leaf-guards`, `incremental-emission`, `vector-iterator`, `checkpoint-comparison`, `type-init-translated`, `float-arm-emission-regression`, `direct-kairo-adapter`, `portable-compile` |
| **Desativados** (regeneração) — 2 | `game-diagnostic-inventory`, `game-partial-compile` |
| **Reescritos** (feito em 2026-11-21: `tools/original_metadata.py`, o `UnityEngine.dll` vem do `--original-managed` e não do pedido do tradutor) — 4 | `input`, `input-frame-source-probe`, `debug-input-snapshot`, `application-orientation` |
| **Congelado** — 1 | `progress` (livro-razão da Fase 2 fica como registro; depois do congelamento não é regenerado) |
| **Arquivado** — 1 | `reachability-analysis` (critério 3 fechado; a lista de alcançáveis fica em `config/`) |
| **Caminhos ajustados** — 1 | `repository-tests`: `test_report_paths` (o módulo foi para `tools/`, feito); `test_diagnostic_leaf_manifest` vai com o tradutor |
| Ambiente do worktree (não é o tradutor) — 2 | `tracing-measurements`, `private-resource-catalog` |

**Checks que continuam valendo (94 + 4 reescritos) e o que protegem:**

| Grupo | Checks | Protege |
|---|---|---|
| Coletor | `tracing-gc-engine`, `tracing-gc-allocation-visibility`, `tracing-native-roots`, `tracing-ui-dispatch`, `ui-dispatch-GC`, `runtime-GcFixtures`, `ctr-gc-layout`, `gc-source-contract`, `stack-collection`, `managed-shared-fields`, `managed-threads` | marcação, varredura, raízes nativas e de pilha, threads cooperativas; com `test_gc_field_tracing.py src/game` (mapa de campos e estáticos do código mantido) é a garantia do coletor para edições à mão |
| Runtime C# | `runtime-*` (fixtures de coleções, conversões, strings, tempo, aleatório, exceções, delegates, literais, inicialização de tipos), `string-ops`, `stream-reader`, `streams`, `binary-reader`, `runtime-encoding`, `runtime-regex`, `runtime-path`, `effective-core-profile` | semântica da BCL usada pelo jogo |
| Ponto flutuante e números | `readable-numeric-types`, `float-discriminants-x86`, `float-cal-models`, `mono-floating-format`, `mono-number-format-source`, `historical-float-parse`, `scalar-min`, `android-math-static` | regra Mono ARM nos tipos numéricos; formatação e parsing como o Mono |
| Colação e cultura | `mono-collation-*`, `collation-license-audit`, `culture-*`, `native-globalization`, `unicode-regeneration-audit`, `android-Unicode-static` | ordenação e comparação de textos iguais ao Mono; separação LGPL |
| Plataforma Kairo | `graphics-*`, `arc-raster-invariants`, `offscreen-mesh`, `image-lifetime`, `forms`, `forms-execution`, `surface-source-adapter`, `dialog-service`, `sound-API`, `streaming-media`, `storage`, `raw-asset-reader`, `nonblocking-text-input`, `native-system-leaves`, `application-properties`, os 4 de entrada/orientação | desenho, telas, áudio, saves, entrada e propriedades da aplicação |
| Serviços offline | `services`, `service-policy`, `managed-service-bindings`, `offline-http-contract`, `offline-analytics-contract` | políticas de serviços removidos (cobrança, anúncios, rede) |
| Assets e build | `sdl-and-assets`, `prepared-native-textures`, `resource-trace-events`, `resource-yield-control-model`, `legacy-assets`, `cmake-header-dependencies`, `bootstrap-order`, `boot-concurrency-inventory`, `reference` | pipeline do APK por hash, ordem de arranque, dependências de build, submódulo de referência intacto |
| Diagnóstico | `diagnostic-instrumentation`, `diagnostic-profile-overhead`, `diagnostic-key-parser`, `diagnostic-route-runner`, `pc-memory-sampler`, `pc-metrics-aggregation`, `native-allocator-heap` | roteiros, contadores por método e medições continuam confiáveis (instrumentação mantida, decisão 1) |
| Fora do `verify` | 85 roteiros com estresse (`run_readable_routes.py --frozen`), builds PC/ARM | comportamento do jogo inteiro depois de cada edição |

## 8. Ensaio 2 sobre a árvore final (2026-11-22)

Ramo local `freeze-rehearsal-2` (commit `5bc5944`, a partir de `8a98507`; sem tag,
sem push). Árvore: legível final com as correções de desempenho (A) e os tipos
numéricos estendidos (B), gerada de `build/claude-readable-b1`.

| Passo | Resultado |
|---|---|
| `tools/freeze_tree.py` (troca da árvore) | 404 unidades do jogo (2 partes `.inc`) + 115 da KairoLibrary; cabeçalho de código mantido; nenhum "Do not edit" |
| Tradutor arquivado | `tools/translator-archived/` |
| Build PC (sem tradutor) | **PASS** — 6,67 MB, 597 s |
| Build ARM `--frozen` | **PASS** — `.3dsx` 7.409.864 B, 2.004 s |
| `menu-explore` (`--frozen-diagnostic`) | **PASS** — quadro 11.283, igual ao legível; 0 alertas |
| `match-touch` (partida de referência) | **PASS** — quadro 2.972, igual ao legível; 0 alertas |
| Verificação `--full`, seguindo após falhas | **99 PASS / 28 FAIL** (ensaio 1: 94 / 32) |

Os 28 que falham são exatamente os destinos decididos na seção 7: 21 arquivados
com o tradutor, 2 de regeneração, `progress` (livro-razão a congelar),
`reachability-analysis` (a arquivar), `repository-tests` (só
`test_diagnostic_leaf_manifest`, que vai com o tradutor) e 2 de ambiente do
worktree (`tracing-measurements`, `private-resource-catalog`). Os 4 testes de
plataforma reescritos e o novo `content-policy` passam. **Nenhuma dependência
nova do tradutor.**

Conjunto completo de roteiros sobre a árvore final (modo legível, antes da troca,
mesmo código): 87 execuções, 85 concluídas, 0 alertas, 0 lacunas; cobertura
1.576 (antes de B: 1.578; diferença em `Start_aura` e
`AddCommandRunningRegist`, da simulação dependente da velocidade). Determinismo
cruzado com o canônico atual: partida de referência com passos, estados e
`rs/0003` idênticos.

## 9. Ensaio 3 sobre a árvore da última passada do emissor (2026-11-23)

Ramo local `freeze-rehearsal-3` (commit `7874b4a`, a partir de `e04f8dd`; sem tag,
sem push). Árvore: legível final da rodada de 2026-11-22
(`docs/notes/readable-emitter-pass-2026-11-22.md`), gerada em
`build/claude-readable-final`.

| Passo | Resultado |
|---|---|
| `tools/freeze_tree.py` (troca da árvore) | 402 unidades do jogo + 115 da KairoLibrary; cabeçalho de código mantido; nenhum "Do not edit" |
| Tradutor arquivado | `tools/translator-archived/` (com `README-ARCHIVED.md`) |
| Build ARM `--frozen` | **PASS** — `.3dsx` 7.286.380 B |
| `match-touch` (`--frozen-diagnostic`) | **PASS** — quadro 2.972; 127 passos, 19 estados e `rs/0003` idênticos ao legível final; 0 alertas |
| `menu-explore` (`--frozen-diagnostic`) | **PASS** — quadro 11.282; 180 passos, 331 estados e `rs/0003` idênticos ao legível final; 0 alertas |
| Verificação `--full`, seguindo após falhas (cópia local do script) | **100 PASS / 27 FAIL** (ensaio 2: 99 / 28) |

Os 27 que falham são os mesmos do ensaio 2, menos `private-resource-catalog`, que
era de ambiente da cópia de trabalho (os assets agora estão ligados). **Nenhuma
dependência nova do tradutor.** O ambiente da cópia de trabalho precisa de
`build/deps`, `build/generated`, `assets/` (ligações), `build/ctr-assets-native-v1`
e dos saves das tentativas 31 e 50 em `build/pc-diagnostic-release/attempts/`.

## 10. Congelamento (2026-11-23)

Aprovado pelo usuário em 2026-11-23, condicionado aos itens 2d, 2e e 4a da rodada
(todos cumpridos: `docs/notes/readable-emitter-pass-2026-11-22.md`,
`docs/notes/readable-int32-cost.md`, `docs/notes/menu-save-difference.md`).
Procedimento da seção 4, como no ensaio 3:

| Passo | Resultado |
|---|---|
| Última geração legível (com `PLS_METHOD_SCOPE`) | `build/claude-readable-final2`, a árvore validada: 85 roteiros (0 alertas, 1.572 × 1.573 métodos contra o canônico atual), build ARM, código de máquina dos kernels, Azahar |
| Verificação completa antes da troca | 127/127 (`c8cd1ed`) |
| Troca de `src/game/` e `src/kairo/common/generated/` (`tools/freeze_tree.py`) | 402 + 115 unidades; cabeçalho de código mantido à mão; nenhum "Do not edit" |
| Corpos iguais à árvore validada | 517/517 arquivos idênticos fora das linhas de cabeçalho |
| Tradutor | `tools/translator-archived/` (somente leitura, `README-ARCHIVED.md`); `tools/translate` recusa com mensagem |
| PC a partir da árvore congelada (`--frozen-diagnostic`) | partida (127 passos, 19 estados, `rs/0003`) e menu (180 passos, 331 estados, `rs/0003`) idênticos à árvore validada; 0 alertas |
| ARM a partir da árvore congelada (`--frozen`) | `.3dsx` 7.281.448 B; código de máquina dos 5 kernels e de `TitleForm::_draw` idêntico ao da árvore validada |
| Checks | os 25 ligados ao tradutor arquivados (`ARCHIVED_AT_FREEZE` em `tools/verify_phase2.py`, os mesmos do ensaio 3); `test_diagnostic_leaf_manifest` foi com o tradutor; entram `game-gc-map-and-roots`, `game-support-code` e `game-literals` sobre o código mantido |
| Livro-razão | `docs/history/PROGRESS-phase2.md` e `config/phase2-*` ficam como registro da Fase 2 (não regenerados) |
| Regras | `AGENTS.md` e `CLAUDE.md` atualizados para a segunda metade |
| Nota da versão | `docs/release-notes/v1.0.0-faithful.md` |
