# 1. PROGRESSO

Novo repositório público: https://github.com/Tim-campy/pocket-league-story-3ds. A rodada anterior desta fase não existe; a base do port é zero implementação. O submódulo somente leitura `reference/` aponta para `v1.0.0-csharp-reconstruction`, commit `c7d097a847ca1f1a8e5fb7141ff11d338f5915c4`. Os 5.245 métodos concluídos na reconstrução permanecem referência, não progresso C++.

| Inventário | Resultado desta rodada | Implementação |
|---|---|---|
| Fronteira KairoLibrary | **775 símbolos / 98 tipos**, todos catalogados | 775 `todo`, zero implementados/verificados |
| Tradução Assembly-CSharp | **1.958 métodos** cadastrados; 97 fontes medidos | 1958 `todo`, zero traduzidos |
| Assets | **1.189 arquivos de dados do APK; 1.489 objetos Unity; 1.337 membros internos** | 44 grupos `inventoried`; zero conversões e zero carregamentos no alvo |

Não houve tradutor, reimplementação, backend, design de telas, pacote 3DS, execução do jogo ou teste em emulador. O trabalho encerra no limite de preparação/inventário solicitado, com os UNKNOWN abaixo explicitados. `PROGRESS.md` e os CSVs são gerados por scripts.

# 2. O QUE FOI FEITO NESTA RODADA

- Criado repositório separado, estrutura da seção 6 e submódulo fixado; os fontes locais da referência foram marcados somente leitura e sua árvore Git permaneceu limpa.
- Criados `.gitignore`, limite estrito de 2.000.000 bytes e CI que lê blobs Git; fixtures cobrem adição forçada de DLL e blob grande mesmo após remoção do arquivo de trabalho. Nada do jogo foi usado como fixture.
- Executados Roslyn semântico e AST modernos: zero erros finais e zero pontos de símbolo não resolvidos. A primeira configuração sem `DesktopAssemblyIdentityComparer.Default` falhou por incompatibilidade retargetable; foi corrigida antes de adotar as medições, conforme os documentos dos inventários.
- Registrados os contratos de falha/desligamento de rede, cobrança, anúncios, licenciamento e notificações, sem implementar stubs nem alterar flags.
- Verificado o APK pelo SHA-256 esperado. Obtido AssetRipper portátil oficial 2.0.0 somente após autorização; não foram instalados SDKs, SDL2 ou emulador.
- AssetRipper headless e leitor independente reconciliaram os 1.489 objetos; 99/99 texturas e 27/27 áudios concordaram nos campos medidos. Uma tentativa de detalhar páginas de Settings atingiu timeout de 180 segundos e foi encerrada; a passagem final usou coleção/PathID e metadados adequados, sem erros. Os 62 objetos sintetizados pelo AssetRipper não foram somados aos originais.
- Após autorização explícita, a transformação XOR foi aplicada só localmente, com chave obtida em execução da referência. Quinze containers transformados passaram no round trip; 16 containers e seus 1.337 membros passaram nas verificações de diretório/extents. Todos os chunks dos 718 PNGs tiveram CRC conferido.
- Os 532 SEB foram consumidos até o fim; fontes TrueType e associação com atlas vazios foram medidas. Nenhum texto, chave, payload ou nome de jogador/time foi publicado. Logs e conteúdos ficam em diretórios ignorados.
- **36 testes locais passaram**: 32 fixtures de repositório/formatos/fronteira e quatro do inventário semântico de C#. O gate do índice Git é executado separadamente antes do primeiro commit; no CI sem o Roslyn privado, somente a fixture semântica local correspondente é explicitamente pulada, e o gate de conteúdo continua obrigatório.

# 3. HIPÓTESES

