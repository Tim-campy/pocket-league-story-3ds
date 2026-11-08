# Bootstrap original e scheduler de formulários

## Ordem de inicialização

O método reconstruído `IApplication.Awake` executa, nesta ordem:

1. Determina a thread de UI e encontra o tipo derivado de Config no assembly do
   aplicativo; chama `Config.Create` com esse tipo (`cfg.MyConfig` neste jogo).
2. Escolhe a pasta de dados, marca a aplicação criada e inicializa as folhas
   da plataforma: plugin, notificações, analytics, fullscreen, câmera, métricas
   e Canvas. No port, notificações/licença/anúncios seguem a política offline
   explícita; câmera/métricas tornam-se dependências do framebuffer/host.
3. Tenta carregar `kairolib.dat` em ResourceManager e marca as imagens carregadas
   para expiração em 40 frames. O catch original ignora falha dessa tentativa;
   isso não autoriza inventar recursos ou afirmar que eles carregaram.
4. Chama o **Main.OnCreate gerado** e somente depois `Language.Init` original.

AnalyticsTracker.Setup também conserva seus efeitos em PlayerPrefs/fila; sua
presença nessa etapa não autoriza substituí-lo por uma função vazia. O transporte
WWW indisponível falha pelo caminho de erro original. Evidência e limites em
[serviços](../design/services.md#transporte-indisponível-e-analytics).

`Main.OnCreate` inicializa AppPlugin, configura viewport, obtém AppData e
FormManager, escolhe o BootForm e lê tabelas de softkeys/textos via RecordStore
e JarInflater. Esse corpo permanece gerado; não existe um Main manual alternativo.
`Language.Get`, `Init`, `_translateText`, leitura dos packs e seleção de língua
também devem permanecer traduzidos do C#, com dados vindos dos assets privados.

## Config.Create

`Config.Create(Type)` consulta GetFields(Static|Public|NonPublic), ignora
**APPLI_TYPE**, busca o campo público de Config pelo mesmo nome e copia o valor
quando o alvo existe. Não é uma atribuição da classe MyConfig inteira.

`tools/inventory_bootstrap.py --apk <APK próprio>` verifica o hash e lê as duas
DLLs exclusivamente como PE/CLI em memória; não as carrega nem executa. O plano
`config/phase2-bootstrap-plan.json` contém **27 cópias**, com DocIDs de origem
e destino, tokens e assinaturas primitivas; **quatro campos são ignorados**:
APPLI_TYPE pelo teste explícito e três campos sem alvo em Config. Valores não
são duplicados no plano. O emissor precisa inicializar os campos/cctor originais
e emitir as cópias, em vez de escrever manualmente os valores do jogo.

O mesmo produtor compila as declarações originais, o corpo original de Create
e MyConfig como executáveis novos de teste. Nos perfis .NET 10 e Mono 2.6.5,
os 27 campos coincidem e APPLI_TYPE conserva o valor sintético preexistente.
Isso comprova o plano de especialização de reflexão; ainda não é prova de que
o bootstrap C++ do jogo o tenha executado.

## Adaptador de Awake

`bootstrap.hpp` define os bindings tipados `create_config`,
`initialize_platform`, `load_library_resources`, `initialize_language` e o
`FormRuntime`. `configure_bootstrap` instala as fases no IApplication nativo,
que continua chamando o override Main.OnCreate gerado entre as duas fases.
Instalar o runtime não consulta antecipadamente nenhum singleton do fonte.

O callback dos recursos deve devolver o ResourceManager original após Load e
SetExpiration(true,40). O contexto retém esse objeto, como resource_ no C#.
Exceções reais dessa tentativa opcional são registradas por tipo e ignoradas;
ausência de binding ou um callback que retorna nulo como sucesso são erros de
integração explícitos. O contexto e seus delegates são rastreados pelo coletor,
sem referências fortes ocultas nas funções do host.

`tools/test_bootstrap.py` compila o corpo integral original de Awake com
colaboradores próprios. Os seis cenários (sucesso e falhas de Config, plataforma,
recursos opcionais, Main e Language) passam nos dois perfis: **12/12**. Quatro
asserções nativas adicionais cobrem bindings obrigatórios, ordem, retorno nulo
inválido e coleta do ciclo de ownership. Isso prova a ordem e o tratamento do
adaptador, não a execução dos callbacks gerados nem o boot do jogo; o recibo
mantém `game_boot=false` e não promove IDs da fronteira.

## Ausência comprovada de SaveRecorder

No corpus autenticado, SaveRecorder é abstrato. Não há tipo diretamente
derivado, logo também não pode haver uma cadeia de derivados. O scanner CIL
não encontrou call/newobj para seu construtor. O único stsfld de objectInstance_
está no próprio construtor nunca chamado. Portanto o GetInstance original
permanece nulo neste jogo, sem injeção de tipos/código fora do corpus. Essa é
uma justificativa verificável para um binding nulo, não uma forma de omitir
save: AppData e os serviços Kairo preservam seu próprio fluxo de gravação.

FepPanel tem situação diferente. Há MainPanel derivado e três escritas em
current_ (duas sobrecargas de Start e a limpeza em Update); SubForm instancia
MainPanel ao alterar nomes. O binding de FEP precisa consultar a instância
real dinamicamente. Um nulo permanente seria comportamento inventado.

## AssetReader e recursos originais

O catálogo privado distingue recursos decodificados (kind1, para o backend
Storage existente) dos **21 TextAssets originais ainda codificados** (kind8).
Os bytes kind8 vêm do APK autenticado antes do XOR. `NativeTextAsset` e
`load_text_asset` substituem somente as folhas Unity de AssetReader; não são
um Resources.Load genérico para texturas, fontes ou prefabs.

`AssetReader.GetData`, `_getData`, `_getTextAsset`, `Exist`, SetSecurity e a
seleção por língua/DPI permanecem fonte traduzido. Isso conserva o teste de
extensão/diretório/debug antes de Decode e evita aplicar XOR duas vezes ao
catálogo decodificado. A resolução da folha aceita caixa ASCII equivalente;
prefixo Data, Trim e remoção da última extensão continuam no fonte original.
Cada carga copia os bytes, que permanecem válidos após UnloadAsset; o backend
CPU não carrega ou descarrega objetos de um motor Unity.

`DisplayMetrics` nativo reproduz o ramo não Android de Update: Density e
ScaledDensity 1,6, DensityDPI 240, XDPI/YDPI 1,6 e dimensões do framebuffer
fornecido por IApplication. Preserva a inicialização estática no primeiro uso
e o refresh somente por Update. Isso é o fallback PC do fonte, não uma decisão
de escala/telas do 3DS.

`tools/test_asset_reader.py --apk <APK próprio>` confirma **6/6** cenários
de métricas contra a classe original integral nos dois perfis, 306 asserções
de recursos próprios e leitura integral de **3.275.098 bytes nas 21 views raw**.
O filelist real encontrado é ASCII, e sua conversão de texto é comparada code
unit a code unit. Nenhum identificador ou conteúdo extraído vai ao recibo.
Conversões Unity de BOM/encoding fora desse filelist, invalidação de objetos
após unload e aliasing dos arrays no player original continuam UNKNOWN.
O recibo não promove métodos do jogo nem alega boot.

## Scheduler nativo

`forms_execution.hpp` e `forms_execution.cpp` implementam SourceFormExecution,
seguindo `_execute` e `OnDraw` reconstruídos. `install_form_runtime(runtime)`
deve ser chamado antes de criar o FormManager gerado. A fábrica instala o
scheduler e uma ponte dinâmica para o estado Kairo; não cria um Kairo fictício.
Os getters de FormRuntime devem resolver os colaboradores reais ou lançar
exceção se ainda não houver binding. Retornar nulo exige a ausência original
comprovada, como a de SaveRecorder acima.

Foram conservados:

- repetição de ExecuteStep até terminar; SaveRecorder.Lock em cada passo e
  Unlock(true) somente quando a fase é concluída;
- Kairo.Update uma vez por fase e reinício do passo se ele mudar o formulário
  do topo; FEP, pausa, resume e Init/Finish nos pontos originais;
- habilitação de reserveSave ao capturar exceção, limpeza da reserva e até
  três tentativas de Save/SaveAll no finally, inclusive após passos incompletos,
  com GC/Sleep(500) em cada falha;
- sequência PreDraw, contadores, ClearTouch, layout, BeginTouchRegist,
  **Surface.Draw**, print form, EndTouchRegist, componentes, EndPaint,
  expiração, atualização de modo, Drawn e CloseJarCache;
- DrawSkip, formulário de impressão, diálogo de término, callbacks que
  retornam false e limpeza de currentForm em finally.

OnDraw não foi trocado por `FormManager.Draw` direto. É Surface.Draw que
encaminha esse desenho, como no original. FormSurface exige esse contrato
explicitamente. Contadores Config, CloseJarCache e expiração são dependências
reais: uma ponte ausente não se torna uma função vazia. O fechamento do cache
JAR é lógica pura de ResourceManager e pode ser emitido do C#.

`tools/test_forms_execution.py` extrai os corpos originais sem reescrevê-los e
compara **24 cenários nos dois perfis, 48/48**. As formas e colaboradores são
sintéticos e registram a ordem das chamadas. Os testes incluem retries/finally,
exceções de Init/Update/Kairo/Draw, ausência de Recorder/Surface, FEP, pausa,
resume, avisos por false, mudança de topo e renderização/print/skip. Não há asset,
classe Main manual, título falso ou alegação de boot nesses testes.

O recibo `config/phase2-forms-execution-tests.json` tem nove IDs adicionais da
fronteira e hashes. Loading thread, captura e handshake entre threads ainda
não foram exercitados. A implementação de FormRuntime e dos adapters para
Kairo/Surface/Config/recursos gerados continua sendo integração necessária ao
boot; a existência de um scheduler testado não remove essa dependência.

## Ciclo de vida das imagens

`image_lifetime.cpp` implementa o cache das imagens sem trocar as duas formas
distintas do fonte: `Image.Load(byte[])` carrega uma textura imediata fora da
lista de fontes; `new Image(byte[])` corresponde a FromSource, retém o alias
do array e carrega somente em Use. FromLoader recebe um delegate com os valores
copiados do construtor por arquivo/JAR, conservando o placeholder 240×240 até
o primeiro carregamento. Ele não retém um ResourceManager arbitrário. Bytes
que não correspondam ao catálogo autenticado são recusados, sem escolher outra
imagem ou embutir assets.

Use registra a imagem, atualiza checkCount e contadores e aplica os limites
por quantidade/pixels. A seleção conserva a fórmula original de idade e área,
exclui a imagem recém-carregada e pode retirar uma imagem com expiração
bloqueada: o bloqueio afeta a expiração por frames, não a pressão de capacidade.
Unuse conserva dimensões/origem para recarregar; Dispose também limpa a origem,
zera dimensões e marca IsDisposed. Imagens geradas por CreateImage entram na
lista bloqueadas e são descartadas, em vez de apenas descarregadas, quando
elegíveis. A expiração usa **diferença maior que** o limite, não maior ou igual;
zero/outros limites negativos a desativam, e -1 escolhe o limite global.

`install_image_runtime` exige os três bindings para Config.checkCount_,
COUNT_ENABLE e o ajuste de createImageArea_, sempre com wrap Int32. O bootstrap
gerado deve instalá-los após Config.Create e antes dos recursos. A execução de
UnuseExpirationImages recusa bindings ausentes. A fixture gráfica isolada sem
Config não é usada como prova de contadores do jogo. Graphics atualiza o
checkCount após desenhar, e Use/Unuse encaminham a operação à thread de UI
quando chamados de outro worker com IApplication ativo.

`tools/test_image_lifetime.py` compara **56/56** observações dos corpos
originais em .NET 10 e Mono 2.6.5: carregamento tardio, alias e alteração do
source antes da recarga, threshold, bloqueios, expiração local/global,
descarte/recarga, pressão de capacidade, wrap de frames e COUNT_ENABLE.
Seis asserções nativas adicionais cobrem bindings ausentes, coleta do ciclo do
loader e ownership da lista até expirar. Texturas/decoders dos oráculos são
próprios; atlas, conversão de formatos, OOM e renderização Android continuam
fora dessa prova. O recibo não alega boot nem promove automaticamente métodos.

## Registro desta etapa

| Frente | Evidência | Resultado |
|---|---|---|
| Flags dos recibos Sound/Storage | reruns com e sem leitura local distinguida | assets reais separados do oráculo sintético |
| SaveRecorder/FEP | tabelas TypeDef e CIL das duas DLLs | ausência de Recorder comprovada; FEP dinâmico |
| Config.Create | metadados e oráculos .NET/Mono | 27 cópias, quatro exclusões |
| Execute/OnDraw | corpos originais contra adapters nativos | 48/48, nove IDs |
| Main/Language e dados | fontes e contratos de integração | gerados; nenhum substituto manual |
| Fases de Awake | corpo original e seis cenários em dois perfis | 12/12; quatro políticas nativas; ainda sem prova de boot |
