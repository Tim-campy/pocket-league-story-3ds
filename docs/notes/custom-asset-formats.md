# Formatos próprios, TextAssets auxiliares e fontes

Esta análise complementa o inventário principal, após autorização explícita do usuário para ler localmente os blobs. Todos os payloads continuam no APK próprio ou em `assets/`, ignorado pelo Git. O script [tools/inventory_custom_formats.py](../../tools/inventory_custom_formats.py) não exporta assets: somente [config/custom-asset-formats.json](../../config/custom-asset-formats.json), com contagens, tamanhos e vínculos de código. Não publica nomes de recursos, frases, nomes de jogadores/times, valores de tabelas ou chave. A referência de código é a tag `v1.0.0-csharp-reconstruction`.

## Os cinco TextAssets fora dos containers

**Não são cinco listas equivalentes.** Todos os cinco têm UTF-8 válido e zero caracteres NUL, mas há duas listas de identificadores, uma tabela de formato e dois manifestos de posições/textos. As linhas abaixo são contagens físicas de linhas, não equivalem automaticamente à quantidade de mensagens únicas ou registros CSV lógicos.

| Papel medido | Arquivos | Bytes | Linhas | Vínculo e limite |
|---|---:|---:|---:|---|
| Lista de identificadores de áudio | 1 | 548 | 27 | As 27 linhas são identificadores de AudioClip existentes. Nenhum consumidor C# direto do nome dessa lista foi identificado; uso em runtime **UNKNOWN** |
| Índice unificado de recursos | 1 | 1050 | 48 | Resolve exatamente 21 TextAsset e 27 AudioClip. `AssetReader.Exist`, `reference/src/KairoLibrary/kairo/unity/io/AssetReader.cs:235–291`, lê essa lista em `:244` |
| Tabela de delimitadores de pacotes de idioma | 1 | 395 | 25 | Cada linha tem três campos; dois são códigos numéricos de caracteres. Leitura em `Language.Init`, `reference/src/KairoLibrary/kairo/unity/util/Language.cs:689–700`, para construir `LangPackFormat` |
| Manifesto de posições/textos, variante A | 1 | 113754 | 2507 | `Language.LoadLanguagePack`, `Language.cs:1427–1457`, lê os três primeiros separadores, associa identificador/arquivo/posição e conserva o restante como texto |
| Manifesto de posições/textos, variante B | 1 | 148028 | 2507 | `Language.LoadLanguagePack`, `Language.cs:1681–1712`, usa o mesmo tipo de registro para associar textos e posições |
| **Total** | **5** | **263775** | **5114** | Conteúdo integral privado |

Os manifestos podem ter vírgulas adicionais no campo textual. Portanto contar todas as vírgulas como separadores de coluna ou aplicar indiscriminadamente um parser RFC4180 muda a interpretação. É necessário seguir as operações efetivamente usadas pelo leitor. Os papéis A/B são rótulos desta documentação; seus nomes reais e valores não são reproduzidos.

## Membros de dados dentro dos 16 containers

O inventário principal mede 1.337 membros: 718 PNG e os tipos abaixo. Os bytes na tabela são dos membros já disponíveis localmente após a transformação do container, sem copiar seus conteúdos para este relatório.

| Tipo | Quantidade | Bytes | Formato e leitor confirmado |
|---|---:|---:|---|
| SEB | 532 | 35756 | Animação/layout de sprites, inteiros big-endian e referências a imagens; `kairo.unity.ui.Seb._load(InputStream)`, `reference/src/KairoLibrary/kairo/unity/ui/Seb.cs:233–515` |
| TXT | 52 | 254660 | Todos UTF-8 válido; 2.584 linhas físicas somadas. Tabelas, rótulos, mensagens e scripts de evento carregados por `BootForm.Load`, `reference/src/Assembly-CSharp/form/BootForm.cs:526–773`, e `Main.OnCreate():47–67` |
| INF | 24 | 24576 | Listas UTF-8 de recursos/opções; 1.350 linhas físicas somadas. `ResourceManager.LoadReady():284–312` e `LoadStart():332–618`, `reference/src/KairoLibrary/kairo/unity/ui/ResourceManager.cs` |
| GMAP | 4 | 10372 | Quatro mapas binários interpretados até o fim exato: três pelo layout `game.Map.LoadMap`, um pelo layout `game.MapMain.LoadMap` |
| MAP | 4 | 119652 | Binários não UTF-8; sem correspondência comprovada com os dois layouts GMAP. Sem consumidor explícito da extensão identificado: **UNKNOWN** |
| CSV | 3 | 316974 | Todos UTF-8 válido, 7.542 linhas físicas somadas. Consumidor específico de cada arquivo não comprovado; não presumir que a extensão sozinha estabelece o schema ou a necessidade em runtime |

TXT e INF não são código para o tradutor. `StringUtil.LoadStringArray`, `reference/src/KairoLibrary/kairo/unity/util/StringUtil.cs:220–252`, lê uma entrada do pacote e separa linhas; `java.lang.JString.New(byte[])`, `reference/src/KairoLibrary/java/lang/JString.cs:1170–1177`, usa UTF-8. A interpretação das colunas é feita pelo consumidor: por exemplo `PlayerData.Load():493–518` mistura nomes e campos numéricos, e `EventData.Load/ReadScript/LoadStringTable():141–199` associa textos e sequências numéricas de eventos. Esses valores continuam assets locais.

