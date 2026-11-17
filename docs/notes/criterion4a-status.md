# Critério 4a: fidelidade do código gerado (estado em 2026-11-16)

Divisão decidida pelo usuário em 2026-11-16: o critério 4 do congelamento passa
a ser só o que afeta o código gerado (4a). A comparação de telas com o original
e a medição com vídeo real (4b) foram para a Fase 4.

## Decisões do usuário (2026-11-16, segunda rodada)

- **`ref` de campo de receptor nulo: seguir o Android (opção b).** O emissor
  (`Translator.ValueStorage(..., deferOwner)`) passou a ler o dono do campo na
  posição do argumento, avaliar os argumentos seguintes, verificar o receptor da
  chamada e só então verificar o dono e formar a referência. Fixture
  `RefFixtures.NullFieldOrder`: 7/7 iguais ao Mono (`translator/test_ref.py`,
  189/189); oráculo numérico: extra `extra_ref_null_field_order` (Mono ARM = 2).
  Nenhuma referência C++ para objeto nulo é formada: a exceção sai antes da
  chamada, depois dos argumentos (no Mono ARM ela sai dentro do método chamado,
  ao desreferenciar; a diferença só aparece se o método chamado tiver efeitos
  antes de usar a referência — nenhum caminho exercitado do jogo passa por aqui).
- **`JMath.Sin(-0)`: fiel ao Android.** O diferencial portável usa o resultado do
  Mono ARM como referência nesse caso (`arm_reference_overrides` no recibo);
  resultado 2.618/2.618, sem divergência conhecida.
- **O que resta do 4a:** a repetição da sonda num aparelho Android, pelo usuário.

## Estado de cada item (antes das decisões)

| Item | Estado | Evidência | O que falta |
|---|---|---|---|
| Regra de ponto flutuante (binary64 nas operações, estreitamento para binary32 em armazenamento, argumento, retorno e conversão explícita) | Adotada; **confirmada em emulador ARM**, pendente de aparelho | 36/36 discriminantes e 144/144 resultados de kernels (80/80 do `Team.Cal_evaCoatMulti9block`) no Mono oficial do Unity 5.3.4f1 em ARMv7/VFP; código JIT decodificado ([android-arm-emulator-float.md](android-arm-emulator-float.md)) | Repetição no aparelho, feita pelo usuário (procedimento abaixo) |
| `ref` de campo de receptor nulo (7 casos, `RefFixtures.NullFieldOrder`) | Divergente do Mono Windows; Android `UNKNOWN` | Mono Windows padrão avalia o argumento seguinte antes da `NullReferenceException` (resultado 2); o C++ lança antes (0); com `MONO_DEBUG=explicit-null-checks` o Mono coincide com o C++ ([android-semantic-unknowns.md](android-semantic-unknowns.md)) | A sonda do aparelho agora mede o caso (`extra_ref_null_field_order`); depois, **decisão do usuário** |
| `JMath.Sin(-0)` (repassa a `Math.Sin`) | Divergente do Mono Windows; Android `UNKNOWN` | Mono Windows devolve +0 (`0000000000000000`); o C++ (libm) devolve −0 (`8000000000000000`); diferencial portável 2.617/2.618 | A sonda do aparelho agora mede o caso (`extra_sin_negative_zero`); depois, **decisão do usuário** |

### Medição no emulador ARM com os extras (2026-11-16)

O APK de teste com os dois extras rodou uma vez no emulador ARM privado
(Android 21 armeabi-v7a, Mono oficial do Unity 5.3.4f1; resultados em
`build/fp-emulator-4a-1-results/`, fora do Git):

| Medida | Mono ARM (emulador) | C++ do port | Mono Windows (oráculo do diferencial) |
|---|---|---|---|
| 36 discriminantes de ponto flutuante | 36/36 no modelo adotado | 36/36 | — |
| Kernel `Cal_evaCoatMulti9block` | 80/80 no modelo adotado | 80/80 | — |
| `Math.Sin(-0.0)` | **−0** (`8000000000000000`) | −0 | +0 |
| `ref` de campo de receptor nulo | **2** (argumento antes da exceção) | 0 (exceção antes) | 2 |

