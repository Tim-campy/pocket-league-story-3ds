# Campos compartilhados no boot

## Evidência e limite

`tools/inventory_boot_concurrency.py` vincula o C# reconstruído completo com
Roslyn, usando as referências históricas já autenticadas pelo inventário de
cultura. Não executa as DLLs. O helper tem fixture própria que distingue escrita
no campo, incremento, leitura da referência do array e escrita em seu elemento.
O JSON `config/phase2-boot-concurrency.json` registra hashes dos fontes, DocIDs,
leitores/escritores e linhas, sem valores iniciais, literais ou assets.

Foram encontrados **73 campos em 439 acessos diretos de BootForm** e **323
arestas de chamada explícitas**, abrangendo todos os métodos da classe, não
apenas os cinco pontos de entrada. Destes campos, **18 pertencem a BootForm**.
A análise abaixo separa progresso visível durante Run de dados que o código UI
só consulta depois de um estado de publicação. Nenhuma classificação altera
o fonte, o emissor, as APIs nativas ou estados de progresso.

As threads consideradas são a UI que executa Init/Update/Draw/Finish e o worker
criado por Init → `new JThread(this)` → Start → Run. A fundação C++ de Thread.Start
deve publicar ao worker os dados anteriores ao início. RunOnUiThread(wait=true)
publica parâmetros para a UI e resultados/exceções de volta ao worker; isso
protege apenas o callback encaminhado, não todo o objeto ou todo Run.

O scanner não expande despacho virtual/interface/delegate, accessors/operadores
implícitos, enumeradores ou inicializadores de campos/cctors em uma prova
exaustiva. Alcances adicionais são **UNKNOWN**. Um conjunto de leitores em
outros métodos no JSON não prova que todos executem durante o boot.

## Os 18 campos de BootForm

Todos os IDs abaixo têm prefixo `F:form.BootForm.`. Nenhum dos 18 é volatile
no fonte. As linhas citadas são de `reference/src/Assembly-CSharp/form/BootForm.cs`.

