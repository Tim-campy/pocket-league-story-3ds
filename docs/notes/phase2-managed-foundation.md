# Fundação gerenciada: inicialização, exceções, codificações e regex

Os testes abaixo compilam programas C# próprios no SDK histórico e no CLR
moderno e comparam implementações C++ independentes. Não executam assemblies
do jogo nem provam cobertura do emissor de produção por si sós.

| Contrato | Reprodução | Observações aprovadas |
|---|---|---:|
| Inicialização estática por tipo | `python tools/test_type_init.py` | 24 |
| Referências e hierarquia de exceções | `python tools/test_exception_objects.py` | 74 |
| UTF-8, UTF-16 LE/BE e ASCII | `python tools/test_runtime_encoding.py` | 134 |
| Regex do caminho Language/TextLayout | `python tools/test_regex.py` | 752 |

## Inicialização por tipo

`managed_type_init.hpp` coordena uma inicialização por tipo fechado. O emissor
mantém armazenamento zerado, inicializadores na ordem do fonte e o corpo do
construtor estático. Reentrada no mesmo thread observa o estado parcial;
outros threads esperam. O guard conserva a falha e a identidade da exceção de
inicialização. O detector de ciclos cobre esperas entre inicializadores, não
deadlocks arbitrários escritos pelo programa. Tipos genéricos exigem um guard
por instanciação fechada; suporte que não tenha sido emitido continua recusado.

A primeira tentativa de comparação por endereço da exceção C++ falhou porque
`exception_ptr` pode materializar cópias no MSVC. Um token compartilhado
representa a identidade gerenciada independentemente do endereço nativo.

## Exceções como objetos

`managed_exceptions.hpp/.cpp` preserva referências, mensagem UTF-16, causa e
campos de subclasses traduzidas. O unwind deriva da classe C++ nativa
correspondente, para que catches de bases conhecidas continuem funcionando.
Captura de uma exceção implícita do runtime materializa um único objeto
gerenciado por token; relançar a referência mantém sua identidade.

As diferenças de mensagens padrão Mono/CLR foram medidas e implementadas.
Os 74 casos cobrem construtores, mensagens nulas/vazias, causa, GetBaseException,
subclasse de IOException com campo próprio, relançamento, throw null e
surrogates/NUL. Stack traces do Mono, endereços e formatação completa de
`ToString()` **após lançamento** permanecem `UNKNOWN`; não são inventados.
Mensagens de todos os contextos de erro do BCL não estão comprovadas só por
testes de construtores explícitos.

## Codificações

`RuntimeEncoding` oferece UTF-8, Unicode/UTF-16 LE, BigEndianUnicode/UTF-16 BE e
ASCII. `GetString` respeita offset/contagem; `GetBytes` não acrescenta BOM.
O Mono histórico copia code units UTF-16 sem corrigir surrogates isolados e
descarta um último byte ímpar; o CLR moderno usa U+FFFD. Os 13 casos inicialmente
divergentes de UTF-16 motivaram o perfil correto, sem modificar o fonte do jogo.
O nome `UTF8` sem hífen é inválido nos dois oráculos e não é aceito por analogia.

Codecs legados não implementados lançam `NotSupportedException` explícita.
Isso é uma lacuna, não uma equivalência já demonstrada com o APK. O APK não
contém as DLLs I18N presentes no SDK; a disponibilidade de JIS/EUC no Android
continua `UNKNOWN`. `JString.GetSJIS` usa o algoritmo/tabelas do próprio fonte
C# reconstruído, que deve ser traduzido, inclusive seus acessos e erros; não
é substituído por uma conversão moderna do sistema.

## Subconjunto de regex

`managed_regex.hpp/.cpp` adapta construções medidas ao motor C++17 padrão,
sem nova biblioteca. Os testes cobrem 20 padrões técnicos de Language e
TextLayout, capturas, grupos opcionais, alternância, âncoras, quantificadores,
substituição vazia e referências numéricas, matches vazios, CR/LF e code units
surrogates. Índices e comprimentos contam UTF-16 em qualquer largura de wchar_t.
O ponto exclui apenas LF; `$` também aceita a posição antes do LF final.

Uma varredura dos 65.536 code units confirmou que o `\s` do regex Mono inclui
U+200B e exclui U+180E; o CLR moderno exclui ambos. A primeira extensão que
supunha U+180E espaço falhou, e a varredura revelou a diferença U+200B.
O cache guarda no máximo 32 padrões por processo, com o perfil na chave.

Não se afirma compatibilidade geral do Regex .NET: categorias Unicode
`\w/\d/\p`, fronteiras de palavra, grupos nomeados e opções não medidas
continuam explicitamente não implementados. Matches são materializados em
coleção, sem reproduzir a avaliação preguiçosa do BCL. Padrões fora do caminho
testado precisam de fixtures antes de serem considerados equivalentes.

## Limite do oráculo de matemática

O corpus de produção detectou `JMath.Sin(-0.0)` com +0 no Mono SDK Windows e
−0 no C++/CLR moderno. O fonte oficial
[sysmath.c:98–102](https://github.com/mono/mono/blob/f08f8a27bfe3aafda4e430ee2365dec73c1070d7/mono/metadata/sysmath.c#L98)
encaminha Math.Sin a `sin(x)`; o APK importa `sin` nas duas arquiteturas.
`python tools/inspect_android_math.py --apk <APK_LOCAL>` registra hashes e
relocações em `config/phase2-android-math.json`, sem extrair/executar bibliotecas.
Isso não prova o corpo interno removido dos símbolos nem o resultado no Android.
O port não normaliza o zero para satisfazer o oráculo Windows; o método continua
exercitado, porém não promovido a verificado até resolver essa diferença.

Hashes numéricos de identidade de objetos também não são comparáveis entre
alocações/processos. Para corpos que retornam diretamente `base.GetHashCode`,
o teste compara o contrato de estabilidade e conserva valores brutos apenas
nos logs privados; essa redução é explicitada no recibo de produção.
