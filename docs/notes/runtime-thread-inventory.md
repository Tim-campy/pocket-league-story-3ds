# Threads: inventário estático para a medição do runtime

Referência somente leitura: tag `v1.0.0-csharp-reconstruction`.
Esta leitura identifica caminhos de criação e referências compartilhadas;
não prova quais workers executaram nas janelas de 300 frames. Essa distinção
impede usar ausência de amostras de uma thread como prova de exclusividade.

| Origem no C# | Worker / dados que atravessam threads |
|---|---|
| `form.BootForm.Init` → `BootForm.Run` | A própria instância de BootForm; estado, resultado do registro, erro e dados carregados são observados por Update/Draw. |
| `form.SpForm.Update` → `SpForm.Run` | Instância do formulário, seleção, tarefas e estado de conclusão. Dois locais de criação. |
| `system.KairoService.Update` | Delegate captura a instância; usa BillingManager, autoProvision_, provideThread_ e ConnectForm.close_. |
| `system.form.RestoreForm.Init` | Delegate publica result_ e message_ para Update. |
| `system.form.MatchForm.ThreadStart` → `Run` | Formulário, upload_, dados de save, estado/erro e serviços de rede. |
| `system.form.HttpForm.Init` → `Run` | Formulário e resultData_; Update/Draw observam threadState_. |
| `system.form.FriendForm.Init/Update` | Nove locais sintáticos de criação de delegates; instância e tarefas da interface/rede. Os conjuntos exatos de capturas ainda precisam de vínculo por ocorrência. |
| `system.form.BillingForm` → `Run` | Instância do formulário e estado da operação de cobrança. |
| `system.billing.ui.BillingManager.Provisioning` | Delegate chama ConnectRegistMarketPurchase; esse caminho não autoriza conceder compras no port offline. |
| `kairo.unity.form.FormManagerBase.StartLoading` → `Run` | loadingForm_, printForm_, Canvas e contexto de desenho. |
| `kairo.unity.form.FormManagerBase.Capture` | Delegate captura contexto de captura, Canvas e callback; parte da operação é despachada à UI. |
| `kairo.unity.ui.Handler.PostAtTime/PostDelayed` → `Run` | postQueue_ e delegates; Post despacha a execução à UI. Dois locais de criação. |
| `kairo.unity.ui.SaveRecorder.SaveGame` → `AutoSaveRun` | Property, buffers e callbacks armazenados em asProperty_/as*Method_; flags de cancelamento e repetição. |
| `kairo.unity.analytics.AnalyticsTracker.DispatchPageView` → `Run` | Buffer estático protegido por lock_, thread_ e solicitações de rede. |

`java.lang.JThread` contém os dois construtores que criam System.Threading.Thread.
Seu `CurrentThread` também cria um wrapper JThread, mas associa Thread.CurrentThread:
isso **não** inicia outro worker. Contar esse wrapper como criação de thread seria
incorreto.

A varredura dos dois assemblies encontra 27 ocorrências de construção:
18 no jogo e nove na KairoLibrary. Das nove, duas são os construtores de
`JThread` encaminhando para `Thread`, e uma é o wrapper de `CurrentThread`.
Restam 24 sítios de criação no nível dos consumidores (18 + 6), não 24
threads simultâneas. Instâncias reais dependem do fluxo e de chamadas repetidas.
Os sítios estão em `BootForm.cs:120`, `SpForm.cs:318/325`,
`KairoService.cs:198`, `BillingForm.cs:957`,
`FriendForm.cs:231/371/470/678/724/788/837/911/957`, `HttpForm.cs:108`,
`MatchForm.cs:362`, `RestoreForm.cs:33`, `BillingManager.cs:903`,
`FormManagerBase.cs:872/1097`, `AnalyticsTracker.cs:103`,
`Handler.cs:48/61` e `SaveRecorder.cs:224`, sob os respectivos assemblies
em `reference/src/`.