| Campo | Escrita | Leitura | Classificação e tratamento necessário |
|---|---|---|---|
| `state_` | ChangeState:342; chamada por Init/Update/UI e Run/worker | Update:139/174/179, Draw:220–230, Run:377/412/433, ToString:93 | Controle concorrente; cada acesso deve ser seguro. Uma store release e a load acquire que observar aquele estado podem publicar os dados anteriores. Conservar as várias leituras originais; não criar um snapshot por método. |
| `loadCnt_` | Run:374; Load:530 e incrementos; Download também escreve | Draw:228 e logs do worker | Progresso durante carregamento. Cargas e stores individuais, sem tornar `++` um RMW indivisível. |
| `loadMax_` | Run:373, Load:529; Download também escreve | Draw:228 e logs | Progresso concorrente. Não garantir artificialmente um snapshot consistente com loadCnt_. |
| `bowWait_` | Init:116; Run:454–480, incluindo decremento | Draw:224/241 e o próprio Run | Progresso concorrente, não dado acessado somente após conclusão. A expiração da espera e o toque continuam na ordem original. |
| `frame_wait` | Update:137 lê e grava; ChangeState:343 grava também no worker | Update:137 | Dois escritores. O reset ocorre **depois** da store de state_; a publicação por state_ não o protege. Preservar load → cálculo com wrap/módulo → store, inclusive atualização perdida. |
| `e_` | Run:406/427/446 | Update:146/170, dentro do ramo state_ == erro | Payload publicado pelo estado: sem leitura UI direta comprovada antes do ramo de erro. Pode permanecer ordinário somente se houver uma relação de publicação real e nenhum escritor posterior concorrente. Alcance virtual dos métodos da exceção é UNKNOWN. |
| `error_` | Init:118 antes de Start; Run:407/428/447 | Update:152/158/164, no ramo de erro | Mesmo contrato de publicação por estado. A referência/string não é protegida por ser um shared_ptr ou UTF-16. |
| `regist_` | Init:119 antes de Start; Run:416 | Run:455/457; Update:181/187 somente no ramo state_ == fim | Array produzido pelo worker, consumido pela UI após publicação. Seus elementos não são modificados depois de atribuir a resposta nesse caminho. Não precisa virar um array de bytes atômicos se a publicação e a ausência de escritores posteriores forem comprovadas. |
| `resLoad_` | Init:107/108, antes de Start; Finish:262 | Update, Draw/SmartBeginPaint/LoadBox e Finish, todos UI no caminho normal | O worker não lê nem escreve este campo. O carregamento da tela de progresso não é o ResourceManager que Run carrega em AppData. |
| `dialog_` | Update:152 | Update:141/153 | UI, não acessado pelo worker. É o campo oculto de BootForm, distinto de MyFormBase.dialog_. |
| `frame_main` | Update:138 | A própria expressão em Update | UI; nenhum acesso do worker encontrado. |
| `anime_cnt` | LoadBox:276 | LoadBox:276–278 | UI/Draw. |
| `anime_mode` | LoadBox:280 | LoadBox:301 | UI/Draw. |
| `anime_ballY` | LoadBox:281 | LoadBox:303/304 | UI/Draw. |
| `frame_` | Nenhuma atribuição explícita encontrada | Draw:224/241 | Zero de inicialização CLR no corpus vinculado; não foi encontrada mutação concorrente. Isso não autoriza remover o campo ou mudar a lógica da animação. |
| `loop_` | Init:115 | Nenhuma leitura explícita encontrada | Sem mutação no worker. |
| `th_` | Init:120 e finally de Run:487 | Init:121, para chamar Start | No primeiro boot, a leitura ocorre antes de iniciar o worker. Não é um polling de conclusão. Reentrada de Init antes do finally anterior terminar é UNKNOWN, pois não há Join. |
| `softLabels_` | Inicializador estático readonly | ChangeState:340 | A referência é readonly e não há escrita de elementos no corpus vinculado. Pode ser compartilhada após inicialização estática; não confundir com os labels mutáveis de FormBase/Canvas. |

Contagens: quatro campos de controle/progresso concorrentes; um campo com RMW
e dois escritores; três payloads candidatos à publicação por estado; seis
campos de UI; dois sem mutação de worker; um handoff de lifecycle com reentrada
UNKNOWN; uma referência readonly sem mutação de payload encontrada.

## Publicação não é término da thread

Run grava payload antes de ChangeState(erro) ou ChangeState(fim). Uma futura
implementação release/acquire pode proteger esses payloads no consumidor que
observa o estado correspondente. Isso é um contrato **a implementar**, não uma
barreira já presente no campo ordinário do port.

No fim normal, ChangeState(fim) precede o finally que grava th_ = null. Portanto
ver estado final não comprova que a thread parou. Não introduzir Join ou esperar
th_ no fluxo UI sem uma decisão separada: o fonte não faz isso. Finish tampouco
interrompe ou aguarda o worker. Remover o formulário durante Load/terminação e
reinicializar a mesma instância exigem outra auditoria; não são cobertos pela
classificação de propriedade no caminho normal acima.

ChangeState faz SetSoftLabel, depois grava state_ e só então zera frame_wait.
Não converter o método todo em uma transação nem encaminhá-lo inteiro à UI
para esconder as races: isso mudaria os pontos de interleaving do programa.

## Caminhos transitivos confirmados

### Labels e modo de processamento

`BootForm.ChangeState` → `FormBase.SetSoftLabel` não encaminha à UI. O método
consulta CheckUsable → FormManagerBase.CheckUsable, que lê
`F:kairo.unity.form.FormBase.formProcMode_`; a UI escreve esse modo ao terminar
Init e ao selecionar Finish. É uma race também na API nativa `FormBase.mode_`,
não apenas no C++ gerado.

Quando utilizável, o worker escreve separadamente:

