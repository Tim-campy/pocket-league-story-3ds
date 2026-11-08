# Inventário de assets e estimativa de memória

**Somente metadados e contagens. Nenhum asset, texto, nome de jogador/time, chave ou binário original está neste documento ou nos CSVs publicados.** O APK próprio foi autenticado pelo SHA-256 de docs/apk.md e permaneceu inalterado. A análise/decodificação local foi autorizada pelo usuário. Conteúdo e logs completos ficam exclusivamente em assets/ e build/, ignorados pelo Git.

## Cobertura e níveis de contagem

Foram classificados **1189 arquivos de dados sob assets/**: 1160 serializados Unity, 27 sidecars de áudio, 1 PNG avulso e 1 XML. Total: **117861037 bytes descomprimidos**, 8083154 bytes de payload ZIP. DLLs, símbolos e executáveis não são assets desta contagem e não foram copiados para o port.

Os serializados contêm **1489 objetos originais**. O leitor independente consumiu integralmente as tabelas de metadados. AssetRipper 2.0.0 reconciliou todos os objetos, com **0 ausentes**, **99/99 texturas** e **27/27 áudios** iguais em seus campos medidos. Seus 1551 objetos incluem 62 auxiliares gerados pela ferramenta, excluídos do inventário original. Não houve exportação de projeto, assemblies ou mídia pelo AssetRipper. [Auditoria](notes/assetripper-inventory.md).

Há 1.159 serializados com versão 5.3.4f1 e um com 5.3.2p3; isso não altera a versão Unity identificada do jogo. [Auditoria independente de formato](notes/unity-metadata-audit.md). Os níveis ZIP, objeto Unity e membro de container se sobrepõem: **não somar suas contagens ou bytes**.

## Tipos Unity principais

| Tipo | Objetos | Bytes dos objetos serializados |
|---|---:|---:|
| Texture2D | 99 | 104867520 |
| Sprite | 56 | 11884 |
| AudioClip | 27 | 3224 |
| Font | 2 | 1971548 |
| TextAsset | 21 | 3275584 |
| Shader | 1078 | 1261300 |
| MonoScript | 156 | 14972 |
| MonoBehaviour | 2 | 7792 |
| GameObject | 2 | 174 |
| Camera | 2 | 234 |
| Material | 4 | 564 |
| Mesh | 13 | 152632 |

A lista integral de tipos/IDs está em [config/assets.csv](../config/assets.csv) e [config/asset-summary.json](../config/asset-summary.json); o cruzamento com nomes completos Unity está em [config/assetripper-summary.json](../config/assetripper-summary.json). Shaders, MonoScripts, settings, câmeras e prefabs do motor não significam que haverá Unity no port; o backend terá implementação própria. Sprites podem compartilhar texturas e não geram outra cópia de pixels nesta estimativa.

## Contêineres e conteúdo do jogo

**21 TextAssets**: 16 contêineres próprios JarInflater (15 transformados por XOR, com round trip conferido) e cinco arquivos auxiliares. Os contêineres têm **1337 membros**, **2967362 bytes**. Extents, nomes de arquivo seguros e diretórios foram verificados; os PNGs tiveram CRC de todos os chunks conferido. Nenhuma chave foi duplicada no código do port.

| Tipo interno | Quantidade | Bytes | Formato medido |
|---|---:|---:|---|
| PNG | 718 | 2205372 | PNG 8 bits; RGB/RGBA/paleta |
| .seb | 532 | 35756 | SEB v0; árvore de sprites/animação, sem pixels |
| .txt | 52 | 254660 | UTF-8; tabelas, mensagens e scripts |
| .inf | 24 | 24576 | UTF-8; listas/opções ResourceManager |
| .gmap | 4 | 10372 | Binário Map/MapMain, big-endian |
| .map | 4 | 119652 | Binário; formato/consumidor UNKNOWN |
| .csv | 3 | 316974 | UTF-8; consumidor específico UNKNOWN |

Os 718 PNGs têm **654 hashes distintos**, **631 ocorrências com alpha**, largura entre 1 e 768 e altura entre 1 e 480. Esses máximos são por eixo, não uma afirmação de que um único arquivo tem ambos. Nenhum PNG interno excede 1024 em qualquer eixo. [Distribuição exata por dimensão/alpha](../config/texture-dimensions.csv). Hash distinto não equivale a imagem distinta por pixels; não houve decodificação de pixels.

Os cinco auxiliares são: lista de 27 áudios (548 bytes), índice de 48 recursos (1.050 bytes), tabela de formato de idioma de 25 linhas (395 bytes), e dois manifestos de posições/textos com 2.507 linhas cada (113.754 e 148.028 bytes). Total **263.775 bytes / 5.114 linhas físicas**. Não são cinco listas equivalentes.

Todos os 532 SEB foram consumidos até o fim: 532 layers, 1.559 frames e 1.575 registros; referenciam Image[] e não contêm PNG embutido. Três GMAP seguem Map.LoadMap e um segue MapMain.LoadMap. Quatro MAP e o consumidor específico de três CSV continuam UNKNOWN. [Formatos, fontes e limitações](notes/custom-asset-formats.md).

## Como o jogo carrega

| Conteúdo | Caminho do código |
|---|---|
| PNG | ResourceManager.Load/LoadReady/LoadStart → JarInflater.GetInputStream → Image.Load/DecodeByteArray → Texture2D.LoadImage no original |
| SEB/INF | ResourceManager e Seb._load; listas de imagens/frames e comandos, não texturas adicionais |
| Tabelas/textos | Main.OnCreate instala tabelas dos registros; StreamUtil/RecordStore/JarInflater fornecem bytes; Language converte/pesquisa textos |
| GMAP | game.Map.LoadMap e game.MapMain.LoadMap, com formatos distintos confirmados |
| Áudio | SoundOGG.Load(string) → Resources.Load<AudioClip>, pelo identificador sem extensão |
| Fontes | Font._getDefaultGUIFont seleciona recursos por idioma; duas fontes TrueType embutidas |
| Prefab/render target | Offscreen carrega prefab pelo Resources; o comportamento exigirá backend próprio, não o arquivo Unity como motor |
| MAP/CSV sem vínculo | Preservados no inventário; consumidor ainda UNKNOWN |

Métodos, caminhos e linhas de cada caminho: [carregadores](notes/asset-loading.md) e [formatos próprios](notes/custom-asset-formats.md). Não foi encontrada a rota de sprites baseada em Resources.Load<Texture2D>; inventariar só Texture2D omitiria as imagens internas. StreamingAssets/AssetBundle/SceneManager não apareceram no corpus examinado.

## Áudio e fontes

**27 AudioClip Vorbis**, todos estéreo: 25 a 44.100 Hz, um a 24.000 Hz e um a 32.000 Hz. Soma das durações declaradas nos campos float: **206.17563989758492 s**. Estimativa PCM16: **36175860 bytes** = 34.499989 MiB, calculada por ceil(duração × frequência) × canais × 2; isso não é uma medição do número de samples efetivamente decodificados. Os 27 extents de sidecar foram verificados dentro do ZIP; nenhum áudio foi decodificado/conversão realizada.

**Duas fontes TrueType**: 1.920.344 e 50.788 bytes, total **1.971.132 bytes**, com 15.563 e 346 glifos, respectivamente. Seus PPtr apontam exatamente às duas Texture2D 0×0: são placeholders de atlas de fonte, não custo de texto nulo. O atlas residente e o custo por tamanho de glifo ainda são UNKNOWN; nenhuma decisão de fonte/design foi tomada.

## Estimativa de memória nos alvos

Cálculo novo, sem converter imagens: para cada textura, padding para potência de dois com mínimo 8; dimensões acima de 1024 são particionadas antes do padding. Cenários sem mipmaps; overhead de allocator, staging, buffers, render targets, código, dados/saves e atlas de texto não está incluído. Fórmulas conferidas no [código primário citro3d](https://github.com/devkitPro/citro3d/blob/master/source/texture.c). PICA200 é a GPU: áudio é estimado separadamente para DSP/ndsp.

| Corpus e formato hipotético | Bytes | MiB |
|---|---:|---:|
| 654 PNGs por SHA, RGBA8 | 27537920 | 26.262207 |
| 654 PNGs por SHA, RGBA4 | 13768960 | 13.131104 |
| 654 PNGs por SHA, ETC1A4 | 6884480 | 6.565552 |
| 654 PNGs por SHA, ETC1 | 3442240 | 3.282776 |
| 718 ocorrências PNG, RGBA8 | 27899136 | 26.606689 |
| 718 ocorrências PNG, RGBA4 | 13949568 | 13.303345 |
| 718 ocorrências PNG, ETC1A4 | 6974784 | 6.651672 |
| 718 ocorrências PNG, ETC1 | 3487392 | 3.325836 |
| 99 Texture2D Unity, RGBA8 | 161299712 | 153.827393 |
| 99 Texture2D Unity, RGBA4 | 80649856 | 76.913696 |
| 99 Texture2D Unity, ETC1A4 | 40324928 | 38.456848 |
| 99 Texture2D Unity, ETC1 | 20162464 | 19.228424 |

O PNG avulso do APK é 1024×2048 RGB e tem 34.074 bytes de arquivo; em RGBA8 dividido em duas texturas 1024×1024 exigiria mais 8.388.608 bytes. Seu uso pelo port não foi provado. Não somar indiscriminadamente todas as texturas Unity ou tratar o corpus inteiro como simultaneamente residente. O código do jogo usa a rota PNG própria.

**RGBA4 e ETC1/A4 são apenas cenários de tamanho**, não opções de fidelidade aprovadas. ETC1 não preserva alpha, e 631 PNGs têm alpha; ETC1A4/RGBA4 também não equivalem automaticamente aos pixels originais. Nenhum formato foi escolhido ou convertido.

| Cenário de planejamento | Bytes antes dos demais custos | MiB |
|---|---:|---:|
| PNGs únicos RGBA8 + todo áudio PCM16 estimado | 63713780 | 60.762196 |
| Mesmo cenário + arquivos TTF residentes | 65684912 | 62.642014 |
| PNGs únicos RGBA8 + exemplo de um stream de áudio | 27800064 | 26.512207 |

Para comparar com a missão, considerar **64 MiB (67.108.864 bytes)** no 3DS antigo e **124 MiB (130.023.424 bytes)** no New 3DS como **orçamentos de planejamento**, não RAM livre medida. O cenário de todos os PNGs/PCM/TTF já ocupa 62.642014 MiB antes do jogo, font atlas e buffers, portanto não demonstra viabilidade no antigo. O cenário com streaming reduz o corpus de áudio residente, mas seu peak depende da implementação e das vozes. O exemplo reserva quatro buffers de 16.384 frames estéreo PCM16: 262.144 bytes por stream; não é uma escolha de implementação.

Também há limites distintos de heap linear e VRAM: libctru documenta 6 MiB de VRAM e alocação linear separada; citro3d pode usar memória linear. Não presumir que tudo cabe na VRAM nem que a soma de RAM física é disponível ao processo. [Fonte primária libctru](https://github.com/devkitPro/libctru/blob/master/libctru/include/3ds/os.h) e [histórico do heap](https://github.com/devkitPro/libctru/blob/master/Changelog.md). Medir osGetMemRegionSize/Used/Free nos dois perfis de execução na etapa apropriada. CPU, frame time e memória de pico continuam UNKNOWN. O 3DS antigo não foi descartado.

## Textos e literais do C#

Textos existem nas tabelas/arquivos dos contêineres, manifestos de idioma e também no fonte de referência. Main.OnCreate/Language.SetSoftLabelTable/SetTextTable instalam tabelas, mas **Language._translateText também usa o conteúdo original como chave**, e KairoText.LT pode devolver esse texto. A hipótese “somente chaves ou índices numéricos” foi refutada.

| Assembly | Literais string | UI estática não vazia | Chaves API diretas | UNKNOWN |
|---|---:|---:|---:|---:|
| Assembly-CSharp | 2231 | 443 | 18 | 1770 |
| KairoLibrary | 3008 | 14 | 151 | 2837 |

São ocorrências, não frases distintas nem prova de exibição em aparelho. A análise estática de UI inclui debug e é limite inferior: arrays/campos mutáveis, retornos indiretos e fluxo arbitrário continuam UNKNOWN. **A lista completa por classe, sem reproduzir os valores, está em [config/visible-text-counts.csv](../config/visible-text-counts.csv)**. [Metodologia e fixtures](csharp-subset.md). Todos os dados/frases-base precisam continuar no pipeline do usuário; resultados transitórios de formatação não são assets a distribuir. Nenhum externalizador ou tradutor foi escrito.

## Reprodução e provas

```powershell
python tools/extract-assets --apk 'CAMINHO_DO_SEU_APK' --extract
python tools/inventory_custom_formats.py --apk 'CAMINHO_DO_SEU_APK'
python tools/progress
```

Dados públicos: config/assets.csv, asset-summary.json, texture-dimensions.csv, custom-asset-formats.json, assetripper-summary.json e unity-metadata-audit.json. Arquivos/identificadores/payloads e chave não são publicados. Cada leitura é conferida contra o APK do usuário; o pipeline não procura nem baixa o jogo.
