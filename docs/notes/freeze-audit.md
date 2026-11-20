# Auditoria pré-congelamento (preparada em 2026-11-20; aguardando aprovação)

Nada aqui foi executado sobre `main`. O congelamento só acontece com aprovação
explícita do usuário (`AGENTS.md`, seção 4). Este documento reúne o estado de
cada critério com a evidência, o que muda de regra depois do congelamento, as
pendências que continuam abertas, o procedimento exato e o risco do ponto
flutuante. O resultado do ensaio em ramo separado fica na seção 6.

## 1. Critérios do congelamento

| Critério | Estado | Evidência |
|---|---|---|
| 1. Tradução completa | **cumprido** (aprovado em 2026-11-14) | `PROGRESS.md`; 1.860 métodos emitidos, 0 rejeitados, 0 slots virtuais pendentes; `config/phase2-game-translation.json` |
| 2. Coletor e desempenho | **cumprido** — canônico (v6, 2026-11-14) e legível (três execuções com `result.txt`, 2026-11-20; marcado pela regra do usuário) | `docs/benchmark-hardware.md`; legível: `build/c6b-sd-readable/execucao-1..3`, `tools/hardware_window_report.py` |
| 3. Percurso completo no PC | **cumprido** (aprovado em 2026-11-16) | `PROGRESS.md` (1.044/1.248 alcançáveis); C6b: legível = canônico na união de cobertura (1.573 métodos, `build/c6b-route-compare.json`) |
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

Ver a seção "Resultado do ensaio" (preenchida ao fim do ensaio).
