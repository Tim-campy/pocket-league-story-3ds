# Trim e hexadecimal Int32

`managed_string_ops.hpp/.cpp` fornece os dois overloads de `string_trim`
e `format_i32_hex(value, width, uppercase)`. São folhas do runtime .NET;
`Language.MakeTextTable` continua traduzido a partir do C# original.

O teste próprio `python tests/translator/run_string_ops.py` compara **395.166
casos**, **197.583 por perfil**, com Mono do SDK Unity 5.3.4f1 e .NET 10:
65.536 code units BMP nos três overloads default/null/array vazio, 63 pares
de strings/conjuntos explícitos, um receptor nulo e 176 formatos hexadecimais,
mais 65.536 sondas BMP e 26 casos de parsing `NumberStyles.HexNumber`, 632
casos Replace e 65.536 sondas BMP mais 77 casos explícitos de Split.
O recibo é `config/phase2-string-ops-tests.json`; nenhum método de produção é
promovido por essa prova de fundação.

O conjunto histórico inclui U+200B e U+FEFF. Ambos permanecem no resultado do
Trim moderno. U+202F e U+205F são removidos pelo Mono instalado, contrariando
a leitura inicial restrita ao ramo NET_2_0. O ramo NET_2_1 do fonte permite
esse resultado. Há quatro observações distintas entre perfis: os dois code
units isolados e os casos default/null de uma string com U+200B/U+FEFF.
Trim não é substituído por Regex `\s` nem por uma tabela Unicode atual.
Conjuntos explícitos com NUL, controles, duplicatas e surrogates operam por
code unit. A referência ao objeto original é preservada quando nada é removido.

Fonte primária: [Mono String.cs, revisão oficial fixada](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/System/String.cs#L393),
`Trim` e `FindNotWhiteSpace`, linhas 393–496. A proveniência MIT/X11 e o hash
desse arquivo estão em `docs/toolchain.md` e no recibo de preparação do Mono.
A medição dinâmica é do SDK Mono no Windows; a execução do Trim no Android
permanece UNKNOWN. A inspeção PE estática autenticada, sem carregar/executar
assembly e sem salvar sua DLL, comparou o perfil SDK **unity** com o mscorlib
do APK: **7/7 hashes de IL bruto iguais**, incluindo os dois Trim, TrimStart,
TrimEnd, FindNotWhiteSpace, FindNotInTable e `.cctor`. O campo `WhiteChars`
tem a mesma declaração; o bloco RVA de 56 bytes referenciado pelo `.cctor`
tem o mesmo SHA-256 `f85fb86a73ea0bd553c7023e521fc850a2a4648c978b864a4e994f5cb4453f15`.
Não foi necessária normalização dos tokens para obter a igualdade. O perfil
SDK **2.0** tem apenas 5/7 hashes iguais e um bloco constante diferente;
portanto não foi adotado como oráculo de Trim. Esse resultado também demonstra
por que o fonte com condicionais de compilação isoladamente não prova o perfil.
O SHA-256 **integral** do mscorlib unity também é idêntico ao membro do APK:
`7f16171cf5f87ca1e4c229727526d2fbc786079fc0c960f36197013ea0d986e1`.
Isso prova a identidade do core gerenciado, sem provar a execução/JIT nativos
do Android; a DLL original não entra no port nem em seu build.
Os hashes por método/campo estão em `config/phase2-mono-collation-source.json`,
gerados por `tools/setup_mono_collation.py` e `tools/MonoCollationMetadata.cs`.
`python tests/translator/run_core_profile.py` confirma o core efetivamente
carregado em cada MONO_PATH: 2.0 e unity carregam arquivos diferentes. O IL
da entrada Trim é igual em ambos; o auxiliar FindNotWhiteSpace é diferente.
O recibo `config/phase2-core-profile-tests.json` evita atribuir o comportamento
da biblioteca 2.0 à biblioteca unity/APK.

Hexadecimal usa o padrão Int32 `x`/`X` com precisão mínima **0–99**. Valores
negativos produzem oito dígitos em complemento de dois antes do padding;
valores positivos não são truncados à precisão. Casos cobrem zero, positivos,
Int32.MinValue/MaxValue, negativos e precisão 0, 1, 2, 7, 8, 9, 16 e 99.
Precisão fora de 0–99 e formatos customizados não fazem parte do contrato;
o helper recusa a precisão fora desse intervalo. Não se usa locale nativo.

`int32_parse_hex_number` implementa somente o estilo 515 (HexNumber, com
whitespace inicial/final), sem supor equivalência ao estilo 512 já existente.
O Mono aceita 188 dígitos BMP não ASCII e calcula seu valor como `c - '0'`,
inclusive quando esse valor excede 15. Isso é preservado; o .NET moderno
recusa esses caracteres. A regra é confirmada por
[Int32.ValidDigit e Parse no Mono fixado](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mcs/class/corlib/System/Int32.cs#L328).
São gerados **20 intervalos de DecimalDigitNumber, 80 bytes**, da mesma
CategoryData LGPL já autorizada e comparada estaticamente com os dois libmono
do APK. Nenhum dado de jogo é usado. O payload Unicode total sobe para
**384.270 bytes**, enquanto o subconjunto de colação continua 384.190 bytes.
Não são emitidas tabelas NumericData/NumericDataValues. O parser preserva NUL
histórico, retorno Int32 com bits de sinal, exceções de formato/overflow e sua
precedência nos casos medidos. O recibo final registra as diferenças entre os
perfis; não atesta mensagens localizadas nem todos os NumberStyles.
São **219 casos diferentes entre perfis**: quatro de Trim, quatro de Split, 208 sondas BMP
de HexNumber (188 dígitos e 20 whitespace) e três casos de borda de parsing:
overflow antes de um caractere inválido e dois sufixos após NUL.

A primeira execução passou 131.546/131.552: quatro falhas eram a suposição
incorreta sobre U+202F/U+205F; duas eram a comparação de nomes curtos de
exceção contra os nomes completos do runtime. Os testes passaram integralmente
após ajustar o conjunto à evidência e comparar `GetType().FullName`.
Na ampliação para HexNumber, a primeira execução passou 262.488/262.676;
as 188 falhas eram os dígitos históricos não ASCII. A execução com os
intervalos oficiais passou integralmente, incluindo a regressão de Trim.

`string_replace(value, old, replacement)` usa busca ordinal não sobreposta;
replacement nulo remove as ocorrências, old nulo/vazio gera a exceção original,
e receptor nulo gera NullReferenceException. Há overload por char16_t. Os
632 casos por perfil incluem identidade ReferenceEquals(input, result),
old==new, no-match, entrada vazia, mais de 200 ocorrências, NUL e surrogates.
Não houve diferença entre perfis nesse corpus. A lógica de Language continua
no fonte traduzido, sem tabela/literal de asset nesta implementação.

`string_split(value, separators)` implementa o overload **char[]**, opção
default None (preserva segmentos vazios). Separadores nulos/vazios escolhem
o conjunto de whitespace do perfil; não são substituídos por um Regex. Os
65.536 code units BMP foram testados com separadores null e vazios, além de
CR/LF separados, vírgulas repetidas, NUL, surrogate explícito e identidade do
segmento quando não há corte. O corpo usa code units, não code points. Não
implementa aqui count, StringSplitOptions nem separadores string[]. O runtime
nativo de InternalSplit do Android não foi executado; a prova dinâmica usa
o SDK com o core gerenciado integralmente idêntico ao APK.
