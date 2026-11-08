# Pocket League Story — preparação do port para Nintendo 3DS

**Port não oficial, não afiliado à Kairosoft. Requer que o usuário possua o jogo e forneça o próprio APK. Este repositório não distribui assets nem binários originais do jogo ou do Unity.**

Alvo principal: **New Nintendo 3DS XL**. O 3DS original é uma meta secundária, sujeita a medições futuras. O port ainda não é jogável: esta etapa prepara o repositório e inventaria código e assets. Nenhum tradutor, reimplementação, backend, layout de telas ou pacote 3DS foi feito.

## Referência imutável

`reference/` é um submódulo somente leitura de [pocket-league-story-reconstruction](https://github.com/Tim-campy/pocket-league-story-reconstruction), fixado à tag **v1.0.0-csharp-reconstruction**, commit **c7d097a847ca1f1a8e5fb7141ff11d338f5915c4**. Os 5.245 métodos dos dois assemblies foram concluídos na etapa anterior. Esse número não mede progresso de tradução do port.

```powershell
git clone --recurse-submodules https://github.com/Tim-campy/pocket-league-story-3ds.git
Set-Location pocket-league-story-3ds
git submodule update --init --checkout
git -C reference diff --exit-code
```

Não editar nem regenerar os fontes da referência. Corrigir o futuro tradutor e regenerar `src/game/`, nunca editar o C++ gerado à mão. A referência contém o fonte reconstruído histórico; antes de qualquer tradução, os dados e textos incorporados nele deverão ser separados do código para não entrarem no C++ publicado.

## Resultado desta preparação

- [Fronteira](docs/boundary.md): 775 símbolos KairoLibrary — 254 portáveis, 452 a reimplementar e 69 a remover — e 18 símbolos diretos UnityEngine, todos com proposta de tratamento.
- [Subconjunto C#](docs/csharp-subset.md): 97 fontes, 448.825 nós AST e 123 SyntaxKinds; sem erros semânticos. Os 1.958 métodos do jogo estão cadastrados como `todo`, sem C++ gerado.
- [Assets](docs/assets.md): inventário local do APK, objetos Unity, contêineres próprios, imagens, áudio, fontes e estimativas de memória. Nenhum conteúdo está nos CSVs ou relatórios publicados.
- [Comportamento offline](docs/notes/offline-behavior.md): remover serviços exige preservar contratos, máquinas de estado e saves; não basta retornar null.
- [Ferramentas](docs/toolchain.md) e [progresso gerado](PROGRESS.md).

## APK e inventário local

A identidade esperada está em [docs/apk.md](docs/apk.md). As ferramentas nunca baixam, procuram ou indicam onde obter o APK. Após fornecer sua própria cópia:

```powershell
python tools/extract-assets --apk 'CAMINHO_DO_SEU_APK' --extract
python tools/progress
```

O comando confere SHA-256, mede os assets e pode extrair os membros dos contêineres para **assets/**, ignorado pelo Git. Outra versão exige confirmação explícita com seu hash completo. A chave de transformação é obtida em tempo de execução da referência, nunca duplicada no pipeline ou nos relatórios. Os dados publicados são somente contagens, dimensões, formatos e evidências; as saídas completas permanecem locais. Não há conversão de texturas/áudio nesta etapa.

AssetRipper 2.0.0 portátil foi usado localmente, com autorização, para conferir os objetos Unity. A ferramenta fica em `build/`, não acompanha o repositório. O processo e as limitações estão em [sua auditoria](docs/notes/assetripper-inventory.md).

Os inventários semânticos podem ser repetidos pelas ferramentas `tools/inventory_boundary.py` e `tools/csharp_subset/inventory.py`, fornecendo referências de API externas da cópia própria na opção `--original-managed`. Nenhuma DLL é copiada para o port nem vinculada a ele. A localização e o uso de Roslyn sem SDK estão documentados na toolchain.

## Conteúdo e distribuição

`assets/`, `build/`, `data/`, formatos originais/convertidos e binários são ignorados e recusados pelo teste de conteúdo. Arquivos acima de **2.000.000 bytes** também são recusados. O CI confere os blobs Git, incluindo adições forçadas que o `.gitignore` sozinho não impediria.

```powershell
python -m unittest discover -s tests/repository -p 'test_*.py'
python tools/csharp_subset/test_inventory.py
git add .
python tools/check_repository.py --staged
```

Textos, nomes, tabelas, fontes, imagens, áudio, cenas e prefabs do jogo são assets, inclusive quando convertidos ou incorporados em código. Não incluir capturas como fonte de arte, logos ou assinatura originais. DEX/Java não será portado. Um eventual `.3dsx`/`.cia` distribuído deverá conter só o programa, com ícone/banner próprios de port não oficial, e carregar os assets gerados pelo usuário no SD. Nenhum pacote pronto com assets será distribuído.

A Fase 2 depende das decisões registradas no relatório e da preparação das ferramentas faltantes. Telas e controles ficam para a decisão do usuário na Fase 3; esta rodada não os propõe.