No C++ da API/runtime, a criação explícita de worker `std::thread` é
centralizada em `managed_thread.cpp`, `Thread::Start`, linha 69 nesta rodada.
Isso não inclui threads internas das bibliotecas/plataforma. O fluxo offline
de registro troca a operação de rede em `AppData.CgiRegist`; não elimina por
si só o worker de `BootForm.Init`. Da mesma forma, tornar cobrança indisponível
não prova que todas as classes de formulários/rede deixaram de ser acessíveis.

O runtime C++ implementa Thread::Start/entry em
`src/kairo/common/managed_thread.cpp`: o worker retém a instância Thread, registra
GcMutatorScope e coopera com safepoints. A fila de UI de IApplication usa mutex
e mantém delegates até o despacho. O coletor global conhece mutadores e objetos
das várias threads; não é uma estrutura demonstradamente exclusiva da UI.

## Consequência para as otimizações

O caminho rápido de inicialização de tipos usa publicação atômica acquire/release;
não pressupõe uma única thread. A remoção de registros fracos expirados conserva
o mutex do coletor e não coleta objetos vivos.

Contagem não atômica global, retirada de locks da fila de UI ou do coletor não
estão aprovadas por este inventário. Para propor qualquer uma delas será preciso
provar confinamento/transferência dos objetos e medir o ganho. Os caminhos de
serviços removidos/offline precisam ser vinculados aos overrides efetivamente
gerados antes de serem excluídos da análise.

## Auditoria ARM desta rodada (apos 75f0dad)

Os 24 sitios acima convergem para JThread/Thread.Start; isso e um inventario
estatico, nao prova de que todos os 24 foram executados. O caminho comum usa
std::thread -> __gthread_create -> pthread_create -> __syscall_thread_create
-> threadCreate. O header instalado gthr-default.h (armv6k/fpu, GCC 16.1.0),
linhas 706?709, encaminha para pthread_create com atributos NULL.

No ELF autenticado da baseline (SHA 438eab432a3dcbcf08107577d2f317a050d7932d565e881c46c7b1dce6a4aea2),
__syscall_thread_create, 0x0141cfd0, passa prioridade 0x3f, pilha default
0x8000 bytes, core_id=0 e detached=false para threadCreate. Esses argumentos
foram lidos do disassembly ARM; nao foram inferidos do numero de nucleos.
O header instalado libctru/include/3ds/thread.h identifica o core 0 como o
nucleo da aplicacao, sempre disponivel. Portanto esse caminho de criacao nao
exige um segundo nucleo de aplicacao no Old3DS. O custo e progresso reais
nesse perfil continuam sem medicao de frames.

Mutexes/condicoes continuam sincronizados. __syscall_cond_wait, 0x0141cf78,
encaminha para CondVar_WaitTimeout; Thread.Sleep/Join fazem esperas com prazo,
e platform_condition_wait reavalia o predicado protegido a cada 1 ms no ARM.
Nao se adotou contagem nao atomica nem retirada de locks. A fixture anterior
com espera indefinida que falhou nao demonstra, sozinha, defeito da libctru.

Durante a repeticao do carregador, duas capturas RSP enumeraram todas as tres
threads visiveis:

| Thread | Estado observado | Primitiva / limite da evidencia |
|---|---|---|
| 1 | Executando conversao de caixa/collation na primeira captura; chamada de FS na segunda | PC em std::_Function_base::_M_empty, LR em culture_to_lower; depois svcSendSyncRequest/FSUSER_OpenDirectory. Os marcadores provam repeticao ativa de carga. |
| 2 | Espera do servico APT | svcWaitSynchronizationN, LR aptEventHandler. |
| 3 | Espera com prazo | svcArbitrateAddress, LR CondVar_WaitTimeout; registradores mostram prazo proximo de 1 ms. O chamador logico acima dessa primitiva permanece UNKNOWN. |

RSP fornece registradores/contextos e memoria de pilha. As palavras da pilha
nao foram tratadas como um unwind certificado, nem os contextos salvos como
prova de deadlock. O primeiro host_update continua sem terminar por repeticao
do indice 0 em ResourceManager.LoadStart; detalhes e proposta nao aplicada em
resource-loading-yield-decision.md. O emulador foi encerrado apos preservar
logs e registradores; nao ficou um benchmark preso rodando em segundo plano.