| Estado | Hipótese e evidência |
|---|---|
| **REFUTADA** | O jogo não usa Unity diretamente: existem **18 símbolos Unity em 7 tipos** no inventário semântico, incluindo JNI, preferências e temporização. |
| **REFUTADA** | Contar Texture2D basta para inventariar as imagens: a rota `ResourceManager → JarInflater → Image.DecodeByteArray` fornece **718 PNGs internos**, além dos objetos Unity. |
| **REFUTADA** | Textos são sempre referências por índice/chave estável: `Language._translateText` compara conteúdo e `KairoText.LT` pode devolver o original; o fonte contém literais com fluxo UI. |
| **REFUTADA** | Retornar null em toda rede preserva o boot: `BootForm.Run` entra em falha de registro; `AppData.CgiRegist` tem um caminho local distinto quando o registro está desligado. |
| **REFUTADA** | Desligar anúncios não altera geometria: `SurfaceManager.UpdateAdMobView` recalcula estado; altura/orientação têm dependências, documentadas por método. |
| **CONFIRMADA** | Os 532 SEB são dados de animação/layout sem texturas: parse completo v0, 532 layers, 1.559 frames e 1.575 registros de sprites, sem cauda residual ou PNG embutido. |
| **CONFIRMADA** | As duas texturas 0×0 são vinculadas às fontes: seus PathID resolvem os PPtr das duas Font; crescimento de atlas em runtime permanece UNKNOWN. |
| **CONFIRMADA** | O corpus não contém queries LINQ sintáticas, await, yield ou var; há exceções, closures, genéricos e goto. Isso não prova ausência de chamadas às APIs LINQ nem identifica a versão histórica da linguagem. |
| **INCONCLUSIVA** | O jogo cabe no 3DS antigo: existem estimativas de payload, mas não pico residente, heap linear, atlas, CPU ou frame time. O alvo não foi descartado. |
| **INCONCLUSIVA** | Quatro MAP são arquivos editoriais obsoletos: não coincidem com os leitores GMAP nem têm consumidor provado; a hipótese não autoriza apagá-los. |

# 4. PENDENTES POR GRUPO E DIMENSÃO DO TRABALHO

**Fronteira: 254 símbolos portáveis, 452 a reimplementar e 69 a remover.** São 98 tipos, 593 métodos/construtores, 81 campos e três propriedades; nenhum evento. A unidade é o símbolo original, não o número de chamadas. Tipos referenciados, constantes antes de inlining, conversões/constructors implícitos e protocolo foreach foram incluídos. Chamadas transitivas do interior da KairoLibrary não são novos membros diretos do contrato.

| Área | Símbolos |
|---|---:|
| Formulários/UI | 173 |
| Coleções/streams | 160 |
| Utilitários | 112 |
| Desenho | 90 |
| Fontes/texto | 50 |
| Armazenamento | 50 |
| Rede | 50 |
| Entrada | 47 |
| Imagens | 13 |
| Som | 11 |
| Anúncios | 9 |
| Notificações | 6 |
| Cobrança | 4 |
| Licenciamento direto | 0 |
| **Total** | **775** |

Zero referência direta a licenciamento não elimina integrações transitivas ou por ciclo de vida. Propostas por símbolo e todos os chamadores: `config/boundary.csv` e `docs/boundary.md`.

**Unity direto — todos os 18 símbolos representados abaixo:**

| Tipo (7 símbolos de tipo) | Métodos/construtores (9) ou propriedades (2) | Proposta |
|---|---|---|
| AndroidJavaClass | construtor(string) | Retirar JNI; preservar contrato de indisponibilidade/saída dos chamadores |
| AndroidJavaObject | CallStatic; CallStatic<T> | Retirar ponte Android; mailer, WebBox e histórico de compras exigem política explícita |
| MonoBehaviour | construtor | Ciclo de vida próprio do host; nenhum runtime Unity |
| Object | op_Equality; op_Inequality | Modelar existência/vida do objeto; semântica destroyed-object não é só null |
| PlayerPrefs | GetInt; SetInt; Save | Persistência local se o estado de cobrança/Tapjoy for mantido |
| Application | targetFrameRate | Agendamento do host preservando intenção temporal de Main.OnUpdate |
| QualitySettings | vSyncCount | Substituir ajuste do motor pela sincronização do backend |

**Tamanho do subconjunto:** 97 fontes, **448.825 nós AST**, **123 SyntaxKinds**. Há 96 classes, três interfaces, quatro enums, um delegate, 1.719 métodos declarados, 118 construtores e 1.835 corpos declarados. O cadastro de 1.958 também inclui membros sintetizados/gerados e declarações sem corpo; não são denominadores intercambiáveis.

| Construção | Ocorrências |
|---|---:|
| if / switch | 7101 / 48 |
| for / foreach / while | 1316 / 10 / 59 |
| try / catch / finally | 203 / 148 / 88 |
| lock / goto | 2 / 8 |
| Lambdas / métodos anônimos | 3 / 31 |
| Funções anônimas com captura | 29 |
| Ocorrências de símbolos capturados | 41 |
| Métodos genéricos próprios | 3 |
| Array creations / element access | 2022 / 11408 |
| var / query LINQ / yield / await | 0 / 0 / 0 / 0 |

Contagem completa: `config/csharp-syntax.csv`. Literais por classe, sem seus valores: `config/visible-text-counts.csv`. App tem 2.231 ocorrências string: 443 alcançam sinks de UI na análise estática, 18 são chaves API diretas e 1.770 permanecem UNKNOWN. Kairo tem 3.008: 20 com fluxo UI (14 não vazias), 151 chaves API diretas e 2.837 UNKNOWN. Não são frases únicas nem prova de exibição; incluem debug e não cobrem todo fluxo arbitrário. A futura externalização não pode tratar os UNKNOWN como conteúdo automaticamente seguro para C++.

