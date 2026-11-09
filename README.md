# Pocket League Story — port para Nintendo 3DS

**Port não oficial, não afiliado à Kairosoft. Requer que o usuário possua o jogo e forneça o próprio APK. Não distribui assets nem binários originais do jogo ou do Unity.**

Alvo principal: **New Nintendo 3DS XL**. O 3DS original é uma meta secundária, sujeita a medições. A Fase 2 implementa o tradutor Roslyn, runtime C++17, contratos offline, conversão local de assets e backend SDL2. **O título e a seleção de saves já foram observados em diagnóstico Release no PC; o port ainda não está jogável e a partida completa permanece pendente.** O [checkpoint do primeiro frame](docs/notes/checkpoint-first-frame.md) e a [evidência da execução](docs/notes/phase2-first-frame.md) separam a observação das contagens compiladas em [PROGRESS.md](PROGRESS.md). Testes de infraestrutura não contam como boot.

## Referência imutável

`reference/` é um submódulo somente leitura de [pocket-league-story-reconstruction](https://github.com/Tim-campy/pocket-league-story-reconstruction), fixado à tag **v1.0.0-csharp-reconstruction**, commit **c7d097a847ca1f1a8e5fb7141ff11d338f5915c4**. Os 5.245 métodos reconstruídos não medem a tradução do port.

```powershell
git clone --recurse-submodules https://github.com/Tim-campy/pocket-league-story-3ds.git
Set-Location pocket-league-story-3ds
git submodule update --init --checkout
python tools/check_reference.py
```

Corrigir o tradutor e regenerar seus arquivos; nunca editar `src/game/` ou os fontes gerados da KairoLibrary à mão. Por decisão explícita do usuário, literais do C# reconstruído podem permanecer no C++ gerado. Textos e demais conteúdos dos assets continuam vindo exclusivamente do pipeline local. A lógica de `Language._translateText` será preservada.

## Inventários e implementação

- [Fronteira](docs/boundary.md): 775 símbolos KairoLibrary — 254 portáveis, 452 a reimplementar, 69 a remover — e 18 símbolos UnityEngine diretos. Os 254 símbolos portáveis incluem tipos/campos/propriedades: não são 254 métodos.
- [Contrato do tradutor](docs/translator.md): UTF-16, overflow definido, avaliação ordenada, exceções, classes, capturas e limites atuais. Os 123 SyntaxKinds medidos não estão todos implementados.
- [Serviços offline](docs/design/services.md): registro local com identificador de aparelho persistente; cobrança indisponível preservando saves, sem concessões; anúncios, licenciamento e notificações removidos. 27 das 53 políticas foram alcançadas na emissão; sua execução no jogo ainda aguarda o boot.
- [Assets](docs/assets.md): inventário, formatos e estimativas; [MAP/CSV](docs/notes/phase2-legacy-assets.md) identificados sem publicar conteúdo.
- [Toolchain e reprodução](docs/toolchain.md). Não há backend 3DS nem decisão sobre telas/controles nesta fase.
- [Consolidação de 1.220 corpos](docs/notes/checkpoint-1220.md): os 110 corpos locais foram verificados e publicados antes da continuação. O [checkpoint de 1.676 corpos](docs/notes/checkpoint-1676.md) e o [diário do boot](docs/notes/phase2-boot-integration-20261109.md) registram os diagnósticos Release, correções e limitações. Compilação e fixtures não equivalem a título/menu executados.

## Pipeline local e testes

A identidade do APK está em [docs/apk.md](docs/apk.md). As ferramentas nunca baixam, procuram ou indicam onde obter o jogo. Forneça a própria cópia:

```powershell
python tools/extract-assets --apk 'CAMINHO_DO_SEU_APK' --extract
python tools/convert-assets --apk 'CAMINHO_DO_SEU_APK'
```

As saídas ficam em `assets/`, ignorado pelo Git: imagens RGBA8 sem perda, TTF do APK e Vorbis comprimido. O áudio não é convertido integralmente para PCM. A conversão usa FFmpeg já presente e AssetRipper portátil autorizado; consulte a toolchain para preparar seus pré-requisitos e o inventário AssetRipper. Não há instalação automática de outras dependências.

O SDK de desenvolvimento SDL2 deve ser preparado com a autorização apropriada. Nesta máquina sua preparação local foi autorizada pelo usuário:

```powershell
python tools/setup_sdl2.py --fetch
python tools/setup_media_deps.py
python tools/setup_mono_collation.py --apk 'CAMINHO_DO_SEU_APK'
python tools/generate_mono_collator.py
python tools/build-pc --fixtures-only
python tools/build-pc --fixtures-only --asset-readback --apk 'CAMINHO_DO_SEU_APK'
```

Esses comandos executam fixtures, não iniciam o jogo. O build normal exige o APK e tenta compilar e ligar o jogo gerado; slots virtuais ainda sem corpo impedem o link. Os quatro callbacks de Main já são traduzidos. As execuções diagnósticas usam cópias privadas com armadilhas fatais identificadas, sem criar stubs de menu ou promover métodos a runs. FreeType e o mixer Vorbis rasterizam as fontes e reproduzem áudio em streaming; o diagnóstico já exibiu o título, com lacunas posteriores ainda explícitas. Testes diferenciais e comandos do tradutor estão descritos na toolchain e no contrato semântico. As DLLs de API originais são lidas externamente apenas pelo front-end; não são copiadas nem vinculadas ao port.

FreeType, libogg e libvorbis foram autorizados e preparados localmente, sem instalação global. O [catálogo privado](docs/notes/phase2-private-catalog.md) associa recursos a identificadores e mantém os inicializadores numéricos classificados fora do C++ público. Armazenamento, entrada, formulários e som têm [provas separadas](docs/notes/phase2-storage-input-ui.md); isso não comprova sua execução dentro do jogo.

A colação histórica utiliza fontes oficiais fixados por hash e tabelas
reduzidas, sem carregar um runtime Unity no port. MIT/X11 e GNU Library GPLv2
ficam separados em [THIRD_PARTY.md](THIRD_PARTY.md). A [medição cultural](docs/culture-usage.md)
registra os métodos/dados atingidos; a cultura CLR é independente do idioma dos
assets. O core `unity` usado pelo oráculo é idêntico por SHA-256 ao mscorlib do
APK; o perfil SDK `2.0` foi descartado. Nenhuma dessas DLLs integra o executável.

## Conteúdo e distribuição

`assets/`, `build/`, `data/`, formatos originais/convertidos e binários são ignorados e recusados pelo CI. Arquivos acima de **2.000.000 bytes** também são recusados, inclusive se adicionados à força. O submódulo é conferido pelo commit fixado.

```powershell
python -m unittest discover -s tests/repository -p 'test_*.py'
python tools/csharp_subset/test_inventory.py
python tools/progress
git add .
python tools/check_repository.py --staged
```

Nenhum asset, logo, captura como fonte de arte, assinatura original ou binário Unity acompanha o repositório. DEX/Java não será portado. Um futuro `.3dsx`/`.cia` distribuído conterá apenas o programa e arte própria de port não oficial; os assets serão gerados pelo usuário para seu SD. Toolchain 3DS, emulador, telas e controles ficam para as fases seguintes.
