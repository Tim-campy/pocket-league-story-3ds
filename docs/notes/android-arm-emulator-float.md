# Oráculo numérico ARM no emulador

Medição local de 11/11/2026. Estado: **CONFIRMADO EM EMULADOR, PENDENTE DE
APARELHO**. Regra adotada no emissor conforme a autorização desta rodada;
regeneração e replay completos ainda em andamento.

O APK numérico independente usa o `libmono.so` oficial do Android Player do
Unity 5.3.4f1, não a biblioteca do APK do jogo. A imagem oficial é Android 21,
armeabi-v7a, revisão 4; o emulador é 25.2.5, CPU Cortex-A8. O processo informou
`armv7l`, ponteiros de 4 bytes, HWCAP `0x8b0d7` e VFP disponível. As opções de
inicialização do Mono são as padrão da API de embedding; `MONO_ENV_OPTIONS` e
`MONO_ARM` estão ausentes. Não se afirma que todas as opções de inicialização
do player Unity sejam idênticas.

Foram coletados 36 discriminantes e 144 resultados de kernels, incluindo 80
entradas distintas de `Team.Cal_evaCoatMulti9block`, capturadas da partida local.
Entradas, saídas, APK, DLLs e dumps de JIT ficam exclusivamente em `build/`.

| Modelo independente | Discriminantes correspondentes | Cal correspondentes |
|---|---:|---:|
| Operações binary32 | 34/36 | 27/80 |
| Operações binary64, estreitamento em armazenamento/chamada | 36/36 | 80/80 |

`inspect_arm_jit.py` decodificou integralmente os dez dumps de métodos ARM.
Todos contêm instruções VFP. Em `Expression`, os argumentos são alargados com
`vcvt.f64.f32`; `vadd.f64` e `vsub.f64` não estreitam o intermediário.
Em `Local`, `vcvt.f32.f64` seguido de `vstr s0` precede a releitura do local.
`Field`, `Array`, `PassArgument`, `Loop` e `ExplicitConversion` mostram o mesmo
estreitamento no ponto correspondente. O método candidato a inlining preserva
armazenamentos float. O chamador de `ReturnValue` recebe float em `r0` e usa
`vcvt.f64.f32` antes da subtração.

No kernel Cal, os offsets relativos ao início do código JIT são:

```
0140 vmov s0, r1
0144 vcvt.f32.s32 s0, s0
0148 vcvt.f64.f32 d2, s0
0168 vldr s0, [r1]
016c vcvt.f64.f32 d3, s0
0170 vmul.f64 d2, d2, d3
0174 vcvt.s32.f64 s0, d2
0178 vmov r1, s0
```

Isso confirma o caminho JIT ARM/VFP, e não um JIT x86 ou uma implementação
aritmética por software do Mono. O próprio hardware ARM convidado é emulado
por QEMU no host; nenhuma medição de velocidade de hardware é inferida.

A primeira execução terminou, mas uma recriação da Activity iniciou novamente
o Mono e sobrescreveu o status. Essa execução foi rejeitada como evidência
completa. O executor passou a inicializar o Mono uma única vez por processo;
a repetição produziu o status completo, os 144 resultados e os dez dumps.

Receita local (os scripts verificam hashes e não publicam conteúdo):

1. `build_android.py --captures build/hot-input-capture-arm80/inputs --output <diretório novo em build/>`
2. `run_emulator.py` com esse build e o ADB local; em uma instalação anterior
   assinada com outra chave de teste, remova somente `org.plsresearch.floatprobe`.
3. `read_android.py --adb <adb> --serial emulator-5580 --build <build> --captures build/hot-input-capture-arm80/inputs --output <diretório novo>`
4. `inspect_arm_jit.py --results <diretório de resultados>`.
5. Encerre o emulador antes dos benchmarks de CPU do PC.

A variante real do emissor reproduziu **36/36** discriminantes. A emissão
anterior reproduziu **34/36**, usada como controle negativo. Quatro tipos do
jogo foram regenerados e recompilados em experimento privado, usando as mesmas
declarações e os demais objetos autenticados: **144/144** resultados de kernels
iguais ao emulador, incluindo **80/80** do Cal. Não houve promoção de cobertura
normal nesse experimento. As 1.768 definições emitidas e as 22 declarações
virtuais pendentes permaneceram as mesmas. Uma divergência inicial de comparação
era a representação dos caminhos de diagnóstico no relatório, não assinaturas;
os trechos `.inc` de corpos também passaram a ser reconhecidos como corpos.

Receitas locais: `build/fp-emission-arm-v1/receipt.json` e
`build/fp-game-kernels-arm-v1/receipt.json`. Executável dos kernels:
SHA-256 `00dc2d2d26c7494c404ed3d18178e7322ba64004684f54904e408826c96d2456`.

O driver de produção seleciona `mono-arm-vfp` para ambos os assemblies.
`binary32` permanece disponível para fixtures de semântica comum do CLR e
controles negativos. A avaliação de operações float usa binary64; conversões
explícitas para float, locais, campos, elementos, argumentos e retornos float
estreitam para binary32. Conversão int→float estreita antes de alargar o valor
para uma operação; boxing e formatação preservam o tipo float do fonte.
`/fp:strict`, nulo e limites continuam obrigatórios. A confirmação física e a
comparação do replay completo após regeneração ainda são pendências.
