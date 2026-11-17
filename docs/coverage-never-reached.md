# Métodos nunca alcançados

Gerado em 2026-11-17 por `python tools/callgraph/analyze.py` a partir de `config/translation.csv` e do grafo de chamadas estático (Roslyn) do C# reconstruído; recibo em `config/phase2-reachability.json`. Só nomes de métodos do C# reconstruído; nenhum conteúdo do jogo. Regenerar após cada rodada de cobertura.

Modelo: o grafo cobre Assembly-CSharp, as fontes da KairoLibrary compiladas com ele e o adaptador de plataforma gerado. Chamadas virtuais e de interface vão para as sobrescritas em tipos instanciados por código alcançável (análise rápida de tipos); delegados alcançam o método ou lambda no ponto de criação; construtores estáticos são alcançados pelo primeiro uso do tipo. Ramos guardados por flags de `Config`/`MyConfig` com valor de execução constante falso são cortados; os de depuração (`DEBUG` e flags derivadas) formam a classe "só depuração". O modelo do port corta os corpos substituídos por políticas offline (`config/service-overrides.json`) e por ligações de plataforma (`external_methods`/`external_types` do tradutor) e parte das entradas reais da plataforma (`Main`, adaptador gerado, slots virtuais).

| Classe | Métodos |
|---|---:|
| Executados no diagnóstico (`runs`) | 999 |
| Alcançáveis, ainda não executados | 2 |
| **Alcançáveis no total** (executados + não executados) | **1248** |
| Inalcançáveis por política offline / plataforma | 89 |
| Só depuração | 35 |
| Inalcançáveis já no original | 586 |
| Total do livro-razão | 1958 |

Por estado do livro-razão (`embedded` = construtor estático ou lambda emitidos dentro de outro corpo):

| Classe | translated | embedded | todo | no-body | verified |
|---|---:|---:|---:|---:|---:|
| reachable-not-exercised | 2 | 0 | 0 | 0 | 0 |
| unreachable-by-policy | 85 | 4 | 0 | 0 | 0 |
| debug-only | 33 | 2 | 0 | 0 | 0 |
| unreachable-in-original | 550 | 30 | 0 | 5 | 0 |

Cobertura sobre o alcançável: 1044 de 1248 (83.7%). Métodos `runs` que a análise não alcançou: 0.
Executados `runs`: 999; creditados pelo dono ou hospedeiro executado (inicializador de tipo, construtor implícito, lambda): 45; justificados individualmente (`config/coverage-justifications.json`): 202; restam sem execução nem justificativa: 2.


**Escopo do critério 3 (decisão do usuário, 2026-11-14):** o critério exige a execução dos alcançáveis no port. Os inalcançáveis já no original (entre eles `FriendForm`, `MatchForm`, `LineupForm` e `RestoreForm`), os só de depuração e os cortados por política ficam fora, justificados por esta análise. Salvaguarda: no build de diagnóstico, a execução de qualquer método dessas três classes gera alerta com pilha e o reclassifica como alcançável.

## Alcançáveis, ainda não executados (2)

Alvos do roteiro de cobertura. Entre parênteses, o número de métodos do tipo.

- **game.MapMain** (1): `UpdateTrainingCoatNum`
- **main.AppData** (1): `DrawMoney2`

## Inalcançáveis por política offline ou plataforma (89)

Cita a política ou ligação de plataforma mais próxima que corta o caminho (`*` = corte compartilhado: nenhum corte isolado restaura o método).

