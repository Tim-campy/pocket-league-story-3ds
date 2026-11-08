# Contrato semântico do tradutor C# → C++17

Decisões vigentes da Fase 2, fornecidas pelo usuário: a lógica é preservada; só serviços/plataforma recebem as substituições documentadas. O C# da referência é somente leitura. `src/game/` é saída do tradutor e não pode ser editado à mão. A geração de um arquivo, a compilação e sua execução são evidências distintas; nenhum método recebe estado por possuir apenas uma declaração ou stub.

## Conteúdo e procedência

O usuário autorizou expressamente manter no C++ gerado os literais de texto presentes no C# reconstruído publicado. Essa decisão posterior substitui a exigência anterior de externalização desses textos. Ela não permite copiar para o código textos, tabelas, imagens, áudio, fontes, sprites, nomes ou outros dados extraídos dos assets. `Language._translateText` conserva sua lógica e recebe as tabelas do APK próprio. Fontes rasterizadas e quaisquer saídas de conversão ficam em `assets/`, ignorado pelo Git.

Vetores numéricos constantes que carregam dados são externalizados por `tools/inventory_baked_arrays.py`: o APK é autenticado, o assembly é lido em memória, e cada payload precisa coincidir com FieldRVA ou com um literal de IL verificado. O scanner não executa a DLL nem interpreta comandos gerais do jogo. Aceita somente comprimento constante, inicialização por constantes/conv/neg/stelem ou InitializeArray comprovado; recusa valores dinâmicos e entradas de controle ambíguas. A igualdade do payload não prova um vínculo único entre ocorrências de fonte e IL, limitação registrada na proveniência.

O índice público contém 965 IDs/formatos/proveniências, sem valores nem hashes individuais. Os bytes e seus hashes ficam em `assets/baked/`, ignorado; o índice ancora apenas o hash do manifesto privado completo. A indexação verifica manifesto e cada payload, recusando alterações. O código gerado usa IDs e carrega o dado local. Os testes próprios do scanner (18 casos) e da integridade (3 casos) não contam como métodos do tradutor ou como execução do jogo.

Todo fonte gerado identifica entrada, hash e produtor. A referência é a tag `v1.0.0-csharp-reconstruction`, commit `c7d097a847ca1f1a8e5fb7141ff11d338f5915c4`. O compilador usa símbolos e tipos Roslyn: grafia, heurística de nome ou resultado plausível não bastam para decidir uma operação. Sintaxe suportada, dependências não resolvidas, API indisponível e implementação testada são relatadas separadamente. Uma construção ainda sem lowering fiel é recusada com diagnóstico; não é convertida em retorno inventado ou sucesso fictício.

## Valores, referências e números

| C# | Contrato no C++ |
|---|---|
| `sbyte`, `byte`, `short`, `ushort`, `char` | Larguras explícitas; `char` é um code unit UTF-16 de 16 bits, não `char` nem `wchar_t` dependente da plataforma |
| `int`, `uint`, `long`, `ulong` | 32/64 bits explícitos. Promoções seguem o tipo resultante Roslyn; narrowing integral conserva os bits baixos |
| Aritmética unchecked | Add/sub/mul/neg operam na representação unsigned e reconstituem os bits do signed por `memcpy`; nenhum signed overflow C++ é executado |
| Divisão e resto inteiros | Truncamento em direção a zero; o resto tem o sinal do dividendo. Divisor zero lança exceção. O caso mínimo signed dividido por −1 é testado separadamente por perfil |
| Shifts | Máscara de 5 bits para 32 bits e de 6 para 64; right shift aritmético implementado explicitamente, sem depender de signed shift da implementação |
| `float`, `double` | IEEE binary32/binary64, assert de largura no build. `/fp:strict` no MSVC; nenhuma promoção extra/fusão/reassociação autorizada. Não usar fast-math |
| Classes | Identidade de objeto preservada por referências; não copiar um objeto ao atribuir sua referência. Herança e dispatch virtual devem corresponder aos símbolos |
| Structs | Cópia de valor; não podem ser tratados como referências apenas porque há acesso por ponto |

