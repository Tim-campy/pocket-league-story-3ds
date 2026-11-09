# 1. PROGRESSO

Relatório de encerramento deste ponto da sessão, antes da continuidade. A Fase 2
permanece incompleta. Último checkpoint publicado: **cde8988**. Os avanços
posteriores e este relatório estão locais, sem novo commit.

| Medida | Checkpoint cde8988 | Última medição local |
|---|---:|---:|
| Raízes portáveis compiladas e exercitadas | 172/172 | 172/172 na última prova diferencial |
| Raízes portáveis estritamente verificadas | 171/172 | 171/172 na última prova diferencial |
| Corpos portáveis, incluindo dependências | 374 | 374 compilados |
| Corpos portáveis sem divergência | 373/374 | Última prova: 373/374 |
| Observações diferenciais portáveis | 2.617/2.618 | Última prova: 2.617/2.618 |
| Corpos Assembly-CSharp compilados | 1.110/1.958 (56,69%) | 1.220/1.958 (62,31%) |
| Métodos do jogo qualificados como runs/verified | 0 | 0 |
| Fronteira publicada | 249 verified, 1 implemented, 525 todo | Inventário agregado ainda não republicado |
| Grupos de assets | 3 loads, 6 extracts, 35 inventoried | Sem nova promoção agregada |

O ganho local medido do jogo é **110 corpos**. Os 1.220 incluem 1.216 raízes
solicitadas e quatro construtores implícitos. Restam **738 identidades IL** sem
corpo compilado contabilizado. Helpers Kairo não aumentam esse denominador.

A última verificação completa aprovada continua sendo a de **68/68 checks**
do checkpoint. Depois dela houve testes específicos, mas não uma nova
verificação completa do conjunto local. Portanto, ausência global de regressões
nessas alterações é **UNKNOWN**. Alguns recibos de fixtures ainda apontam para
versões anteriores do produtor e precisam ser regenerados.

Publicado por classificação: portáveis 254 (171 verified, 1 implemented,
82 todo); reimplementar 452 (78 verified, 374 todo); remover 69 (69 todo).
Os estados publicados não foram alterados à mão para antecipar trabalho local.

# 2. O QUE FOI FEITO NESTA SESSÃO

Os resultados abaixo são as últimas medições registradas por frente; não
substituem a verificação integral do produtor atual.

| Frente | Resultado | Limite ou resultado negativo |
|---|---|---|
| Emissor e dependências | Construtores implícitos limitados ao próprio corpo; structs, cópias, dispatch e inicialização estática ampliados | Ganho por transformação isolada UNKNOWN; ganho conjunto Game +110 |
| Fixtures gerais do emissor | 71 métodos, 497/497 casos | Recibo requer renovação após alterações posteriores do produtor |
| Campos compartilhados | Nove campos BootForm emitidos com acessos sincronizados; 12 métodos sintéticos, 84/84 casos | Operações compostas continuam carga/operação/gravação; reentrada do jogo não comprovada |
| ref/out | 20 métodos, 133/140 casos coincidentes | Sete diferenças no endereço de campo nulo; não qualificadas |
| goto case/default | Sete métodos, 49/49 casos | Saltos através de finally continuam recusados |
| Superfícies e delegates | Quatro cenários gerados, 28/28 casos; ponte nativa com 24 casos e 12 invariantes de GC | Não equivale a executar formulários do jogo |
| Serviços offline | 53 políticas explícitas; 18 alcançadas na emissão Game; fixture própria com 11 políticas e nove assertions | 35 políticas não alcançadas; nenhum fluxo funcional de registro/cobrança executado no jogo |
| Formulários e scheduler | 68/68 e 50/50 casos | Colaboradores de teste não são boot real |
| Entrada | Sonda do Canvas original 32/32; corrigidos quatro casos DEBUG/Shift antes divergentes | Mouse usa estado pressionado; clique inteiro entre duas consultas continua perdido, como no fonte |
| Graphics.current | 44/44 casos | EndPaint não limpa/restaura current no original; comportamento preservado |
| Propriedades e orientação | 132/132 casos GetProperty; 40/40 getters de orientação | Decisões de orientação/controles do 3DS não tomadas |
| Entrada SDL de diagnóstico | 24/24 casos e 24 assertions nativas | Contagem de toques exigida por SurfaceBase.DoEnd ainda sem cobertura comprovada |
| Stack | 32/32 casos e 14 invariantes de GC | Somente construtor, Count, Push, Pop e Peek; censo de oito referências |
| Fontes e áudio | Dois TTF, 27 Vorbis; 18.156.964 assertions no runner de mídia | Não é medição de memória nem de som durante partida |
| Execução PC | Binário de diagnóstico iniciou e registrou métricas | Parou antes do primeiro frame, na ponte Config/Awake/Language ausente |
| Limpeza | 627 intermediários/caches removidos; 4.106 relatórios históricos retirados do checkout | Próximas compilações recriarão os intermediários necessários |

