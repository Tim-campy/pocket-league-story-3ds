# Catálogo privado e inicializadores numéricos

O catálogo liga os consumidores nativos aos recursos do APK autenticado. Não contém um caminho para baixar o jogo. Nenhum arquivo de recurso, chave, texto extraído ou valor de tabela é publicado.

`tools/build_asset_catalog.py` lê a tabela de externos do formato serializado Unity v15 e o prefixo `m_Container` do ResourceManager original. Resolve **1.212 referências** aos arquivos/objetos já inventariados, preservando subassets e tipos com nomes repetidos. Os **1.748 bytes restantes** desse objeto não são interpretados nem usados. O parser não presume que esse prefixo descreva o restante do objeto.

O catálogo local tem **3.027 registros**: 21 recursos TextAsset decodificados, 21 visões dos mesmos recursos com bytes brutos originais, 1.337 membros dos containers, 654 imagens únicas, uma fonte com identidade de recurso, 27 áudios, uma fonte embutida sem alias de recurso inventado e 965 inicializadores numéricos. São identidades de carga, não 3.027 assets originais distintos. `assets/converted/catalog.idx` e seu manifest ficam ignorados pelo Git. O recibo público registra apenas contagens, hashes de proveniência e limites.

O tipo `raw_resource=8` conserva o payload TextAsset antes de XOR; `resource=1`
continua sendo a visão decodificada usada pelo armazenamento. O carregador
AssetReader traduzido executa seu próprio Decode e precisa da primeira visão.
O teste nativo verificou todos os 3.027 registros: 21 pares raw/decoded, com
15 pares diferentes por hash, e 718 vínculos PNG. Não decodificar duas vezes.

`Catalog` valida versão/hash do APK, extents, paths restritos ao diretório de assets e SHA-256 de cada payload lido. A verificação de arquivo usa blocos limitados. O teste nativo confere todos os registros e os 718 vínculos de ocorrências PNG; não usa imagens de fixture como substitutas das do usuário.

## Dados que aparecem em inicializadores C#

O inventário conservador `tools/inventory_baked_arrays.py` vincula arrays primitivos constantes do fonte reconstruído ao IL original, lido diretamente do ZIP em memória. O assembly não é carregado, executado ou extraído no port. A identidade de um inicializador combina assembly, caminho e posição sintática no fonte imutável; seus valores não entram no identificador publicado.

Foram comprovados **965 inicializadores**: 210 por conteúdo FieldRVA e 755 por instruções do inicializador, incluindo uma referência a campo cujo payload é maior que o array usado. A inspeção encontrou 217 campos RVA e 1.297 vetores literais no IL; essas contagens não devem ser somadas aos 965. Os controles sintéticos exercitam reconhecimento e recusa; assinaturas/valores não comprovados permanecem sem aceitação.

O índice público `config/baked-array-index.json` registra forma, tipo, contagem e proveniência. Os valores e hashes individuais dos payloads ficam no manifest privado sob `assets/baked/`. O digest do manifest privado ancora esse conjunto sem publicar chave ou tabela. Alterações, duplicatas e diferenças de extent são recusadas. `baked_array<T>` verifica o tipo e tamanho e produz um array novo por chamada, preservando a independência dos inicializadores C#.

Para esses arrays constantes, o tradutor emite somente identificadores
aprovados. Não usa esse mecanismo em inicialização global C++ antes de o
catálogo ser instalado. O guard de tipo passa a executar os inicializadores
na ordem do fonte ao primeiro acesso, com prova própria de reentrada e falha
cacheada em `phase2-managed-foundation.md`. Formas ainda não suportadas são
recusadas junto com os dependentes, sem substituir o array por um valor vazio.

Arrays construídos em runtime a partir de parâmetros, campos ou resultados de
chamadas são comandos da lógica traduzida, não uma tabela constante de asset.
Seus elementos seguem a ordem de avaliação C# e mantêm as constantes sintáticas
do comando. Essa distinção não permite pré-calcular dados dos assets e embuti-los
em C++, nem contorna a exigência de prova dos 965 inicializadores constantes.

## Reprodução

Depois de extração, AssetRipper, conversão e inventário privado já preparados:

```powershell
python tools/inventory_baked_arrays.py --apk 'CAMINHO_DO_SEU_APK' --original-managed 'DIRETORIO_EXTERNO_DAS_APIS_DO_APK'
python tools/build_asset_catalog.py --apk 'CAMINHO_DO_SEU_APK'
```

Os binários de referência permanecem externos. O diretório `reference/` conserva o commit e os bytes LF originais; os offsets sintáticos são derivados desses arquivos, nunca de uma cópia reformatada.