Pendências de conhecimento: consumidor/formato de quatro MAP e consumidor específico de três CSV; associação runtime de serviços/reflexão; pico de memória e atlas; visibilidade dos literais UNKNOWN. Elas estão separadas de implementação, que permanece toda por fazer.

# 5. TOOLCHAIN

Presentes: Roslyn **5.8.0-1.26319.2**; runtime privado VS **.NET10.0.10**, sem SDK no PATH; Python **3.12.10**; REA **6.5.0**; CMake **4.3.1-msvc1**; MSVC **19.51.36252.0**; Git **2.55.0.windows.3**; Node **24.19.0**. Existem runtimes SDL2 **2.0.14.0** e **2.26.3.0** de outros programas; não são prova de SDK/linkagem SDL2 disponível.

AssetRipper foi a única ferramenta obtida nesta rodada, de modo portátil e autorizado: **2.0.0+1ac666f47d8e9dedf96afb0b914c70d7656151ea**. ZIP de 44.439.367 bytes, SHA-256 `9a7ef0e7c5c3ea5b90b4e6d855e2d98d5f7ec8c3f9e26fccbc194c6a7b01baf7`, igual ao digest oficial; EXE SHA-256 `58bb4c6a78507d77ea115db236ae7286b097979fba7f77aa247c16a471499fff`. Não foram instaladas dependências adicionais. O servidor headless local foi encerrado pelo handle/imagem verificados.

Não encontrados nos limites consultados: **SDL2 SDK, devkitPro/devkitARM, libctru, citro2d, citro3d, tex3ds, Azahar, makerom e bannertool**. Os últimos dois só são necessários para a rota CIA. Uma busca limitada não prova inexistência absoluta em todo disco. Não há instalação implícita autorizada desses componentes. Inventário e hashes: `docs/toolchain.md` e `config/toolchain-inventory.json`.

# 6. COMPONENTES EXTERNOS, ASSETS E MEMÓRIA

O submódulo é código de referência imutável. As referências .NET/Unity usadas na análise semântica foram lidas na cópia externa da reconstrução; nenhuma DLL/so/DEX/player original foi copiada para o port, vinculada ou distribuída. O port não terá Unity nem runtime .NET. O APK próprio permaneceu com SHA-256 `d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8`, versão 2.0.2.

**Inventário medido:** 1.189 arquivos de dados sob assets/, **117.861.037 bytes descomprimidos / 8.083.154 bytes comprimidos no ZIP**. São 1.160 serializados, 27 sidecars, um PNG avulso e um XML. Não somar os níveis sobrepostos ZIP/objetos/membros internos.

| Conteúdo | Quantidade | Medida |
|---|---:|---|
| Objetos Unity originais | 1489 | 99 Texture2D, 56 Sprite, 27 AudioClip, 2 Font, 21 TextAsset e demais tipos documentados |
| Containers JarInflater | 16 | 15 transformados; 1337 membros / 2967362 bytes |
| PNG internos | 718 | 654 SHA distintos; 2205372 bytes; 631 ocorrências com alpha |
| SEB | 532 | 35756 bytes; estruturas sem imagens embutidas |
| TXT / INF | 52 / 24 | 254660 / 24576 bytes, UTF-8 |
| GMAP / MAP | 4 / 4 | 10372 / 119652 bytes; quatro MAP permanecem UNKNOWN |
| CSV internos | 3 | 316974 bytes, UTF-8; consumidor específico UNKNOWN |
| TrueType | 2 | 1920344 + 50788 = 1971132 bytes; 15563 / 346 glifos |
| AudioClip | 27 | Vorbis estéreo; 25×44100Hz, 1×24000Hz, 1×32000Hz |

Os PNGs internos são 8 bits: 630 RGBA, 40 RGB e 48 paletizados; um paletizado tem transparência. Larguras 1–768 e alturas 1–480; nenhum eixo excede 1024. Distribuição integral de dimensões: `config/texture-dimensions.csv`. Os máximos por eixo não afirmam uma única imagem de 768×480.

**Memória estimada de texturas, após padding PICA e sem mipmaps:**

| Conjunto/formato hipotético | Bytes | MiB |
|---|---:|---:|
| 654 PNGs por SHA, RGBA8 | 27537920 | 26.262207 |
| Mesmo corpus, RGBA4 | 13768960 | 13.131104 |
| Mesmo corpus, ETC1A4 | 6884480 | 6.565552 |
| Mesmo corpus, ETC1 | 3442240 | 3.282776 |
| Todas as 718 ocorrências, RGBA8 | 27899136 | 26.606689 |
| Todas as 99 texturas Unity, RGBA8 | 161299712 | 153.827393 |

