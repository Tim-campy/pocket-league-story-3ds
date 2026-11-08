# Progresso do port Nintendo 3DS

Gerado por python tools/progress a partir dos inventários. Não editar estados à mão.

Referência: v1.0.0-csharp-reconstruction, c7d097a847ca1f1a8e5fb7141ff11d338f5915c4, somente leitura. Os 5.245 métodos reconstruídos na fase anterior não são progresso de tradução para C++.

## Inventários

| Inventário | Total | Estado medido |
|---|---:|---|
| Fronteira KairoLibrary | 775 símbolos / 98 tipos | {'todo': 566, 'verified': 209} |
| Métodos a traduzir | 1958 | {'todo': 1642, 'translated': 316} |
| Grupos de assets | 44 | {'loads': 3, 'inventoried': 35, 'extracts': 6} |

**Fase 2 parcial:** 209 membros reais da fronteira verificados por diferencial de fonte; 223 métodos portáveis gerados/compilados, 140 raízes entre 172 métodos requisitados e 83 dependências. Os 254 símbolos portáveis incluem campos/tipos/outros membros e não são 254 métodos. **Assembly-CSharp: 316/1958 identidades originais com C++ compilado; 0 executadas/verificadas em jogo.**

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

- Portáveis: 254 símbolos requisitados correspondem a 172 raízes de método. 140 raízes + 83 dependências emitidas/compiladas; 223 métodos exercitados em 1561 casos diferenciais de fonte, todos aprovados.
- Fronteira: 209/775 símbolos verificados: 140 portáveis e 69 de plataforma com oráculo próprio. Não contar dependências fora da fronteira como novas raízes nem promover os 254 em bloco. Backend CTR ainda não compilado.
- Assembly-CSharp: 316 corpos emitidos, 316 compilados em objeto C++; 316/1958 (16.14%) associados unicamente à assinatura IL original. 0 DocIDs sem vínculo único ficam UNKNOWN. O diagnóstico do fonte registrou 1835 identidades declaradas; o pedido atual inclui 1845 identidades, inclusive expansões/símbolos sintetizados do emissor. Nenhuma dessas contagens substitui o denominador IL de 1958.
- Sintaxe: 53/123 SyntaxKinds observados em corpos emitidos; observação não comprova cobertura semântica integral de cada construção.
- Serviços: 53 contratos explícitos e 49 assertions nativas; hooks não integrados, nenhum símbolo da fronteira promovido por essas fixtures.
- Assets: 654 RGBA8 únicos (16933248 bytes) com readback integral; 2 TTF e 27 Ogg exercitados pelos consumidores nativos de rasterização/streaming; nenhuma API do jogo promovida apenas por isso.
- Backend SDL e fixtures C++/C# foram executados. Título, menu, partida, frame time e memória residente por categoria do jogo permanecem UNKNOWN; não houve primeiro boot do jogo.
- Próxima integração: ampliar tradução e bindings de plataforma até o título/menu e a partida completa. Nenhuma decisão de telas 3DS foi tomada.

## Limites das contagens e dos bindings

translated significa apenas que o corpo C++ gerado compilou em objeto, com produtor, fontes, headers, compilador e objeto ancorados por hash. Não comprova link completo, bootstrap executado, chamada de todas as APIs ou comportamento em aparelho. runs/verified do jogo permanecem zero até prova de execução apropriada.
O vínculo do jogo usa tipo declarante, nome, todos os tipos de parâmetros e retorno; construtores retornam System.Void. Não há vínculo só por aridade. Correspondências ambíguas, assinaturas abertas e DocIDs sem identidade IL única ficam registrados como UNKNOWN no recibo. Métodos gerados/auxiliares do IL não são contados como traduzidos por haver uma declaração fonte relacionada.
Provas de framework/SDL, fontes e áudio não equivalem a bindings do jogo. Somente IDs explícitos exercitados por um oráculo de API promovem a fronteira. Alterações transitórias em produtores/headers/gerados suspendem a publicação inteira; preserva-se o último conjunto consistente de documentos/CSVs até os recibos serem regenerados.

Recibos e hashes conferidos pelo gerador: [resumo](config/phase2-progress.json), [portáveis](config/phase2-translation.json), [diferencial](config/phase2-portable-differential.json), [imagens](config/phase2-image-tests.json).
