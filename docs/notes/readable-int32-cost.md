# Custo no ARM11 dos inteiros tipados (A.2, 2026-11-22)

O A.2 trocou, no código legível, `std::int32_t`/`std::int64_t` com os auxiliares
`add_i32`, `sub_i32`, `mul_i32`, `div_i32` e `mod_i32` por `pls::cs::Int32` e
`pls::cs::Int64` com operadores. A semântica (estouro com volta, exceções de
divisão) é a mesma; os tipos têm o tamanho e o alinhamento do inteiro que
envolvem (`static_assert` em `src/runtime/numeric_types.hpp`), então campos,
arrays e saves não mudam de layout.

## Método

As mesmas unidades do jogo, geradas antes (árvore do A.1, com os auxiliares) e
depois (árvore do A.2, com os tipos), compiladas pelo devkitARM com as flags do
build do console (`-march=armv6k -mtune=mpcore -mfloat-abi=hard -O2
-fno-fast-math -ffp-contract=off`, as do `build.ninja` do build ARM legível).
Contagem de instruções de cada função com `arm-none-eabi-objdump -d`. Mesmo
cabeçalho de runtime nos dois lados. Instruções contadas não são tempo; o tempo
é o benchmark no aparelho.

## Resultado (instruções da função; VFP; chamadas)

| Kernel | Auxiliares (A.1) | Tipos (A.2) |
|---|---|---|
| `Team.GetSum` | 110; 10; 18 | 110; 10; 18 (idêntico) |
| `Team.Cal_evaCoatMulti9block` | 103; 8; 20 | 107; 8; 19 |
| `GameUtil.ChRectHitRectFloat` | 78; 48; 1 | 67; 43; 1 |
| `AppData.InsertGameObject` | 18; 0; 1 | 18; 0; 1 |
| `Camera.ConvertScreenToCamera` | 63; 4; 13 | 61; 4; 12 |
| **Total** | **372** | **363** |

## Leitura

- Quatro kernels ficam iguais ou menores. O total cai 2,4%.
- **Resultado negativo:** `Cal_evaCoatMulti9block` cresce 4 instruções (3,9%).
  O C++ das duas árvores é o mesmo texto; só os tipos mudam. Na condição de limites
  `num >= 0 && num < Map::MAPCHIP_COAT_WNUM() && ...`, o gcc deixa de encadear as
  comparações (`cmpge` e um salto) e materializa um booleano (`movlt`/`movge`).
  O acesso `Map::MAPCHIP_COAT_WNUM()` agora devolve `Int32&`. São 3 instruções por
  iteração do laço de 9 casas. A chamada a menos vem de uma verificação que o
  compilador passou a fundir.
- O custo zero não está provado instrução a instrução: um kernel ficou pior, e os
  outros iguais ou melhores. O critério que decide é o benchmark de menu e partida
  no New 3DS (passo a passo no relatório da rodada).

## No aparelho (New 3DS XL, 2026-11-23, três execuções)

Partida com média de 10,17 / 10,63 / 9,73 ms, contra 10,15–10,62 ms na rodada de
2026-11-21 (antes do A.2) e 10,49–11,77 ms na v6; menu 6,50–6,71 ms. As 4
instruções a mais de `Cal_evaCoatMulti9block` não aparecem no tempo do jogo:
**custo não mensurável** no aparelho (`docs/benchmark-hardware.md`).