- **main.AppData** (2): `CgiRegistURL`, `MakeQuery` — política `main.AppData.CgiRegist(System.String,System.String)` (register_local)
- **native.AppPlugin** (1): `<Finish>m__4` — política `native.AppPlugin.Finish` (forward)
- **system.billing.MyBilling** (3): `Cancel`, `Provisioning` — política `system.billing.MyBilling.ExecuteApplyTask(system.billing.ui.ApplyTask)` (bool_false) *; `ExecuteApplyTask` — política `system.billing.ui.BillingManager.UpdateApplyTask(System.Boolean)` (void)
- **system.billing.ui.ApplyTask** (2): `.ctor` — política `system.billing.ui.BillingManager.RegistApplyTask(System.Boolean)` (bool_false); `IsGameApply` — política `system.billing.ui.BillingManager.UpdateApplyTask(System.Boolean)` (void)
- **system.billing.ui.BillingItem** (5): `CheckProvision` — política `surface.SurfaceManager.UpdateAdMobView` (void); `SetPurchase` — política `system.billing.ui.BillingManager.LaunchPurchaseFlow(system.billing.ui.BillingItem)` (bool_false) ou política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void); `SetProvision` — política `system.billing.ui.BillingManager.Provisioning(system.billing.ui.ApplyTask)` (void) *; `ChangeState`, `GetPurchase` — política `system.billing.ui.BillingManager.RegistApplyTask(System.Boolean)` (bool_false) ou política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void)
- **system.billing.ui.BillingManager** (10): `Cancel` — política `system.billing.MyBilling.Cancel(system.billing.ui.ApplyTask)` (void) *; `Provisioning` — política `system.billing.MyBilling.Provisioning(system.billing.ui.ApplyTask)` (void) *; `Purchase` — política `system.billing.ui.BillingManager.LaunchPurchaseFlow(system.billing.ui.BillingItem)` (bool_false) ou política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void); `<Provisioning>m__10`, `RemoveApplyTask`, `SearchApplyTask` — política `system.billing.ui.BillingManager.Provisioning(system.billing.ui.ApplyTask)` (void) *; `Consume` — política `system.billing.ui.BillingManager.RegistApplyTask(System.Boolean)` (bool_false); `AddPurchaseLog` — política `system.billing.ui.BillingManager.RegistApplyTask(System.Boolean)` (bool_false) ou política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void); `ConnectGetMarketPurchase`, `RemoveApplyTask` — política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void)
- **system.billing.ui.PurchaseRecord** (8): `.ctor`, `ChangeState`, `GetHashCode`, `GetOrderId`, `GetProductId`, `GetState`, `GetTimeStamp`, `ToString` — política `system.billing.ui.BillingManager.RegistApplyTask(System.Boolean)` (bool_false) ou política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void)
- **system.billing.ui.Receipt** (13): `.cctor`, `GetJson`, `GetJsonParam`, `GetOrderId`, `GetProductID`, `GetReceipt`, `PasswordDecodeToBytes`, `PasswordDecodeToString` — política `system.billing.ui.BillingManager.LaunchPurchaseFlow(system.billing.ui.BillingItem)` (bool_false) ou política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void); `GetItemType`, `GetPurchase`, `IsTicketProduct` — política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void); `Consume`, `IsConsume` — política `system.billing.ui.StoreBase.ConsumeItem(system.billing.util.Purchase)` (bool_false) *
- **system.billing.ui.StoreBase** (16): `CheckPaymentMaintenance`, `LaunchPurchaseFlow` — política `system.billing.ui.BillingManager.LaunchPurchaseFlow(system.billing.ui.BillingItem)` (bool_false); `CompletePayment`, `SetTime` — política `system.billing.ui.BillingManager.LaunchPurchaseFlow(system.billing.ui.BillingItem)` (bool_false) ou política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void); `ConsumeItem` — política `system.billing.ui.BillingManager.RegistApplyTask(System.Boolean)` (bool_false); `<GetRestoreRequest>m__E`, `GetIncompletePayments`, `GetRestoreRequest`, `HasIncompletePayments`, `ProcessIncompletePayment`, `ProcessIncompletePayments`, `QueryInventory`, `Restore`, `WaitForInitialized` — política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void); `SearchReceipt` — política `system.billing.ui.StoreBase.ConsumeItem(system.billing.util.Purchase)` (bool_false) *; `IsInitialized` — política `system.billing.ui.StoreBase.WaitForInitialized` (void) *
- **system.billing.util.Inventory** (4): `.ctor`, `GetPurchase`, `GetSkuDetails`, `HasPurchase` — política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void)
- **system.billing.util.Json** (4): `AdjustJson`, `MakeJson`, `ReadJSon`, `Record` — política `system.billing.ui.BillingManager.LaunchPurchaseFlow(system.billing.ui.BillingItem)` (bool_false) ou política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void)
- **system.billing.util.Purchase** (9): `GetOrderId`, `GetPurchaseTime` — política `system.billing.ui.BillingManager.LaunchPurchaseFlow(system.billing.ui.BillingItem)` (bool_false) ou política `system.billing.ui.BillingManager.RegistApplyTask(System.Boolean)` (bool_false); `GetToken` — política `system.billing.ui.BillingManager.LaunchPurchaseFlow(system.billing.ui.BillingItem)` (bool_false) ou política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void); `.ctor`, `GetHashCode`, `ReadJSon`, `ToString` — política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void); `GetOriginalJson` — política `system.billing.ui.StoreBase.ConsumeItem(system.billing.util.Purchase)` (bool_false) *
- **system.billing.util.SkuDetails** (3): `GetDescription`, `GetPrice`, `GetTypeA` — política `system.billing.ui.BillingManager.UpdateBillingItems(System.Boolean)` (void)
- **system.form.BillingForm** (1): `.ctor` — política `system.billing.MyBilling.ExecuteApplyTask(system.billing.ui.ApplyTask)` (bool_false) *
- **system.surface.GameBanner** (3): `Load`, `Unload`, `Visible` — política `system.surface.GameBanner.Draw(kairo.unity.ui.Graphics)` (void)
- **system.tapjoy.MyTapjoy** (1): `.ctor` — entrada só do motor original (root:unity-scene) *
- **system.tapjoy.ui.Tapjoy** (4): `.ctor`, `OnApplicationQuit`, `Print`, `Start` — entrada só do motor original (root:unity-scene) *

## Só depuração (35)

Cita a condição de depuração que guarda o caminho.

- **form.DebugForm** (18): `Draw`, `Draw_coatEva`, `Draw_gameParam`, `Draw_goal`, `Draw_goalMini`, `Draw_param`, `Draw_player`, `Draw_window`, `Finish`, `GetTouchValue`, `Init`, `Resume`, `SetTouchValue`, `Update`, `UpdateTestParam`, `Update_gameParam`, `Update_param`, `Update_window` — `Config.DEBUG_CMD && canvas_.CheckKeyPulse(1)` (reference/src/Assembly-CSharp/form/GameForm.cs:666)
- **form.FormManager** (1): `GetFps` — `Config.DEBUG_CMD && UserData.DEBUG_DISPFPS == 1` (reference/src/Assembly-CSharp/form/GameForm.cs:1272)
- **form.SoccerForm** (1): `AddCommandCard` — `Config.DEBUG_CMD && canvas_.CheckKeyPulse(128)` (reference/src/Assembly-CSharp/form/SoccerForm.cs:1176)
- **game.UserData** (4): `PrintOut`, `Update_45v1`, `Update_78v2` — `Config.DEBUG_CMD && canvas_.CheckKeyPulse(1)` (reference/src/Assembly-CSharp/form/GameForm.cs:666); `League_update` — `Config.DEBUG_CMD` (reference/src/Assembly-CSharp/form/SubForm.cs:8477)
- **main.AppData** (3): `DrawNumImage` — `Config.DEBUG_CMD && UserData.DEBUG_DISPFPS == 1` (reference/src/Assembly-CSharp/form/GameForm.cs:1272); `ClampMax`, `ClampMin` — `Config.DEBUG_CMD && canvas_.CheckKeyPulse(1)` (reference/src/Assembly-CSharp/form/GameForm.cs:666)
- **native.AppPlugin** (1): `ShowPurchaseLog` — `Config.DEBUG && canvas_.CheckKeyPulse(2048)` (reference/src/Assembly-CSharp/system/form/BillingForm.cs:664)
- **native.AppPlugin+<ShowPurchaseLog>c__AnonStorey2** (2): `.ctor`, `<>m__5` — `Config.DEBUG && canvas_.CheckKeyPulse(2048)` (reference/src/Assembly-CSharp/system/form/BillingForm.cs:664)
- **system.billing.ui.BillingManager** (2): `ClearPurchaseLog`, `GetPurchaseLog` — `Config.DEBUG && canvas_.CheckKeyPulse(2048)` (reference/src/Assembly-CSharp/system/form/BillingForm.cs:664)
- **system.billing.ui.PurchaseLogView** (3): `.ctor`, `SetLog`, `Show` — `Config.DEBUG && canvas_.CheckKeyPulse(2048)` (reference/src/Assembly-CSharp/system/form/BillingForm.cs:664)

