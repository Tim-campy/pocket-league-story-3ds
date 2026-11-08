# Progresso do port Nintendo 3DS

Gerado por python tools/progress a partir dos inventários. Não editar estados à mão.

Referência: v1.0.0-csharp-reconstruction, c7d097a847ca1f1a8e5fb7141ff11d338f5915c4, somente leitura. Os 5.245 métodos reconstruídos na fase anterior não são progresso de tradução para C++.

## Inventários

| Inventário | Total | Estado medido |
|---|---:|---|
| Fronteira KairoLibrary | 775 símbolos / 98 tipos | {'todo': 728, 'verified': 47} |
| Métodos a traduzir | 1958 | {'todo': 1958} |
| Grupos de assets | 44 | {'converts': 1, 'inventoried': 35, 'extracts': 7, 'loads': 1} |

**Fase 2 parcial:** 47 membros reais da fronteira verificados por diferencial de fonte; 50 métodos portáveis gerados/compilados, 47 raízes entre 172 métodos requisitados e 3 dependências. Os 254 símbolos portáveis incluem campos/tipos/outros membros e não são 254 métodos. **Assembly-CSharp: 0/1958 traduzidos/compilados/executados.**

## Preparação e medições da Fase 1 preservadas

- Repositório separado e submódulo fixado; política de conteúdo no CI (formatos proibidos e limite 2.000.000 bytes).
- Fronteira: 254 portáveis, 452 a reimplementar, 69 a remover; 18 símbolos Unity diretos com proposta.
- C#: 97 fontes, 448.825 nós AST, 123 SyntaxKinds, sem erros semânticos.
- Assets: 1160 serializados / 1489 objetos; 16 containers / 1.337 membros; 718 PNGs (654 SHA distintos); 27 Vorbis e 2 TrueType.
- AssetRipper e leitor independente reconciliados; 62 auxiliares gerados pela ferramenta não contam como assets originais.
- A Fase 1 executou inventários próprios e AssetRipper headless; seu marco inicial não incluía jogo, tradutor ou backend.

## Pendências atuais da Fase 2

- Contratos offline escritos e testados nativamente; integração dos hooks no jogo gerado permanece PENDING. Nenhum UID de conta é fabricado.
- MAP: quatro projeções runtime GMAP comprovadas; ferramenta autoral UNKNOWN. Três CSV vinculados a Language; dados preservados localmente.
- Classificação estática dos literais da Fase 1 preservada; a decisão posterior do usuário permite literais do C# em C++ gerado. Assets/textos extraídos continuam locais.
- Memória de pico, atlas de fontes e tempo de CPU ainda não medidos; o 3DS antigo não foi descartado.
- SDL2 SDK 2.32.10 preparado com autorização; toolchain 3DS/Azahar continuam ausentes e reservados à Fase 4. Não foram instalados.

Documentos: [fronteira](docs/boundary.md), [C#](docs/csharp-subset.md), [assets](docs/assets.md), [toolchain](docs/toolchain.md), [serviços offline](docs/notes/offline-behavior.md).

## Evidência atual da Fase 2

- Portáveis: 254 símbolos requisitados correspondem a 172 raízes de método. 47 raízes + 3 dependências emitidas/compiladas; 50 métodos exercitados em 350 casos diferenciais de fonte, todos aprovados.
- Fronteira: 47/775 símbolos verificados; não contar dependências fora da fronteira como novas raízes nem promover os 254 em bloco. Backend CTR ainda não compilado.
- Sintaxe: 42/123 SyntaxKinds observados em corpos emitidos; observação não comprova cobertura semântica integral de cada construção.
- Serviços: 53 contratos explícitos e 49 assertions nativas; hooks não integrados, nenhum símbolo da fronteira promovido por essas fixtures.
- Assets: 654 RGBA8 únicos (16933248 bytes) com readback integral; 2 TTF extraídos; 27 Ogg convertidos. Rasterizador e streaming de runtime pendentes.
- Backend SDL e fixtures C++/C# foram executados. Título, menu, partida, frame time e memória residente por categoria do jogo permanecem UNKNOWN; não houve primeiro boot do jogo.
- Próxima integração: ampliar tradução das classes/coleções/streams e sua fronteira, fontes TTF e áudio streaming antes de armazenamento/entrada/UI. Nenhuma decisão de telas 3DS foi tomada.

Recibos e hashes conferidos pelo gerador: [resumo](config/phase2-progress.json), [portáveis](config/phase2-translation.json), [diferencial](config/phase2-portable-differential.json), [imagens](config/phase2-image-tests.json).