O runtime está em `src/kairo/common/semantic_runtime.hpp/.cpp`, namespace `pls::cs`. Os helpers expostos são `add/sub/mul/neg/div/mod/shl/shr/ushr` com sufixos `i32`, `i64`, `u32`, `u64`; `cast_integral<To>` faz narrowing/wrap integral sem cast signed fora da faixa. `conv_i32` e `conv_i64`, com overloads float/double, verificam a faixa antes de converter e evitam UB. Seus 160 casos diferenciais incluem NaN, infinitos, limiares signed e frações. Mono Windows retorna signedMin nas bordas não representáveis; .NET10 usa NaN→0/saturação. **Essas bordas permanecem UNKNOWN no Android.** Conversões unsigned a partir de float, decimal, covariance/nullable e outros caminhos continuam exigindo suporte específico.

## Perfil histórico e contraste com .NET moderno

O alvo padrão é **UnityMono265**, escolhido a partir do runtime da aplicação original. O host configura o perfil antes de criar workers; não é uma opção que varia entre métodos. Existe o perfil **DotNet** apenas para contraste e fixtures.

Uma sonda própria compilada pelo smcs do Unity 5.3.4f1 e executada no Mono já instalado em Windows observou:

| Sonda sintética | Mono Unity Windows | .NET10 Windows |
|---|---|---|
| `int.MinValue / -1` | `System.ArithmeticException` | `System.OverflowException` |
| `int.MinValue % -1` | `System.ArithmeticException` | `System.OverflowException` |
| `String.CompareOrdinal` quando um texto é prefixo do outro | Resultado negativo com determinada magnitude | Também negativo, magnitude diferente |

As duas exceções derivam da hierarquia aritmética correta. O runtime usa o tipo comprovado de cada perfil em vez de provocar divisão C++ indefinida. CompareOrdinal só garante sinal/zero na API: os testes de ordenação verificam esse contrato, sem exigir a magnitude incidental do .NET10. O runtime mantém o resultado determinístico de comparação por code unit/diferença de comprimento compatível com as sondas históricas.

**Essas sondas não comprovam os casos de borda no Mono Android.** O recibo registra plataforma/runtime e essa limitação. Busca estática em ambos os assemblies não encontrou `catch(OverflowException)` ou `catch(ArithmeticException)`, nem chamada a `CompareOrdinal`. Os `CompareTo` diretos encontrados na KairoLibrary são: `Storage.cs:394` e `TextLayout.cs:464`, testando igualdade com zero; `SecureString.cs:236`, delegando o resultado. Não houve consumidor direto de `SecureString.CompareTo` no Assembly-CSharp nessa busca. Caso um caminho real torne a diferença observável, a referência seguinte é Android; não alterar a lógica para escondê-la.

## Strings UTF-16

`pls::cs::String` distingue null de vazio, é imutável e compara ordinalmente. `length()` conta code units; `at()` devolve um `char16_t`, inclusive surrogate isolado; substring não normaliza pares nem texto. Null em operações de instância lança `NullReferenceException`; índice fora da faixa lança `IndexOutOfRangeException`. Concat trata null como vazio, conforme o operador/Concat gerado.

O emissor fornece o comprimento UTF-16 explícito ao construir literais, preservando NUL embutido: `String(pointer, length)`. Escapes de surrogate isolado no C++ usam escapes numéricos, não universal-character escapes inválidos. Conversão UTF-8 é uma fronteira de I/O, não a representação interna. `encoding_utf8_get_bytes` e `encoding_utf8_get_string` validam null; GetString também oferece offset/count em bytes, com validação de faixa.

As 72 observações diferenciais de encoding cobrem NUL, astral, surrogates isolados, UTF-8 válido, overlong, truncamento, continuação isolada, BOM, limite Unicode e slices. No Mono medido, o encoder emite três bytes para surrogate isolado, enquanto o .NET10 substitui por U+FFFD. Na recuperação de prefixo UTF-8 truncado, o Mono substitui cada byte e o .NET10 agrupa o prefixo válido. O runtime seleciona o comportamento do perfil. Isso não constitui prova exaustiva de todas as sequências, de outros encodings ou do Mono Android.

Interning, observação da identidade física de strings, comparação cultural, Unicode case folding e regras específicas de parsing/formatting não são presumidos equivalentes apenas por usar `std::u16string`. Precisam de implementações/fixtures próprias quando usados.

