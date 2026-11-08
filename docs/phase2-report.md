# 1. PROGRESSO

Checkpoint parcial da Fase 2, iniciado no inventário `33d8447`. **Ainda não houve boot do jogo C++ no PC.** O trabalho não constitui conclusão da Fase 2.

| Inventário | Total | Antes | Agora |
|---|---:|---:|---:|
| Métodos raiz portáveis KairoLibrary | 172 | 0 compilados/exercitados | 47 compilados/exercitados (27,325581%) |
| Dependências adicionais desses métodos | Fora das 172 raízes | 0 | 3 compiladas/exercitadas |
| Assembly-CSharp, métodos do inventário IL | 1.958 | 0 traduzidos/compilados/executados | 0 traduzidos/compilados/executados |
| Fronteira, símbolos verificados | 775 | 0 | 47 |
| SyntaxKinds observados em corpos realmente emitidos | 123 | 0 | 42 |

São **50 métodos reais gerados, compilados e exercitados em 350 casos diferenciais aprovados**: 47 raízes e três dependências. Os 254 símbolos portáveis incluem 172 métodos, 42 tipos, 39 campos e uma propriedade. Observar 42 SyntaxKinds não comprova suporte completo a cada um; 81 continuam sem essa observação.

| Categoria da fronteira | Símbolos | verified | todo |
|---|---:|---:|---:|
| Portável | 254 | 47 | 207 |
| Reimplementar | 452 | 0 | 452 |
| Remover | 69 | 0 | 69 |
| Total | 775 | 47 | 728 |

Não há stubs promovidos. Os 53 contratos de serviços testados separadamente não foram promovidos porque sua integração ao jogo continua pendente. Os 44 grupos de assets ficam em: 35 `inventoried`, sete `extracts`, um `converts`, um `loads`. Não houve retirada de um estado anteriormente comprovado; a baseline não tinha implementação do port.

# 2. O QUE FOI FEITO NESTA RODADA

- Contrato semântico: UTF-16, wrap definido, avaliação ordenada, exceções, propriedades, eventos, closures, arrays e controle; **582/582 casos próprios** contra .NET10 e Mono histórico. Não são 582 métodos traduzidos.
- Stream/MemoryStream nativos: **174/174 casos diferenciais próprios**, sem filesystem; 18 observações distintas entre oráculos preservadas por perfil.
- Emissor Roslyn: 50 métodos reais compilados; **350/350 diferenciais** contra C# recompilado do mesmo fonte, com retorno, exceções, arrays, campos e estado estático comparados.
- Emissor sobre fixtures sintéticas: 15 métodos gerados, **105/105 casos**, incluindo ordem de argumentos/stores, wrap/divisão/resto, switch, goto, UTF-16, catch, finally simples e List. Closure permanece um controle negativo recusado.
- Assembly-CSharp: 1.835 declarações fonte vinculadas sem erro; 104 corpos tiveram lowering diagnóstico em memória e 1.731 foram recusados. **Zero C++ de jogo emitido**; a contagem de declarações não equivale aos 1.958 métodos IL.
- Serviços: política por 53 símbolos, todos vinculados; **49 assertions nativas**, inclusive dois reinícios reais de processo, identidade persistente, save sintético intacto e ausência de concessão paga. Nenhum teste foi contado como execução do jogo.
- SDL2: SDK de desenvolvimento 2.32.10 preparado localmente; primitivas de desenho, texturas, clipping, eventos e caminho de preferências compilados e testados. Ainda não são a API Kairo completa.
- Assets locais: 654 PNGs únicos convertidos em RGBA8 sem perda, duas fontes extraídas e 27 áudios reconstruídos como Ogg Vorbis comprimido. Readback SDL conferiu todos os pixels dos 654 arquivos.
- Pendências do inventário: quatro MAP e três CSV analisados sem publicar conteúdo; PROGRESS e CSVs atualizados por scripts com validação de hashes.
- Reprodutibilidade: produtores corrigidos para LF, com recibos regenerados; referências e binários originais permanecem externos. `tools/verify_phase2.py` reproduz a sequência completa sem instalar dependências nem executar o jogo.

**Verificação final: 18/18 etapas PASS**, incluindo 32 testes de repositório, quatro do inventário sintático e todas as suítes acima. `tools/progress` foi repetido e gerou saídas byte a byte idênticas. Um SHA falso injetado somente em memória foi recusado antes de escrever qualquer estado. A prova completa está em `config/phase2-verification.json`.

# 3. HIPÓTESES

