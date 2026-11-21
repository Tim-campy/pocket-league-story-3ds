# Tipos numéricos estendidos no código legível (item B, 2026-11-21)

Decisão do usuário (2026-11-21): estender os tipos numéricos antes do
congelamento. Campos, elementos de array, parâmetros, retornos, locais e
constantes `float` do C# passam a ser `pls::cs::Single`; `double` passa a ser
`pls::cs::Double`. A aritmética entre eles produz `pls::cs::FloatEval`
(binary64) e o estreitamento a binary32 acontece dentro dos tipos, na
atribuição, na passagem e no retorno. Só o modo legível muda; o canônico
(que deixa de existir no congelamento) segue igual.

## O que mudou

* **Runtime** (`src/runtime/numeric_types.hpp`, movido de `src/kairo/common`):
  tipo `Double`; `Single(double)`/`Single(Double)` explícitos (C# exige o cast);
  `Single` a partir de qualquer inteiro; operadores mistos com inteiros comuns
  (campos `int` continuam `std::int32_t`), com `float` literal e com `Double`;
  `%` (o `fmod` do C#, avaliado em binary64). Fora do arquivo: `box`/`unbox`,
  `floating_to_string`, igualdade com NaN, hash de chave, nome gerenciado
  (`System.Single`…), código de array constante e conversão de
  `Array<float>`↔`Array<Single>` (cópia; as APIs nativas que a usam —
  matriz/recorte do `Graphics`, `MotionEvent` — não dependem de aliasing) e
  `Graphics::BeginLocalCoordination(Single&,Single&)`.
* **Emissor** (`translator/Translator.cs`, `ReadableNames.cs`): o nome C++ de
  `float`/`double` no modo legível é o tipo numérico em toda posição; operandos
  `int`/`float`/`double` vão como estão (sem `static_cast<double>`); a lambda de
  ordem de avaliação devolve `FloatEval`; atribuições declaram o valor com o tipo
  do destino (é ali que o estreitamento acontece); o cast que o C# escreve fica
  visível (`(float)x` → `pls::cs::Single(x)`, `(double)x` → `pls::cs::Double(x)`);
  resultado `float` de API nativa é tipado (`pls::cs::Single(...)`); um inteiro
  diante de uma constante `float` recebe a conversão escrita (senão o C++ faria a
  conta em binary32); ramo constante de `?:` recebe o tipo do resultado.

## Contagem (código legível do jogo, gerado em 2026-11-21)

| Forma | Antes (C6b) | Agora |
|---|---|---|
| `static_cast<float>` | 4.261 | **0** |
| `static_cast<double>` | 3.844 | **0** |
| lambdas `-> double` | 410 | **0** |
| lambdas `-> pls::cs::FloatEval` (ordem de avaliação do C#, operandos que podem lançar) | — | 386 |
| `pls::cs::Single(...)` | — | 874 (647 casts `(float)` do C#; 77 resultados de API nativa; o resto conversões implícitas que o C++ não faria sozinho: inteiro diante de constante, ramo constante) |
| `pls::cs::Double(...)` | — | 112 (68 casts `(double)` do C#; o resto ramos constantes e conversões) |
| `pls::cs::conv_i32(...)` | 411 | 421 (casts `(int)` de float/double que o C# escreve) |
| declarações `pls::cs::Single` | — | 3.881 |

## Fidelidade

| Prova | Resultado |
|---|---|
| Diferencial de rebaixamento legível contra o Mono (`translator/readable.py lowering`) | **1.715/1.715** |
| 36 discriminantes, modo legível (`tools/test_arm_float_model.py`) | **36/36** Mono ARM; controle binary32 34/36 (distingue) |
| Kernels do jogo, modo legível, contra as observações ARM (`tools/fp-discriminants/test_readable_kernels.py`, 5 kernels) | **144/144** byte a byte |
| Roteiro dos menus (`menu-explore`) | concluído, quadro 11.283 (igual), 0 alertas |
| Partida de referência (`match-touch`, save 31) contra a legível anterior | 127 passos, 19 estados de interface e saves do jogo **idênticos**; só `player-preferences.port` difere no identificador aleatório de telemetria (`cid`), gerado a cada execução |
| Determinismo cruzado com o canônico, conjunto de roteiros, verificação completa, ARM | revalidação D |

## A regra está inteira em `src/runtime` (B.4)

A regra é um tipo: `FloatEvalStorage` em `numeric_types.hpp` (`double` = regra
Mono ARM adotada). **Demonstração:** o mesmo código legível dos 36
discriminantes, emitido para a regra Mono ARM, compilado com
`PLS_FLOAT_RULE_BINARY32` (avaliação em binary32, só o runtime muda) reproduz
**caso a caso, 36/36, as saídas do modelo binary32 emitido pelo tradutor**
(34 batem com o oráculo ARM, as mesmas 2 divergem). Nenhuma linha do código do
jogo mudou (`build/fp-rule-isolation/`).

**Para adotar outra regra:**
1. `numeric_types.hpp`: o tipo de avaliação (`FloatEvalStorage`) e, se a regra
   mudar o arredondamento de armazenamento, os construtores de `Single`;
2. se a conversão float→int mudar: `conv_signed` (`semantic_runtime.hpp`) — hoje
   ainda fora de `src/runtime` porque depende do perfil de runtime (Mono/.NET);
3. pontos do código do jogo afetados: **0 edições**. A regra age em todas as
   operações `float` do jogo (as 3.881 declarações `Single` e as expressões entre
   elas), sem texto próprio da regra no código do jogo. O que fica visível são
   conversões que o C# escreve (`(float)`, `(double)`, `(int)`) e tipagem de
   valores nativos.

## Limites e resultados negativos

* `conv_signed` (float→int) continua em `src/kairo/common/semantic_runtime.hpp`
  (depende de `runtime_profile`).
* As lambdas de ordem (386) continuam: o C++ não fixa a ordem dos operandos de
  um operador sobrecarregado e o C# avalia da esquerda para a direita, com
  exceções possíveis (`require`). Não são da regra de ponto flutuante.
* O teste antigo de kernels sobre o canônico (`test_game_kernels.py`) reutiliza
  objetos de `build/null-pc-tracing`, apagados na limpeza de disco desta rodada;
  o teste novo (legível) o substitui.
