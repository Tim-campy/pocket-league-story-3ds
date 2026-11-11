# Regra candidata de ponto flutuante — não adotada

Referência de comportamento: Android ARM do jogo original. A leitura abaixo
usa a revisão Unity Mono `b6587926c0f146c8b12985744f33a13b39a22d57`.
A identidade exata entre essa revisão/configuração e o JIT do APK continua
**UNKNOWN**. A prova no aparelho é necessária; o Mono Windows não a substitui.
Os fontes consultados ficam localmente em `build/mono-jit-float-audit/`, com
URLs e SHA-256 em `provenance.json`; nenhum código do JIT é incorporado ao port.

## Caminho de emissão encontrado

| Operação | Evidência no JIT consultado | Consequência para a variante |
|---|---|---|
| Valor R4 na pilha de avaliação | `method-to-ir.c:1128`, R4/R8 classificados como `STACK_R8` | Valor carregado de float é promovido para double na expressão. |
| Aritmética VFP | `mini-arm.c:4099` e casos adjacentes usam operações D | Operações intermediárias em binary64, sem contração para FMA. |
| Armazenar em campo/elemento R4 | `mini.c:624` seleciona `OP_STORER4_MEMBASE_REG`; `mini-arm.c:3986` converte e armazena single | Estreitamento para binary32 no armazenamento. |
| `conv.r4` | `mini-arm.c:3508` converte para single e promove novamente | Conversão explícita é uma barreira de arredondamento. |
| Argumento R4 | `mini-arm.c:1338,1405` grava R4 antes da passagem pela ABI | Arredondar na fronteira da chamada não embutida. |
| Retorno R4 | `mini-arm.c:4010` converte antes de entregar bits em R0 | Arredondar no retorno não embutido. |
| Local R4 | `emit_stloc_ir`, `ir-emit.h:298,317,454`, `mono_spill_global_vars` | Seguir o caminho de FMOVE descrito abaixo; não inferir pela declaração C# apenas. |

Fontes oficiais:
[method-to-ir.c](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/method-to-ir.c),
[mini-arm.c](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/mini-arm.c),
[ir-emit.h](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/ir-emit.h),
[mini.c](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/mini.c).

## Locais e sobrevivência em registrador

`emit_stloc_ir` emite `EMIT_NEW_LOCSTORE`. Na variante VFP, isso gera um
movimento tipado para a variável, `OP_FMOVE` para R4. A transformação de
variável global em registrador local exclui explicitamente R4
(`method-to-ir.c:10816–10817`). A propagação de cópias também exclui FMOVE
(`local-propagation.c:163–170`), e sua propagação reversa aceita somente
movimentos não FP (`local-propagation.c:496`).

Na passagem de spill, `lvreg` começa em zero (`method-to-ir.c:11131`);
o movimento FMOVE é fundido no armazenamento tipado
(`11160–11165`), com `no_lvreg=true`. A leitura posterior passa pelo
carregamento R4. Esse caminho sustenta estreitamento no `stloc` comum,
inclusive quando a aritmética anterior ficou em um registrador D.

Há uma distinção importante: a mesma passagem pode conservar o registrador
de uma **operação que já escreve diretamente na variável**, depois de emitir
seu store (`11184–11200`, `11315–11320`). No ARM, a condição não exclui FP.
Essa otimização não prova que qualquer `stloc` comum perde seu arredondamento:
é preciso demonstrar qual passagem anterior substituiu o FMOVE por aquela
operação. O cache de registradores é descartado na mudança de bloco básico
(`11003–11006`) e nas chamadas (`11329–11333`).

Portanto, uma regra universal baseada somente no AST C# seria prematura.
A variante deve separar expressão binary64, armazenamento binary32 e
barreiras de chamada; casos de inlining, SSA e operação diretamente no
destino ficam explícitos no teste Android, não resolvidos por suposição.

Fonte da propagação:
[local-propagation.c](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/local-propagation.c).

## Comparação x86/ARM

O backend x86 usa a pilha x87 para aritmética. Um intermediário pode ter
precisão maior que binary64 antes do spill; o VFP ARM usa registradores D.
Concordância com os 80 casos Windows não prova equivalência em todos os
valores, nem autoriza a adoção. Os 11 casos divergentes de
`Cal_evaCoatMulti9block` continuam evidência a explicar, não resultados ARM.
Resultados da variante emitida e do procedimento Android: **PENDING**.

## SSA e opções padrão: verificação adicional

Na mesma revisão, `ssa.c:670–728` (`mono_ssa_copyprop`) reescreve os usos de
movimentos, incluindo FMOVE, sem a exclusão FP da propagação local. A remoção
do movimento sem usos em `ssa.c:1279` é permitida no ARM, cuja avaliação não
usa a pilha x87. Isso explica por que habilitar SSA pode tornar insuficiente
uma regra que arredonda incondicionalmente todo local R4 do AST.

Entretanto, `driver.c:119–135` **não inclui SSA, ABCREM ou SSAPRE nas opções
padrão**. `mini-arm.c:539–584` não acrescenta otimizações específicas de ARM;
`mini.c:3511–3512` habilita SSA quando ABCREM ou SSAPRE são solicitados.
Portanto, a existência dessa transformação não prova que ela ocorreu no APK.
A configuração que o hospedeiro Unity forneceu ao Mono continua UNKNOWN.

Para o caminho padrão examinado, o candidato é: expressão R4 avaliada em
binary64, armazenamento R4 arredondado a binary32, argumentos R4 estreitados
antes da passagem pela ABI e retorno R4 estreitado pelo backend. A inferência
sobre `stloc` comum vem de FMOVE seguido do store tipado; a variante SSA deve
ser uma observação separada no diagnóstico Android. Nenhuma dessas hipóteses
foi adotada no emissor de produção.

Fontes adicionais:
[driver.c](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/driver.c),
[ssa.c](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/mini/ssa.c).

## Conversão de inteiro para R4

`mini-arm.c:4000–4007` distingue `ICONV_TO_R4` de `ICONV_TO_R8`: o primeiro
converte o inteiro para single com `FSITOS` e amplia com `CVTS`; o segundo
usa `FSITOD`. Portanto, promover a aritmética não autoriza apagar o
estreitamento da conversão de inteiro para float. Na variante experimental,
esse passo precisa continuar arredondando a binary32 antes da expressão
binary64. Essa observação também ainda depende da confirmação Android para
adoção no port.
