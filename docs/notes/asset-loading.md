# Como o código referencia e carrega assets

Fonte de evidência: C# reconstruído da tag `v1.0.0-csharp-reconstruction`, em `reference/`, somente leitura. Os caminhos/linhas abaixo são relativos a esse submódulo. Este documento não contém assets, conteúdo de tabelas, textos visíveis, nomes de jogadores/times, chaves de transformação ou endpoints. É inventário de leitores e identificadores, não implementação de extração ou conversão.

## Cadeia principal de leitura

`main.AppData.Init()` (`src/Assembly-CSharp/main/AppData.cs:1861–1905`) configura RecordStore/Storage e registra a lista de arquivos de recursos por `RecordStore.SetResourceFiles`. No modo de recursos (`rsId=1`), `RecordStore.ReadRecord(int)` (`src/KairoLibrary/kairo/unity/io/RecordStore.cs:238–265`) mapeia o índice para um nome na lista e chama `Storage.Read` no meio 3, em vez de abrir um save. O meio 3 é `MEDIA_RESOURCE`; `Storage.Read` (`src/KairoLibrary/kairo/unity/io/Storage.cs:165–168`) chama `AssetReader.GetData`.

`AssetReader._getTextAsset()` (`src/KairoLibrary/kairo/unity/io/AssetReader.cs:170–206`) resolve um nome normalizado em `Resources.Load`, com tentativa adicional sem extensão. `_getData():150–168` obtém os bytes e descarrega o TextAsset. `Exist():235–291` usa uma lista de recursos, com fallback de consulta quando a lista não existe. `GetAccessFilesList():93–138` considera pastas do pacote de idioma, idioma corrente, variantes de densidade e nomes normalizados. O port precisa conservar **essa resolução de identificadores e precedência**, não só copiar o nome aparente de um arquivo exportado.

## Leitores por tipo

| Tipo de conteúdo | Identificador usado pelo jogo | Leitor e localização | Implicação para o inventário |
|---|---|---|---|
| Pacotes de recursos | Índice RecordStore + nome de arquivo/diretório | `ResourceManager.Load(byte[]/string/int,int)`, `src/KairoLibrary/kairo/unity/ui/ResourceManager.cs:197–264` | Não são necessariamente bundles Unity: existe container próprio JarInflater |
| Listas de recursos | Nomes técnicos dos arquivos de lista; índices nas listas | `ResourceManager.LoadReady(JarInflater):284–312` | Listas são assets; só seus tipos/contagens/nomes técnicos vão aos relatórios |
| Imagens/sprites | Nome no pacote, índice `img[]`, opções de formato/paleta/resolução | `ResourceManager.LoadStart():332–618`, em especial `:480–508`; `Image.Load():360–398`; `Image.DecodeByteArray():1187–1201` | Os sprites podem existir como PNG/GIF/JPEG em TextAssets/containers, **não como Texture2D estática do Unity**; contar só Texture2D subestima o jogo |
| Paletas e otimização | Nome de paleta, dados de atlas/otimização e índices de sprite | `Image.OverwritePaletteData`, `ResourceManager.LoadStart():480–493`; `Image.LoadOptimize():400–...` | As variantes/paletas e texturas criadas em runtime precisam de orçamento separado; não somar caches duplicados como assets únicos |
| Animação de sprites | Nome/índice `seb[]`, frames e flags | `ResourceManager.LoadSeb():113–121`, `LoadStart():516–565`; parser `kairo.unity.ui.Seb` | SEB é dado do jogo, não código C++ traduzido nem cena do Unity |
| Áudio | Nome de arquivo normalizado sem extensão e índice `sound[]` | `ResourceManager.LoadSound(string,int):133–141`; `LoadStart():567–595`; `SoundOGG.Load(string):26–34` | Este caminho efetivo aceita formato 6 e carrega `Resources.Load<AudioClip>`; o nome OGG não prova o codec físico usado na serialização Unity |
| Áudio por bytes/stream | API existe, mas não tem carregador funcional nesse caminho | `ResourceManager.LoadSound(byte[]/InputStream):123–131`; `SoundOGG.Load(byte[]/InputStream):16–24` | Essas sobrecargas lançam exceção; não dizer que já reproduzem um decoder OGG portátil |
| Fonte | Dois nomes de Resources conforme idioma/fallback | `Font._getDefaultGUIFont()`, `src/KairoLibrary/kairo/unity/ui/Font.cs:388–409` | Medir Font/arquivo de fonte e texturas/glyph caches separadamente; métricas e layout fazem parte do comportamento |
| Prefab de offscreen | Nome técnico fixo de Resources | `src/KairoLibrary/kairo/unity/graphics/Offscreen.cs:84,118` | O prefab é asset; seu comportamento de render target entra na fronteira a reimplementar, sem motor Unity no build |
| Tabelas de simulação | Nome do membro no pacote e ordem da linha | `BootForm.Load():526–773` + `StringUtil.LoadStringArray`, `src/KairoLibrary/kairo/unity/util/StringUtil.cs:220–252` | Os objetos de dados são inicializados a partir das linhas; linhas e parâmetros não podem virar arrays commitados no port |
| Textos e soft labels | Índices de arrays e, na tradução, **texto original como chave** | `Main.OnCreate():47–67`; `Language.SetTextTable/SetSoftLabelTable():761–783`; `Language._translateText():1140–1165`; `TranslateSoftLabel():998–1024` | Hipótese “somente IDs numéricos” é refutada; a extração futura deve atribuir IDs sem quebrar a correspondência da tabela |
| Save local | Par `(rsId,rcId)` e layout binário | `RecordStore.ReadRecord/WriteRecord`, `src/KairoLibrary/kairo/unity/io/RecordStore.cs:197–265`; `KairoService.OnLoad/OnWrite`:254–265 | São dados produzidos pelo usuário, separados dos assets empacotados; manter layout/persistência e não distribuir saves |

