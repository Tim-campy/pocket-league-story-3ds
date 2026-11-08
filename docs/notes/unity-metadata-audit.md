# Auditoria independente do leitor de metadados Unity 15

**Resultado: PASS para as tabelas e campos inspecionados, com limites explícitos.** O leitor próprio não foi alterado nesta auditoria. Não foi instalado nem executado AssetRipper/AssetStudio; seus fontes públicos foram consultados como referência de formato. Não houve execução do jogo, renderização, exportação de assets ou transformação de blobs com chave pela auditoria. A análise aqui não declara completo o inventário das imagens internas de TextAssets.

## Cobertura medida

O comando `python tools/audit_unity_metadata.py --apk <APK próprio>` verificou a identidade SHA-256 esperada antes e depois da leitura e conferiu a estabilidade do JSON privado e do leitor. A saída pública é [config/unity-metadata-audit.json](../../config/unity-metadata-audit.json); nomes de recursos, strings de jogo e payloads não são emitidos nesse relatório. O arquivo privado `assets/inventory/unity-objects.json` continua ignorado pelo Git.

| Medida | Resultado exato |
|---|---:|
| Arquivos serializados Unity 15 conferidos | 1160 |
| Objetos nas tabelas | 1489 |
| Tipos serializados, somados por arquivo | 1252 |
| IDs de tipo negativos | 2 |
| Entradas de script | 2 |
| Objetos com índice de script diferente de -1 | 2 |
| Referências externas nas tabelas | 1164 |
| Bytes de metadados consumidos até o fim exato | 164418 |
| Objetos com stripped byte 0 | 1489 |
| Objetos com outro stripped byte | 0 |
| Extents externos de áudio verificados contra o diretório ZIP | 27 |
| Erros de extent de streams | 0 |
| Erros de tabela/metadados no inventário privado | 0 |

Todos os 1.160 arquivos declaram plataforma Android (13). São 1.159 com versão interna `5.3.4f1` e um com `5.3.2p3`. A atribuição desse último a um componente built-in é uma hipótese; não foi demonstrada apenas pelo número de versão.

| Objetos com campos adicionais conferidos | Quantidade | Alcance |
|---|---:|---|
| Texture2D | 99 | Dimensões, formato, mips, image count e localização/tamanho dos dados |
| AudioClip | 27 | Canais, frequência, bits, duração, modo de carga, compressão e stream |
| TextAsset | 21 | Extent opaco de m_Script, sem conteúdo no relatório |
| Font | 2 | Identificador privado; não foram interpretados métricas, glyphs ou arquivo da fonte |
| Demais classes | 1340 | Somente tabela de objetos e extents, incluindo 1078 Shader |

Cada PathID/offset/tamanho/classe do JSON foi confrontado com a tabela do arquivo original, e cada trailer foi lido até exatamente `20 + metadataSize`: lista de scripts, externos e string final de informações do usuário. Não sobraram bytes de metadados não explicados nesse trecho. Todos os streams de áudio apontam para recursos ZIP existentes e cabem dentro de seus comprimentos. Os demais extents de objeto já estão sujeitos à verificação de limites/sobreposição do leitor e aos testes abaixo. Isso não valida o conteúdo de áudio/shader/mesh/cena.

## Confronto com fontes primárias

As revisões e SHA-256 de cada arquivo consultado estão em [config/unity-metadata-primary-sources.json](../../config/unity-metadata-primary-sources.json). A revisão AssetStudio é `d158e864b556b5970709c2a52e47944d53aa98a2`; a revisão AssetRipper é `b946b919a5fbf46bb1f0812a7c1b02c55fffec66`. Nenhum fonte de terceiros foi incorporado ao runtime do port.