As folhas culturais medidas agora usam o componente histórico Mono, com
proveniência e licenças separadas. [Censo por método e dado](culture-usage.md),
[colação](notes/phase2-mono-collation.md) e
[Trim/Replace/Split/HexNumber](notes/managed-string-ops.md) registram os limites
e diferenças preservadas. O oráculo de produção executa sobre o perfil SDK
`unity`, cujo mscorlib é integralmente idêntico ao do APK; o perfil `2.0` não
é intercambiável. O `IndexOf(string)` de um argumento é ordinal nesse core,
enquanto os overloads com início/contagem são culturais.

O hash ordinal histórico de String usa acumulação UTF-16 de fator 31, conferida por sonda e pelo [fonte String.cs da Unity, revisão fixada, linhas 2596–2610](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mcs/class/corlib/System/String.cs#L2596-L2610). Não usar `std::hash` nem assumir o hash aleatorizado de .NET moderno.

## Ordem de avaliação e comandos

Operandos, receptor e argumentos são avaliados na ordem C# da esquerda para a direita. O emissor materializa valores/endereços temporários explicitamente antes da chamada/operação; não depende da ordem de argumentos C++. Short circuit de `&&`, `||`, ternário e coalescência não pode avaliar o ramo omitido. Post/pre-increment, compound assignment e property access avaliam receptor e índice uma vez.

As fixtures confirmaram uma distinção importante: em `array[index()] = rhs()`, o receptor/índice são avaliados antes de RHS, mas o null/bounds check da store ocorre **depois** de RHS. Na compound assignment, a leitura/check do valor antigo ocorre **antes** de RHS. Uma tradução que chama `at()` prematuramente muda efeitos observáveis mesmo que acabe lançando a mesma exceção.

`switch` preserva os casos, comparação, queda/saída e saltos. `goto` é preservado, mas declarações e lifetimes precisam ser lowering explícito para não criar saltos C++ proibidos sobre inicializadores. Propriedades mantêm getters/setters e a quantidade/ordem de chamadas; não são campos inventados. Eventos mantêm a lista de invocação e remoção da última ocorrência correspondente.

## Arrays, exceções e capturas

`Array<T>` é uma referência a storage, com tamanho imutável, inicialização default e null separado de array vazio. Atribuir a referência preserva alias; clone é shallow. O índice é verificado. `Array<T>::from({})` cria vazio não null; não confundir isso com o construtor default. Arrays de arrays preservam a nulidade/referência de cada elemento. Copy sobreposto conserva a semântica de memmove por direção. Rank multidimensional, covariance e casts de arrays ainda exigem suporte adicional; não são aprovados pelas fixtures de rank1.

Storage deriva de `ArrayBase`. `array_cast` conserva null e recusa objetos não-array; `array_copy` implementa cópia apagando tipo quando os elementos têm o mesmo tipo C++, com 42 casos diferenciais incluindo bounds, overlap, referências, structs numéricos e jagged shallow. Há prova específica de `float[] → int[]`: count positivo lança ArrayTypeMismatchException nos dois oráculos; count zero passa no Mono e lança no .NET10. Esse comportamento preserva o bug de `Graphics.GetRenderRect`, sem converter números manualmente. Outros casos cross-element, inclusive widening/boxing/covariance, ainda lançam NotSupported explícito, em vez de fingir uma cópia fiel.

Exceções C++ mantêm herança, tipo dinâmico e rethrow sem slicing. A hierarquia inicial inclui Exception/SystemException, Arithmetic/DivideByZero/Overflow, Argument/ArgumentNull/ArgumentOutOfRange, NullReference, IndexOutOfRange, InvalidCast, IO/EndOfStream e outros tipos básicos. Mensagens localizadas/stack traces não foram declaradas idênticas ao CLR. Catch filters precisam avaliar antes de unwinding conforme CLR; não se substituem cegamente por catches C++.

`run_finally(body, cleanup)` executa cleanup fora do unwinding ativo do C++. Assim, uma exceção de finally substitui a pendente, e retorno é calculado antes de finally. Um destrutor RAII que lança durante outra exceção terminaria o processo, portanto não é a tradução válida. Return/break/continue/goto saindo de regiões protegidas ainda precisam da representação de continuação do emissor; possuir o helper não comprova todo esse lowering.

Capturas são classes explicitamente geradas, com células compartilhadas para variáveis e lifetimes preservados após o retorno do método externo. A fixture nativa possui uma classe sintética de closure; não usa uma lambda C++ como substituto silencioso da classe C# gerada. `Delegate<Signature>` fornece lista multicast, identidade por target/método e remoção da última subsequência igual. A lista de invocação é snapshot durante uma chamada.

O emissor de produção também gera essas classes e seus hooks de GC. As
fixtures compiladas cobrem células compartilhadas, parâmetros, this, closures
aninhadas, method groups e interfaces. Captura com goto permanece recusada por
exigir outra representação de lifetime. A semântica foreach C#6 da Kairo não
é presumida para o Game smcs: o censo atual do jogo encontrou zero capturas
do símbolo foreach. Ver o diário e o recibo do emissor para cobertura atual.

Threads reais expõem outra obrigação: campos lidos/escritos em UI e worker
precisam evitar data races C++. O [inventário do boot](notes/phase2-boot-fields.md)
e [SharedField](notes/managed-shared-fields.md) distinguem cargas/stores de RMW.
A fundação está testada; os acessos do Game ainda não foram reescritos nesse
marco. As fixtures de Thread/GC não justificam promover execução do jogo.

O gerenciamento usa ownership compartilhado com coleta explícita de ciclos por tracing cooperativo, descrita abaixo. Finalizadores, WeakReference como API gerada, compactação, LOH e equivalência exata de timing/lifetime CLR ainda não estão implementados. Não declarar equivalência de memória para o jogo inteiro com base nas fixtures de captura.

## Coleta cooperativa de ciclos

`make_ref` registra uma referência fraca de Object. `trace_edges` deve enumerar exatamente cada referência forte dos campos, uma vez por slot; `release_edges` remove essas referências somente de objetos considerados inalcançáveis. O emissor gera os hooks de campos não estáticos e chama a base. Campos estáticos e referências de frames C++ continuam como raízes externas por contagem de ownership. Array/List/Dictionary/enumeradores/Box/Cell/delegates/MemoryStream/TimeZoneInfo possuem hooks no runtime. Fábricas nativas fora de make_ref precisam chamar `register_managed_object` e fornecer hooks para seus campos gerenciados.

O coletor cria um snapshot forte, conta arestas internas e considera raízes os objetos com owners além das arestas e da referência do snapshot. Marca os alcançáveis e quebra as arestas dos demais. Capturas opacas de std::function são raízes conservadoras: preservam segurança, mas podem reter ciclos. Um binding com alvo forte e lambda que captura alvo fraco permite coleta. Hooks incorretos que duplicam/omitem slots não constituem suporte fiel; devem ser gerados e testados, não inferidos por RTTI.

O fonte de `JRuntime.Gc` chama **GC.Collect(0)**. O oráculo Mono Unity Windows mediu MaxGeneration=0; nesse perfil toda coleta não negativa abrange o heap. A análise estática autenticada dos dois `libmono.so` do APK também comprovou que `mono_gc_max_generation` retorna zero em x86 e armeabi-v7a, sem extrair/executar a biblioteca: [recibo](../config/phase2-android-gc.json). O contraste .NET10 usa idades 0/1/2, protege gerações mais antigas que a solicitada e promove sobreviventes. O modelo não comprova todos os detalhes geracionais/LOH do CLR; timing e demais comportamentos do coletor Android continuam UNKNOWN.

Cada worker que acessa objetos gerenciados precisa permanecer em `GcMutatorScope`, criado antes de seus locais, e cooperar com `gc_safepoint` nas entradas/backedges. Registro de novas alocações também é safepoint. A coleta solicita estacionamento, sem suspender threads do sistema; um worker registrado que não coopere dentro de um segundo provoca NotSupported antes de quebrar arestas. A disciplina não é garantida para threads nativas não registradas. Integrar JThread requer o adapter e os safepoints do emissor; possuir gc_collect não prova o jogo multithread.

São **26 casos diferenciais** de preservação de raízes, callbacks, arrays/coleções, gerações e validação; **21 invariantes nativos separados** comprovam coleta real de ciclos, preservação de ciclos enraizados, geração antiga protegida, captura opaca conservadora, worker cooperativo, alocação como safepoint, coletores concorrentes e recusa de worker não cooperativo. Não se compara o instante em que um weak reference sem raiz desaparece entre runtimes conservadores diferentes.

## Objetos, boxing e coleções

`Object` tem identidade e herda `enable_shared_from_this<Object>`. `Ref<T>`, `make_ref`, `nonnull`, `as<T>` e `cast<T>` representam referências, teste e cast de tipo. Classes geradas recebem uma única base Object; interfaces são bases polimórficas sem outra subinstância Object. Construtores gerados precisam alocar o objeto antes de executar o corpo traduzido para permitir a observação de `this` e shared ownership. Isso não é autorização para substituir construtores por corpos vazios.

Os aliases virtuais Pascal `Equals`, `GetHashCode` e `ToString` não são const: overrides C# podem alterar o objeto. Os helpers internos `equals`/`get_hash_code` permanecem const. `managed_type_name` fornece o nome qualificado para Object.ToString; o emissor deve sobrescrevê-lo nas classes geradas. Os 40 casos de dispatch incluem efeitos mutáveis via Object/List/Dictionary, identidade do String.ToString boxed e formatting de bool/char/integrais com sinal cultural. Boxed float/double/enum/struct ToString ainda exige lowering próprio e lança NotSupported; não retorna texto inventado.

`box`/`unbox` cobrem valores primitivos e referências, incluindo crosscast via interface e wrappers String, Array e List com storage Object. Unboxing numérico exige o tipo exato, null para tipo valor lança NullReference e tipo incompatível lança InvalidCast. Equals de double/float trata NaN como igual a NaN, conforme a API .NET Equals, diferentemente de `==`. Equals de String boxed compara conteúdo ordinal. Equals/hash de structs arbitrárias, covariance e todo reflection continuam sem implementação geral.

`managed_collections.hpp` implementa `List<T>` com alias, Count, Capacity, indexer, Add/Insert/Remove/Clear, ranges, ToArray, TrimExcess e enumerador genérico/não genérico. O construtor default representa null; `List<T>::make()` cria lista vazia. A atribuição ao indexer usa `set`/`set_Item`, porque ela afeta o versionamento conforme o perfil; não pode ser traduzida como store direto em Array.

Os 60 casos de coleções medem capacidade/crescimento, aliases, cópia, auto-inserção, boxed Equals, NaN, casts via interface e fail-fast de enumerador. Diferenças medidas: Mono não incrementa versão ao alterar indexer; incrementa ao AddRange vazio; Current genérico conserva o último valor depois do fim; Dispose do enumerador limpa a referência e MoveNext passa a lançar ObjectDisposedException. O .NET10 possui resultados diferentes nesses quatro casos. O [fonte histórico List.cs, linhas 754–815](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mcs/class/corlib/System.Collections.Generic/List.cs#L754-L815) confirma o lifetime/Current do enumerador. Sort/Reverse e outras APIs não recebem suporte por inferência.

`managed_dictionary.hpp` fornece Dictionary nullable com Add, indexer, ContainsKey/Value, TryGetValue/out, Remove, Clear e enumerador. Seus 54 casos cobrem chaves null, duplicação, default do out, aliases, NaN, slots reutilizados e diferenças de versionamento/lifetime. Hash e Equals são consultados; a ordem de slots/free-list é conservada. O lookup atual varre os entries filtrando por hash; complexidade/performance equivalente a uma tabela de buckets não foi demonstrada. Keys/Values, comparers customizados e interface não genérica ainda não são suportados.

`managed_text.hpp` fornece StringBuilder como objeto, construtores básico/capacidade/string, Append de char/string/fatia/repetição, Length/Capacity/indexer e ToString. Os 48 casos medem conteúdo UTF-16, snapshot, capacidade e exceções. O modelo conserva os efeitos observáveis do cache/copy-on-write histórico; o contraste moderno modela chunks para os casos medidos. Não substituir o comportamento por std::string. Append(object), formatting geral e a API completa de Insert/Remove/Replace ainda não foram implementados. [Fonte histórico StringBuilder.cs](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mcs/class/corlib/System.Text/StringBuilder.cs).

## Aleatoriedade, datas e relógio

`managed_random.hpp` implementa Random com seed explícita, Next e overloads de faixa, NextBytes e NextDouble. Seus 68 casos verificam sequências de dez seeds, bits de doubles, consumo em faixas vazias/unitárias, ranges grandes e bytes. O perfil histórico usa a sequência do [Random.cs da Unity](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mcs/class/corlib/System/Random.cs); o moderno contrasta o PRNG compatível de seed explícita do [.NET10](https://github.com/dotnet/runtime/blob/v10.0.0/src/libraries/System.Private.CoreLib/src/System/Random.CompatImpl.cs). Seed int.MinValue lança Overflow no histórico. Não usar std::random. O construtor sem seed não existe no runtime: `JRandom()` deve continuar chamando o relógio pelo C# gerado e depois o construtor explícito.

`managed_time.hpp` fornece DateTime/DateTimeKind e TimeSpan como valores. Suporta calendário gregoriano, ticks de 100 ns, partes, TimeOfDay, subtração, adição de ticks/unidades/meses/anos e UTC. Os 106 casos medem datas limites/leap, partes, overflow, tipos de exceção, arredondamento e TimeSpan. O Mono histórico arredonda AddMilliseconds em **ticks**, com ties-to-even; AddDays arredonda primeiro em milissegundos. Isso difere de regras modernas e foi confirmado pelo [DateTime.cs original](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mcs/class/corlib/System/DateTime.cs#L583-L630). [TimeSpan.cs](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mcs/class/corlib/System/TimeSpan.cs) também contém overflow intermediário histórico de componentes, preservado pelos helpers wrap.

UtcNow chama `utc_clock_ticks`, cujo padrão usa system_clock e acrescenta a época .NET. Fixtures injetam ticks sintéticos no lado nativo e constroem o mesmo valor no C# próprio; elas **não demonstram sincronização de chamadas reais UtcNow em dois processos**. O host configura providers antes dos workers. ToUniversalTime com Kind Utc conserva o valor; Kind Local/Unspecified exige `local_to_utc_ticks`. Sem regras locais fornecidas, lança NotSupported; nunca assume Local=UTC.

TimeZoneInfo é uma referência com CreateCustomTimeZone de offset fixo, BaseUtcOffset/Id/nomes, Utc e conversão UTC. Seus 32 casos medem validações, limites e os nomes null (Mono usa id; moderno usa vazio). `get_Local` exige `local_timezone_provider`; lookup de IDs fora UTC exige `timezone_lookup_provider`. Ajustes DST gerais e banco de fusos não estão implementados nesta fundação. O C# original de `JTimeZone` usa JavaPlugin.GetDefaultTimeZone/GetUtcOffset e cria um fuso customizado de offset bruto; esses hooks precisam da camada de plataforma. Isso não autoriza escolher Asia/Tokyo ou UTC como substituição genérica do aparelho.

## Conversões de dados e parsing

`convert_to_base64_string`/`convert_from_base64_string` oferecem os overloads de array/string sem opções. São 76 casos diferenciais: blocos parciais, whitespace, padding, alfabeto inválido e null. Mono aceita VT/FF e certos paddings internos recusados pelo .NET10. O [icall histórico, linhas 7381–7465](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mono/metadata/icall.c#L7381-L7465) também pode escrever além do array alocado em inputs inválidos. O runtime preserva os bytes retornados em limites nos casos medidos, mas **não reproduz corrupção nativa de memória**. Nenhum input desses foi demonstrado em caminho do jogo; esse limite precisa ser relatado se aparecer.

`int32_parse`/`int64_parse` oferecem `Parse(string)` e, com `hexadecimal=true`, exatamente `Parse(string, NumberStyles.AllowHexSpecifier)`; não são implementação de todos os NumberStyles. Os 314 casos diferenciais cobrem limites signed, overflow/format precedence, sinais, NUL, espaços Unicode, dígitos não ASCII, hex two's complement e sinais culturais customizados. Mono no overload simples usa sinais literais +/− e ignora os sinais de CurrentCulture; o .NET10 os consulta. `integer_number_format` configura os sinais do perfil moderno antes de workers. Outros aspectos culturais e overloads com provider não são presumidos equivalentes. As regras históricas foram conferidas em [Int32.cs, linhas 98–204](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mcs/class/corlib/System/Int32.cs#L98-L204) e [Int64.cs](https://github.com/Unity-Technologies/mono/blob/b6587926c0f146c8b12985744f33a13b39a22d57/mcs/class/corlib/System/Int64.cs). Nenhum formato de asset foi substituído por constantes de teste.

## Fixtures e recibos

Execute, sem instalar ferramentas:

```powershell
python tests/translator/run_semantic_fixtures.py
python tests/translator/run_semantic_fixtures.py --fixture CollectionFixtures
python tests/translator/run_semantic_fixtures.py --fixture EncodingFixtures
python tests/translator/run_semantic_fixtures.py --fixture ConversionFixtures
python tests/translator/run_semantic_fixtures.py --fixture IntegerParseFixtures
python tests/translator/run_semantic_fixtures.py --fixture ArrayBridgeFixtures
python tests/translator/run_semantic_fixtures.py --fixture RandomFixtures
python tests/translator/run_semantic_fixtures.py --fixture StringBuilderFixtures
python tests/translator/run_semantic_fixtures.py --fixture DictionaryFixtures
python tests/translator/run_semantic_fixtures.py --fixture FloatingCastFixtures
python tests/translator/run_semantic_fixtures.py --fixture TimeFixtures
python tests/translator/run_semantic_fixtures.py --fixture ObjectDispatchFixtures
python tests/translator/run_semantic_fixtures.py --fixture TimeZoneFixtures
python tests/translator/run_semantic_fixtures.py --fixture GcFixtures
```

O script usa Roslyn/.NET10 e smcs/Mono Unity já existentes para compilar somente o C# sintético selecionado de `tests/translator/`. Usa MSVC C++17 existente com `/EHsc /fp:strict /permissive- /W4 /WX /utf-8`. Nenhuma DLL/player do jogo/Unity é copiada para build; os executáveis de compilador/runtime existentes são apenas ferramentas externas. Cada fixture tem sua saída em um subdiretório de `build/`, ignorado.

Foram obtidos **1.158/1.158 casos diferenciais**, divididos igualmente entre os dois oráculos/perfis. Os primeiros 60 cobrem overflow/wrap, divisão/resto de negativos/bordas, casts integrais, shifts, avaliação de argumentos/array stores, UTF-16/null/ordinal, arrays/alias/bounds, hierarquia/rethrow/finally, capturas, evento, propriedades, switch, goto e bits/larguras float/double. Streams têm seu contrato e recibo separados em `docs/notes/managed-streams.md`.

| Recibo sintético | .NET10 | Mono Unity | Casos com resultado diferente entre oráculos |
|---|---:|---:|---:|
| runtime | 30/30 | 30/30 | 2 |
| collections | 30/30 | 30/30 | 4 |
| encoding | 36/36 | 36/36 | 10 |
| conversion | 38/38 | 38/38 | 5 |
| integer-parse | 157/157 | 157/157 | 41 |
| array-bridge | 21/21 | 21/21 | 1 |
| random | 34/34 | 34/34 | 31 |
| string-builder | 24/24 | 24/24 | 8 |
| dictionary | 27/27 | 27/27 | 6 |
| floating-cast | 80/80 | 80/80 | 21 |
| time | 53/53 | 53/53 | 7 |
| object-dispatch | 20/20 | 20/20 | 0 |
| timezone | 16/16 | 16/16 | 3 |
| gc | 13/13 | 13/13 | 3 |
| Total | 579/579 | 579/579 | 142 |

Os 142 são observações de fixtures, não 142 famílias de bugs nem diferenças provadas no jogo Android. Cada recibo contém `historical_profile_differences` com os resultados dos dois oráculos. Os perfis nativos correspondentes passaram todos os casos. Os 21 invariantes nativos de GC são contados separadamente dos diferenciais.

Recibos gerados: `config/phase2-<linha da tabela>-fixtures.json`, com hashes dos fontes/helpers, runner, compiladores e traces sintéticos. O oráculo histórico referencia System.Core.dll externamente do perfil Unity para TimeZoneInfo; nenhuma DLL é copiada para o port/build do jogo. Runner/fontes/JSONs usam LF para conservar hashes em clone. A sonda `HistoricalSemanticProfile.cs` registra diferenças sem confundi-las com fixtures do jogo. **O C++ dessas fixtures é uma implementação de teste independente: esses recibos não medem cobertura do emissor de produção, métodos traduzidos do jogo ou primeiro boot.** Esses números vêm dos recibos separados do tradutor/build/execução.
