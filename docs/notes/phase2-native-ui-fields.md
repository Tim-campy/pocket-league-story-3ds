# Campos nativos que cruzam o worker do boot

Esta nota acompanha `phase2-boot-concurrency.json`; não amplia o alcance do
inventário para reflexão, callbacks virtuais desconhecidos ou reinicialização
simultânea do jogo. Nenhum teste abaixo é um boot do jogo.

## Cargas e stores implementados

`BootForm.ChangeState` chama `FormBase.SetSoftLabel` no worker. O caminho
`FormBase.CheckUsable` → `FormManagerBase.CheckUsable` lê o modo do próprio
formulário; não consulta nem percorre a pilha de formulários. O gerente foi
atribuído em `FormManagerBase.Push`, antes de `BootForm.Init` iniciar o worker.
No caminho de boot inventariado não há nova atribuição desse gerente durante
o worker. Cancelamento/reinicialização concorrente continua `UNKNOWN`.

| Campo original | Representação nativa | Operações preservadas |
|---|---|---|
| `FormBase.leftSoftLabel_`, `rightSoftLabel_`, `softLabel3_`, `softLabel4_` | Quatro `SharedField<String>` independentes | Quatro stores em ordem; getters copiam uma referência por leitura; GC percorre cada slot. A alteração não faz as quatro labels virarem uma transação. |
| `FormBase.formProcMode_` | `SharedField<int32_t>` | Cada ocorrência do fonte é um load/store distinto, incluindo as releituras após `Init`, `Finish` e `Update`. `IsAlive` mantém o curto-circuito e até três leituras. |
| `Canvas.softLabel_[0..3]` | Quatro `SharedField<String>` independentes | Os setters mantêm a ordem 0–3. `UpdateSoftLabel` lê o slot na comparação e o lê novamente na atribuição, se necessária. Não reutiliza o valor da primeira leitura. |
| `Canvas.keyPulse_` | `CanvasKeyState.pulse_`, `SharedField<int32_t>` | `CheckKeyPulse` lê uma vez em `num`, grava `num & ~key` e testa o mesmo `num`. `DecideKeyState` e `ClearKeyBuffer` fazem stores individuais. |

São dez unidades de armazenamento protegidas: cinco no formulário, quatro
slots do array solicitado e um pulso. `SharedField` protege a cópia da
referência/valor; destrói o valor substituído depois de liberar o mutex. Não há
lock de método, `fetch_add`, `fetch_and` nem serialização global da lógica.

`Canvas.showSoftLabel_` continua sendo o array mostrado pela UI, separado das
labels solicitadas pelo worker. O array protegido `softLabel_` não tem alias
exposto por nenhum acesso encontrado no corpus: os acessos são sua declaração,
os dois setters e `UpdateSoftLabel`. Acesso concorrente ao array mostrado por
um novo callback, fora desses caminhos, não foi declarado seguro.

`FormManagerBase.labels` carrega os quatro argumentos em comandos separados,
na ordem do C#, antes de chamar `Canvas.SetSoftLabel`; a ordem de avaliação dos
argumentos do C++ não é usada para decidir a ordem dos loads.

## Evidência de comportamento

As receitas reproduzíveis são `tools/test_forms.py`,
`tools/test_forms_execution.py` e `tools/test_input.py`:

- Forms: 68/68 observações diferenciais, contra o fonte reconstruído no .NET
  moderno e no Mono do Unity 5.3.4f1. Casos novos fazem `Init` alterar o modo
  para 4 e `Finish` para 1: o chamador relê o modo e respeita a alteração.
- Scheduler: 50/50 observações diferenciais. O caso novo faz `Update` marcar o
  formulário para terminar; o chamador não sobrescreve o 4 com 3 e executa
  `Finish` no ciclo seguinte.
- Input: 56/56 observações diferenciais e 19 invariantes do adaptador PC.
  Quatro observações adicionais instrumentam o armazenamento, preservando o
  corpo original de `CheckKeyPulse`. Um getter de teste altera o valor depois
  da leitura: o resultado ainda usa exatamente um snapshot. Dois leitores
  pausam depois de ler 3 e consomem bits diferentes: ambos retornam verdadeiro,
  mas o valor final é 1 ou 2. A perda de atualização original permanece;
  substituir por um RMW atômico produziria 0 e falharia.
- No oráculo C#, somente essa instrumentação substitui o campo por uma
  propriedade que registra/pausa as operações. Não se afirma que o campo
  original era uma propriedade. O nativo usa a mesma função de produção com
  um adaptador de armazenamento de teste.
