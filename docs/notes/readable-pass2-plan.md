# Segunda passada do código legível (critério 5): plano e estado

Pedido do usuário em 2026-11-16 (itens C1–C6). Nada aqui muda a semântica: cada
passo passa pelas fixtures de rebaixamento contra o Mono (`translator/readable.py
lowering`, 1.715 casos), pelo diferencial portável e, no fim, pelo jogo inteiro.

## Ordem de execução

A ordem vai do menor risco e maior ganho de legibilidade para o maior risco:

| Passo | Itens | Onde | Risco | Prova |
|---|---|---|---|---|
| 1 | C4: constantes `static constexpr`, hexadecimais preservados, métodos na ordem do C#, aliases de namespace no `.cpp`, uma grafia por tipo, literais sem quebra | `ReadableNames.cs`, `ReadableUnits.cs`, `readable.clang-format` | baixo (só apresentação) | lowering 1.715, amostra compila |
| 2 | C3e: remover `require(self)` e `ensure_initialized` redundantes, casts sobre literais, upcasts implícitos | emissor | médio (inicialização de tipo) | lowering, fixtures de inicialização de tipo |
| 3 | C5a: `trace_edges`/`release_edges` só para campos de referência; check de repositório campos × rastreados e estáticos × raízes | `ReadableUnits.cs`, `tests/repository/` | baixo | check novo + coletor |
| 4 | C3b: ordem por temporários nomeados em vez de lambdas; acessores estáticos de tipos inicializados como puros | emissor (`Classify`, `OrderFree`) | alto (ordem de avaliação) | lowering (ordem, exceções) |
| 5 | C3a/C3d: `finally` por guarda de escopo, `return`/`break`/`continue` normais, sem `ReturnFlow`; `catch` curto com nomes estáveis | emissor + runtime (`scope_exit`) | alto (exceção dentro de `finally`, retorno sobrescrito) | lowering (try/finally) |
| 6 | C3c: delegates por auxiliar que recebe lambda C++ e rastreia capturas | runtime + emissor | médio (rastreamento de capturas pelo coletor) | fixtures de delegates e do coletor |
| 7 | C2: métodos de instância como membros (`this`), virtuais com `override`, nulo do receptor no ponto de chamada na ordem do C# | emissor + runtime | alto | lowering, diferencial portável, jogo |
| 8 | C1: tipos numéricos (float com aritmética em binary64 e estreitamento; inteiros com wrap e exceções; `operator[]` verificado) | runtime + emissor | alto (desempenho e conversões implícitas) | lowering, 36 discriminantes, kernels, medição de custo |
| 9 | Conteúdo: arrays constantes do C# como literais (no lugar de `baked_array`); lista e pergunta para os que forem recurso binário | tradutor + verificação de conteúdo + AGENTS/CLAUDE seção 2 | baixo | verificação de conteúdo |
| 10 | C5b/C5c: cabeçalho pós-congelamento, `docs/maintaining-game-code.md`, papel de `release_edges` | docs | baixo | — |
| 11 | C6a: nova amostra (três classes + trecho do `SubForm` com switch de tela), relatório lado a lado | `readable.py sample` | — | razão C++/C# |
| 12 | C6b: jogo inteiro em modo legível: compila, verificação completa, rotas do critério 3 sob salvaguarda e estresse, benchmark de hardware | build, verificação | — | critérios 2 e 3 refeitos |

## Estado

| Passo | Estado |
|---|---|
| 1 (C4) | **parcial, verificado**: constantes nomeadas do C# como `static constexpr` no struct (ou `inline constexpr` no namespace) e usadas onde o C# as cita pelo nome; hexadecimais do C# preservados; métodos e declarações na ordem do C#; literais de texto sem quebra. Pendentes: sobrecargas com nome real (hoje `Nome_2`), aliases de namespace no `.cpp`, uma grafia por tipo (`pls::kairo::Graphics` × `kairo::unity::ui::Graphics`). |
| 3 (C5a) | **feito, verificado**: `trace_edges`/`release_edges` só para campos que podem conter referência; check `tests/repository/test_gc_field_tracing.py` (campos de referência × rastreados × liberados; estáticos × raízes), 0 problemas na amostra. |
| 8 (C1) | **feito (2026-11-17), executado antes dos demais por pedido do usuário**: `src/kairo/common/numeric_types.hpp` (`Int32` com wrap e as exceções do C#; `Single` armazenado em binary32; `FloatEval` = expressão float em binary64, estreitada no armazenamento, no argumento e no retorno). No modo legível, locais e parâmetros por valor de tipo int/float são declarados com esses tipos, e a aritmética com pelo menos um operando tipado sai com operadores (`a + b`, `num += x`, `++i`). Arrays, genéricos, campos e retornos mantêm os tipos comuns, o que deixa a fronteira com o runtime sem mudança. Variáveis passadas por `ref`/`out` também ficam com o tipo comum. Custo medido antes (`docs/notes/readable-numeric-cost.md`): ARM igual ou menor; no PC, `Multi9` fica 15–20% mais lento com MSVC (resultado negativo registrado). Prova: lowering legível 1.715/1.715; 36 discriminantes em modo legível com `mono-arm-vfp` (36/36, controle `binary32` 34); `tools/test_readable_numeric.py` (23 verificações, incluindo `(int)(a+b)` sem estreitar, achado durante o passo); amostra compila. |
| 2, 4–7, 9–12 | pendentes (2 depois do 7: o `require(self)` e parte do `ensure_initialized` somem com os métodos de instância reais) |

Evidência deste trecho: `translator/readable.py lowering` 1.715/1.715, sem
identificadores com hash; traduções regeneradas (KairoLibrary 374, jogo 1.860
métodos); amostra compila (0, 4 e 4 avisos, os mesmos de antes); verificação
completa 123/123. O modo normal não muda (todas as mudanças são condicionadas a
`readable`).
