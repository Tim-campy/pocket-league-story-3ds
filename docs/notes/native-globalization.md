# Locale e timezone da plataforma PC

As três folhas que substituem `JavaPlugin.GetDefaultLocale/GetDefaultTimeZone/
GetUtcOffset` ficam na API `src/kairo/api/globalization.hpp`, com backend Windows
em `src/kairo/platform/sdl/globalization.cpp`. Nenhum AndroidJavaClass, JNI ou
Unity é inicializado. O host chama `pls::sdl::install_globalization_backend()`
antes dos cctors/workers; fixtures podem instalar callbacks próprios pela mesma
API. O build Windows liga **Advapi32.lib**, disponível no SDK já instalado.

São dados de plataforma, independentes da cultura CLR. Locale usa
GetUserDefaultLocaleName/GetLocaleInfoEx para language/country. Os códigos antigos
he→iw, id→in e yi→ji preservam o contrato Java/Android do alvo antigo. Os métodos
C# `JLocale.GetDefault` e `Language.Get/Init` continuam gerados; o backend não
escolhe idioma do jogo. Nesta máquina, a folha retornou **pt/BR**, embora o
default CLR Mono histórico seja en-US por seu stub Windows.

Timezone usa GetDynamicTimeZoneInformation e seu TimeZoneKeyName. O raw offset
vem de Bias e StandardBias quando sua regra existe, com sinal invertido e
milissegundos; exclui o acréscimo DST, como `TimeZone.getRawOffset`. O ID de
plataforma é uma chave **Windows**, não um ID IANA. Nesta máquina:

| Origem | ID | Raw offset em ms |
|---|---|---:|
| Java próprio | America/Sao_Paulo | -10800000 |
| Backend Windows | E. South America Standard Time | -10800000 |

Não existe fallback Asia/Tokyo/ja-JP do editor Unity no backend PC. O ID Windows
faz roundtrip no provider. GMT/UTC e os IDs customizados GMT±HH[:MM] são
suportados; lookup IANA geral é explicitamente NotSupported. Isso evita devolver
zero para um ID IANA válido sem possuir uma base que o resolva. Identificadores
desconhecidos sem essa forma retornam GMT/offset zero, como a API Java.

O fonte inspecionado do jogo não chama `JTimeZone.GetID` nem
`JTimeZone.GetTimeZone(string)`. Os IDs ficam no roundtrip da construção/Clone de
JTimeZone e em TimeZoneInfo customizado. Os consumidores medidos são os campos
de calendário em `GamePad.DrawWatch`, `AppData.SendSaveData`, `SpForm.Init` e
`PurchaseRecord.GetTimeStamp/GetTimeStampNengappi`. Usam GetInstance, SetTime ou
SetTimeInMillis e Get; esses caminhos começam em JDate UTC e aplicam o raw offset
original. Não se reescreveu JCalendar nem seus bugs.

Não foi instalado um TimeZoneInfo.Local falso de offset fixo, nem um callback
DateTime Local→UTC que descarte DST silenciosamente. O código do jogo encontrado
não chama JCalendar.Clear/Set nem passa DateTime Local a JDate. Caso outro caminho
atinja essa conversão, o limite da fundação permanece explícito; não se alega
uma base histórica IANA ou DST completa a partir dessas folhas.

## Evidência

`python tools/test_globalization.py` usa o JDK Microsoft **21.0.12.1**, já
instalado, somente como oráculo de programa próprio, com
`-Djava.locale.useOldISOCodes=true`; não carrega classes.dex nem inicia Java no
programa nativo. São **39/39** comparações aprovadas: 24 formatos/IDs de timezone,
12 códigos de idioma e três valores reais do SO. Mais **12 invariantes nativos**
validam providers ausentes/inválidos, propagação de argumentos UTF-16 e falhas
explícitas. O recibo é `config/phase2-globalization-tests.json`.

A primeira linkedição falhou em EnumDynamicTimeZoneInformation; a dependência de
link Advapi32.lib foi adicionada conforme a documentação do SDK. Nenhuma ferramenta
ou biblioteca foi instalada. Os testes não promovem membros da fronteira por
conta própria nem constituem boot do jogo. A diferença de namespace do ID é
registrada, não escondida como igualdade com o Java/Android.

Fontes primárias: [DYNAMIC_TIME_ZONE_INFORMATION](https://learn.microsoft.com/en-us/windows/win32/api/timezoneapi/ns-timezoneapi-dynamic_time_zone_information),
[EnumDynamicTimeZoneInformation](https://learn.microsoft.com/en-us/windows/win32/api/timezoneapi/nf-timezoneapi-enumdynamictimezoneinformation)
e [Locale Android](https://developer.android.com/reference/java/util/Locale).
Essas APIs e o JDK atual são evidência de plataforma; execução do APK original
no Android para esses cenários não foi feita nesta prova.