INF também não é apenas uma lista sem semântica: `ResourceManager.LoadStart():345–350` trata índices explícitos; `:381–467` lê opções de formato, filtro, resolução/paleta e atlas; `:516–565` trata animações; `:567–595` seleciona som. Conservar nomes técnicos e índices para o carregamento não autoriza incorporar as listas do jogo no código versionado.

## SEB: há mais imagens dentro desses arquivos?

**Não nos 532 SEB medidos.** O leitor de inspeção seguiu os dois moldes do fonte e consumiu **532/532 arquivos até o fim exato**, todos no formato de versão 0. Foram medidos 532 layers, 1.559 frames declarados e 1.575 registros de sprite. Nenhum byte residual ficou reservado a dados de imagem e nenhuma assinatura PNG apareceu nesses payloads.

O modelo confirmado possui índices de textura, retângulos, deslocamentos, reversões, blend e cores/primitivas; não possui um campo de imagem codificada. `Seb.Draw(...,Image[] img,...)`, `Seb.cs:964–1044`, acessa `img[sp[1]]` para desenhar regiões ou usa índices negativos para primitivas. Assim, esses SEB reutilizam as imagens já inventariadas, em vez de acrescentar texturas codificadas. A conclusão vale para estes 532 arquivos e estes layouts; não é uma afirmação universal sobre qualquer arquivo chamado SEB.

## GMAP e MAP não são sinônimos

`game.Map.CreateMap`, `reference/src/Assembly-CSharp/game/Map.cs:480–491`, solicita extensão GMAP; `LoadMap():515–545` lê dimensões, grade de shorts big-endian, ponto base e objetos. Três dos quatro GMAP coincidem integralmente com esse molde.

`game.MapMain.CreateMap`, `reference/src/Assembly-CSharp/game/MapMain.cs:210–222`, também solicita GMAP. `LoadMap():243–353` acrescenta pontos base e uma tabela intermediária de posicionamento antes dos objetos. Um GMAP coincide integralmente com esse segundo molde. Os extents foram calculados sem publicar dimensões de mapa, tiles ou coordenadas do jogo.

Os quatro MAP possuem 119.652 bytes somados e não coincidem com nenhum desses moldes. A possibilidade de serem fontes intermediários/editoriais é apenas uma hipótese; não foi adotada como fato. Eles não foram convertidos, descartados ou tratados como imagens. Sua semântica permanece UNKNOWN e não bloqueia a identificação dos quatro arquivos GMAP que o código solicita explicitamente.

## As duas Font têm fontes TrueType embutidas

O formato foi conferido pelo ramo Unity 5.3 do [leitor Font primário do AssetStudio](https://github.com/Perfare/AssetStudio/blob/d158e864b556b5970709c2a52e47944d53aa98a2/AssetStudio/Classes/Font.cs), cujo hash está no manifesto de fontes primárias da auditoria Unity. O leitor local não renderizou, exportou nem instalou fontes. Nomes de família, identificação comercial e tabelas de glifos permanecem privados.

| Medida | Font A | Font B |
|---|---:|---:|
| Formato do arquivo embutido | TrueType sfnt | TrueType sfnt |
| Bytes da fonte embutida | 1920344 | 50788 |
| Tabelas no diretório sfnt | 18 | 16 |
| Glifos declarados em maxp | 15563 | 346 |
| Character rects serializados no objeto Unity | 0 | 0 |
| Pares de kerning serializados no objeto Unity | 0 | 21 |
| Bytes finais do objeto Unity não interpretados por este leitor | 36 | 56 |

Os dois diretórios sfnt e todas as suas regiões de tabela cabem nos arquivos embutidos; total de fontes embutidas: **1.971.132 bytes**. Não se presumiu que esse seja o pico de memória do mecanismo de fonte.

Foi também resolvido o PPtr de textura de cada Font no próprio arquivo serializado. **Ambas apontam para as duas Texture2D 0×0/image count 0** medidas na auditoria anterior. Isso comprova o vínculo dos placeholders com as fontes; a criação/tamanho de atlas de glyphs em runtime ainda é UNKNOWN e precisa de medição posterior. Zero pixels serializados não significa zero custo de renderização de texto.

## Textos embutidos, índices e textos transitórios

Há três origens distintas: tabelas/textos dos assets empacotados; literais visíveis presentes no C# de referência; e resultados transitórios de formatação durante a execução. `Main.OnCreate():47–67` instala tabelas de tradução, mas `Language._translateText():1140–1165` também usa o conteúdo original como chave. `KairoText.LT():12–43` pode devolver o próprio texto de entrada. A futura externalização deve manter identificadores e regras de substituição, sem copiar frases para C++.

Valores transitórios — números, placares, nomes escolhidos pelo usuário e concatenações/formatos — não são um conjunto finito de literais a contar ou distribuir. O código que os compõe é lógica; as frases-base, nomes/tabelas do jogo e mensagens de fallback são conteúdo e devem vir do pipeline local. Fragmentos técnicos de protocolo, nomes de campos e identificadores são outra categoria e não devem ser confundidos com texto visível apenas por serem strings.

Esta medição complementa, sem substituir, `config/visible-text-counts.csv` e a análise Roslyn: não atribui a cada string a certeza de ser alcançada, não reproduz textos e não implementa ainda tradutor, backend ou política de fontes. Nenhum artefato distribuível com assets foi criado.