## O container chamado JarInflater

`kairo.unity.util.JarInflater` não usa `System.IO.Compression.ZipArchive`. Seu `_load(InputStream)` (`src/KairoLibrary/kairo/unity/util/JarInflater.cs:106–141`) lê um cabeçalho, quantidade de entradas, nomes, offsets, tamanhos, flags e uma região de dados. `GetInputStream():154–183` encontra a entrada, lê seu comprimento, copia os bytes e aplica conversão de pacote de idioma. A flag de deflate tem um ramo que lança exceção (`:177–179`); a capacidade de descomprimir de um ZIP genérico não deve ser presumida desse nome de classe. `GetData():230–293` e `_search():300–317` trabalham sobre esse índice e a resolução de variantes de AssetReader.

Essa leitura do código identifica a estrutura, mas **não prova que todo TextAsset já é um pacote legível nem executa qualquer transformação de payload**. É necessário inventariar os cabeçalhos dos arquivos próprios antes de afirmar formatos e quantidades internas.

## Transformação com chave: limite observado

`AppData.Init():1880–1905` configura `Encrypter` e habilita `AssetReader.SetSecurity(...,true)`. `AssetReader.GetData():208–233` devolve alguns tipos/caminhos diretamente, mas para certos arquivos de raiz chama `Encrypter.Decode`. `Encrypter.SetEncryptionKey/Encode/Decode` (`src/KairoLibrary/kairo/unity/util/Encrypter.cs:12–46`) confirma uma transformação dependente de chave. Nenhuma chave, tabela numérica, payload ou saída transformada é reproduzida aqui; **esta análise estática dos carregadores não decodificou assets**. Uma análise local de payloads posteriormente autorizada tem escopo e evidência próprios no inventário principal de assets.

Distinção necessária: `RecordStore.WriteRecord/ReadRecord():197–265` também protege saves com transformação e CRC64, mas isso é outro caminho. Não confundir checksum, compressão, criptografia de recursos e criptografia de save. A existência do código de transformação não prova quais bytes do APK efetivamente passam por ele; esse vínculo precisa de evidência do inventário. Uma ferramenta que só exporta TextAssets do Unity pode ainda produzir os blobs nessa forma. Qualquer bloqueio da ferramenta/política deve ser relatado antes de tentar decodificar.

## Textos: onde estão e limites da identificação

`Main.OnCreate()` abre o pacote do RecordStore `(1,6)` e instala duas tabelas por `Language.SetSoftLabelTable` e `Language.SetTextTable`. `BootForm.Load()` lê tabelas do mesmo pacote e constrói classes de dados por linha. Há também `AppData.resourceString` e arrays de rótulos acessados por índice.

`Language._translateText()` agrupa por comprimento e compara **o conteúdo recebido** com a primeira coluna da tabela; `TranslateSoftLabel()` também compara strings. `system.KairoText.LT()` (`src/Assembly-CSharp/system/KairoText.cs:8–43`) tenta a tradução comum, possui tabela própria vazia e, se não houver tradução, devolve o texto de entrada. Portanto há tanto chave textual quanto índice, e o texto original pode funcionar como fallback.

Literais visíveis existem no fonte, por exemplo em `TitleForm` (constantes de entrada em `:43–49`), `HttpForm.DrawConnect():140–147`, chamadas de diálogos e renderização. Não se reproduz seu conteúdo neste documento. O inventário Roslyn separado mede quantidade e classe; uma classificação automática de literal potencialmente visível não prova que ele é alcançado em toda execução. Fonte completo pode conter conteúdo de menus/tabelas e dados numéricos; a futura tradução deve separar código e conteúdo antes de gerar C++ versionado.

## Ausências delimitadas e memória

Uma busca integral dos arquivos C# dos dois assemblies não encontrou acessos a `Application.streamingAssetsPath`, chamadas a `SceneManager`, `LoadLevel` ou `AssetBundle`. Isso confirma ausência dessas APIs explícitas no corpus, **não ausência de cenas, built-ins ou carregamento automático pelo player Unity**. O inventário do APK é a autoridade para esses objetos. Não foi inventado um bootstrap de cena nem foi proposto layout de telas.

O orçamento PICA200 deve considerar, além das Texture2D serializadas: imagens internas dos pacotes/TextAssets, expansão/padding de texturas, duplicações por paleta, atlas/offscreen e glyph caches; áudio realmente simultâneo, estado dos canais e buffers de streaming. `BootForm.Load():804–814` marca o grupo BGM para loop e tipo 0 e o grupo SE para tipo 1; `SoundOGG.Play():36–90` escolhe portas/prioridades e pode recusar som sem porta disponível. `Main.SetJingle():212–225` reduz/restaura volume do grupo BGM durante jingle. Contar todo áudio decodificado ao mesmo tempo é uma hipótese de residência conservadora, não uma medição do pico real.

Quantidades, dimensões, durações e estimativas numéricas pertencem ao inventário de assets produzido a partir do APK próprio; este documento fornece os vínculos de carregamento e não substitui a leitura dos formatos.
