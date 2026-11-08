# Serviços locais e serviços removidos — decisões da Fase 2

Estas políticas aplicam as decisões explícitas do usuário após o inventário 33d8447. A referência continua somente leitura em `reference/`, tag `v1.0.0-csharp-reconstruction`. Nenhuma alteração é feita no C#; as substituições pertencem ao tradutor/plataforma. Literais do C# podem permanecer no C++ gerado conforme a decisão posterior do usuário; conteúdo extraído dos assets continua exclusivamente local.

Implementação nativa: `src/kairo/common/services.hpp/.cpp`, namespace `pls::services`. Política por símbolo: `config/service-overrides.json`, gerada por `python tools/write_service_policy.py`. **O teste da política nativa não prova que os overrides já foram ligados ao jogo traduzido nem que o boot funciona.** O recibo mantém integração `PENDING` até o emissor gerar, compilar e exercitar esses chamadores.

## Registro: resposta e identidade são contratos diferentes

`main.AppData.CgiRegist(string,string)`, `reference/src/Assembly-CSharp/main/AppData.cs:1945–1953`, tem um ramo local explícito. Sua resposta é exatamente os cinco bytes ASCII/UTF-8 **`1\n202`**. A implementação `OfflineServices::register_local_wire()` reproduz essa resposta sem transporte, criando antes a identidade persistente local. Falha de armazenamento lança `PersistenceError`: não se informa sucesso se o identificador não pôde ser persistido. O bridge para o runtime deve converter esse erro na exceção de IO correspondente.

`BootForm.Run`, `reference/src/Assembly-CSharp/form/BootForm.cs:371–489`, permanece gerado a partir do fonte. Seu estado de registro chama CgiRegist, grava o contador 30 em `sysSave_.ints[5]`, salva e continua ao estado de carregamento. `BootForm.Update:181–199` e `Run:455–463` leem somente a **segunda linha** como versão; a primeira linha não é atribuída a um UID. Portanto substituir a primeira linha por um identificador novo alteraria o protocolo sem necessidade.

A identidade é um valor aleatório de 128 bits, salvo em arquivo próprio `port-services/device-id.txt` sob o diretório de preferências fornecido pelo host. Esse arquivo não é um save do jogo. O host deve construir `OfflineServices`, instalar seu ponteiro e chamar `device_id()` **antes de construir Main**, para que o ID exista mesmo quando o contador/flag do boot não chama CgiRegist. Nenhum MAC, serial de hardware, conta, endpoint ou rede é consultado.

**Identidade de aparelho não é identidade de conta.** `KairoBase.GetUserId/GetUserIdInt/CheckUserId`, em `reference/src/KairoLibrary/kairo/unity/system/KairoBase.cs:1739–1759`, conservam integralmente o corpo original e o valor armazenado, inclusive string vazia. Não existe override de GetUserId nem surrogate numérico na implementação nativa. `ConnectLogin:695` e o save de KairoBase continuam sendo as rotas originais que alteram o UID de conta; a resposta de CgiRegist não o atribui. Nenhum friend ID, login, compra ou provisão é criado pelo identificador local de aparelho.

Isso importa ao ramo `KairoService.Run:103–121`: ele testa `CheckUserId() && !friend_.CheckRegistFriend()` antes de abrir FriendForm. Como CheckUserId consulta o getter original, uma conta anteriormente vazia continua vazia; o ID de aparelho não ativa esse fluxo. A busca no corpus não identificou uso de `deviceUniqueIdentifier`, GetDeviceId/GetAndroidId/GetUUID ou consumidor explícito equivalente. O host e CgiRegist garantem a persistência local, e o valor fica disponível somente ao serviço de plataforma.

O arquivo usa um formato técnico novo versionado. A criação usa lock de diretório entre processos e rename de arquivo temporário, além de mutex na instância. Um arquivo inválido não é substituído silenciosamente. Locks de uma execução interrompida exigem recuperação explícita em vez de gerar outra identidade. Foi testado reinício normal de processo; durabilidade contra perda de energia não foi medida.

## Cobrança indisponível, sem inventário vazio destrutivo