- `F:kairo.unity.form.FormBase.leftSoftLabel_`;
- `F:kairo.unity.form.FormBase.rightSoftLabel_`;
- `F:kairo.unity.form.FormBase.softLabel3_`;
- `F:kairo.unity.form.FormBase.softLabel4_`;
- elementos de `F:kairo.unity.ui.Canvas.softLabel_`.

Os getters/transferências do FormManager leem os quatro primeiros, e
`FormManagerBase.Updated` → `Canvas.UpdateSoftLabel` lê os elementos de
softLabel_ e escreve `F:kairo.unity.ui.Canvas.showSoftLabel_`. No caminho normal,
showSoftLabel_ é escrito e lido na UI; softLabel_ é escrito também pelo worker.
Proteger apenas a referência do array não protege seus elementos String. Cada
load/store de referência precisa ser seguro, conservando identidade, GC e a
ordem das quatro operações. O fonte permite uma observação mista durante a
atualização; não exigir um snapshot dos quatro labels.

### Pulso de entrada consumido no worker

Run:478 chama `Canvas.CheckKeyPulse` durante a espera. O método original
(`Canvas.cs:1016`) lê `F:kairo.unity.ui.Canvas.keyPulse_` e escreve o resultado
com aquele bit removido. A UI também escreve keyPulse_ em DecideKeyState,
ClearKeyBuffer e CheckKeyPulse chamado por BootForm.Update. Portanto não é uma
consulta readonly. A implementação nativa correspondente é
`CanvasKeyState::pulse_`; sua carga/store também precisa de tratamento. Trocar
por fetch_and retiraria uma atualização perdida possível no fonte.

### Dados do AppData

Load atribui **27 campos de AppData**; a lista exata com DocIDs é
`worker_load_written_appdata` no JSON. Inclui referências para tabelas/arrays,
textos e cinco ResourceManagers (`resCom2_`, `resHuman2_`, `resHumanHead_`,
`resEvent_`, `resSound_`). Há ainda `UserData.TALK_SCHARA_*` e estruturas estáticas
derivadas por Load2/CreateMap/ProcCommonMethod. Não há conteúdo desses dados
neste inventário.

O campo de referência pode ser atribuído **antes de preencher o objeto/array**.
A UI normal do Boot desenha resLoad_, não essas tabelas. O teste de resCom2_
para abrir o diálogo está dentro do ramo de erro; a mudança para Title está
dentro do ramo de fim. A publicação deve abranger todos os elementos e objetos
anteriores, não apenas a referência externa. Leituras transitivas durante
callbacks virtuais, impressão/debug, lifecycle extraordinário e reentrada
continuam UNKNOWN; a lista de leitores no resto do jogo não é prova de ausência
de execução concorrente.

`F:main.AppData.sysSave_` é criado/carregado por Init antes de Start. Run altera
elementos de `F:kairo.unity.util.Property.ints` e SaveSystem serializa o payload.
No fluxo normal, a escrita de versão pela UI ocorre depois do estado final.
Não concluir daí que Property ou SaveSystem inteiro é thread-safe: o catch de
Main.OnUpdate e lifecycle/reentrada precisam ser analisados quando houver save
de jogo prévio ou exceção durante o carregamento.

### ResourceManager

LoadStart aloca `img`, `seb` e `sound` no chamador e preenche itens em callbacks
`RunOnUiThread(..., true)`; incrementos de seu loadCnt_ também ocorrem nesses
callbacks. Reindexação dos arrays, otimizações e a gravação de loaded_ acontecem
fora deles. Portanto **ResourceManager inteiro não pertence à UI**. A fila e o
wait fornecem publicação para cada etapa, mas não autorizam desenhar um manager
que o worker ainda modifica. Os contadores de ResourceManager não são os
contadores de BootForm usados pela tela de progresso.