| Ponto auditado | Conclusão e evidência primária |
|---|---|
| Header e metadataSize | Unity 15 começa com header de 20 bytes, inteiros iniciais big-endian e seleção posterior da endianess. O writer AssetRipper calcula `MetadataSize` pela diferença de posições apenas da região de metadados, sem incluir o header; portanto o limite `20 + metadataSize` usado aqui está correto. [SerializedFile, leitura](https://github.com/Perfare/AssetStudio/blob/d158e864b556b5970709c2a52e47944d53aa98a2/AssetStudio/SerializedFile.cs), [SerializedFile, escrita](https://github.com/AssetRipper/AssetRipper/blob/b946b919a5fbf46bb1f0812a7c1b02c55fffec66/Source/AssetRipper.IO.Files/SerializedFiles/SerializedFile.cs). |
| Tipo negativo | Antes da mudança de formato 16, tipo negativo inclui 16 bytes de script ID adicionais, além dos 16 bytes de old type hash. O leitor não deve tratar o typeID da tabela do objeto como índice da lista de tipos em v15. [ReadSerializedType](https://github.com/Perfare/AssetStudio/blob/d158e864b556b5970709c2a52e47944d53aa98a2/AssetStudio/SerializedFile.cs). |
| PathID e stripped byte | Em v15 o PathID é Int64 após alinhamento de 4 bytes; o offset relativo é UInt32 e soma DataOffset. Após typeID/classID vêm script index Int16 e stripped byte. O booleano de tipo `m_IsStrippedType`, introduzido em formato 16, não pertence à tabela de tipos do v15. [Objetos e tipos](https://github.com/Perfare/AssetStudio/blob/d158e864b556b5970709c2a52e47944d53aa98a2/AssetStudio/SerializedFile.cs), [versões do formato](https://github.com/Perfare/AssetStudio/blob/d158e864b556b5970709c2a52e47944d53aa98a2/AssetStudio/SerializedFileFormatVersion.cs). |
| NamedObject Android | Hide flags e os dois PPtrs de EditorExtension só aparecem no alvo NoTarget, não no player Android. Para os tipos tratados, o nome alinhado pode ser lido diretamente no início do corpo. [Object](https://github.com/Perfare/AssetStudio/blob/d158e864b556b5970709c2a52e47944d53aa98a2/AssetStudio/Classes/Object.cs), [EditorExtension](https://github.com/Perfare/AssetStudio/blob/d158e864b556b5970709c2a52e47944d53aa98a2/AssetStudio/Classes/EditorExtension.cs), [NamedObject](https://github.com/Perfare/AssetStudio/blob/d158e864b556b5970709c2a52e47944d53aa98a2/AssetStudio/Classes/NamedObject.cs). |
| Texture2D 5.3 | Mip count Int32, os dois booleanos de leitura, alinhamento, image count/dimension, settings de 16 bytes, lightmap/colorspace e tamanho do payload seguem a ordem primária. Com tamanho zero, StreamingInfo usa offset/size UInt32 e caminho alinhado nesse Unity. [Texture2D e StreamingInfo](https://github.com/Perfare/AssetStudio/blob/d158e864b556b5970709c2a52e47944d53aa98a2/AssetStudio/Classes/Texture2D.cs). |
| AudioClip 5.x | Os quatro inteiros iniciais, duração Float32, booleanos/alinhamentos, subsound index e StreamedResource com offset/size Int64 correspondem ao leitor. Nenhum decoder foi acionado. [AudioClip](https://github.com/Perfare/AssetStudio/blob/d158e864b556b5970709c2a52e47944d53aa98a2/AssetStudio/Classes/AudioClip.cs). |
| TextAsset | O campo após NamedObject é um array de bytes com comprimento Int32. O inventário conserva somente offset/tamanho/classificação opaca em JSON; não presume UTF-8 nem conteúdo textual. [TextAsset](https://github.com/Perfare/AssetStudio/blob/d158e864b556b5970709c2a52e47944d53aa98a2/AssetStudio/Classes/TextAsset.cs). |

## Texturas vazias e limites do orçamento

Das 99 Texture2D, **97** têm image count 1. As outras **2** têm largura 0, altura 0, image count 0, complete image size 0 e stream/payload de tamanho 0. A combinação é compatível com objetos placeholder sem imagem serializada; a fonte primária não impõe dimensões positivas ao ler esses campos. Portanto não há evidência de corrupção de alinhamento só por esses zeros. O papel exato desses objetos — por exemplo, atlas gerado dinamicamente — continua **UNKNOWN**.

Esses dois objetos não acrescentam pixels serializados ao orçamento estático, mas não limitam memória que uma fonte/textura venha a alocar em runtime. Tampouco se deve multiplicar 99 por uma textura média, aceitar dimensões maiores que o alvo sem conversão, ou considerar imagens PNG internas de TextAsset já inventariadas por esta contagem. São camadas diferentes.

## Fixtures sintéticas e reexecução

`tests/repository/test_unity_metadata.py` contém **14 testes**, feitos somente com bytes sintéticos. Cobrem: header/metadados, tipo negativo, PathID de 64 bits e alinhamento entre objetos, stripped byte, endianess big-endian, type tree, Texture2D inline e em stream, placeholder 0×0, AudioClip, TextAsset sem conteúdo emitido, recusa de interpretação de corpo não Android, preservação da tabela com corpo truncado, PathID duplicado, geometria inválida e leitura fora dos limites/com comprimento negativo.

```powershell
python -m unittest discover -s tests/repository -p test_unity_metadata.py -v
python tools/audit_unity_metadata.py --apk '<caminho do APK próprio>'
```

Resultado desta execução: **14/14 testes aprovados**, relatório de invariantes **PASS**, zero erros de extent. A auditoria não baixa ferramentas nem assets. Os fontes primários consultados foram guardados somente em `build/`, ignorado pelo Git; os links e hashes bastam para identificar as referências.

Limites restantes: só Unity serialized format 15 e os corpos Android 5.3 selecionados são admitidos; corpos de outras versões/plataformas não são presumidos compatíveis. Font é medido por existência, não por conteúdo. Streams foram validados por extent, não decodificados. O auditor não mede o conteúdo interno dos blobs de TextAsset nem comprova o pico de residência durante o jogo. AssetRipper/equivalente e os demais leitores da fase de assets precisam declarar seu próprio alcance, sem transformar esta prova parcial em completude do inventário.