`BillingManager.UpdateBillingItems(bool)`, `reference/src/Assembly-CSharp/system/billing/ui/BillingManager.cs:363–438`, **não executa seu corpo original** no backend indisponível. O corpo original pode retirar estados quando o inventário remoto vem vazio (`:433–436`); por isso não basta devolver `new Inventory()`.

| Operação | Política nativa/emissor |
|---|---|
| Consultar disponibilidade | `Availability::unavailable` |
| Atualizar inventário/recuperação | Retornar sem consultar rede, remover itens ou modificar qualquer campo |
| Comprar | `false` no fluxo bool; `null Purchase` no fluxo StoreBase; nenhum callback de compra |
| Restaurar | `StoreBase.RestoreResult.Faild` (valor 1), deixando o chamador original apresentar sua saída de falha |
| Inicialização | O backend local está pronto imediatamente; não girar em WaitForInitialized nem confundir isso com loja disponível |
| Aplicar/registrar tarefas pagas pendentes | Não processar, conceder, cancelar, consumir ou retirar tarefas; conservar os dados existentes |
| Consultar provisões já salvas | Conservar getters e modelo de dados originais; não devolver false indiscriminadamente |
| Serializar/carregar estado | Conservar o formato original, inclusive campos desconhecidos; o serviço não implementa outro modelo de save |

Os overrides defensivos abrangem `BillingManager.LaunchPurchaseFlow/Purchase/RegistApplyTask/UpdateApplyTask/ExecuteApplyTask/Provisioning/Cancel` e os overrides de `MyBilling`. Isso impede que `KairoService.Update:185–243` ou um callback derivado reintroduza uma concessão/cancelamento por outro caminho. O serviço C++ não recebe ponteiro mutável para save e não invoca callback de provisão. Recompensas normais da simulação, fora da integração de billing, não são modificadas por essa política.

O fluxo `CallRestoreFlow` conserva o ramo de erro do fonte quando `Restore` devolve Faild; ele não recebe confirmação fictícia. `IsInitialized=true` significa apenas que a fachada indisponível já terminou sua inicialização, evitando o loop original de espera. A disponibilidade é reportada separadamente. `ConnectRegistMarketPurchase/ConnectGetMarketPurchase` não fazem transporte. Uma lista vazia não entra no ramo que remove direitos.

## Anúncios removidos

Todos os estados de anúncio são ausentes: `enabled=false`, `loaded=false`, `started=false`, altura **zero**. Isso é uniforme nos caminhos de tamanho/orientação, não apenas na construção inicial do SDK.

- `surface.SurfaceManager.UpdateAdMobView:224–235`: forçar `Config.ADMOB_ENABLE=false`, manter Canvas sem anúncio e conservar a atribuição não relacionada `GamePad.SIZE_PLAIN=65` do fonte.
- `Canvas.UpdateAdMobView:1623–1661`: não criar JNI/gerenciador; limpar os campos transitórios de anúncio e retornar que não há operação pendente.
- `AdMobView.GetAdHeight:42–60`: devolver zero inclusive nos caminhos que antes calculavam densidade sem objeto Java; `IsLoad/IsStart` devolvem false.
- `InterstitialAd.Load/Show/GetState`: false/no-op/`State.None=-1`, sem espera ou laço de SDK.
- `Tapjoy.ShowOffers`: false e `OfferState.Failed`; saldo importado e seus getters não são zerados nem recompensas concedidas.
- `GameBanner.Draw`: não desenhar o fallback promocional local nem usá-lo como substituto do anúncio removido. Ele não modifica a simulação, e a altura zero permanece consistente.

Os ajustes de dimensão continuam sendo os do jogo sem anúncio. Este documento não propõe telas, escala, fonte ou controles do 3DS.

## Licenciamento: caminhos transitivos verificados

