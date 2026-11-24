# Formatação do código congelado (2026-11-23)

Commit só de forma, depois da tag `v1.0.0-faithful`: `src/game/` e
`src/kairo/common/generated/` formatados com clang-format 22.1.3 (o do Visual Studio)
pelo estilo `src/game/.clang-format` (cópia idêntica em `src/kairo/common/generated/`).
Ferramenta: `python tools/format_game_code.py` (formata e recusa qualquer mudança que
não seja de espaços; `--check` só confere).

## Os dois arquivos com "tokens alterados" (1a)

Num primeiro teste com o estilo do tradutor (`tools/translator-archived/readable.clang-format`),
uma comparação de tokens apontou `bootstrap_generated.cpp` e
`kairo.unity.util.Language.cpp`. Era um falso positivo do tokenizador daquele teste,
que juntava `a.b` num token só:

| Arquivo | Antes | Depois |
|---|---|---|
| `src/game/bootstrap_generated.cpp:23` | `shapes.image_touches = cs::Delegate<...>::from_static(` | `shapes` ↵ `.image_touches = cs::Delegate<...>::from_static(` |
| `src/kairo/common/generated/kairo.unity.util.Language.cpp:53` | `state.run("kairo.unity.util.Language", flag, []() {` | `state` ↵ `.run(` ↵ `"kairo.unity.util.Language", flag, []() {` |

Os tokens do C++ são os mesmos (`shapes` `.` `image_touches`). A quebra antes do `.`
vem de `ColumnLimit: 110` com o literal seguinte longo demais para caber
(`BreakStringLiterals: false` impede quebrá-lo); `PenaltyBreakBeforeMemberAccess` não a
evita (testado). Fica como exceção estética nessas linhas.

Com um lexer de C++ correto (`tools/cpp_tokens.py`: literais com prefixo e brutos,
pp-numbers, pontuadores), o estilo do tradutor mudava tokens de verdade em 170 + 47
arquivos: `InsertBraces: true` acrescenta `{ }` em `if` de um comando. Inofensivo, mas é
mudança de token; o estilo novo desliga.

## O estilo (1b)

Mesmo layout do modo legível aprovado, com tudo o que poderia mudar tokens ou
comentários desligado: `BreakStringLiterals: false`, `SortIncludes: Never`,
`ReflowComments: false`, `FixNamespaceComments: false`, `InsertBraces: false`,
`RemoveBracesLLVM: false`, `RemoveParentheses: Leave`, `RemoveSemicolon: false`,
`QualifierAlignment: Leave`, `IntegerLiteralSeparator` 0.

## Prova (1d)

| Prova | Resultado |
|---|---|
| texto sem espaços igual, arquivo a arquivo | 517/517 |
| sequência de tokens C++ igual (`tools/cpp_tokens.py --tree`) | 402/402 (jogo) e 115/115 (KairoLibrary) |
| objetos do PC (MSVC, `--frozen-diagnostic`, Release), código e dados (`tools/compare_objects.py`) | 253/253 iguais; a única diferença de bytes é o carimbo de hora do cabeçalho COFF (11.202 seções iguais em `game.Team.cpp.obj`, depuração inclusive) |
| objetos do ARM (devkitARM, `--frozen`, `-O2 -g`), código e dados | 253/253 iguais em todas as seções fora de `.debug_*` (com a tabela de símbolos); 2 idênticos byte a byte; nos demais só a depuração (números de linha) difere |
| controle negativo do comparador | dois objetos diferentes (`game.Team` × `game.Player`) acusados, em COFF e em ELF |

Exceções: nenhuma no código e nos dados. No ARM, a informação de depuração
(`.debug_*`, números de linha) muda por definição e fica fora da comparação.

## Cabeçalho de origem (1e)

O cabeçalho de três linhas do congelamento (que citava `translator/Translator.cs`,
agora arquivado) virou uma linha:
`// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.`
Nenhum arquivo do jogo tinha mais "GENERATED ... Do not edit". Dependência de texto
encontrada e removida: `tests/repository/test_gc_field_tracing.py` só incluía
`src/game` por padrão se o primeiro cabeçalho contivesse "readable mode" (texto que
não existia mais desde o congelamento; o padrão ignorava `src/game` sem avisar).

## Checks ajustados ao layout formatado

- `tools/check_readable_support.py` lia declarações e tabelas numa linha só: depois da
  formatação acusava 55 falsos problemas. Agora aceita quebras de linha; 178 classes e
  296 slots nas duas árvores (antes e depois), 0 problemas.
- `tests/repository/test_gc_field_tracing.py` tinha um furo anterior a esta rodada: a
  linha `PLS_MANAGED_CLASS(...)` (sem `;`) grudava na declaração seguinte e o primeiro
  campo depois dela nunca era conferido. Corrigido; o código do jogo continua com 0
  problemas (nenhum erro escondido).
- Teste de mutação dos checks (cópia da árvore): campo fora de `trace_edges`, estático
  sem raiz, `override` sem slot, classe sem `PLS_MANAGED_CLASS`, texto novo — os cinco
  são acusados.
- `tools/check_readable_literals.py` aceita, além dos literais do C#, os textos
  decididos pelo usuário listados em `config/added-literals.json` (vazio).
