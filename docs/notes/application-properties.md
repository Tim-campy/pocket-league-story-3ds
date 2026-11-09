# Modelo de plataforma e cache GetProperty

O método reconstruído `IApplication.GetProperty`, em
`reference/src/KairoLibrary/kairo/unity/ui/IApplication.cs:590`, reconhece
`microedition.platform` e `Platform` com distinção de maiúsculas/minúsculas e
devolve `platform_`. Antes de Awake preencher o campo, esse resultado é null,
mesmo que o dispositivo já tenha um modelo disponível. As demais chaves são
delegadas a `JSystem.GetProperty`, que devolve null para essas chaves. Chave
null gera NullReferenceException em IApplication pelo primeiro `key.Equals`.
O método de JSystem isolado, em `java/lang/JSystem.cs:29`, tem comportamento
diferente para chave null: sua comparação com `==` é tolerante e retorna null.
Não confundir os dois contratos.

O adaptador nativo `IApplication::host_platform` grava o modelo em
`SharedField<String>`. `GetProperty` apenas lê esse cache nos dois aliases;
não consulta o SO a cada leitura. A inicialização gerada deve chamar
`host_platform(pls::sdl::device_model())` na etapa de plataforma do Awake,
após Canvas e antes dos recursos e Main.OnCreate. A ordem real é uma obrigação
da integração do bootstrap; o teste de propriedade não prova que um boot ocorreu.

O backend PC lê **SystemProductName**, tipo REG_SZ, em
`HKLM\HARDWARE\DESCRIPTION\System\BIOS`, por RegGetValueW com RRF_RT_REG_SZ.
Há consulta prévia do tamanho, limite de **65.536 bytes** e **quatro tentativas
de leitura** após a consulta, respeitando o tamanho devolvido por ERROR_MORE_DATA.
Respostas ímpares, vazias, sem terminador, maiores que o buffer/limite ou com
erro são recusadas. Os code units UTF-16 são preservados sem trim. Ausência,
permissão negada, tipo incompatível, dado inválido ou tentativas esgotadas dão
o literal de fallback **Windows**. Esse é um modelo/fallback de plataforma PC;
não imita um aparelho Android nem declara igualdade a SystemInfo.deviceModel
do Unity. Outros hosts ainda recusam o backend não implementado.

RegGetValueW pertence ao Windows SDK existente, link **Advapi32.lib** já usado
pelo backend de localização. Não foi instalada dependência e não foi escrito
o registro. A semântica de tamanho, terminação e retorno está na
[documentação oficial de RegGetValueW](https://learn.microsoft.com/en-us/windows/win32/api/winreg/nf-winreg-reggetvaluew).
O campo SystemProductName é descrito no inventário oficial
[Windows 7–8.1 Appraiser events and fields](https://download.microsoft.com/download/1/C/B/1CBFB434-46C5-4075-811E-A8F4C336182F/Windows%207-8.1%20Appraiser%20events%20and%20fields.pdf).

`python tools/test_application_properties.py` compila os spans exatos dos dois
métodos C# com colaboradores Unity sintéticos, sem original DLL carregada:
**132/132 casos** (66 por perfil SDK Mono unity/.NET) passaram contra a API
nativa de cache. Incluem estado antes do Awake, aliases/case/whitespace,
unknown e MIDlet-Jar-URL, chave null, mudança do modelo vivo sem atualizar o
cache, atualização explícita, cache null e UTF-16 com NUL/surrogate. A identidade
da referência ao String em cache também é comparada. O core Mono externo deve
ter o SHA-256 idêntico ao core gerenciado do APK, já comprovado na preparação.

Mais **21 invariantes de backend** cobrem tamanho/bounds, null-termination,
erros, crescimento, limite de tentativas, máximo aceito e o resultado vivo
não vazio. O valor do hardware **não é impresso nem recebe hash** nos logs ou
recibo. O seam de leitura usa dados próprios para provar falhas e retries.

O recibo `config/phase2-application-properties-tests.json` promove somente
`M:kairo.unity.ui.IApplication.GetProperty(System.String)` quando a comparação
passa. As 22 observações de JSystem direto por perfil são contexto de fonte,
incluindo o ramo iPhone, **não prova de JSystem nativo**. Não foi acrescentado
um helper JSystem de modelo vivo nem promovido esse método. Teste de bootstrap,
OS Android e comportamento de título/menu não são inferidos deste recibo.
