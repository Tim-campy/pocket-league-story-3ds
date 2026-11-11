# Acessos nativos: Mono e C++

O oráculo desta comparação de instruções é o Mono x86 do Unity 5.3.4f1,
não o Android. As listagens vêm do JIT real e dos objetos COFF ligados ao
diagnóstico Release; não são traduções manuais de IL. Endereços absolutos e
entradas capturadas ficam em `build/`.

`tools/profiling/capture_mono_jit.py` coleta a saída verbosa e conserva o
código emitido. O shim de assembler retira somente diretivas STABS de
depuração que o assembler moderno não aceita. As duas primeiras tentativas
falharam (overload/assembler ausente e opção STABS), antes do recibo válido
`build/mono-jit-bbc270a-3/`. `capture_cpp_hot_asm.py` autentica os objetos
pelo stamp dos fontes e conserva também os auxiliares fora de linha.

| Corpo | Mono x86 | C++ x64 antes dos ajustes de arrays |
|---|---:|---:|
| Camera.ConvertScreenToCamera(int[], int[]) | 184 bytes, 55 instruções | 679 bytes, 158 instruções |
| Team.GetSum | 337 bytes, 104 instruções | 1.023 bytes, 251 instruções |

São arquiteturas distintas, com convenções de chamada distintas. Contar
instruções não mede ciclos nem prova equivalência de desempenho.

| Operação | Mono observado | Excesso C++ observado | Correção comprovada até aqui |
|---|---|---|---|
| Array | Comprimento em `+0xc`, dados em `+0x10`; comparação e desvio para falha | `Array.at` fora de linha, wrapper com estado de covariância mesmo para primitivos, buffer separado | Wrapper primitivo de um ponteiro, armazenamento contíguo; comparação unsigned embutida e falha fora de linha |
| Campo estático próprio | Carga direta do endereço | Guarda de inicialização repetida pelo getter | Acesso direto somente quando a entrada do mesmo método já garante a inicialização; construtores e casos genéricos excluídos |
| Conversão float para int | Carga/estreitamento x87 e `cvttsd2si` conforme o corpo | `conv_signed` chamava `ldexp` para construir um limite constante | Limites exatos derivados de `numeric_limits<To>::min()` em compilação; NaN, infinito e fora de faixa preservados, 160 casos diferenciais |
| Chamada | Convenção x86 e um caminho frio de exceção em cada corpo examinado | Chamadas a getters/`at`/conversões, prólogos e tratamento de exceção C++ | `at` deixou de ser chamada nos dois corpos da variante compacta; caminhos frios permanecem |

Na variante `build/cpp-hot-asm-contiguous-arrays`, Camera ainda tinha quatro
chamadas `at` e duas conversões, e GetSum sete chamadas `at` e uma conversão.
Apenas tornar o payload contíguo não as eliminou e não demonstrou ganho nos
kernels. O wrapper compacto e a definição embutível do acesso foram o passo
que removeu essas chamadas (`build/cpp-hot-asm-compact-checked-arrays`).

O comprimento x64 atual está em `+0x58` e os dados em `+0x60`, na mesma
linha de cache de uma alocação alinhada a 64 bytes. O offset maior que o do
Mono decorre do cabeçalho nativo e não foi ocultado nessa comparação.
O layout ARM desta revisão ainda exige compilação e inspeção próprias.

Estas listagens e contagens precedem a adoção de `mono-arm-vfp`; devem ser
mantidas como etapas históricas, não como medição antecipada do binário final.

## Base com conversões constantes e modelo ARM

O recibo `build/cpp-hot-asm-constant-conversion/receipt.json` registra os
objetos da base medida em três repetições. Camera tem **91 instruções e
8 chamadas**, GetSum **177 instruções e 10 chamadas**. As contagens incluem
os ramos frios dentro dos corpos; não incluem os corpos dos auxiliares.
Camera mantém uma chamada de inicialização do tipo e duas conversões
float/int; GetSum mantém uma inicialização e uma conversão double/int.
Não há chamada `Array.at` em nenhum dos dois.

A listagem de Camera ainda mostra seleção `size ? payload : nullptr`
depois de limites já aprovados (por exemplo offsets `0x68–0x72`,
`0xb7–0xc2` e `0xce–0xd8`). São candidatos de excesso demonstrado, não
verificações de limite dispensáveis. O corpo também contém construção
fria de `NullReferenceException` para acesso ao campo do objeto estático;
esse caminho pode sair de linha preservando a exceção e sua ordem.
As instruções de prólogo, cookie de segurança e ABI x64 não serão
contabilizadas como lógica extra por acesso ao array.

## ARM11 com arrays contíguos

O ELF `929aef45523564a0f2efbd654563f28271658608d4f8ee0caaa66414c2dfecbd`
foi inspecionado por `tools/profiling/capture_arm_hot_asm.py`, com os recibos
em `build/arm-hot-asm-direct-kairo`. Camera ocupa **548 bytes**, com **126
instruções** e **9 instruções de chamada**; GetSum ocupa **624 bytes**,
com **146 instruções** e **11 chamadas**. Literais `.word` não entram na
contagem de instruções; o tamanho inclui o pool literal do símbolo. Corpos
de auxiliares chamados não estão incluídos nessa contagem.

Nesse ARM, comprimento e payload estão em **+20 e +24 bytes**, na mesma
linha de uma alocação alinhada a 64 bytes. Por exemplo, Camera verifica
nulo em `0x60bc58`, carrega o comprimento em `0x60bc60`, verifica o índice
zero em `0x60bc64–68` e lê o elemento em `0x60bd1c`. O armazenamento de
saída em `0x60bd40` é seguido pela checagem do índice um em `0x60bd44`;
essa ordem preserva o efeito do primeiro armazenamento antes de uma
possível exceção no segundo. O GCC eliminou a seleção redundante de
payload vista na saída MSVC; não se deve atribuir esse excesso aos dois
alvos indistintamente.

As conversões float/int estão embutidas no ARM: há verificações de NaN,
limites e consultas ao perfil do runtime antes de `vcvt.s32.f32`. Há uma
chamada de inicialização de Camera na entrada (`0x60bc4c`). As verificações
de nulo/limites continuam explícitas, ao contrário da detecção de nulo
por falha de memória usada pelo Mono x86. Contagem de instruções entre
x86, x64 e ARM não é uma razão de desempenho.