- A fixture concorrente de Forms executa 2.000 chamadas ao setter com strings UTF-16
  próprias com NUL e surrogate isolado, enquanto a UI lê, troca modos, atualiza
  as labels e coleta lixo. Os primeiros 100 setters são garantidos antes da
  alternância de modo. Snapshots carregados continuam válidos após substituição
  e coleta. O número de asserts/coletas depende do escalonamento e fica no
  recibo `config/phase2-forms-tests.json`, não é uma contagem fixa de cobertura.

O bootstrap mantém 12/12 observações de ordem e quatro invariantes de
dependências/GC após estas mudanças. A publicação de payload de `BootForm`, as
pilhas de formulários e outros campos não listados não são cobertos pela
alteração dos dez slots.

## Auditoria adicional de IApplication — somente leitura

O root já alterou `IApplication.current_` para
`SharedField<Ref<IApplication>>`: `Init` publica, `GetCurrentApp` carrega uma
referência independente e `host_stop` grava null. Seu teste
`tools/test_ui_dispatch_gc.py` cobre troca/leitura e uma referência carregada
que permanece viva após stop + GC. Essa proteção não torna todos os membros
da aplicação automaticamente seguros.

| Campos nativos restantes | Evidência e classificação no caminho examinado |
|---|---|
| `ui_thread_` | Escrito na construção/`host_start`, antes de `Main.OnCreate` criar os formulários e de `BootForm.Init` iniciar o worker. `Image.Use`/`Unuse` o consultam no worker para despachar à UI. Publicação pelo início da thread no boot; uma chamada concorrente adicional a `host_start` é `UNKNOWN`. |
| `data_path_`, `screen_width_`, `screen_height_`, `initialization_`, `initialization_owner_`, `termination_handler_` | Host configura antes de `host_start`; getters do caminho de recursos/armazenamento podem ser usados no worker. Não foi encontrada reconfiguração pelo host durante esse boot. `release_edges` ocorre com os mutators parados pelo GC; não é um reset concorrente da aplicação viva. Reconfiguração durante execução não foi testada. |
| `viewport_width_`, `viewport_height_`, `viewport_result_` | `Main.OnCreate` chama `SetViewport(240,280)`; `SurfaceManager.AdjustSurfaceLayout` usa `GetViewport` na UI. O getter grava e retorna o mesmo array estático de dois elementos, como o fonte. Não há chamada worker desse getter no boot limitado identificado; uso simultâneo novo não é protegido. |
| `fixed_scale_`, `resolution_scale_` | Layout e `GamePad` leem/trocam escala; `Font.StringWidthF` também consulta escala por callback. As chamadas de layout examinadas são da UI. Alcance de medição de texto por callbacks worker e alteração simultânea de escala é `UNKNOWN`; não foi aplicado mutex nem snapshot global. |
| `focused_`, `visible_`, `termination_`, `created_`, `rendering_`, `frames_`, `update_ms_`, `render_ms_` | O host escreve na UI. Leituras do scheduler/`MyFormBase.Active` examinadas também são UI. Há candidatos fora do boot: `SaveRecorder.SaveGame` lê `IsTermination`; `FormManagerBase.Capture` lê `GetTotalFrames` no worker entre chamadas despachadas à UI; `Offscreen` lê `IsRendering`. A fixture atual não comprova confinamento desses caminhos. `SaveRecorder` não tem subclasse/instância no corpus do boot; captura ainda não é implementada. Não promover esses candidatos a segurança geral. |
| `updating_` | `host_update` escreve; `RunOnUpdate` lê antes de enfileirar. Único chamador explícito do fonte é o construtor de `Canvas`, executado no bootstrap antes do worker do boot. Se outro worker chamar essa API durante update, o read não está protegido: candidato concreto de API, mas alcance atual `UNKNOWN`. |
| `ui_tasks_`, `update_tasks_` | Inserção e remoção já usam `tasks_mutex_` por operação; o callback executa fora do mutex. Os waits de `RunOnUiThread(wait=true)` estacionam o mutator com `GcNativeBlockingScope`, conforme a correção separada do root. A flag `updating_` acima não é protegida por esse mutex. |

Esta auditoria não modificou `application.hpp`, não acrescentou um lock global
e não concluiu ausência de todas as data races. Próximas alterações nesses
campos precisam de um caminho concorrente confirmado e de fixture própria.
