# Progresso do port Nintendo 3DS

Gerado por python tools/progress a partir dos inventários. Não editar estados à mão.

Referência: v1.0.0-csharp-reconstruction, c7d097a847ca1f1a8e5fb7141ff11d338f5915c4, somente leitura. Os 5.245 métodos reconstruídos na fase anterior não são progresso de tradução para C++.

## Critérios do congelamento

**Antes do congelamento: fidelidade.** C++ do jogo gerado; nenhuma melhoria de jogo autorizada nesta metade.
Nenhum critério cumprido é inferido de um teste parcial. A tag `v1.0.0-faithful` exige aprovação explícita do usuário.

| Critério | Estado | Evidência / pendência |
|---|---|---|
| Tradução completa | em andamento | 1768/1958 métodos compilados (+62 membros gerados pelo compilador dentro de unidades emitidas, 2 abstratos sem corpo); 22 slots virtuais pendentes; integração das 53 políticas ainda não comprovada. |
| Coletor e desempenho | em andamento | Critério (2026-11-13): New 3DS real, backend nulo, três execuções; nenhum frame >50 ms em jogo estável (coletas por volume incluídas); pausas em trocas de tela principal e carregamentos até 150 ms; partida com média <20 ms. v5 em três execuções: menu com maior coleta 105,6–107,7 ms, classificação por tipo pendente do v6; partida média 8,9–12,6 ms sem coletas. |
| Percurso completo no PC | em andamento | 780 métodos exercitados; temporada, todas as telas e tipos de evento ainda não comprovados. |
| Fidelidade resolvida | em andamento | Ponto flutuante confirmado em emulador ARM; confirmação em aparelho, diferenças ref/out/trigonometria e comparação integral de telas ainda pendentes. |
| Código legível e aprovado | pendente | Emissão por tipo existente; nomes originais e amostra aprovada pelo usuário ainda não comprovados. |

## Tradução

| Inventário | Total | Estado medido |
|---|---:|---|
| Métodos a traduzir | 1958 | {'todo': 126, 'translated': 988, 'embedded': 62, 'runs': 780, 'no-body': 2} |

## Fronteira da KairoLibrary

| Inventário | Total | Estado medido |
|---|---:|---|
| Fronteira KairoLibrary | 775 símbolos / 98 tipos | {'todo': 522, 'verified': 252, 'implemented': 1} |

## Desempenho

Última imagem medida (não implica medição de alterações posteriores): `895dae63092771f746d9400446e6681627cbcf1350a9b06ed3b6e0faa0b4b402`.

| Cenário | Repetições / frames | CPU média da thread, ms | Tempo monotônico médio, ms | Coletas na janela |
|---|---:|---:|---:|---:|
| Menu | 3 / 900 | 1.684027778 | 2.663107222 | 0 |
| Partida | 3 / 900 | 1.631944444 | 2.335065556 | 0 |

GetThreadTimes/QueryThreadCycleTime, sem elevação, três repetições ociosas. A granularidade do relógio de CPU limita p95/máximo por frame; ciclos brutos e tempos monotônicos estão no recibo. A baseline 7,15/9,04 ms usou ETW. Zero coletas na janela não prova a meta de pausa nos carregamentos. [Detalhes e resultados negativos](docs/notes/runtime-cost-round.md).

A conversão para rastreamento está integrada e em validação. Pico comparativo de texturas da revisão atual: **UNKNOWN**. Kernels isolados não qualificam o jogo convertido. Consulte [a rodada de medições](docs/notes/tracing-gc-measurement-round.md), [a matriz de ablação](docs/notes/tracing-gc-ablation.md) e [as fixtures ARM](docs/notes/tracing-gc-arm-stacks.md). Orçamento: 50 ms por frame no New 3DS real; resultado em hardware: **UNKNOWN**.

## Assets

| Inventário | Total | Estado medido |
|---|---:|---|
| Grupos de assets | 44 | {'loads': 3, 'inventoried': 35, 'extracts': 6} |

**Fase 2 parcial:** 252 membros reais da fronteira verificados por diferencial de fonte; 374 métodos portáveis gerados/compilados, 172 raízes entre 172 métodos requisitados e 202 dependências. Os 254 símbolos portáveis incluem campos/tipos/outros membros e não são 254 métodos. **Assembly-CSharp: 1768/1958 identidades originais com C++ compilado; 780 com retorno normal registrado em jogo; 0 verificadas.**

## Preparação e medições da Fase 1 preservadas

- Repositório separado e submódulo fixado; política de conteúdo no CI (formatos proibidos e limite 2.000.000 bytes).
- Fronteira: 254 portáveis, 452 a reimplementar, 69 a remover; 18 símbolos Unity diretos com proposta.
- C#: 97 fontes, 448.825 nós AST, 123 SyntaxKinds, sem erros semânticos.
- Assets: 1160 serializados / 1489 objetos; 16 containers / 1.337 membros; 718 PNGs (654 SHA distintos); 27 Vorbis e 2 TrueType.
- AssetRipper e leitor independente reconciliados; 62 auxiliares gerados pela ferramenta não contam como assets originais.
- A Fase 1 executou inventários próprios e AssetRipper headless; seu marco inicial não incluía jogo, tradutor ou backend.

## Pendências atuais da Fase 2