| Estado | Hipótese e evidência |
|---|---|
| CONFIRMADA | .NET10 não é oráculo único para a biblioteca histórica: 62 observações nas fixtures semânticas e 18 em streams diferem do Mono Unity Windows; o runtime seleciona o perfil correspondente. |
| INCONCLUSIVA | Esses casos históricos são idênticos no Mono Android: ainda não foram medidos no aparelho. Não houve comparação funcional Android nesta rodada. |
| REFUTADA | Array C# vazio equivale a referência null: testes iniciais detectaram a tradução incorreta; o emissor passou a produzir `Array::from({})` e a suíte final passou. Foram 14 falhas em 175 casos no estágio inicial, antes da correção. |
| REFUTADA | Sete IDs dos serviços estavam incorretos: faltava importar metadados privados/internos; `MetadataImportOptions.All` passou a vincular 53/53. |
| REFUTADA | O identificador local deve preencher UID de conta: `KairoService.Run` usa `CheckUserId` para abrir FriendForm. A proposta foi retirada antes da integração; conta vazia/prévia permanece intacta. |
| CONFIRMADA | Os três CSV são pacotes de idioma: `Language.Init/SetLanguagePack/LoadLanguagePack` consomem o formato; todos cobrem os 2.270 IDs do template. |
| CONFIRMADA | Os quatro MAP contêm os dados correspondentes aos GMAP de runtime: projeções completas coincidiram nos quatro arquivos; três correspondem a `game.Map.LoadMap`, um a `game.MapMain.LoadMap`. A ferramenta autoral continua UNKNOWN. |
| REFUTADA | FFprobe instalado consegue inspecionar diretamente o FSB original: recusou o formato como não implementado. AssetRipper/Fmod5Sharp reconstruiu 27 Ogg válidos sem produzir PCM completo. |

O teste de `FormatString` inicialmente recebeu um comprimento sintético impraticável; apenas o processo próprio do oráculo foi encerrado, o domínio de entrada foi limitado e a execução final completou os 350 casos. Um grupo Base64 histórico pode causar corrupção nativa em entradas inválidas: o port conserva os resultados medidos sem reproduzir essa corrupção. Não foi demonstrado um caminho do jogo que forneça essas entradas; o limite está documentado.

# 4. PENDENTES POR GRUPO

Restam **125/172 raízes portáveis**. A lista por ID e diagnóstico está em `config/phase2-translation.json`. Grupos de trabalho: classes genéricas (`Vector<T>`, `FastVector<T>`), herança/dispatch virtual, integração dos streams nativos, SecureInt/SecureLong/SecureString, Dictionary, DateTime/Random, StringBuilder e métodos dependentes. Os 127 diagnósticos do grafo incluem duas dependências além das 125 raízes, portanto não devem ser somados à contagem de raízes.

No jogo, as recusas diagnósticas mais frequentes foram: layout de BootForm (396), dispatch virtual (230), inicializador numérico bloqueado para classificação de conteúdo (101), Vector (83), SecureString (59), Graphics (53) e herança de SoccerForm (46). São motivos do primeiro bloqueio encontrado, não prova de que uma única alteração resolverá cada corpo. Os demais motivos e os 104 candidatos estão em `config/phase2-game-diagnostics.json`.

Ainda faltam lowering de classes genéricas/herança/closures/propriedades/eventos completo, coleta de ciclos, parte de finally/saltos protegidos e cobertura semântica dos 123 SyntaxKinds; API Kairo de desenho/imagens ligada ao jogo; fontes, streaming de áudio, PlayerPrefs/saves compatíveis, entrada e formulários/UI. `Language._translateText` não foi alterado, mas ainda não foi integrado ao C++ executável.

Os 101 inicializadores numéricos do jogo foram recusados conservadoramente. Precisam ser classificados como constantes de algoritmo ou dados/chaves; os últimos devem vir do pipeline local. Nenhuma chave ou tabela de asset foi publicada.

# 5. TOOLCHAIN

Roslyn **5.8.0-1.26319.2**, runtime privado .NET **10.0.10**, MSVC **19.51.36252.0**, CMake **4.3.1-msvc1**, Windows SDK **10.0.26100.0**, C++17 e `/fp:strict`. Sondas históricas usam o smcs/Mono já instalado com Unity **5.3.4f1 / Mono 2.6.5**, apenas como ferramenta externa para fontes próprios de teste. O port nativo não incorpora esse runtime.

SDL2 desenvolvimento **2.32.10**, em `build/deps/`, sem instalação global. ZIP oficial SHA-256 `af347939395a58b365846aaea27391e69f9ec9d4dd650d6ac40802159b418a6e`. AssetRipper portátil autorizado **2.0.0** e FFmpeg/FFprobe já instalado **7.1.1**. Os hashes e comandos estão em `docs/toolchain.md` e nos recibos.