O MSVC inicialmente recusou o objeto Game por limite de seções (C1128).
`/bigobj` resolveu esse bloqueio de compilação, mas o link normal ainda não
fechou. O primeiro diagnóstico expôs três declarações abstratas emitidas como
virtuais concretas; corrigidas para slots puros, permitiram a segunda execução
de diagnóstico. Nenhum desses resultados foi promovido a boot bem-sucedido.

# 3. HIPÓTESES

- **CONFIRMADA:** a varredura de métodos alheios no construtor implícito criava
  dependências falsas; a fixture isolada e a compilação posterior confirmaram
  a correção de escopo.
- **CONFIRMADA:** a construção abstrata precisava separar inicialização da
  alocação e emitir slots puros; a fixture confirmou dispatch derivado durante
  o construtor base, e desapareceram os três erros do primeiro diagnóstico.
- **CONFIRMADA:** os campos compartilhados selecionados precisavam de acessos
  definidos em C++; fixtures exercitaram referências, substituição e GC sem
  acrescentar Join ou tornar operações compostas atômicas.
- **REFUTADA:** consertar cliques completos entre consultas seria necessário
  para reproduzir Canvas.DecideKeyState; o original também consulta estado
  pressionado e perde esse clique.
- **CONFIRMADA:** Graphics.current permanece após EndPaint e não restaura o
  contexto anterior; 44 casos do ciclo de pintura sustentam essa regra.
- **CONFIRMADA no SDK Windows:** o Mono padrão adia a falha de certos campos
  nulos passados por ref. A opção explicit-null-checks mudou exatamente sete
  observações e fez o controle coincidir em 140/140. Essa opção não foi adotada
  para alterar o juiz canônico. Android permanece **UNKNOWN**.
- **INCONCLUSIVA no Android:** sinal de JMath.Sin(-0), ainda divergente entre
  o SDK Windows histórico e o C++.
- **CONFIRMADA:** há um executável diagnóstico capaz de iniciar; **REFUTADA**
  qualquer conclusão de título/menu a partir disso: foram apresentados zero frames.

# 4. PENDENTES POR GRUPO

| Grupo | Estado atual |
|---|---|
| Jogo ainda sem corpo contabilizado | 738/1.958 identidades IL |
| Slots virtuais concretos sem definição | 113 no inventário ampliado; impedem o fechamento normal |
| Inicialização | configure_application e callbacks reais Config/Awake/Language ainda precisam fechar a integração |
| Serviços | 18/53 políticas emitidas; execução funcional e caminhos restantes pendentes |
| Sintaxe | 66/123 SyntaxKinds do inventário original observados na união dos corpos; 57 sem observação |
| ref/out | Sete observações divergentes em um dos 20 métodos sintéticos |
| Portáveis | Sin(-0) mantém uma raiz sem equivalência estrita |
| Entrada | Input.touchCount exigido por SurfaceBase.DoEnd, além de outros membros recusados no censo |
| Teste funcional | Título, menu, partida e comparação Android não realizados |
| Publicação | Regeneração de provas, inventários e verificação integral pendente |

O inventário anterior mostrava 13 slots; o novo percorre mais overrides e
implementações de interfaces. O aumento para 113 não deve ser interpretado
como 100 regressões medidas.

**Resultado do diagnóstico PC, tentativa 2:**

```text
System.InvalidOperationException:
Original Config/Awake/Language initialization bridge is not installed
```

| Medida | Valor observado |
|---|---:|
| Frames apresentados | 0 |
| RSS antes da factory Main | 65.486.848 bytes |
| RSS antes do teardown | 65.773.568 bytes |
| Pico de RSS observado | 74.338.304 bytes |
| Commit privado inicial | 49.246.208 bytes |
| Imagem executável residente inicial | 32.251.904 bytes |
| Buffer RGBA de display | 268.800 bytes |
| Texturas/áudio/fontes/heap: RSS por categoria | UNKNOWN |
| Frame time do jogo | UNKNOWN |