Leitura:
- **`Sin(-0)`: o port já coincide com o Mono ARM.** A divergência do diferencial
  portável (2.617/2.618) é do oráculo Windows, não do port. Proposta: registrar
  a observação como fiel ao Android e manter o código; confirmar no aparelho.
- **`ref` de campo de receptor nulo: o port diverge do Mono ARM.** No Android a
  `NullReferenceException` vem depois de avaliar os argumentos seguintes. É uma
  diferença real de ordem de efeitos, restrita a caminhos que lançam
  `NullReferenceException` passando um campo de objeto nulo por `ref`.

### Decisões que caberão ao usuário (depois da medição no aparelho)

1. **`ref` de campo de receptor nulo.** Opções:
   a) manter o C++ atual (exceção antes de avaliar os argumentos seguintes);
   b) seguir o Android, se ele avaliar o argumento antes (resultado 2): o
      tradutor passaria a avaliar os argumentos e só então verificar o receptor
      ao formar a referência. O efeito é invisível no jogo salvo em caminhos que
      lançam `NullReferenceException`, que no jogo terminam no diálogo de erro.
   Na prática: nenhum caminho exercitado do jogo passa um campo de receptor nulo
   por `ref` (cobertura do critério 3 sem exceções desse tipo).
2. **Sinal de `Sin(-0)`.** Opções:
   a) manter −0 (libm);
   b) seguir o Android, se ele devolver +0: normalizar o zero na ponte de
      `JMath.Sin`.
   O sinal só aparece em quem distingue −0 de +0 (divisão por zero, `Atan2`,
   formatação "-0"); no jogo, `JMath.Sin` alimenta coordenadas de desenho.

## Procedimento no aparelho (10 minutos)

Requisitos: aparelho Android que aceite ARMv7 de 32 bits, com depuração USB
autorizada; ADB local (`C:/Users/l_abn/Documents/Projetos/Kairosoft/external/android-45f4d63113e8/platform-tools/adb.exe`).
O APK de teste já está gerado em `build/fp-android-device-build-4a/numerical-oracle-armv7.apk`
(SHA-256 `1da28c2463a09967cbafc228a66e02d831a67d076996019f00dfa9702c664bb4`): é
um embedding independente do Mono oficial do Unity 5.3.4f1, sem o jogo e sem
dados do jogo; não substitui nem toca o jogo instalado.

No PowerShell, na raiz do port:

```powershell
$adb = 'C:/Users/l_abn/Documents/Projetos/Kairosoft/external/android-45f4d63113e8/platform-tools/adb.exe'
& $adb devices -l                      # anote o serial do aparelho
$serial = 'SERIAL_DO_APARELHO'
& $adb -s $serial install -r build/fp-android-device-build-4a/numerical-oracle-armv7.apk
& $adb -s $serial shell am force-stop org.plsresearch.floatprobe
& $adb -s $serial shell am start -n org.plsresearch.floatprobe/.ProbeActivity
```

Espere a tela mostrar `Completed` (cerca de 1 minuto). Depois:

```powershell
python tools/fp-discriminants/read_android.py --adb $adb --serial $serial --build build/fp-android-device-build-4a --captures build/hot-input-capture-arm80/inputs --output build/fp-android-device-4a-1
python tools/fp-discriminants/inspect_arm_jit.py --results build/fp-android-device-4a-1
& $adb -s $serial uninstall org.plsresearch.floatprobe
```

A última linha do `read_android.py` mostra `discriminants: 36`, `kernels: 144`
e os dois extras. Leitura:
- discriminantes: a coluna `matching_models` de cada linha em
  `build/fp-android-device-4a-1/report.json` deve conter
  `binary64_narrow_storage_and_calls` nas 36;
- `extra_sin_negative_zero`: `8000000000000000` = −0 (igual ao port),
  `0000000000000000` = +0 (igual ao Mono Windows);
- `extra_ref_null_field_order`: valor 2 = argumento antes da exceção (Mono
  Windows), 0 = exceção antes (port).

Se a instalação falhar num aparelho só 64 bits, isso não informa nada sobre a
aritmética. Se o aplicativo parar antes de `Completed`, guarde
`adb logcat -d` e `adb shell run-as org.plsresearch.floatprobe cat files/probe/status.txt`.
Nada disso entra no Git.
