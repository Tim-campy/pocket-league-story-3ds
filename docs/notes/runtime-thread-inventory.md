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
