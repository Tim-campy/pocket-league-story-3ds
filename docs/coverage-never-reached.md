# Métodos nunca alcançados

Gerado em 2026-11-14 por `python tools/callgraph/analyze.py` a partir de `config/translation.csv` e do grafo de chamadas estático (Roslyn) do C# reconstruído; recibo em `config/phase2-reachability.json`. Só nomes de métodos do C# reconstruído; nenhum conteúdo do jogo. Regenerar após cada rodada de cobertura.

Modelo: o grafo cobre Assembly-CSharp, as fontes da KairoLibrary compiladas com ele e o adaptador de plataforma gerado. Chamadas virtuais e de interface vão para as sobrescritas em tipos instanciados por código alcançável (análise rápida de tipos); delegados alcançam o método ou lambda no ponto de criação; construtores estáticos são alcançados pelo primeiro uso do tipo. Ramos guardados por flags de `Config`/`MyConfig` com valor de execução constante falso são cortados; os de depuração (`DEBUG` e flags derivadas) formam a classe "só depuração". O modelo do port corta os corpos substituídos por políticas offline (`config/service-overrides.json`) e por ligações de plataforma (`external_methods`/`external_types` do tradutor) e parte das entradas reais da plataforma (`Main`, adaptador gerado, slots virtuais).

| Classe | Métodos |
|---|---:|
| Executados no diagnóstico (`runs`) | 828 |
| Alcançáveis, ainda não executados | 420 |
| **Alcançáveis no total** (executados + não executados) | **1248** |
| Inalcançáveis por política offline / plataforma | 89 |
| Só depuração | 35 |
| Inalcançáveis já no original | 586 |
| Total do livro-razão | 1958 |

Por estado do livro-razão (`embedded` = construtor estático ou lambda emitidos dentro de outro corpo):

| Classe | translated | embedded | todo | no-body | verified |
|---|---:|---:|---:|---:|---:|
| reachable-not-exercised | 364 | 54 | 0 | 1 | 0 |
| unreachable-by-policy | 85 | 4 | 0 | 0 | 0 |
| debug-only | 33 | 2 | 0 | 0 | 0 |
| unreachable-in-original | 550 | 30 | 0 | 5 | 0 |

Cobertura sobre o alcançável: 828 de 1248 (66.3%). Métodos `runs` que a análise não alcançou: 0.

## Alcançáveis, ainda não executados (420)

Alvos do roteiro de cobertura. Entre parênteses, o número de métodos do tipo.