- Contratos offline escritos e testados nativamente; integração completa dos hooks no jogo gerado permanece PENDING. Nenhum UID de conta é fabricado.
- MAP: quatro projeções runtime GMAP comprovadas; ferramenta autoral UNKNOWN. Três CSV vinculados a Language; dados preservados localmente.
- Classificação estática dos literais da Fase 1 preservada; a decisão posterior do usuário permite literais do C# em C++ gerado. Assets/textos extraídos continuam locais.
- Memória e frame time do menu PC têm medição parcial em Release; cobertura completa e medições 3DS continuam pendentes. O 3DS antigo não foi descartado.
- SDL2 SDK preparado. Toolchain ARM11 e Azahar inventariados em config/phase2-arm11-tools.json para o benchmark autorizado; isso não comprova desempenho no hardware nem implementação do backend gráfico 3DS.

Documentos: [fronteira](docs/boundary.md), [C#](docs/csharp-subset.md), [assets](docs/assets.md), [toolchain](docs/toolchain.md), [serviços offline](docs/notes/offline-behavior.md).

## Evidência atual da Fase 2

- Portáveis: 254 símbolos requisitados correspondem a 172 raízes de método. 172 raízes + 202 dependências emitidas/compiladas; 374 métodos exercitados e 373 verificados. 2617/2618 observações diferenciais aprovadas; 1 diferenças de plataforma explicitamente retidas, sem promoção a verified.
- Fronteira: 252/775 símbolos verificados: 171 portáveis e 81 de plataforma com oráculo próprio. Não contar dependências fora da fronteira como novas raízes nem promover os 254 em bloco. Backend grafico CTR ainda nao implementado; o benchmark ARM11 usa backend nulo.
- Assembly-CSharp: 1768 corpos emitidos, 1768 compilados em objeto C++; 1768/1958 (90.30%) associados unicamente à assinatura IL original. 0 DocIDs sem vínculo único ficam UNKNOWN. O diagnóstico do fonte registrou 4841 identidades declaradas; o pedido atual inclui 1900 identidades, inclusive expansões/símbolos sintetizados do emissor. Nenhuma dessas contagens substitui o denominador IL de 1958.
- Sintaxe: 69/123 SyntaxKinds na união dos corpos emitidos (63 Kairo, 69 Game); observação não comprova cobertura semântica integral de cada construção.
- Serviços: 54 contratos explícitos e 49 assertions nativas; essas fixtures não qualificam a integração de todos os chamadores nem promovem símbolos da fronteira.
- Assets: 654 RGBA8 únicos (16933248 bytes) com readback integral; 2 TTF e 27 Ogg exercitados pelos consumidores nativos de rasterização/streaming; nenhuma API do jogo promovida apenas por isso.
- Marco de partida completa e retorno ao menu registrado em [recibo](config/phase2-match-complete.json) e [evidencia](docs/notes/phase2-match-complete.md). Cobertura por metodo depende dos recibos autenticados; comparacao Android pendente.
- Próxima integração: completar corpos, slots e serviços restantes; medir o runtime sem rasterização. Nenhuma decisão de telas 3DS foi tomada.

## Limites das contagens e dos bindings

translated significa apenas que o corpo C++ gerado compilou em objeto, com produtor, fontes, headers, compilador e objeto ancorados por hash. Não comprova link completo, bootstrap executado, chamada de todas as APIs ou comportamento em aparelho. runs depende dos recibos de retorno normal; verified exige comparação de comportamento. As contagens atuais estão no inventário acima.
O vínculo do jogo usa tipo declarante, nome, todos os tipos de parâmetros e retorno; construtores retornam System.Void. Não há vínculo só por aridade. Correspondências ambíguas, assinaturas abertas e DocIDs sem identidade IL única ficam registrados como UNKNOWN no recibo. Métodos gerados/auxiliares do IL não são contados como traduzidos por haver uma declaração fonte relacionada.
Provas de framework/SDL, fontes e áudio não equivalem a bindings do jogo. Somente IDs explícitos exercitados por um oráculo de API promovem a fronteira. Alterações transitórias em produtores/headers/gerados suspendem a publicação inteira; preserva-se o último conjunto consistente de documentos/CSVs até os recibos serem regenerados.

Recibos e hashes conferidos pelo gerador: [resumo](config/phase2-progress.json), [portáveis](config/phase2-translation.json), [diferencial](config/phase2-portable-differential.json), [imagens](config/phase2-image-tests.json).

## Contratos culturais e fundação

- Inventário cultural: 104 chamadas em 61 métodos; 24 chamadas ordinais do Mono separadas; 0 atribuições de cultura no fonte. Dados e limites: [medição](docs/culture-usage.md).
- Fundação `type-init-fixtures`: 24/24 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `exception-objects-fixtures`: 74/74 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `runtime-encoding-fixtures`: 134/134 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `regex-fixtures`: 752/752 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `path-fixtures`: 378/378 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `stream-reader-tests`: 508/508 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `mono-collation-tests`: 615648/615648 observações aprovadas, sem promover métodos arbitrários da fronteira.
  Payload de tabelas: 384190 bytes (337358 MIT/X11 + 46832 GNU Library GPLv2); licenças/proveniência separadas em [THIRD_PARTY.md](THIRD_PARTY.md). Footprint no 3DS não medido.
- Fundação `thread-tests`: 71/71 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `globalization-tests`: 39/39 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `bootstrap-tests`: 12/12 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `asset-reader-tests`: 6/6 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `string-ops-tests`: 526290/526290 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `image-lifetime-tests`: 56/56 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `ui-dispatch-gc-tests`: 29/29 observações aprovadas, sem promover métodos arbitrários da fronteira.
- Fundação `stack-fixtures`: 32/32 observações aprovadas, sem promover métodos arbitrários da fronteira.
