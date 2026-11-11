# Testes discriminantes de R4

Estado: triagem no Mono x86 executada; Android ARM **UNKNOWN**. Nenhuma
alteração de ponto flutuante foi adotada no emissor de produção.

`python tools/fp-discriminants/run_x86.py` compila
`FloatDiscriminants.cs` com o smcs da instalação Unity 5.3.4f1,
`-optimize+ -debug-`, e executa o Mono da mesma instalação. O relatório
privado `build/fp-discriminants-x86/report.json` registra comandos, hashes
do fonte, compilador, runtime, mscorlib e executável, previsões independentes
e resultados bit a bit. `cil.tsv` registra o IL emitido, os slots locais e
os atributos NoInlining, sem depender da aparência do C#.

São 36 observações: nove construções, duas magnitudes e os dois sinais.
O caso básico usa `a = 2^24`, `b = 1`, e devolve a diferença em relação
a `a`. A soma é exatamente representável em binary64, mas não em binary32.
O segundo usa `a = 2^53`: a soma deixa de ser representável em binary64,
mas ainda cabe no significando de 64 bits de x87. Os negativos são simétricos.

| Construção | Mono x86, a=2^24 | Mono x86, a=2^53 |
|---|---:|---:|
| Expressão `(a+b)-a` | 1 | 0 |
| Armazenamento em local float | 0 | 0 |
| Armazenamento em campo float | 0 | 0 |
| Armazenamento em elemento float[] | 0 | 0 |
| Argumento float de chamada NoInlining | 0 | 0 |
| Retorno float de chamada NoInlining | 1 | 0 |
| Retorno de método pequeno candidato a inlining | 0 | 0 |
| Três somas acumuladas em local float | 0 | 0 |
| Conversão explícita para float | 0 | 0 |

O resultado diferente das duas chamadas de retorno é medido; atribuí-lo
exclusivamente ao inlining exige inspecionar o código nativo ou executar
uma variante com inlining desabilitado. O IL das duas funções soma é
idêntico (`ldarg.0; ldarg.1; add; ret`), e uma tem NoInlining.
Não extrapolar a observação de stloc deste teste a todo local mantido em
registrador após otimizações. Também não inferir o ABI ARM a partir do retorno
x86. A magnitude 2^53 não revelou retenção x87 extra nestes casos; isso
não prova sua ausência em outras expressões.

O runner calcula modelos separados: binary32 estrito; binary64 com
estreitamento em armazenamento e chamadas; retenção de locais; retenção
no candidato a inlining; retenção de retorno; e retorno com precisão x87.
Um caso pode coincidir com vários modelos. Uma coincidência não promove
o modelo a regra do port.

## Capturas de jogo existentes

O conjunto histórico em `build/hot-input-capture/inputs` contém **80 entradas
no total: 16 para cada um de cinco kernels**, incluindo 16 de
`Team.Cal_evaCoatMulti9block`. Não são 80 entradas desse único método.
O executor Android deve preservar essa distinção e informar separadamente
eventuais capturas adicionais. Capturas e resultados ficam fora do Git.

## Android

O executor foi compilado e assinado localmente; execução no aparelho permanece
UNKNOWN. Usa o libmono ARMv7 da instalação oficial Unity, SHA-256
`3ac02e3aee5c4ad2044732c6aec2f8f22bd02db251a3775f51da1d38e2cfa3c1`.
Não substitui o jogo instalado nem usa a biblioteca extraída do APK do jogo.
O binário, as DLLs reconstruídas, a chave de teste e entradas privadas
permanecem em `build/fp-android/`. Não distribuir esse APK.

Pré-checagem estática com `llvm-nm`/`llvm-readelf` do NDK: as 17 funções
usadas pelo JNI estão exportadas com versão padrão `@@VER_1`, e não há
entrada `TEXTREL`. A primeira comparação textual marcou falsamente os
símbolos como ausentes por não remover o sufixo de versão; a conferência
dos exports padrão corrigiu o diagnóstico. Isso não comprova que o Mono
inicializa dentro do processo ART nem substitui o teste no aparelho.

Consulta ADB nesta rodada: lista de dispositivos vazia. Usado ADB já
presente no ambiente, versão 1.0.41 / 37.0.1-15733141, SHA-256 do executável
`b4a6b455702684652cccf7b46258b29e653538904359a58fd4931cf3ef286b3f`.
Nenhum APK foi instalado ou executado nessa consulta.

Procedimento no PowerShell, na raiz do port, com o celular conectado e
autorizado para depuração USB (substitua os dois valores indicados):

```powershell
python tools/fp-discriminants/setup_android.py
python tools/fp-discriminants/build_android.py
$probeAdb = 'CAMINHO_LOCAL_DO_ADB.exe'
$probeSerial = 'SERIAL_DO_APARELHO'
& $probeAdb devices -l
& $probeAdb -s $probeSerial install -r build/fp-android/numerical-oracle-armv7.apk
& $probeAdb -s $probeSerial shell am force-stop org.plsresearch.floatprobe
& $probeAdb -s $probeSerial shell am start -n org.plsresearch.floatprobe/.ProbeActivity
```

Espere a tela informar `Completed`. Se o Android solicitar confirmação da
instalação, confirme apenas este APK de teste; não desative proteções globais.
O aparelho precisa aceitar ARMv7 de 32 bits. Uma falha de instalação em
aparelho somente 64 bits não informa nada sobre a aritmética.

```powershell
python tools/fp-discriminants/read_android.py --adb $probeAdb --serial $probeSerial --output build/fp-android-device-1
```

O coletor exige os 36 discriminantes e 80 resultados dos cinco kernels,
compara bits com os modelos e com os resultados x86/C++ anteriores e grava
propriedades do aparelho e logcat localmente. Repetições usam diretório novo.
Se falhar antes de `Completed`, preserve `adb logcat -d` e leia
`adb shell run-as org.plsresearch.floatprobe cat files/probe/status.txt`;
não classifique resultados ausentes como coincidência.

O executável C# inclui o IL e os tipos locais no relatório para conferir
os pontos de estreitamento. A inicialização é um embedding independente
do Mono oficial; equivalência das opções de inicialização do JIT com o jogo
é UNKNOWN. Essa limitação deve ser confrontada com os resultados antes de
aprovar qualquer regra. Nenhum script adota a regra automaticamente.