As 99 texturas Unity não são o conjunto de imagens necessariamente usado pelo código portado e não foram somadas ao corpus de PNGs. O PNG avulso 1024×2048, se usado como RGBA8, acrescentaria 8.388.608 bytes; seu uso pelo port não foi provado.

ETC1 não conserva alpha; ETC1A4/RGBA4 tampouco garantem fidelidade aos pixels. São cenários de tamanho, **nenhum formato foi escolhido ou convertido**. Fonte do cálculo: `citro3d/source/texture.c` e `libctru/include/3ds/os.h`, ligados em docs/assets.md.

Os áudios somam **206.17563989758492 segundos declarados**. PCM16 estimado por duração/taxa/canais: **36.175.860 bytes**. Essa é uma estimativa, não o número de samples efetivamente decodificados. Um exemplo de stream com quatro buffers de 16.384 frames estéreo reserva 262.144 bytes por stream; não foi implementado nem escolhido.

PNG únicos RGBA8 + todo PCM16 + TTF residentes somam **65.684.912 bytes / 62.642014 MiB**, antes de código, dados, atlas, render targets, buffers e overhead. Comparação de planejamento: 64 MiB (67.108.864 bytes) no antigo e 124 MiB (130.023.424 bytes) no New, conforme os orçamentos da missão; **não são RAM livre medida**. O cenário integral deixa pouca margem no antigo; streaming altera substancialmente a conta. Pico, heap linear, VRAM e atlas precisam ser medidos depois. Não há prova de que tudo reside simultaneamente nem de inviabilidade do 3DS antigo.

Textos estão em tabelas empacotadas, manifestos de idioma e literais do C#. O fluxo não é exclusivamente por ID: `Main.OnCreate`, `Language._translateText` e `KairoText.LT` documentam a pesquisa por conteúdo e fallback. Nenhum texto foi reproduzido no relatório. Métodos/linhas e carregamento por tipo: `docs/assets.md`, `docs/notes/asset-loading.md` e `docs/notes/custom-asset-formats.md`.

# 7. BLOQUEIOS E DECISÕES DO USUÁRIO

Nenhum bloqueio impediu os inventários desta rodada após as três autorizações recebidas. Permanecem decisões antes/durante a Fase 2:

1. Política offline do registro e serviços: `BootForm.Run`/`AppData.CgiRegist` exigem escolher a rota local consistente, não simular sucesso arbitrário.
2. Cobrança/Tapjoy e saves: preservar estados existentes e decidir a disponibilidade dos fluxos dependentes de servidor; `BillingManager.UpdateBillingItems` pode remover estado com inventário vazio.
3. Anúncios/notificações: remover integrações mantendo coerentes altura/orientação, callbacks e estado persistente. `RankForm` usa dados locais; não remover só pelo nome.
4. Autorizar as ferramentas da próxima etapa quando forem necessárias. O SDK SDL2 é necessário para o PC; toolchain 3DS/emulador podem ser preparados em seguida. Nenhuma instalação desses itens ocorreu.
5. Fixar o contrato de tradução e externalização: UTF-16, overflow, ordem de avaliação, exceções, closures e dados/textos que não podem entrar no C++ publicado. Os UNKNOWN de strings exigem tratamento conservador, não permissão de embutir conteúdo.

Memória/formato de textura/streaming dependem de fidelidade e medidas futuras; não foi escolhida redução com perda. Telas e controles permanecem fora desta rodada e não foram propostos. Não há decisão de descartar o 3DS antigo.

# 8. SUA RECOMENDAÇÃO

1. Fixar as políticas offline/saves e o contrato semântico do tradutor, usando os métodos e os 123 SyntaxKinds já medidos. Isso evita construir sobre retornos de rede ou strings/arrays que violariam o fluxo e a regra de conteúdo.
2. Preparar SDL2 SDK com autorização e, só então, iniciar a Fase 2 com fixtures próprias para exceções, closures, arrays, aritmética e strings, seguida das 254 entradas portáveis. Nenhum tradutor é implementado por esta recomendação.
3. Preservar imagens sem escolher compressão com perda agora; planejar a medição de residência/streaming e atlas quando houver backend. Os 26,262207 MiB de PNGs e os 34,499989 MiB de PCM estimado justificam essa prioridade. O inventário e os UNKNOWN permitem medir o antigo cedo sem comprometer o New.

Documentos centrais: `README.md`, `docs/apk.md`, `docs/toolchain.md`, `docs/boundary.md`, `docs/csharp-subset.md`, `docs/assets.md`, `PROGRESS.md`. Inventários e relatórios auxiliares estão em config/; conteúdo integral somente nos diretórios locais ignorados.
