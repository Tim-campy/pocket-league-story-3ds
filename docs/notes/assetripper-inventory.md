# AssetRipper — inventário local e comparação independente

**Resultado: COMPLETE.** Foi executado o AssetRipper portátil oficial **2.0.0**, identificado pelo executável como `AssetRipper.GUI.Web 2.0.0+1ac666f47d8e9dedf96afb0b914c70d7656151ea`. O usuário autorizou sua aquisição/execução. Nenhuma dependência adicional foi instalada. O jogo e seus assemblies não foram executados nem decompilados.

| Identidade | Medida |
|---|---|
| Pacote portátil | 44.439.367 bytes |
| SHA-256 do pacote | `9a7ef0e7c5c3ea5b90b4e6d855e2d98d5f7ec8c3f9e26fccbc194c6a7b01baf7` |
| SHA-256 do executável | `58bb4c6a78507d77ea115db236ae7286b097979fba7f77aa247c16a471499fff` |
| SHA-256 do APK antes e depois | `d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8` |
| Entradas serializadas lidas | 1160 |
| Sidecars `.resource` lidos | 27 |
| Bytes locais de entrada | 117826821 |
| Bundles visitados | 2 |
| Coleções após processamento | 1166 |
| Objetos originais reconciliados | 1489 |
| Objetos depois do processamento | 1551 |
| Objetos auxiliares gerados | 62 |
| Objetos originais ausentes | 0 |
| Arquivos com falha na árvore AssetRipper | 0 |

O conteúdo fornecido ao programa foi exclusivamente a cópia local, somente leitura, das entradas serializadas reconhecidas pelo leitor limitado e seus sidecars. A extração fica em `assets/raw-unity/`, ignorada pelo Git. Diretórios Managed e arquivos DLL, SO, DEX, APK, MDB/PDB e executáveis são recusados. Nenhum binário do jogo ou do Unity foi copiado para o port/build.

O servidor foi iniciado sem janela e sem navegador, restrito a `127.0.0.1`, com temporários e extração do bundle .NET em `build/`. O caminho da imagem do processo foi validado pelo handle Windows antes da consulta e do encerramento. O processo foi encerrado ao fim; não ficou um servidor aberto. O ambiente filho recebeu proxy HTTP externo indisponível; as requisições do inventariante usaram somente a API local. Nenhuma rota de exportação, mídia, texto, JSON/YAML de objeto ou download de arquivo foi chamada. O resultado não é um projeto Unity exportado nem um conjunto de assets convertido.

## Contagens originais confirmadas

| Tipo | Objetos originais |
|---|---:|
| Shader | 1078 |
| MonoScript | 156 |
| Texture2D | 99 |
| Sprite | 56 |
| AudioClip | 27 |
| TextAsset | 21 |
| Mesh | 13 |
| Material | 4 |
| Font | 2 |
| GameObject | 2 |
| Transform | 2 |
| Camera | 2 |
| MonoBehaviour | 2 |
| PreloadData | 2 |
| RenderSettings | 1 |
| LightmapSettings | 1 |
| Outros tipos Unity de configuração/cena | 21 |
| **Total** | **1489** |

Os **62 auxiliares de processamento** são 56 `SpriteInformationObject`, um `LightingDataAsset`, um `EditorBuildSettings`, um `EditorSettings`, um `Prefab`, um `PrefabHierarchyObject` e um `SceneHierarchyObject`. Não são assets adicionais encontrados no APK e não entram na estimativa de payload/memória original. As seis coleções que os contêm são geradas pelo processamento; não equivalem a seis arquivos originais adicionais. A árvore de importação informa backend de scripting `Unknown`, esperado nesta consulta porque Managed foi deliberadamente excluído; isso não invalida a identificação Mono comprovada na reconstrução anterior.

## Comparação de metadados e tentativas

O cruzamento usa a coleção de origem e PathID. Rótulos conhecidos dos dois leitores precisam coincidir. O leitor limitado inicialmente usava `ClassID_N` para **21 objetos** de configuração/cena; o AssetRipper forneceu nomes descritivos para esses IDs. Esses rótulos foram reconciliados sem inventar objetos nem mudar as tabelas originais. Os nomes de classes são identificadores técnicos de formato; nomes de recursos e conteúdo não aparecem no relatório público.

