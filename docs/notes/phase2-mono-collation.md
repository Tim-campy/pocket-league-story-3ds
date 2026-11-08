# Componente cultural histórico: escopo e prova

O levantamento bound está em `config/culture-usage.json/.csv`; não se presume
uma cultura única nem alfabeto ASCII para os dados de Language e a entrada do
usuário. O subconjunto escolhido oferece comparação, igualdade ignorando caixa,
busca para a frente e para trás, prefixo, sufixo e mudança de caixa. A produção
pública de SortKey, normalização geral e os demais serviços da VM ficam fora.
Os pesos internos de quatro bytes continuam necessários às buscas do collator.

Os fontes canônicos vêm do repositório oficial `mono/mono`, commit
`f08f8a27bfe3aafda4e430ee2365dec73c1070d7`, ramo `mono-2-6`.
Os 17 arquivos fixados são idênticos aos do fork oficial Unity em
`b6587926c0f146c8b12985744f33a13b39a22d57`, merge de staging 5.3 de
2016-03-11. A revisão exata usada para fabricar o SDK é **UNKNOWN**.

O helper PEReader próprio `tools/MonoCollationMetadata.cs` não carrega assemblies.
Ele comprova identidade dos sete recursos com o APK e os dois perfis do SDK:
**21/21** hashes iguais. Os **94/94** corpos IL de SimpleCollator e
MSCompatUnicodeTable do perfil Unity coincidem com o APK inclusive nos tokens
brutos. No perfil 2.0, **17/94** coincidem dessa forma; os tokens não foram
normalizados, portanto os demais não são prova de diferença de algoritmo.
O recibo é `config/phase2-mono-collation-source.json`. Nenhuma DLL ou tabela
original foi salva no port; as tabelas compiláveis vêm das URLs oficiais fixadas.

A licença MIT/X11 cobre a biblioteca de classes; os avisos e hashes estão em
[THIRD_PARTY.md](../../THIRD_PARTY.md) e [toolchain.md](../toolchain.md).
O auxiliar `mono/metadata/char-conversions.h` tem licença separada: sua atribuição
no commit histórico é LGPL/comercial, não o grant MIT da biblioteca de classes.
O header foi removido em upstream em 2015, antes da troca geral de licença de
2016; não se supõe que a licença moderna cubra retroativamente esse arquivo.
O usuário autorizou explicitamente essas tabelas LGPL e sua proveniência separada.
Elas agora fornecem o provider real; licença exata GNU Library GPLv2 June 1991 em
`third_party/mono-lgpl/COPYING.LIB`, SHA
`e0db38a37e8178f2032d4e6964e9108d99242b76bedc7818cb39cd856de96389`.
Nenhum fallback para NLS/ICU ou para ordinais foi adotado.

## Contrato dos overloads históricos

Referências abaixo: [String.cs oficial fixado](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/System/String.cs),
SHA-256 `011015d86d73fe057f8eefbb8f84f600f112fe324b5d290fdc8cd14dfda26547`.
O comentário de seção no fonte não substitui o corpo real do overload.

| Operação | Emissão/encaminhamento histórico | Linhas |
|---|---|---|
| `IndexOf(string)` | `CompareOptions.Ordinal`, mesmo com comentário cultural | 1182–1190 |
| `IndexOf(string,start[,count])` | CurrentCulture, `CompareOptions.None` | 1193–1230 |
| `Contains(string)` | chama `IndexOf(string)`, portanto ordinal | 1427–1431 |
| `IndexOf(char[,start[,count]])` | comparação ordinal direta de code units | 1091–1157 |
| `LastIndexOf(string[,start[,count]])` | CurrentCulture, `CompareOptions.None` | 1374–1424 |
| `LastIndexOf(char[,start[,count]])` | comparação ordinal direta de code units | 1286–1354 |
| `IndexOf/LastIndexOf` com StringComparison | modo solicitado; invariant e ordinal explícitos não viram CurrentCulture | 882–915, 985–1021 |
| `StartsWith(string)` / `EndsWith(string)` | CurrentCulture, `CompareOptions.None` | 1546–1552, 773–779 |
| Prefixo/sufixo com StringComparison | modo solicitado | 1556–1603 |
| Prefixo/sufixo com bool e CultureInfo | cultura recebida, CurrentCulture quando null; IgnoreCase quando true | 786–796, 1611–1617 |
| `CompareTo(string/object)` | String.Compare, CurrentCulture; objeto de outro tipo lança ArgumentException | 668–685 |
| `Equals(string/object)`, `==`, `!=` | igualdade ordinária de conteúdo ordinal | 122–146 |
| `Equals(...,StringComparison)` | String.Compare no modo solicitado; instância usa operandos invertidos, irrelevante para igualdade | 632–640 |
| `ToLower/ToUpper()` | CurrentCulture.TextInfo; LCID 127 usa o caminho invariant | 1761–1840 |

`Char.cs`, linhas 453–512, encaminha ToLower/ToUpper para CurrentCulture.TextInfo;
os overloads invariant acessam diretamente os dados históricos. `TextInfo.cs`,
linhas 332–421, possui regras especiais turcas/azeri e regras gregas/latinas;
não é conversão Unicode moderna nem simplesmente ASCII. Ambos são fontes MIT
fixados em `tools/setup_mono_collation.py`. O acesso dos dados de CharacterData
é uma questão separada da licença desses algoritmos.

Uma chamada de instância em receiver null deve lançar NullReferenceException
antes do helper; a igualdade estática aceita null. O emissor precisa preservar
essa distinção ao selecionar a API, além da ordem de avaliação já contratada.

## Validação nativa e limites atuais