**FreeType, libogg e libvorbis de desenvolvimento não foram preparados.** A solicitação de autorização específica está pendente. devkitPro/devkitARM/libctru/citro2d/citro3d/tex3ds e Azahar permanecem para a Fase 4; nenhuma instalação foi tentada.

# 6. COMPONENTES EXTERNOS E METADADOS

Referência imutável: `v1.0.0-csharp-reconstruction`, commit `c7d097a847ca1f1a8e5fb7141ff11d338f5915c4`, limpa. APK próprio **2.0.2**, SHA-256 `d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8`, verificado antes/depois. As DLLs de API originais são lidas somente fora do port pelo front-end; não são copiadas, ligadas nem executadas pelo programa nativo. As 18 referências Unity diretas continuam inventariadas, com integração ainda pendente. Não há requisito de correspondência binária entre C# e C++.

| Conteúdo local | Estado e medida |
|---|---|
| 718 ocorrências PNG / 654 hashes distintos | 654 RGBA8, **16.933.248 bytes** de pixels; todos conferidos por readback SDL |
| Duas fontes TTF | **1.971.132 bytes** extraídos; nenhuma rasterização/atlas medido |
| 27 Vorbis | Ogg comprimido; sem decodificação integral em PCM e sem reprodução de runtime |
| Quatro MAP | **119.652 bytes**, versão 102 little-endian, extents/projeções conferidos |
| Três CSV | **316.974 bytes**; cada um tem 2.514 linhas: seis cabeçalhos, 2.271 registros e 237 continuações |

O teste de imagens cria/libera uma textura de cada vez: pico de payload **1.179.648 bytes**. Isso **não é RSS nem memória residente do jogo**. O corpus RGBA8 com padding PICA200 permanece estimado em **27.537.920 bytes**, sem custos de atlas, buffers, código/heap ou demais assets. A estimativa de PCM integral da Fase 1 (**36.175.860 bytes**) não é uma alocação feita pelo port e não será sua política de áudio.

**Primeiro boot: NOT_RUN. Título: NOT_RUN. Menu: NOT_RUN. Partida: NOT_RUN. RSS de texturas/áudio/código/heap e frame time: UNKNOWN.** Não foram criadas telas substitutas para simular progresso. Não há discrepância visual/funcional comparada ao Android medida nesta rodada.

Licenciamento: duas rotas estáticas auditadas (`HttpObject._connect → LicenseCheck`, e fachada `LicenseChecker.DoCheck` sem chamador encontrado). Notificações: a tabela em `docs/design/services.md` discrimina dez entradas/folhas transitivas e seus tratamentos, incluindo lifecycle, NotifyManager, KairoBase, MyNotify e KairoPlugin. Todos os hooks permanecem sem integração ao jogo gerado. DEX/Java, branding, assets e binários originais continuam fora do repositório.

# 7. BLOQUEIOS

**Motivo da parada: autorização necessária para a próxima dependência de fontes/áudio.** A proposta concreta é preparar FreeType, libogg e libvorbis oficiais localmente sob `build/deps/`, sem instalação global, para rasterizar o TTF do próprio APK e decodificar Vorbis em buffers limitados durante a reprodução. Nada dessas dependências foi instalado.

A exigência vem de `AGENTS.md`, regra 9.5 (“Pare e pergunte [...] para instalar ferramentas no sistema”), e da instrução desta rodada, “Pare e pergunte para instalar qualquer coisa além do SDL2 SDK”. A preparação além do SDL2 foi submetida ao usuário e ainda aguarda resposta.

Essa autorização não resolve os pendentes do tradutor: o jogo ainda depende de implementação de layouts, dispatch, genéricos, APIs e integração. Não há falta do APK, bloqueio do compilador ou necessidade de decidir telas para esse trabalho. O checkpoint é parcial e não declara a Fase 2 concluída.

# 8. SUA RECOMENDAÇÃO

1. Decidir a preparação local de FreeType/libogg/libvorbis; após autorização, testar rasterização do TTF e reprodução Vorbis com buffers limitados, antes de avançar para armazenamento/UI.
2. Fechar genéricos/herança/dispatch e ligar a fundação de streams ao emissor, repetindo os diferenciais reais; os 125 métodos raiz pendentes são a fila medida, sem promessa de fechamento em bloco.
3. Integrar APIs de plataforma, assets por identificador e os 53 hooks ao jogo gerado. Só então medir o título/menu e uma partida, com RSS por categoria, frame time e comparação Android. Não alterar a lógica para esconder uma divergência.