As páginas de informação dos **99 Texture2D** confirmaram largura, altura e formato do leitor independente. As páginas dos **27 AudioClip** confirmaram canais, frequência e duração, com tolerância numérica de `max(1e-6 segundo, duração × 1e-6)` para a formatação decimal do float original. **126/126 correspondem; zero divergências.** Este teste confirma metadados; não decodifica pixels nem demonstra reprodução do áudio.

A primeira tentativa de cruzamento por nome literal sinalizou 21 ausências falsas devido aos rótulos `ClassID_N`. Uma tentativa adicional de renderizar detalhes dos tipos de configuração confirmou nove IDs, mas uma página atingiu timeout de **180 segundos**; o processo foi encerrado pelo handle validado. Não se repetiu essa consulta: a passagem final usa a identidade coleção/PathID e os rótulos conhecidos, sem renderizar detalhes de Settings. Importação e listagens de coleção já funcionavam. A passagem final terminou em **30,688 segundos** depois de carregar, com zero arquivos falhos e os 1489 objetos reconciliados.

O log final tem **1213 linhas**, stderr com **zero bytes**, **zero linhas Error/Warning** e **zero linhas com Exception**. Não se publicam mensagens ou nomes de recursos dos logs. A ausência de ocorrências limita-se ao log capturado, não é teste de execução do jogo.

## API e reprodução

Os contratos foram lidos no fonte oficial da tag 2.0.0: [Commands.cs](https://github.com/AssetRipper/AssetRipper/blob/2.0.0/Source/AssetRipper.GUI.Web/Pages/Commands.cs), [CollectionAPI.cs](https://github.com/AssetRipper/AssetRipper/blob/2.0.0/Source/AssetRipper.GUI.Web/Pages/Collections/CollectionAPI.cs), [AssetAPI.cs](https://github.com/AssetRipper/AssetRipper/blob/2.0.0/Source/AssetRipper.GUI.Web/Pages/Assets/AssetAPI.cs), [GameFileLoader.cs](https://github.com/AssetRipper/AssetRipper/blob/2.0.0/Source/AssetRipper.GUI.Web/GameFileLoader.cs) e [InformationTab.cs](https://github.com/AssetRipper/AssetRipper/blob/2.0.0/Source/AssetRipper.GUI.Web/Pages/Assets/InformationTab.cs).

O inventariante envia `POST /LoadFolder` com campo de formulário `Path`. Percorre `/Bundles/View` e `/Collections/View`; consulta `/Collections/Count`, que devolve um inteiro JSON. Os parâmetros de caminho usam os identificadores estruturados do AssetRipper: bundle `P`, coleção `B/I`, asset `C/D`. As linhas HTML identificadas por `data-class` são os objetos; linhas de dependências não contam. O HTML já contém todas as linhas, apesar da paginação visual por JavaScript. `/Assets/View` é usado apenas para informação de textura/áudio; as URLs de prévia que o HTML contém nunca são seguidas.

Com a mesma ferramenta portátil já autorizada e disponível localmente, execute na raiz do port:

```powershell
python tools/assetripper_inventory.py --apk <APK-local-do-usuario>
```

O comando exige hash idêntico. Outra versão requer confirmação do usuário antes de alterar a receita; não existe download ou busca de APK. Para apenas revalidar evidências locais completas, sem reabrir o servidor:

```powershell
python tools/assetripper_inventory.py --apk <APK-local-do-usuario> --summarize-existing
```

Resumo sanitizado e hashes das evidências privadas: [config/assetripper-summary.json](../../config/assetripper-summary.json). HTML, nomes de recursos, comparações por objeto e logs ficam em `assets/inventory/assetripper/` e `build/assetripper-run/`, ambos ignorados. Os dois testes de `tests/repository/test_assetripper_inventory.py` usam somente HTML sintético e passaram. O inventário não é conversão, carregamento no 3DS ou validação funcional.
