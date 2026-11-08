# Progresso do port Nintendo 3DS

Gerado por python tools/progress a partir dos inventários. Não editar estados à mão.

Referência: v1.0.0-csharp-reconstruction, c7d097a847ca1f1a8e5fb7141ff11d338f5915c4, somente leitura. Os 5.245 métodos reconstruídos na fase anterior não são progresso de tradução para C++.

## Inventários

| Inventário | Total | Estado medido |
|---|---:|---|
| Fronteira KairoLibrary | 775 símbolos / 98 tipos | {'todo': 775} |
| Métodos a traduzir | 1958 | {'todo': 1958} |
| Grupos de assets | 44 | {'inventoried': 44} |

**Implementação do port: zero membros verificados e zero métodos traduzidos.** Esta rodada não contém tradutor, reimplementação, backend ou design.

## Preparação e medições

- Repositório separado e submódulo fixado; política de conteúdo no CI (formatos proibidos e limite 2.000.000 bytes).
- Fronteira: 254 portáveis, 452 a reimplementar, 69 a remover; 18 símbolos Unity diretos com proposta.
- C#: 97 fontes, 448.825 nós AST, 123 SyntaxKinds, sem erros semânticos.
- Assets: 1160 serializados / 1489 objetos; 16 containers / 1.337 membros; 718 PNGs (654 SHA distintos); 27 Vorbis e 2 TrueType.
- AssetRipper e leitor independente reconciliados; 62 auxiliares gerados pela ferramenta não contam como assets originais.
- Nenhum jogo, APK, emulador ou port foi executado; ferramentas de inventário próprias e AssetRipper headless foram executados.

## Pendências antes da implementação

- Política offline para registro, cobrança/saves, ofertas e notificações; não usar sucesso/null universal.
- Consumidores de 4 MAP e 3 CSV ainda UNKNOWN; não apagar assets por suposição.
- Classificação de visibilidade de 1.770 literais App e 2.837 Kairo ainda UNKNOWN; nenhum valor foi publicado.
- Memória de pico, atlas de fontes e tempo de CPU ainda não medidos; o 3DS antigo não foi descartado.
- SDL2 SDK, devkitPro/devkitARM/libctru/citro2d/citro3d/tex3ds e Azahar não encontrados; instalação depende de autorização futura.

Documentos: [fronteira](docs/boundary.md), [C#](docs/csharp-subset.md), [assets](docs/assets.md), [toolchain](docs/toolchain.md), [serviços offline](docs/notes/offline-behavior.md).