`jarCache_` não tem lock próprio. Os callers conhecidos de OpenJarCache, nos
corpos Image.Use e ResourceManager.LoadJarImages, estão em callbacks de UI;
CloseJarCache é chamado no desenho UI. Essa é uma condição de confinamento dos
caminhos conhecidos, não uma garantia thread-safe do método interno isolado.
Preservar o encaminhamento das folhas nativas e não ampliar essa conclusão a
callers dinâmicos não comprovados.

### Config e referências herdadas

As referências de MyFormBase (`app_`, `apdat_`, `canvas_`, `formMan_`, `view_`,
`pad_`) são atribuídas antes de Start. Thread.Start deve publicar esses objetos
para Run. Isso não protege todos os campos mutáveis dos objetos apontados.

REGIST_ENABLE, PRINT e DEBUG_CMD são lidos por Run/Load; no caminho direto do
boot, suas atribuições de configuração precedem Start. SHOW_DEBUG é alternado
por Update/UI, e o alcance de todos os construtores chamados em CreateAllClass
não foi declarado seguro. Config.checkCount_/createImageArea_ e demais
contadores de desenho exigem preservar o encaminhamento à UI dos métodos Image
originais. Um atalho nativo que mova essas operações para o worker cria uma
race que não é resolvida por tornar apenas state_ atômico.

Download, UpdateScoreFromNetwork e DivServerData têm zero callers de invocação
ou construção vinculados encontrados no corpus. Não foram promovidos à rota
executada de Run nem declarados impossíveis por reflexão/virtualidade externa.

## Fixtures propostas para o lowering por campo

São propostas de testes próprios, sem assets ou lógica do jogo escrita à mão.
Usar eventos/barreiras para fixar a ordem, não sleeps para tentar reproduzir uma
race. Executar o C# novo no Mono histórico e comparar o C++ emitido; os fixtures
de instrumentação devem mostrar as operações individuais, não transformar o
código original em uma operação Interlocked.

| Fixture | Interleaving/controlador | Resultado a conservar |
|---|---|---|
| Publicação por Start | UI inicializa referências e elementos; depois inicia worker | Worker vê o objeto inicializado; sem copiar os objetos ou inventar null. |
| Incremento comum | Dois workers carregam o mesmo zero; ambos calculam e gravam um | Resultado um é permitido; fetch_add que produz dois reprova. Incluir postfix/prefix e wrap. |
| Reset de frame_wait | UI carrega valor antigo; worker grava zero; UI grava seu cálculo antigo | A atualização perdida continua possível. Testar também a ordem inversa. |
| Consumo de keyPulse | Dois consumidores carregam a mesma máscara e retiram bits distintos antes das stores | Pode restar um bit por atualização perdida; não substituir por fetch_and. |
| Payload publicado | Worker preenche array/objeto e grava estado release; UI observa estado acquire e só então lê payload | Identidade e elementos publicados ficam corretos; antes do estado, o teste não lê payload ordinário concorrente. |
| Labels por elemento | Worker grava primeiro label e é pausado; UI lê antes dos demais | Mistura de antigo/novo é possível, sem shared_ptr race ou pacote indivisível de quatro labels. |
| Progresso sem snapshot | Pausar entre stores de loadCnt_ e loadMax_; observar cada load na ordem de argumentos | Não exigir que o par pertença à mesma etapa; esquerda para a direita é preservada. |
| Estado final antes do finally | Pausar worker após gravar estado final e antes de limpar th_ | UI pode observar fim enquanto a thread ainda existe; nenhum Join é adicionado. |
| Publicação de exceção/string/array | Publicar cada uma das três formas de referência em campos diferentes | Preservar identidade, tipo, UTF-16 e GC; não devolver um clone genérico como substituto. |
| Receiver e valor do incremento | Receiver com efeito observável, prefix/postfix e alias | Avaliar receiver uma vez, fazer load/cálculo/store na ordem e devolver valor correto. |

Não se propõe serializar toda a simulação nem tornar todos os elementos das
tabelas atômicos. Primeiro tratar os acessos de progresso e os pontos nativos
confirmados; depois validar os contratos de publicação e ampliar o alcance
somente onde a evidência de execução exigir.