1. **`HttpObject._connect` → `KairoPlugin.LicenseCheck` → JNI.** É o ramo de registro em `reference/src/KairoLibrary/kairo/unity/io/HttpObject.cs:94–140`. O hook local de AppData.CgiRegist intercepta o fluxo antes do HTTP. Não existe implementação JNI ou consulta de licença no port; não se inventa um resultado de licença para prosseguir por esse ramo original.
2. **Fachada `LicenseChecker.DoCheck`.** Em `reference/src/KairoLibrary/kairo/unity/licensing/LicenseChecker.cs:51–59`; a busca no corpus reconstruído encontra sua declaração, não um construtor/chamador do jogo. A API removida não entra na dependência de runtime. Uma chamada futura inesperada deve gerar diagnóstico, não uma falsa licença remota.

O serviço expõe apenas `Licensing::not_applicable`, sem rede, chave pública de loja ou conta. O pipeline continua exigindo o APK local autenticado. O `GetUserId` original não é resultado de licenciamento e não concede itens pagos. Ativação dinâmica externa não presente no fonte não foi executada; não é evidência de uma chamada observada.

## Notificações: cada entrada transitiva termina localmente

| Caminho do fonte | Tratamento |
|---|---|
| `IApplication.Init` → CancelNotifications/SetNotificationBackground | No-op de plataforma, sem agendamento |
| `IApplication.OnApplicationPause/Resume/Quit` → NotifyManager + KairoPlugin | Preservar lifecycle do jogo; folhas de notificação são no-op |
| `FormManagerBase.Update` → NotifyManager.UpdateValues | Nenhum dado novo de notificação; simulação e formulários continuam |
| `NotifyManager.SendString/SendText` → KairoPlugin.SendNotification | Todos os overloads terminam sem enviar/agendar |
| `NotifyManager.SendPushString/SendPushText` → KairoBase.ConnectNotificationSend | Retorno local antes de HTTP, mesmo quando gerente é null |
| `KairoBase.Connected` → push registration | `IsPushEnable=false`; registrar e enviar são no-op |
| `KairoBase.SetGameState` → NotifyManager lifecycle | Nenhuma operação externa |
| `MyNotify.OnNotify/OnReceiveValue` | Sem evento externo para despachar; não aplicar conteúdo à simulação |
| `DeviceUtil.CheckPushNotification` | False em vez do antigo fallback iOS true |
| Folhas KairoPlugin Get/Remove/Filter/Background/Cancel | Lista vazia, filtro None e no-op; nenhum acesso JNI/OS |

Referências completas: `NotifyManager.cs:30–238`, `IApplication.cs:225–226/440–461/500–505`, `FormManagerBase.cs:442–444`, `KairoBase.cs:1675–1693/2332–2346/2567–2582` e `KairoPlugin.cs:979–1058`. Desligar só push não bastava: SendString agendava localmente independentemente dessa flag, e gerente null não satisfazia a guarda original de ConnectNotificationSend. Ambos foram abrangidos pela política. Dados previamente importados não são entregues como novas notificações nem usados para acionar a simulação.

## Testes e o que ainda não foi provado

`python tools/test_services.py` compila C++17 com MSVC existente, `/W4 /WX /fp:strict`, sem instalar ferramentas. Os testes próprios verificam resposta de registro, identidade estável após dois processos reais, nova identidade em outro diretório, UID vazio e prévio conservados, rejeição de identidade inválida sem substituir o arquivo, save sintético com bytes/campos desconhecidos intacto após todas as operações indisponíveis, ausência de concessão, anúncios zero e notificações vazias/desligadas. Recibo gerado: `config/phase2-services-tests.json`.

Não se executou jogo original, não se observou ainda título/menu/partida no C++ e não se marcou nenhum método real como traduzido/executado por esses testes. O bridge do emissor, os layouts de save reais e o boot ponta a ponta continuam pendentes até seus próprios recibos. O documento distingue implementação nativa testada de integração real.

Uma proposta intermediária de preencher o UID de conta a partir do ID de aparelho foi retirada antes da integração: ativaria CheckUserId e possivelmente FriendForm sem autorização. A implementação final não contém esse helper nem override de identidade de conta. São 49 assertions nativas; a fixture de conta é sintética, e o script também confere o corpo original do getter/check e a ausência desses overrides na política.