- **analytics.AnalyticsTracker** (1): `DispatchPageView`
- **cfg.MyConfig** (1): `.cctor`
- **data.FanActData** (10): `.cctor`, `AddRankUpParam`, `ChangeState`, `GetAddEvaLimitOver`, `GetDispParamToEva`, `GetFanAddParamNum`, `IsNew`, `NewGame`, `RankUp`, `RemoveNew`
- **data.FanBonusData** (2): `.cctor`, `NewGame`
- **data.FormationData** (2): `ChangeState`, `NewGame`
- **data.LeagueData** (8): `ChangeState`, `IsVictoryLeague`, `IsVictoryMatch`, `NewGame`, `RegistLeague`, `RemoveNew`, `SetGetTrophy`, `SetLeagueInfoExplain`
- **data.PlayerData** (6): `.cctor`, `AddPhysicalParam`, `Employ`, `SetTrainingAddParam`, `Start_aura`
- **data.QuestMatchData** (1): `NewGame`
- **data.SponsorData** (4): `.cctor`, `GetIncome`, `NewGame`, `RemoveNew`
- **data.SupervisorData** (5): `.cctor`, `ChangeState`, `ContractSupervisor`, `LvUp`, `NewGame`
- **data.TeamData** (2): `SetScore`, `SetScoreRanking`
- **data.TenantData** (14): `.cctor`, `ChangeState`, `GetFanToEf`, `GetGoodsIncomeRate`, `GetLvUpAddParam`, `IsMaxLv`, `IsNew`, `IsStreangth`, `IsTAreaOrStadiumTenant`, `LvUp`, `NewGame`, `ProcStrenSpecialTenant`, `RemoveNew`, `StrengthTenant`
- **data.TradeData** (2): `IsPlayerInMember`, `NewGame`
- **data.TrainingData** (5): `.cctor`, `ChangeState`, `GetTrainingAddParamNum`, `NewGame`, `RemoveNew`
- **form.BootForm** (6): `.cctor`, `GetHashCode`, `GetTouchValue`, `Resume`, `SetTouchValue`, `ToString`
- **form.DebugForm** (1): `.cctor`
- **form.FormManager** (2): `.cctor`, `Resume`
- **form.GameForm** (14): `.cctor`, `GetHashCode`, `GetScaleRange`, `GetTouchValue`, `OnTouchCamera`, `OnTouchEvent`, `ResetOffscreen`, `Resume`, `SetBuildBtmMessage`, `SetCameraPosition`, `SetCursorPosition`, `SetScale`, `SetTouchValue`, `ToString`
- **form.MyFormBase** (8): `.cctor`, `GetBoxFooterY`, `OnTouchEvent`, `Push`, `Resume`, `SetTouchValue`, `UNI`
- **form.RankForm** (13): `.cctor`, `ChangeState`, `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `Resume`, `SetSoftLabel`, `SetTouchValue`, `ToString`, `Update`, `_draw`
- **form.SoccerForm** (16): `.cctor`, `Draw_matchElse`, `Draw_newPlayerPopular`, `Draw_topBar`, `GetDrawTBAROff`, `GetFirstScript`, `GetHashCode`, `GetScaleRange`, `GetTouchValue`, `OnTouchCamera`, `OnTouchEvent`, `ResetOffscreen`, `Resume`, `SetScale`, `SetTouchValue`, `ToString`
- **form.SpForm** (19): `.cctor`, `.ctor`, `AddCommand`, `ChangeState`, `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `MakeSendDataTask`, `Resume`, `Run`, `SetSoftLabel`, `SetTouchValue`, `ShowDialog`, `ToString`, `Update`, `_draw`
- **form.SubForm** (26): `.cctor`, `.ctor`, `DrawConfig_jp`, `Draw_btmMsg`, `Draw_clearPoint`, `Draw_fanActBack`, `Draw_multiParam`, `Draw_tenantBuildIcon`, `Draw_trainingIcon`, `Draw_up`, `FinishMeterParam`, `GetHashCode`, `GetMeterParam`, `GetStringLength`, `IsSimpleChara`, `MakeTalkForm`, `Resume`, `SetMeterParam`, `SetMeterParamDispAdd`, `SetMeterParamRank`, `SetTicketWindowBtmMsg`, `SetWinCharaTraining`, `ToString`, `UpdateMeterParam`, `Update_clearPoint`
- **form.SubForm+<Update2>c__AnonStorey0** (3): `.ctor`, `<>m__0`, `<>m__1`
- **form.TitleForm** (9): `.cctor`, `<_draw>m__2`, `GetHashCode`, `OnTouchEvent`, `Resume`, `SetTouchValue`, `ToString`, `UpdateKairoAdClickNum`
- **game.Ball** (1): `.cctor`
- **game.Camera** (1): `.cctor`
- **game.DelayEvent** (1): `Deserialize`
- **game.GameManager** (1): `.cctor`
- **game.GameUtil** (1): `.cctor`
- **game.Map** (2): `.cctor`, `Draw_copyArea`
- **game.MapMain** (3): `.cctor`, `Draw_copyArea`, `UpdateTrainingCoatNum`
- **game.Player** (2): `.cctor`, `ChangeState`
- **game.TArea** (1): `.cctor`
- **game.TBall** (1): `.cctor`
- **game.TGroupArea** (1): `.cctor`
- **game.TPlayer** (4): `.cctor`, `AddCommandRunning`, `AddCommandRunningRegist`, `StopTraining`
- **game.Team** (1): `.cctor`
- **game.Tenant** (6): `.cctor`, `BuildTenant`, `ChangeState`, `DestructTenant`, `OutUserTPlayers`, `StrenghTenant`
- **game.UserData** (25): `.cctor`, `ChangeTraining`, `CustomerNumReset`, `DrawGraph_menuElement`, `GetAddFeelPtEf`, `GetEvaWarPNameValue`, `GetFeelPtEf`, `GetFeelPtEfCommentParam`, `GetFeelPtEfRetStr`, `GetLeagueData`, `GetNextBattleLeagueIndex`, `GetTeamScore`, `League_finish`, `League_resetScore`, `League_setFightResult`, `NewGame`, `RecordReset`, `ReflectContinueGameData`, `RotateTestPlayParam`, `SetClearPoint`, `SetContinueGameData`, `SetMemberChangeList`, `SetNegotiateResult`, `SubResearchPoint`, `Update_league`
- **main.AppData** (22): `.cctor`, `Draw`, `DrawFukidashiBalloon`, `DrawFukidashiKimochi`, `DrawMoney2`, `DrawMoney3`, `DrawNumImageComma_en`, `DrawSeb`, `DrawTrophyEffect`, `GetHighScore`, `GetHttpErrorText`, `GetNetHighScore`, `GettMoneyNetHighScore`, `NewGame`, `Post`, `ResourceReDownload`, `SaveGame`, `SendSaveData`
- **main.AppData+<DrawFukidashiKimochi>c__AnonStorey1** (2): `.ctor`, `<>m__3`
- **main.Main** (2): `OnResume`, `OnSuspend`
- **native.AppPlugin** (1): `.cctor`
- **panel.MainPanel** (2): `.ctor`, `Show`
- **surface.GamePad** (8): `.cctor`, `AddTouch`, `DrawBattery`, `DrawSoftLabelImage`, `DrawWatch`, `GetSideSize`, `SetLayoutMode`, `SetMode`
- **surface.GameView** (22): `.cctor`, `AddDelayPaintBuffer`, `AddEffect`, `OnTouchCamera`, `OnTouchDlgPage`, `OnTouchDlgPage2`, `OnTouchKeyClick`, `OnTouchKeyDown`, `OnTouchKeyPress`, `OnTouchKeyUp`, `OnTouchList`, `OnTouchMainMenu`, `OnTouchRect`, `OnTouchScrollList`, `OnTouchSubMenu`, `OnTouchTitleMenu`, `OnTouchTrackBar`, `OnTouchUnMarker`, `OnTouchVScrollBar`, `OnTouchVScrollButton`, `Set`
- **surface.SurfaceManager** (1): `SetLayoutMode`
- **surface.TouchEffectManager** (2): `Clear`, `RemoveEffect`
- **system.KairoService** (8): `.ctor`, `<Update>m__D`, `Connected`, `Finish`, `GetInstance`, `Save`, `SaveAll`, `Update`
- **system.KairoText** (2): `.cctor`, `LT`
- **system.billing.MyBilling** (3): `.ctor`, `CheckPlayingGame`, `GetInstance`
- **system.billing.ui.ApplyTask** (6): `.ctor`, `Enable`, `Equals`, `Init`, `IsGift`, `IsItem`
- **system.billing.ui.BillingItem** (11): `Check`, `CheckTestProduct`, `GetId`, `GetName`, `GetProductId`, `GetProvisionType`, `GetProvisionValue`, `GetProvisionValueText`, `GetSeriesName`, `GetSeriesNumber`, `GetState`
- **system.billing.ui.BillingManager** (17): `.cctor`, `.ctor`, `AddApplyTask`, `CheckNextConsume`, `CheckPlayingGame`, `CheckRegistApply`, `ConnectRegistMarketPurchase`, `Finish`, `GetInstance`, `GetItem`, `GetItems`, `GetSales`, `LaunchPurchaseFlow`, `RegistApplyTask`, `SearchApplyTask`, `UpdateApplyTask`, `UpdateBillingItems`
- **system.billing.ui.StoreBase** (2): `.cctor`, `.ctor`
- **system.form.BillingForm** (28): `.cctor`, `.ctor`, `CheckMainWindow`, `Draw`, `DrawCommand`, `DrawRect`, `FillRect`, `FillRect3`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `LoadResource`, `OnTouchEvent`, `Resume`, `Run`, `ScrollControl`, `ScrollUpdate`, `SetSoftlabel`, `SetTouchValue`, `ThreadStart`, `ToString`, `Update`, `UpdateSaleList`, `_draw`, `_update`
- **system.form.ConnectForm** (11): `.cctor`, `.ctor`, `Draw`, `DrawConnect`, `Finish`, `GetHashCode`, `Init`, `Resume`, `ToString`, `Update`, `_draw`
- **system.form.HttpForm** (12): `.cctor`, `.ctor`, `CheckMainWindow`, `Draw`, `DrawConnect`, `Finish`, `Init`, `Run`, `ToString`, `Update`, `get_ProcessError`, `set_ProcessError`
- **system.form.HttpForm+HttpMethod** (1): `.ctor`
- **system.form.HttpForm+ResultData** (7): `.ctor`, `System.Collections.IEnumerable.GetEnumerator`, `get_Error`, `get_Succeed`, `set_Error`, `set_Exception`, `set_Succeed`
- **system.form.LanguageForm** (11): `.ctor`, `<Update>m__1D`, `<Update>m__1E`, `<Update>m__1F`, `<Update>m__20`, `CheckMainWindow`, `Finish`, `Init`, `OnTouchEvent`, `ToString`, `Update`
- **system.friend.MyFriend** (2): `.ctor`, `GetInstance`
- **system.friend.ui.FriendData** (2): `.cctor`, `.ctor`
- **system.lineup.MyLineup** (2): `.ctor`, `GetInstance`
- **system.surface.GameBanner** (2): `.cctor`, `OnTouchEvent`

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