## Inalcançáveis já no original (586)

Sem caminho a partir das entradas do original; quando o único caminho passa por ramo de configuração morto, a condição é citada.

- **<PrivateImplementationDetails>** (1): `.ctor` — compiler-generated <PrivateImplementationDetails> helper; never instantiated by source code
- **BuildInfos.BuildInfo** (1): `.ctor` — nunca construído
- **TJPlacement** (1): `.ctor` — nunca construído
- **UnityEngine.Purchasing.Product** (1): `.ctor` — nunca construído
- **analytics.AnalyticsTracker** (3): `TrackPageViewId` — chamadores inalcançáveis; `.ctor` — nunca construído; `TrackPageView` — sem chamadores
- **cfg.MyConfig** (1): `.ctor` — nunca construído
- **data.BaseData** (1): `Check` — sem chamadores
- **data.EventData** (3): `CheckScript`, `LoadStringTable`, `Search` — sem chamadores
- **data.FanActData** (1): `ChangeAssistAddEva` — sem chamadores
- **data.PlayerData** (4): `GetBallShedRate`, `GetClearSpeed`, `GetTrapBallV`, `NewGame` — sem chamadores
- **data.QuestMatchData** (1): `SetGenericData` — sem chamadores
- **data.SponsorData** (1): `GetDifficultStr` — sem chamadores
- **data.StadiumData** (1): `NewGame` — sem chamadores
- **data.TeamData** (1): `NewGame` — sem chamadores
- **data.TradeData** (1): `GetSuccessRate` — sem chamadores
- **form.BootForm** (3): `DivServerData`, `Download`, `UpdateScoreFromNetwork` — sem chamadores
- **form.DebugForm** (1): `Draw_moveArea` — sem chamadores
- **form.FormManager** (2): `StartVibrator`, `StopVibrator` — sem chamadores
- **form.GameForm** (8): `GetFirstScript` — chamadores inalcançáveis; `AddCommandEvent`, `AddCommandScene`, `AddCommandSpecial`, `AddCommandWait`, `ClearScript`, `Draw_watch`, `Script` — sem chamadores
- **form.MyFormBase** (19): `Push`, `Yen` — chamadores inalcançáveis; `BackFontSize`, `Check`, `Format`, `GetBoxHeaderY`, `Manyen`, `Pop`, `Push`, `PushFontSize`, `Replace`, `Yen` — sem chamadores
- **form.SoccerForm** (8): `AddCommandEvent`, `AddCommandGMChangeState`, `AddCommandScene`, `AddCommandSpecial`, `AddCommandWait`, `ClearScript`, `Draw_topBarParts`, `Draw_watch` — sem chamadores
- **form.SubForm** (19): `DrawCommand`, `DrawMeter`, `DrawWindow`, `ScrollUpdate` — chamadores inalcançáveis; `DrawCommand`, `DrawInputValue`, `DrawMeter`, `DrawWindow2`, `Draw_btmMsg`, `Draw_multiParam`, `Draw_udArrow`, `GetBoxHeaderY`, `MakeNoMymenu`, `MakeSystemDialog`, `ScrollControl`, `SetEvent` — sem chamadores
- **game.Ball** (1): `ChangeState` — sem chamadores
- **game.Camera** (5): `ChDisplayable`, `ConvertAddressToScreen`, `ConvertScreenToCamera`, `SetMapPosData` — sem chamadores
- **game.GameUtil** (29): `Abs`, `Dot` — chamadores inalcançáveis; `AddRand`, `Bezier`, `ChOnLine`, `ChRectHitParallel`, `Clamp`, `ClampMax`, `ClampMin`, `ConvertGameEva`, `ConvertKeyToGameKey`, `Convert_return`, `GetA_fixV0DIS`, `GetCrossPoint`, `GetDistanceFromPos`, `Pow`, `RateChA`, `RateChB`, `RateConvert`, `RateConvertArea`, `SetAMSet`, `SetAReturn`, `SetAVelocity`, `SetV`, `SetVReturn`, `SetVVelocity` — sem chamadores
- **game.Map** (2): `Draw_goalPoint`, `GetGoalPartsDepth` — sem chamadores
- **game.MapMain** (1): `Draw_trainingCoat` — sem chamadores
- **game.Player** (13): `ChRepetition`, `ChTrapOrHeading`, `Collision` — chamadores inalcançáveis; `AddCommandChangeState`, `AddCommandFlag`, `AddCommandGoalSad`, `AddCommandMove`, `AddCommandThrowIn`, `AddCommandVolley`, `AddCommandWaitStop`, `DebugLogOut`, `Debug_1keyStop`, `GetActIdFromSeb` — sem chamadores
- **game.TArea** (1): `SetPlayerGatherPos` — sem chamadores
- **game.TBall** (1): `Init_training` — sem chamadores
- **game.TGroupArea** (1): `SetPlayerGatherPos` — sem chamadores
- **game.TPlayer** (1): `EndTrainingScript` — sem chamadores
- **game.Team** (9): `Cal_evaCoatAdd` — chamadores inalcançáveis; `Cal_evaCoatAdd9block`, `Cal_evaCoatMulti`, `Collision`, `GetMostEvaAddress`, `Update_coatEvaDefence`, `Update_coatEvaFreeRun`, `Update_coatEvaLooseBall`, `Update_coatEvaPasser` — sem chamadores
- **game.UserData** (9): `ChGetFeelPtEfCommentParam_dispRefresh`, `ChTime1`, `ChTime2`, `Draw_editButton`, `GetDispPlayer`, `GetLeagueDataIndex`, `GetParamPlusNum`, `GetTicketPriceRate`, `Update_12v3` — sem chamadores
- **main.AppData** (95): `CgiGetScore`, `CgiGetScoreURL`, `CgiRankingURL`, `CgiRegistScoreURL`, `DateToDays`, `DrawArcRect`, `DrawCommand`, `DrawFukidashiOLD`, `DrawMeter`, `FillArcRect`, `GetIntArray`, `GetNearNeighborNode`, `PhpDlFile`, `Random`, `SbyteArrayToBoolean`, `SbyteArrayToInt`, `SetNowStoreIndex` — chamadores inalcançáveis; `AddDebugLog`, `AddEffectTUp`, `AddPopupScriptBuffer`, `BooleanToByteArray`, `BubbleSort`, `CgiRanking`, `CgiRegistScore`, `ChangeMap`, `CheckNightTime`, `CheckPointInPolygon`, `CheckSleepingTime`, `CheckTimeZone`, `Clamp`, `ClearPopupMessages`, `ColRect`, `DateToTime`, `DeserializeScripts`, `Draw3DBox`, `DrawCommand`, `DrawFillArcRect`, `DrawFukidashiKimochiOLD`, `DrawFukidashiOLD`, `DrawIcon`, `DrawMeter`, `DrawMoney4`, `DrawNumImage`, `DrawOutline`, `DrawSeb`, `DrawSebReverse`, `DrawSebV`, `DrawZSortObjects`, `ExecuteScript`, `FrameToMilliSecond`, `Gc`, `GetAllStock`, `GetBRectSeb`, `GetInt2Array`, `GetIsometricX`, `GetIsometricY`, `GetMainBGM`, `GetNearNeighborNode`, `GetNeighborNodeList`, `GetNowStoreIndex`, `GetPopupMessage`, `GetSeason`, `GetStockTotal`, `GetTime`, `InsertGameObject`, `IntToByteArray`, `IntegerVectorToIntAry`, `IsPushStateSoftLabel`, `LoadGame`, `Max`, `Min`, `Print`, `RemovePopupMessages`, `RotatePoint`, `SbyteArrayToBoolean`, `SbyteArrayToInt`, `SearchInteger`, `SendSaveData`, `SerializeScripts`, `SetHighScore`, `SetNetHighScore`, `SettMoneyNetHighScore`, `ShowNews`, `Sort`, `UpdatePassiveScript` — sem chamadores
- **main.AppData+stringErrorCode** (1): `.ctor` — nunca construído
- **main.Main** (2): `GetInstance`, `GetJingle` — sem chamadores
- **main.WebBox** (8): `.ctor`, `SetViewRect` — chamadores inalcançáveis; `Create`, `Dispose`, `LoadUrl`, `SetViewRect`, `SetVisible`, `Visible` — sem chamadores
- **native.AppPlugin** (1): `LaunchMailer` — chamadores inalcançáveis
- **native.AppPlugin+<LaunchMailer>c__AnonStorey3** (2): `.ctor`, `<>m__6` — chamadores inalcançáveis
- **native.WebBoxPlugin** (10): `<Create>m__7`, `<Dispose>m__A`, `<Visible>m__B`, `Create`, `Dispose`, `LoadUrl`, `SetViewRect`, `SetVisible`, `Visible` — chamadores inalcançáveis; `.cctor` — tipo nunca usado
- **native.WebBoxPlugin+<LoadUrl>c__AnonStorey5** (2): `.ctor`, `<>m__9` — chamadores inalcançáveis
- **native.WebBoxPlugin+<SetViewRect>c__AnonStorey4** (2): `.ctor`, `<>m__8` — chamadores inalcançáveis
- **native.WebBoxPlugin+<SetVisible>c__AnonStorey6** (2): `.ctor`, `<>m__C` — chamadores inalcançáveis
- **panel.MainPanel** (3): `.ctor` — nunca construído; `Show` — sobrescrita nunca chamada
- **surface.GamePad** (6): `GetDivisionArea`, `GetLayoutMode`, `GetOptionPage`, `IsSoftLabelID`, `SetOptionPage` — sem chamadores; `RotateClear` — sobrescrita nunca chamada
- **surface.GameView** (9): `AddTouch` — chamadores inalcançáveis; `AddTouch`, `CheckMarker`, `Join` — sem chamadores; `RotateClear` — sobrescrita nunca chamada
- **surface.SurfaceManager** (1): `IsLayoutMode` — sem chamadores
- **surface.TouchEffect** (1): `Init` — sem chamadores
- **surface.TouchEffectManager** (5): `AddEffect`, `RemoveComponentId`, `RemoveComponentKey`, `RemoveEffect`, `RemoveId` — sem chamadores
- **system.KairoService** (7): `OnInit`, `OnLoad`, `OnLoadGame`, `OnNewGame`, `OnStart`, `OnWrite`, `OnWriteGame` — sobrescrita nunca chamada
- **system.KairoText** (3): `LT` — chamadores inalcançáveis; `.ctor` — nunca construído
- **system.billing.MyBilling** (2): `GetBillingTable`, `Init` — chamadores inalcançáveis
- **system.billing.ui.ApplyTask** (4): `.ctor`, `Deserialize`, `Serialize` — chamadores inalcançáveis; `IsGiftScript` — sem chamadores
- **system.billing.ui.BillingItem** (10): `.ctor`, `Deserialize`, `GetPlatformProductID`, `Init`, `Serialize` — chamadores inalcançáveis; `GetExplain`, `GetItemType`, `GetPrice`, `Off`, `On` — sem chamadores
- **system.billing.ui.BillingManager** (15): `ExecuteApplyTask`, `GetApplyTaskList`, `GetItemList`, `Init`, `Load`, `LoadGame`, `NewGame`, `Write`, `WriteGame` — chamadores inalcançáveis; `GetItem`, `GetItemGroup`, `Init` — sem chamadores; `Init` — sobrescrita nunca chamada
- **system.billing.ui.PurchaseRecord** (4): `.ctor`, `Deserialize`, `Serialize` — chamadores inalcançáveis; `GetTimeStampNengappi` — sem chamadores
- **system.billing.ui.Receipt** (13): `.ctor`, `DebugVerificationReceipt`, `Load`, `PasswordEncode`, `Save` — chamadores inalcançáveis; `.ctor` — nunca construído; `Copy`, `DebugVerificationReceipt`, `GetItemType`, `GetProductType`, `PasswordEncode` — sem chamadores; `Equals`, `GetHashCode` — sobrescrita; tipo nunca instanciado
- **system.billing.ui.StoreBase** (10): `CallRestoreFlow`, `Init`, `InitializePurchasing`, `Load`, `Save`, `SetRestoreRequest` — chamadores inalcançáveis; `GetProductType`, `GetUnityJson`, `IsCompletePayment` — sem chamadores; `GetItems` — sem corpo
- **system.billing.ui.StoreBase+<SetRestoreRequest>c__AnonStorey7** (2): `.ctor`, `<>m__F` — chamadores inalcançáveis
- **system.billing.util.IabHelper** (1): `.ctor` — nunca construído
- **system.billing.util.Inventory** (7): `AddPurchase`, `AddSkuDetails`, `ErasePurchase`, `GetAllOwnedSkus`, `GetAllPurchases`, `HasDetails` — sem chamadores
- **system.billing.util.Json** (3): `.ctor` — nunca construído; `AdjustJson`, `GetDetailJson` — sem chamadores
- **system.billing.util.Purchase** (6): `GetItemType`, `GetSku` — chamadores inalcançáveis; `GetDeveloperPayload`, `GetPackageName`, `GetPurchaseState`, `GetSignature` — sem chamadores
- **system.billing.util.SkuDetails** (8): `.ctor`, `GetSku`, `ReadJSon` — chamadores inalcançáveis; `.ctor` — nunca construído; `GetTitle` — sem chamadores; `GetHashCode`, `ToString` — sobrescrita; tipo nunca instanciado
- **system.form.BillingForm** (13): `DrawLine` — chamadores inalcançáveis; `.ctor` — nunca construído; `Comma`, `DrawAdOffButtoan`, `DrawCommand`, `DrawDotLine`, `DrawGradation`, `DrawObi`, `DrawRect2`, `DrawRect3`, `FillRect2`, `FillRect4`, `FillRectShadow` — sem chamadores
- **system.form.FriendForm** (53): `.ctor`, `<Init>m__11`, `<_update>m__12`, `<_update>m__13`, `<_update>m__14`, `<_update>m__15`, `<_update>m__16`, `<_update>m__17`, `<_update>m__18`, `<_update>m__19`, `<_update>m__1A`, `<_update>m__1B`, `<_update>m__1C`, `DrawBonusObi`, `DrawCommand`, `DrawGradation`, `DrawLine`, `DrawNumImage`, `DrawRect`, `FillRect`, `FillRect2`, `FillRect3`, `LoadResource`, `MakeErrorDialog`, `MakeErrorMsgForm`, `SetSoftLabel`, `_draw`, `_update` — chamadores inalcançáveis; `DrawCommand`, `DrawDotLine`, `DrawNumImage`, `DrawObi`, `DrawRandomFriend`, `DrawRect2`, `DrawRect3`, `FillRect4`, `FillRectShadow` — sem chamadores; `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `OnTouchEvent`, `Resume`, `SetTouchValue`, `ToString`, `Update` — sobrescrita; tipo nunca instanciado; `.cctor` — tipo nunca usado
- **system.form.HttpForm** (4): `SetConnectMethod`, `SetResultMethod`, `get_IsCancelable`, `set_IsCancelable` — sem chamadores
- **system.form.HttpForm+HttpMethod** (3): `BeginInvoke`, `EndInvoke`, `Invoke` — membro de delegado nunca usado
- **system.form.HttpForm+ResultData** (4): `Add`, `Get`, `HasKey`, `get_Exception` — sem chamadores
- **system.form.LineupForm** (15): `.ctor`, `DrawCommand`, `SetSoftlabel` — chamadores inalcançáveis; `.ctor` — nunca construído; `CheckMainWindow`, `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `Resume`, `SetTouchValue`, `ToString`, `Update` — sobrescrita; tipo nunca instanciado; `.cctor` — tipo nunca usado
- **system.form.MatchForm** (19): `.ctor`, `SetSoftlabel`, `ThreadStart`, `_draw`, `_update` — chamadores inalcançáveis; `.ctor` — nunca construído; `DrawCommand` — sem chamadores; `CheckMainWindow`, `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `Resume`, `Run`, `SetTouchValue`, `ToString`, `Update` — sobrescrita; tipo nunca instanciado; `.cctor` — tipo nunca usado
- **system.form.MatchForm+UserRecord** (1): `.ctor` — chamadores inalcançáveis
- **system.form.RestoreForm** (7): `<Init>m__21` — chamadores inalcançáveis; `.ctor` — nunca construído; `CheckMainWindow`, `Draw`, `Init`, `ToString`, `Update` — sobrescrita; tipo nunca instanciado
- **system.friend.MyFriend** (2): `PlayBonus` — chamadores inalcançáveis; `CgiGetFriendList` — sobrescrita nunca chamada
- **system.friend.ui.Friend** (6): `.ctor`, `Deserialize`, `Serialize` — chamadores inalcançáveis; `.ctor` — nunca construído
- **system.friend.ui.FriendData** (35): `ActionSendMail`, `CgiApplyFriend`, `CgiApproveFriend`, `CgiGetFriendList`, `CgiRandomFriend`, `CgiRefuseFriend`, `CgiRegistFriend`, `CgiSearchFriend`, `CheckRegistFriend`, `ExistRandomFriend`, `GetCurrentForm`, `GetFriendID`, `GetInstance`, `GetPlayBonus`, `GetRandomFriend`, `Init`, `InitializeData`, `IsEffectiveRegistName`, `Load`, `LoadGame`, `NewGame`, `PackFriendBinalyData`, `RefreshFriendList`, `SetFriendName`, `UnpackFriendBinalyData`, `UpdateRandomFriend`, `Write`, `WriteGame` — chamadores inalcançáveis; `DrawGradation`, `GetCurrentForm`, `GetFriendName`, `IsFriendDataUpdated`, `UpdatePlayTime` — sem chamadores; `PlayBonus` — sem corpo
- **system.friend.ui.FriendPlayTimeData** (4): `.ctor`, `Deserialize`, `Serialize` — chamadores inalcançáveis
- **system.lineup.MyLineup** (1): `Start` — chamadores inalcançáveis
- **system.notification.MyNotify** (4): `.ctor` — chamadores inalcançáveis; `GetInstance` — sem chamadores; `OnNotify`, `OnReceiveValue` — sobrescrita; tipo nunca instanciado
- **system.panel.InputPanel** (4): `.ctor`, `Show` — chamadores inalcançáveis; `.ctor` — nunca construído; `Show` — sobrescrita; tipo nunca instanciado
- **system.surface.GameBanner** (1): `RotateClear` — sobrescrita nunca chamada
- **system.tapjoy.MyTapjoy** (1): `GetInstance` — sem chamadores
- **system.tapjoy.ui.Tapjoy** (9): `AddBalance`, `GetBalance`, `GetInstance`, `GetOfferState`, `Init`, `Quit`, `ShowOffers`, `SubBalance` — sem chamadores; `CallBalance` — sobrescrita nunca chamada

## Alcançáveis justificados individualmente (202)

Regras em `config/coverage-justifications.json`; cada grupo cita o motivo.

### billing-offline (95)

Offline port: these screens are only opened from paths removed by policy (GameBanner.Draw draws nothing, so its touch target never exists; SurfaceManager.UpdateAdMobView, the only creator of KairoService, is a policy; billing provisioning is disabled; friend/lineup need KairoService).

`system.KairoService::.ctor`, `system.KairoService::<Update>m__D`, `system.KairoService::Connected`, `system.KairoService::Finish`, `system.KairoService::GetInstance`, `system.KairoService::Save`, `system.KairoService::SaveAll`, `system.KairoService::Update`, `system.KairoText::.cctor`, `system.KairoText::LT`, `system.billing.MyBilling::.ctor`, `system.billing.MyBilling::CheckPlayingGame`, `system.billing.MyBilling::GetInstance`, `system.billing.ui.ApplyTask::.ctor`, `system.billing.ui.ApplyTask::Enable`, `system.billing.ui.ApplyTask::Equals`, `system.billing.ui.ApplyTask::Init`, `system.billing.ui.ApplyTask::IsGift`, `system.billing.ui.ApplyTask::IsItem`, `system.billing.ui.BillingItem::Check`, `system.billing.ui.BillingItem::CheckTestProduct`, `system.billing.ui.BillingItem::GetId`, `system.billing.ui.BillingItem::GetName`, `system.billing.ui.BillingItem::GetProductId`, `system.billing.ui.BillingItem::GetProvisionType`, `system.billing.ui.BillingItem::GetProvisionValue`, `system.billing.ui.BillingItem::GetProvisionValueText`, `system.billing.ui.BillingItem::GetSeriesName`, `system.billing.ui.BillingItem::GetSeriesNumber`, `system.billing.ui.BillingItem::GetState`, `system.billing.ui.BillingManager::.cctor`, `system.billing.ui.BillingManager::.ctor`, `system.billing.ui.BillingManager::AddApplyTask`, `system.billing.ui.BillingManager::CheckNextConsume`, `system.billing.ui.BillingManager::CheckPlayingGame`, `system.billing.ui.BillingManager::CheckRegistApply`, `system.billing.ui.BillingManager::ConnectRegistMarketPurchase`, `system.billing.ui.BillingManager::Finish`, `system.billing.ui.BillingManager::GetInstance`, `system.billing.ui.BillingManager::GetItem`, `system.billing.ui.BillingManager::GetItems`, `system.billing.ui.BillingManager::GetSales`, `system.billing.ui.BillingManager::LaunchPurchaseFlow`, `system.billing.ui.BillingManager::RegistApplyTask`, `system.billing.ui.BillingManager::SearchApplyTask`, `system.billing.ui.BillingManager::UpdateApplyTask`, `system.billing.ui.BillingManager::UpdateBillingItems`, `system.billing.ui.StoreBase::.cctor`, `system.billing.ui.StoreBase::.ctor`, `system.form.BillingForm::.cctor`, `system.form.BillingForm::.ctor`, `system.form.BillingForm::CheckMainWindow`, `system.form.BillingForm::Draw`, `system.form.BillingForm::DrawCommand`, `system.form.BillingForm::DrawCommand`, `system.form.BillingForm::DrawRect`, `system.form.BillingForm::FillRect`, `system.form.BillingForm::FillRect3`, `system.form.BillingForm::Finish`, `system.form.BillingForm::GetHashCode`, `system.form.BillingForm::GetTouchValue`, `system.form.BillingForm::Init`, `system.form.BillingForm::LoadResource`, `system.form.BillingForm::OnTouchEvent`, `system.form.BillingForm::Resume`, `system.form.BillingForm::Run`, `system.form.BillingForm::ScrollControl`, `system.form.BillingForm::ScrollUpdate`, `system.form.BillingForm::ScrollUpdate`, `system.form.BillingForm::SetSoftlabel`, `system.form.BillingForm::SetTouchValue`, `system.form.BillingForm::ThreadStart`, `system.form.BillingForm::ToString`, `system.form.BillingForm::Update`, `system.form.BillingForm::UpdateSaleList`, `system.form.BillingForm::_draw`, `system.form.BillingForm::_update`, `system.form.ConnectForm::.cctor`, `system.form.ConnectForm::.ctor`, `system.form.ConnectForm::Draw`, `system.form.ConnectForm::DrawConnect`, `system.form.ConnectForm::Finish`, `system.form.ConnectForm::GetHashCode`, `system.form.ConnectForm::Init`, `system.form.ConnectForm::Resume`, `system.form.ConnectForm::ToString`, `system.form.ConnectForm::Update`, `system.form.ConnectForm::_draw`, `system.friend.MyFriend::.ctor`, `system.friend.MyFriend::GetInstance`, `system.friend.ui.FriendData::.cctor`, `system.friend.ui.FriendData::.ctor`, `system.lineup.MyLineup::.ctor`, `system.lineup.MyLineup::GetInstance`, `system.surface.GameBanner::OnTouchEvent`

### data-gated-salary (1)

Only caller: UserData edit member grid in salary mode (UserData.cs:3664-3674), English path, sallay >= 1000 and sysSave ints[14] != 1. sallay = PlayerData.GetSallay = RateConvert(matchNum_, 0, 150, salary_[0], salary_[1]) (PlayerData.cs:972-979). In player.txt the starting squad has salary_ 5..90 (team shows 19..37 in every recorded career save, attempts 157/218 in both currencies); only hired star players with salary_[1] >= 1000 (30 rows) reach it after enough matches, and the 22 rows with 1000/1000 are generic background players. No recorded save has such a member; reaching it needs a long career with trades.

`main.AppData::DrawMoney3`

### dead-in-original (4)

Dead in the original: SoccerForm states 1 and 15 are set only by debug code; GameForm.selectTenantData_ is never assigned.

`form.GameForm::SetBuildBtmMessage`, `form.SoccerForm::Draw_newPlayerPopular`, `form.SoccerForm::Draw_topBar`, `form.SoccerForm::GetDrawTBAROff`

### dead-in-original-render-and-scripts (6)

The only reader is GameView.OnTouchVScrollBar case 8 (GameView.cs:1660-1662), raised as TYPE_GRID_DRAG only for components whose TouchOption has dragGridW/H (SurfaceBase.cs:821-840). The match edit scroll bar id 22 (UserData.cs:3457 -> AppData.DrawVerticalScroll3, AppData.cs:2959-2965) gets only args; GameView.AddTouch builds dragCell/dragGrid only when DrawVerticalScroll returns a layout, i.e. ids 12/14 (GameView.cs:779-845). No other SoccerForm component calls Get. Probed in attempt 149: drags on the bar raise no GetTouchValue.

`form.FormManager::Resume`, `form.SoccerForm::GetFirstScript`, `form.SoccerForm::GetTouchValue`, `game.Map::Draw_copyArea`, `game.MapMain::Draw_copyArea`, `game.Player::ChangeState`

### hidden-keypad (6)

Hidden title commands need keys 2/1024/2048 (STAR), which no Android touch device produces, and they send data to the network; AppData.Draw(string[,bool]) is the SendSaveData screen (AppData.cs:5534-5736).

`main.AppData::Draw`, `main.AppData::Draw`, `main.AppData::Post`, `main.AppData::SendSaveData`, `main.AppData::SendSaveData`, `main.AppData::SendSaveData`

### implicit-object-members (13)

Static-analysis over-approximation: the analysis assumes the runtime may call ToString/GetHashCode/Equals on every instantiated type; no game path calls them on these types.

`form.BootForm::GetHashCode`, `form.BootForm::ToString`, `form.GameForm::GetHashCode`, `form.GameForm::ToString`, `form.RankForm::GetHashCode`, `form.RankForm::ToString`, `form.SoccerForm::GetHashCode`, `form.SoccerForm::ToString`, `form.SubForm::GetHashCode`, `form.SubForm::ToString`, `form.TitleForm::GetHashCode`, `form.TitleForm::ToString`, `system.form.LanguageForm::ToString`

### japanese-language (8)

Japanese or non-English locale only; the port runs en-US and the offline language panel cannot switch: DrawConfig_jp (SubForm.cs:2329-2341), Draw_multiParam !En() (SoccerForm.cs:2561-2564), DrawNumImageComma_en Jp() (SubForm.cs:3402-3404), scaled DrawSeb Jp() menu (SubForm.cs:10324-10326), Kairo house ad and its touch id 27 drawn only when Jp() (TitleForm.cs:539-561, handled at 870-904).

`form.SubForm::DrawConfig_jp`, `form.SubForm::Draw_multiParam`, `form.TitleForm::UpdateKairoAdClickNum`, `form.TitleForm::UpdateKairoAdClickNum`, `main.AppData::DrawNumImageComma_en`, `main.AppData::DrawSeb`, `main.AppData::DrawSeb`, `surface.GameView::OnTouchRect`

### language-pack-download (20)

HttpForm is created only when the language panel returns -1/-2 (download of an online language pack); the offline language presenter never returns those values.

`system.form.HttpForm+HttpMethod::.ctor`, `system.form.HttpForm+ResultData::.ctor`, `system.form.HttpForm+ResultData::System.Collections.IEnumerable.GetEnumerator`, `system.form.HttpForm+ResultData::get_Error`, `system.form.HttpForm+ResultData::get_Succeed`, `system.form.HttpForm+ResultData::set_Error`, `system.form.HttpForm+ResultData::set_Exception`, `system.form.HttpForm+ResultData::set_Succeed`, `system.form.HttpForm::.cctor`, `system.form.HttpForm::.ctor`, `system.form.HttpForm::CheckMainWindow`, `system.form.HttpForm::Draw`, `system.form.HttpForm::DrawConnect`, `system.form.HttpForm::Finish`, `system.form.HttpForm::Init`, `system.form.HttpForm::Run`, `system.form.HttpForm::ToString`, `system.form.HttpForm::Update`, `system.form.HttpForm::get_ProcessError`, `system.form.HttpForm::set_ProcessError`

### network-error (1)

Only in the catch of CgiRegist in BootForm.Run (BootForm.cs:415-430); the offline register_local policy returns the local response and never throws.

`main.AppData::GetHttpErrorText`

### pad-geometry (8)

Port surface is 240x280: AdjustSurfaceLayout computes pad mode 1, equal to the initial mode (SurfaceManager.cs:126-139, GamePad.cs:348), so SetMode is never called; these members need pad mode 0 or 2, a screen with >=120 px under the view for pad component 21 (GamePad.cs:908-912), the never-registered pad components 17/18 (GamePad.cs:701-713), or DEBUG (false at run time via Config.Create(MyConfig)).

`surface.GamePad::AddTouch`, `surface.GamePad::DrawBattery`, `surface.GamePad::DrawSoftLabelImage`, `surface.GamePad::DrawWatch`, `surface.GamePad::GetSideSize`, `surface.GamePad::SetLayoutMode`, `surface.SurfaceManager::SetLayoutMode`, `surface.TouchEffectManager::Clear`

### pinch-gesture (6)

SetScale (which calls GetScaleRange and ResetOffscreen) runs only on TYPE_PINCH (OnTouchCamera case 12: GameForm.cs:1730-1741, SoccerForm.cs:3437-3448), which needs two pointers (SurfaceBase.cs:931-959), or from the Draw clamp (GameForm.cs:1093-1097, SoccerForm.cs:1779-1783), which never fires: scale_ starts at 100 and only SetScale changes it (range 60..240 at width 240).

`form.GameForm::GetScaleRange`, `form.GameForm::ResetOffscreen`, `form.GameForm::SetScale`, `form.SoccerForm::GetScaleRange`, `form.SoccerForm::ResetOffscreen`, `form.SoccerForm::SetScale`

### script-commands-unused-by-data (1)

Only event-script commands 28-32 call it (AppData.cs:4801-4841). No script table of the shipped data (events, fan actions, leagues, quest matches, sponsors, trades) uses those commands: checked against the user's local APK assets, which are not committed.

`data.PlayerData::AddPhysicalParam`

### support-upload (19)

SpForm (support/upload) opens only with key 0x800 held at a crash or boot error, or holding gamepad component 5 for 5 s in pad mode 0, which the port surface never uses; its Run uploads to the support server (network).

`form.SpForm::.cctor`, `form.SpForm::.ctor`, `form.SpForm::.ctor`, `form.SpForm::AddCommand`, `form.SpForm::ChangeState`, `form.SpForm::Draw`, `form.SpForm::Finish`, `form.SpForm::GetHashCode`, `form.SpForm::GetTouchValue`, `form.SpForm::Init`, `form.SpForm::MakeSendDataTask`, `form.SpForm::Resume`, `form.SpForm::Run`, `form.SpForm::SetSoftLabel`, `form.SpForm::SetTouchValue`, `form.SpForm::ShowDialog`, `form.SpForm::ToString`, `form.SpForm::Update`, `form.SpForm::_draw`

### support-upload-helpers (2)

Only caller is SpForm (SpForm.cs:665, SpForm.cs:743); SubForm has its own GetBoxFooterY.

`form.MyFormBase::GetBoxFooterY`, `form.MyFormBase::Push`

### touch-accessor-unused (6)

GameView.Get/Set address only the top form (GameView.cs:1248-1251). BootForm registers no touch component; RankForm only page arrows id 1, whose handler emits KeyDown/KeyUp (GameView.cs:1351-1378); GameForm only id 17 (consumed) and id 4 value 22, which OnTouchKeyClick turns into KeyClick, not Set (GameView.cs:1462-1482).

`form.BootForm::GetTouchValue`, `form.BootForm::SetTouchValue`, `form.GameForm::GetTouchValue`, `form.GameForm::SetTouchValue`, `form.RankForm::GetTouchValue`, `form.RankForm::SetTouchValue`

### touch-component-never-created (4)

Dead in the original: no GameView.AddTouch in Assembly-CSharp creates component ids 5, 7 or 10; id 17 is registered only while GameForm/SoccerForm is top (GameView.cs:862-869), and their OnTouchEvent consumes it with return false (GameForm.cs:1617-1624, SoccerForm.cs:3404-3411), so the empty GameView.OnTouchCamera is not reached.

`surface.GameView::OnTouchCamera`, `surface.GameView::OnTouchKeyPress`, `surface.GameView::OnTouchKeyUp`, `surface.GameView::OnTouchList`

### trial-or-billing (1)

Callers are TRIAL_VERSION branches (GameForm.cs:1355-1358, SubForm.cs:7845-7852), MyBilling (MyBilling.cs:102, billing disabled) and DebugForm.

`form.SubForm::MakeTalkForm`

### type-initializer-runs-uncredited (1)

MyConfig has only static fields and no methods; its type initializer runs on the first static field read, e.g. TitleForm.cs:184 (executed on every title screen, MyConfig.SMART_PASS), as the generated accessor calls the type initializer. The credit rule needs an executed method of the same type, which this type does not have.

`cfg.MyConfig::.cctor`

## Limites da análise

- Reflexão e despacho por nome (23 sítios): `Config.Create` copia campos de `MyConfig` por reflexão (modelado: valor final = `MyConfig`, exceto `APPLI_TYPE`); `StreamUtil.ReadObject<T>`/`ReadArray` (`Activator.CreateInstance` de `ISerializable`) instanciam os tipos-elemento dos argumentos (0 sítios no jogo); `JTool.MakeArray` só cria arrays; os demais (editor Unity, `Assembly.GetTypes`, `Dialog`) não chamam métodos do jogo e ficam registrados em `limits`.
- Mensagens Unity (Awake/Start/Update/OnGUI/OnApplication*...) e `UnitySendMessage` (métodos `void(string)` de MonoBehaviour) são entradas conservadoras do original; todo MonoBehaviour concreto é tratado como presente na cena.
- `new T()` genérico (2 sítios) resolve para todo tipo concreto que satisfaz as restrições.
- Objeto criado e descartado (instrução `new X();` ou local nunca lido, ex.: o aquecimento de tipos em `BootForm`) executa o construtor mas não habilita despacho virtual para `X`; chamadas virtuais sobre `this` dentro desse construtor não são seguidas.
- Análise rápida de tipos: instanciar um tipo habilita todas as suas sobrescritas para qualquer chamada virtual alcançável ao método base, sem rastrear para onde o objeto flui.
- Chamadas implícitas da BCL (ToString/Equals/GetHashCode/CompareTo/Dispose/GetEnumerator) alcançam as sobrescritas de todo tipo instanciado.
- Lambdas do Mono (`<X>m__N`, `c__AnonStoreyN`) são mapeadas para o grupo de lambdas do método hospedeiro, não para uma lambda individual.
- Fluxo de dados não é modelado: retornos constantes das políticas offline (ex.: `false`, `null`) não podam ramos dos chamadores; esses chamadores ficam alcançáveis (conservador).
- Flags lidas antes de `Config.Create` (no construtor estático de `Config`, com `DEBUG = true`) mantêm o valor inicial; flags escritas por código alcançável com valor diferente (ex.: `SHOW_DEBUG`, `ADMOB_ENABLE`) não são tratadas como constantes.
- `Application.platform` é avaliado como Android (o original e o port, `system.hpp: get_platform()=11`).
