# Custo dos tipos numéricos legíveis (passo C1), medido antes da adoção

Pedido do usuário (2026-11-16): relatar o custo nos kernels antes de adotar.

Método: `tools/profiling/readable_numeric_bench.cpp`. `Team.GetSum` e
`Team.Cal_evaCoatMulti9block` escritos nos dois estilos sobre os mesmos arrays
verificados:
- **auxiliares:** a emissão atual, com `add_i32`, `static_cast<double>` e `conv_i32`
  copiados de `semantic_runtime.hpp`;
- **tipos:** `pls::cs::Int32`, `Single` e `FloatEval` de
  `src/kairo/common/numeric_types.hpp`.

Antes de medir, o banco confere a equivalência em todas as células da grade
(incluindo bordas e `div` verdadeiro/falso) e em três passadas de `Multi9` sobre
todos os pontos. Saídas em `build/readable-numeric-cost/` (privado).

## PC (MSVC 14.51, `/O2 /fp:strict /EHsc`, 2.000.000 chamadas, melhor de 7, três execuções)

| Kernel | Auxiliares (ns/chamada) | Tipos (ns/chamada) |
|---|---:|---:|
| GetSum | 35,6–36,1 | 33,0–33,5 |
| Cal_evaCoatMulti9block | 33,3–33,9 | 33,8–33,8 |

## ARM11 (devkitARM g++, `-O2 -march=armv6k -mtune=mpcore -mfloat-abi=hard`), instruções da função

| Kernel | Auxiliares | Tipos | VFP (ambos) |
|---|---:|---:|---:|
| GetSum | 134 | 127 | 18 |
| Cal_evaCoatMulti9block | 112 | 108 | 17 |

Os números são iguais com e sem `-fno-strict-aliasing`.

## Conclusão

**Custo nulo ou levemente negativo.** As operações VFP são as mesmas, ou seja,
a mesma regra binary64 com estreitamento. Os invólucros de um escalar somem no
`-O2`. Não houve medição no aparelho; o tamanho do código ARM é a evidência
estática.

Limite da medição: arrays mínimos iguais nos dois estilos. O custo do
`Array` real e do `ensure_initialized` não entra, porque não muda com o C1.

## Segunda medição (2026-11-17), depois das conversões implícitas e das sobrecargas mistas

Para o emissor, `Int32` ganhou conversão implícita para `std::int32_t`, e as
sobrecargas mistas viraram templates para inteiros de até 32 bits. No devkitARM,
`std::int32_t` é `long`; sem os templates, comparar com o literal `0` ficava
ambíguo segundo o padrão C++. Mesma máquina, três execuções:

| Kernel | Auxiliares (ns) | Tipos (ns) | ARM11, auxiliares → tipos (instruções) |
|---|---:|---:|---:|
| GetSum | 37,8–41,9 | 35,9–37,2 | 134 → 127 |
| Cal_evaCoatMulti9block | 33,4–34,0 | 38,2–41,1 | 112 → 108 |

**Resultado negativo no PC:** `Multi9` fica de 15% a 20% mais lento com MSVC. O
assembly mostra a causa: o MSVC não junta mais `num >= 0 && num < W` numa única
comparação sem sinal; faz um teste de sinal e uma comparação. No ARM (o alvo),
o gcc gera o mesmo número de instruções de antes. Esta máquina estava com pouca
memória livre (cerca de 2 GB); as medições de PC aqui são indicativas.