`python tests/translator/run_mono_collation.py` reexecuta o probe anterior:
120 observações por perfil, invariante/en-US/tr-TR. O C++ histórico obteve
**120/120** iguais ao Mono. O perfil .NET moderno continua sendo observado
separadamente; não se afirma que esse collator histórico o implemente.

Um segundo corpus próprio possui **25.704 observações** em oito culturas:
invariante, en-US, tr-TR, fr-FR, ja-JP, ko-KR, zh-CN e zh-TW. São buscas em ambas
as direções, faixas vazias/inválidas, prefixos/sufixos, comparação e mudança de
caixa sobre 17 strings sintéticas, incluindo NUL, soft hyphen, caracteres
combinantes, não atribuído e surrogate isolado. O C++ passou **25.704/25.704**;
o contraste .NET10 diverge do Mono em **4.226** observações. Esse subtotal é
**25.824/25.824**, sem promoção automática de raízes.

A prova adicional percorre **todos os 65.536 code units** do BMP: lower/upper nas
culturas invariante, en-US e tr-TR; lower/upper explicitamente invariant; e o
predicado OtherNotAssigned. São **589.824/589.824** observações aprovadas, com
**10.739** diferenças entre os oráculos moderno e histórico. O total de colação
e dados de caracteres é **615.648/615.648**. Não se confunde esse total de
observações sintéticas com métodos de produção executados.

Tentativas negativas de ampliar esse corpus a Azeri foram registradas: tanto
`CultureInfo("az-Latn-AZ")` quanto `CultureInfo(1068)` lançam ArgumentException no
SDK histórico. O corpus usa as três culturas suportadas indicadas; a condição
de TextInfo para o pai LCID 44 permanece implementada conforme o fonte, sem
alegar que o SDK disponibilize essa cultura específica.

`tools/inspect_android_unicode.py --apk <APK_LOCAL>` também encontrou os cinco
arrays oficiais completos (CategoryData e quatro de caixa), cada um uma única
vez em `.rodata`, nas duas bibliotecas x86/armeabi-v7a do APK: **10/10** identidades
aprovadas. Os offsets e hashes estão em `config/phase2-android-unicode.json`.
Dois ELF malformados próprios foram recusados. Isso é comparação estática em
memória; não salva tabelas do original nem executa a biblioteca.

A primeira tentativa obteve **114/120**. As seis divergências foram a busca de
`é` por `e` seguido de acento combinante e vice-versa nos três perfis culturais.
O motivo foi confundir IndexOf(string), explicitamente ordinal no Mono, com o
overload com start, cultural. Separar os overloads conforme o fonte resolveu os
seis casos; não houve alteração das tabelas nem exceção por conteúdo.

As primeiras execuções usavam um provider limitado às fixtures, registrado como
TEST_ONLY e sem promoção. Após autorização LGPL, os dois corpora foram repetidos
com `install_mono_collation_character_data()`, que usa as tabelas reais completas.
Esse provider não depende do alfabeto das fixtures. A CurrentCulture deve ser fornecida pelo host por
LCID, cadeia de pais e cultura neutra; nenhuma relação com Language.Get foi
presumida. O collator é armazenado por thread e invalidado ao trocar a cultura.

O host configura o default de processo por `set_default_collation_culture`.
Um worker sem override usa esse default; ele não herda o override do pai, como
comprovado em sete observações de `ThreadCultureProbe.cs`. No perfil PC histórico,
o default en-US/1033 é sustentado pelo stub `g_win32_getlocale()` da Unity:
[`gmisc-win32.c`, linhas 82–89](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/eglib/src/gmisc-win32.c#L82-L89)
retorna sempre `en_US`; SHA-256
`cec1abe3c686d424f61b0d72cca8477c103b6a6df03eaf8abc7931895322b342`.
Isso explica a diferença entre CLR en-US e o locale Windows pt-BR medido. O
default não vem de Language.Get nem de GetUserDefaultLocaleName. A cultura CLR
efetiva no Android continua UNKNOWN: o ramo POSIX lê LC_ALL/LANG/setlocale e
não foi executado no aparelho nesta prova.

Nenhum membro de produção é promovido automaticamente por essas fixtures. A execução do método
no Android permanece **UNKNOWN**; identidade de recursos e IL foi medida sem
executar binários originais. Medições NLS anteriores de **26/120 diferenças**
continuam refutando uma substituição silenciosa pelo backend do Windows.

## Memória das tabelas

| Recurso oficial | Bytes de payload readonly |
|---|---:|
| core | 118901 |
| tailoring | 6724 |
| cjkJA | 44549 |
| cjkCHS | 55813 |
| cjkCHT | 44549 |
| cjkKO | 44549 |
| cjkKOlv2 | 22273 |
| **Total** | **337358** |

As tabelas BMP sob a licença separada adicionam **46.832 bytes**: 38.640 de
lower/upper e 8.192 do bitmap OtherNotAssigned. O total readonly lógico é
**384.190 bytes**. O bitmap é calculado dos 65.536 valores de CategoryData, sem
alterar o predicado observado pelo collator; as tabelas numéricas não são usadas.

Core contém 16384 bytes de flags, 42160 de categorias, 42160 de nível 1, 8704 de
nível 2 e 9472 de nível 3, além de 21 bytes de cabeçalho/tamanhos. Tailoring possui
33 registros e 3142 code units UTF-16; a cópia nativa do texto custa 6284 bytes
de payload no heap, além das estruturas. Não se omite silenciosamente CJK porque
a cultura efetiva ainda não foi determinada. O tamanho lógico readonly é exato;
o executável, padding e estruturas no ABI do 3DS são **NOT_MEASURED**, pois o SDK
da Fase 4 não foi instalado. Os dados são constexpr; não são duplicados para o
heap do collator, salvo as estruturas de tailoring descritas acima.
