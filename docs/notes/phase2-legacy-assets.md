# MAP legados e pacotes CSV: resolução da pendência da Fase 1

O script `tools/inventory_legacy_assets.py --apk <APK próprio>` confere o SHA-256 esperado antes e depois da leitura. A análise lê os payloads diretamente do APK e publica somente `config/phase2-legacy-assets.json`: contagens, esquema e resultados booleanos. Não exporta recursos, nomes de arquivos de assets, coordenadas, tiles, textos, valores de tabelas ou chave; nada foi alterado nos assets locais. Esta nota substitui os UNKNOWN de formato dos quatro MAP e de consumidor dos três CSV no inventário inicial.

## Quatro MAP

Os quatro arquivos somam **119652 bytes**. Todos têm versão **102**, inteiros **little-endian** e extent interpretado até o último byte. Não são GMAP com outra extensão. Seu molde medido é:

1. Três Int32 e um byte booleano. O primeiro Int32 é a versão; os papéis dos outros dois e do booleano são **UNKNOWN**. Coordenadas/estado de editor são apenas hipótese.
2. Contagem Int32 de linhas; cada linha tem sua própria contagem Int32 de colunas. A grade é retangular nos quatro arquivos medidos.
3. Cada célula contém um Int32 de tile. O sentinela -1 termina a célula; os demais valores são seguidos de string UTF-8 com comprimento inteiro de 7 bits por byte e quatro Int32 de retângulo. Isso é compatível com strings de BinaryWriter, mas a ferramenta original que escreveu o arquivo é **UNKNOWN**.
4. Contagem Int32 de objetos; cada objeto possui string de recurso no mesmo formato e dois Int32 de posição.
5. Três arquivos terminam com um par de Int32 de ponto base. O quarto termina com oito pares Int32, uma contagem Int32 e triplas Int32 de posicionamento. Não sobram bytes.

| Arquivo, rótulo sem nome do recurso | Bytes | Células com retângulo | Objetos | Consumidor da projeção runtime |
|---|---:|---:|---:|---|
| MAP A | 31083 | 775 | 8 | `game.Map.LoadMap` |
| MAP B | 20762 | 414 | 9 | `game.Map.LoadMap` |
| MAP C | 41649 | 1017 | 9 | `game.Map.LoadMap` |
| MAP D | 26158 | 600 | 0 | `game.MapMain.LoadMap` |

Cada MAP tem exatamente um GMAP local com o mesmo identificador de base. **4/4** pares possuem dimensões e a sequência inteira de IDs de tiles idênticas; também são idênticos os pontos base, as tabelas de posicionamento, a quantidade e a ordem dos objetos e todas as suas coordenadas. Os caminhos de imagem dos objetos estabelecem uma associação consistente e bijetiva com **dois** índices de imagem do GMAP em todos os arquivos. As strings e retângulos de origem que não existem no GMAP são dados adicionais do MAP, não imagens embutidas.

O consumidor runtime está comprovado: `game.Map.CreateMap`, `reference/src/Assembly-CSharp/game/Map.cs:480–491`, pede GMAP, e `LoadMap:515–545` lê o molde de três arquivos. `game.MapMain.CreateMap`, `reference/src/Assembly-CSharp/game/MapMain.cs:210–222`, pede GMAP; `LoadMap:243–353` lê a variante com oito pontos e tabela intermediária. `Map.Draw` usa os índices de objetos contra `AppData.resMapObject_` em `Map.cs:1020–1025`. Os formatos de arquivo guardam a ordem serializada; as inversões de eixo das matrizes são aplicadas por esses consumidores.

Nenhum leitor direto de MAP versão 102 foi localizado no corpus C# reconstruído: o consumidor autoral/editorial permanece **UNKNOWN**. Chamar esses arquivos de fontes de editor é hipótese sustentada pela projeção exata e pelos retângulos extras, não identificação de uma ferramenta. O port conserva todos os arquivos locais e usa o GMAP solicitado pelo jogo; não é necessária conversão dos MAP para chegar ao consumidor de runtime já identificado.

## Três CSV

Os três arquivos são **pacotes de idioma**, não tabelas de parâmetros de futebol. Estão no container de recursos de idioma lido por `Language.Init`, `reference/src/KairoLibrary/kairo/unity/util/Language.cs:558–611`. `Language.SetLanguagePack:1225–1314` seleciona a entrada CSV e a entrega a `LoadLanguagePack:1393–1889`; `GetLanguagePackInfo:1971–2046` lê seus metadados de cabeçalho. Esse vínculo foi conferido contra os três membros reais, não inferido somente da extensão.

| Pacote, sem conteúdo ou identificador | Bytes | Linhas físicas | Cabeçalhos | Registros `#id` | Continuação sem chave |
|---|---:|---:|---:|---:|---:|
| CSV A | 117664 | 2514 | 6 | 2271 | 237 |
| CSV B | 98845 | 2514 | 6 | 2271 | 237 |
| CSV C | 100465 | 2514 | 6 | 2271 | 237 |
| Total | 316974 | 7542 | 18 | 6813 | 711 |

Todos são UTF-8 com BOM. O parser usa a **primeira vírgula** e o fim de linha, retira aspas externas e conserva o restante como valor; não é um parser RFC4180. Chaves `@` selecionam metadados; `#id` seleciona um registro de tradução; chave vazia acrescenta uma linha ao registro corrente. Todos os registros foram classificados, sem chaves desconhecidas fora desses ramos.

O manifesto inglês tem **2270 IDs únicos** e **2507 linhas físicas**. Cada CSV cobre todos esses IDs, mas contém **um ID adicional** que corresponde a slot null dentro do array do manifesto. O fonte aloca esse array em blocos de 512 e testa null antes de acrescentar a tradução (`Language.cs:1457–1477/1567–1583`); portanto esse registro não é aplicado. Dos seis cabeçalhos de cada CSV, um não corresponde aos cinco campos reconhecidos e é ignorado pelo ramo `StartsWith("@")` sem alternativa de erro (`Language.cs:1522–1566`). Nenhum conteúdo desse registro ou cabeçalho foi publicado.

`Language.ConvertLanguagePack:1911–1969` aplica traduções às entradas TXT e às posições do manifesto, segundo os delimitadores de cada formato. `Language._translateText:1140–1165` permanece com a lógica do fonte. Os CSV, manifestos e textos de resultado continuam assets obtidos exclusivamente do APK local; nada foi convertido em literais C++ por esta análise.

## Reprodução e limites

Execute `python tools/inventory_legacy_assets.py --apk <APK próprio>` depois do inventário local da Fase 1. O recibo inclui os hashes do APK, do inventário privado e do produtor; a execução falha se os pares MAP/GMAP deixarem de coincidir ou se o vínculo dos pacotes de idioma não puder ser demonstrado. Nenhuma ferramenta foi instalada. Formatos e consumidores foram examinados estaticamente; o jogo traduzido ainda não foi exercitado por este teste.