São medidas de um diagnóstico Windows de depuração interrompido antes do
primeiro frame. Não representam o jogo carregado nem orçamento de RAM do 3DS.
Commit, RSS, imagem executável e payloads não são somados.

# 5. TOOLCHAIN

Roslyn 5.8.0-1.26319.2; MSVC 19.51.36252.0; CMake 4.3.1-msvc1; Python 3.12.10;
SDL2 SDK 2.32.10; FreeType 2.15.0; libogg 1.3.6; libvorbis 1.3.7. Oráculos
próprios usam Mono do SDK Unity 5.3.4f1, perfil unity. Versões, caminhos,
flags e hashes completos permanecem em docs/toolchain.md.

O diagnóstico possui fontes privadas, manifesto vinculado ao produtor,
marcadores de lacuna e preferências isoladas. Seus traps não são implementações
do jogo e não entram na cobertura. Nenhuma nova dependência foi instalada
durante a limpeza. SDK 3DS e Azahar continuam reservados à Fase 4.

# 6. COMPONENTES EXTERNOS E METADADOS

O submódulo continua no commit
`c7d097a847ca1f1a8e5fb7141ff11d338f5915c4`, tag
`v1.0.0-csharp-reconstruction`, sem alterações de fonte. O checkout local
agora exclui reports/ por sparse-checkout; o histórico conserva esses arquivos.
O comando `git -C reference sparse-checkout disable` restaura o checkout completo
caso os relatórios da reconstrução voltem a ser necessários.

Colação: revisão oficial Mono
`f08f8a27bfe3aafda4e430ee2365dec73c1070d7`, comparada ao fork Unity
`b6587926c0f146c8b12985744f33a13b39a22d57`. Payload lógico:
337.358 bytes MIT/X11 + 46.832 bytes BMP GNU Library GPLv2 = **384.190 bytes**;
HexNumber acrescenta 80 bytes. Última prova: **615.648/615.648 casos**, incluindo
os 120 iniciais. Strings: **395.166/395.166** na última prova histórica.
Licenças separadas em THIRD_PARTY.md. Cultura efetiva Android e revisão exata
de fabricação de toda a VM continuam UNKNOWN.

O core SDK unity tem SHA-256
`7f16171cf5f87ca1e4c229727526d2fbc786079fc0c960f36197013ea0d986e1`,
idêntico ao mscorlib do APK. Isso não prova todas as particularidades do JIT
Android. Binários originais não foram copiados ou ligados ao port.

Limpeza: **5.082.901.442 bytes** retirados da árvore local, sendo
1.589.726.815 bytes de intermediários/caches e 3.493.174.627 bytes de relatórios
históricos. Integridade conferida em **520 arquivos de fonte/configuração/
documentação** e **368 arquivos de evidência**: zero ausentes ou modificados
pela limpeza. Os **48 testes de repositório passaram**, e a política de
conteúdo não encontrou violações nos 520 arquivos examinados da árvore de trabalho.
O registro local está em build/cleanup/result.json.

Assets, dados convertidos e ferramentas preparadas foram preservados nos
diretórios ignorados. Permanecem locais os 654 RGBA8 únicos
(16.933.248 bytes de pixels), dois TTF e 27 Vorbis usados nos testes.

# 7. BLOQUEIOS

**Nenhuma autorização ou decisão nova depende do usuário neste ponto.**

O bloqueio imediato é a ponte de inicialização original. Também faltam corpos
e bindings para o link normal, resolução das diferenças semânticas registradas
e uma verificação integral após os avanços locais. Ainda não existe prova
funcional de título/menu/partida, nem medidas do jogo carregado.

A implementação foi interrompida para a limpeza e este relatório; nenhum
ciclo novo foi executado para produzi-lo. O último commit publicado permanece
cde8988, e este texto não declara conclusão da Fase 2.

# 8. RECOMENDAÇÃO

1. Concluir a integração gerada Config/Awake/Language, executar novamente o
   diagnóstico isolado e tratar a próxima falha concreta. Ganho exato de
   métodos/frames antes da execução: UNKNOWN.
2. Priorizar os corpos e bindings exigidos pelo caminho até título/menu,
   preservando a distinção entre compilação, diagnóstico e execução funcional.
3. Renovar os recibos e executar a verificação completa antes de publicar o
   próximo checkpoint; depois do primeiro frame real, medir memória e frame
   time e comparar o comportamento com o Android.
