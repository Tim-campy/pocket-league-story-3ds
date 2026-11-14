# Métodos nunca alcançados

Gerado em 2026-11-14 a partir de `config/translation.csv` (estado `translated` = compilado e nunca executado em diagnóstico; `todo` = sem corpo). Só nomes de métodos do C# reconstruído; nenhum conteúdo do jogo. Regenerar após cada rodada de cobertura.

| Grupo | translated | todo |
|---|---:|---:|
| Serviços removidos / políticas offline (cobrança, amigos, rede, Tapjoy) | 431 | 38 |
| Depuração (fora do percurso do jogador) | 19 | 0 |
| Jogo: telas e formulários | 245 | 2 |
| Jogo: dados e regras | 318 | 5 |

## Serviços removidos / políticas offline (cobrança, amigos, rede, Tapjoy)

- **TJPlacement** (1): `.ctor`*
- **analytics.AnalyticsTracker** (4): `.ctor`*, `DispatchPageView`, `TrackPageViewId`, `TrackPageView`
- **main.WebBox** (8): `.ctor`, `Create`, `Dispose`, `LoadUrl`, `SetViewRect`, `SetVisible`, `Visible`
- **native.AppPlugin** (6): `.cctor`*, `<Finish>m__4`*, `Finish`*, `Init`*, `LaunchMailer`, `ShowPurchaseLog`
- **native.WebBoxPlugin** (7): `.cctor`*, `Create`, `Dispose`, `LoadUrl`, `SetViewRect`, `SetVisible`, `Visible`
- **system.KairoService** (14): `.ctor`, `Connected`, `Finish`, `GetInstance`, `OnInit`, `OnLoadGame`, `OnLoad`, `OnNewGame`, `OnStart`, `OnWriteGame`, `OnWrite`, `SaveAll`, `Save`, `Update`
- **system.billing.MyBilling** (8): `.ctor`, `Cancel`, `CheckPlayingGame`, `ExecuteApplyTask`, `GetBillingTable`, `GetInstance`, `Init`, `Provisioning`
- **system.billing.ui.ApplyTask** (12): `.ctor`, `Deserialize`, `Enable`, `Equals`, `Init`, `IsGameApply`, `IsGiftScript`, `IsGift`, `IsItem`, `Serialize`
- **system.billing.ui.BillingItem** (26): `.ctor`, `ChangeState`, `CheckProvision`, `CheckTestProduct`, `Check`, `Deserialize`, `GetExplain`, `GetId`, `GetItemType`, `GetName`, `GetPlatformProductID`, `GetPrice`, `GetProductId`, `GetProvisionType`, `GetProvisionValueText`, `GetProvisionValue`, `GetPurchase`, `GetSeriesName`, `GetSeriesNumber`, `GetState`, `Init`, `Off`, `On`, `Serialize`, `SetProvision`, `SetPurchase`
- **system.billing.ui.BillingManager** (42): `.ctor`, `AddApplyTask`, `AddPurchaseLog`, `Cancel`, `CheckNextConsume`, `CheckPlayingGame`, `CheckRegistApply`, `ClearPurchaseLog`, `ConnectGetMarketPurchase`, `ConnectRegistMarketPurchase`, `Consume`, `ExecuteApplyTask`, `Finish`, `GetApplyTaskList`, `GetInstance`, `GetItemGroup`, `GetItemList`, `GetItem`, `GetItems`, `GetPurchaseLog`, `GetSales`, `Init`*, `LaunchPurchaseFlow`, `LoadGame`, `Load`*, `NewGame`, `Provisioning`, `Purchase`, `RegistApplyTask`, `RemoveApplyTask`, `SearchApplyTask`, `UpdateApplyTask`, `UpdateBillingItems`, `WriteGame`, `Write`
- **system.billing.ui.PurchaseLogView** (3): `.ctor`, `SetLog`, `Show`
- **system.billing.ui.PurchaseRecord** (12): `.ctor`, `ChangeState`, `Deserialize`, `GetHashCode`, `GetOrderId`, `GetProductId`, `GetState`, `GetTimeStampNengappi`, `GetTimeStamp`, `Serialize`, `ToString`
- **system.billing.ui.Receipt** (25): `.ctor`, `Consume`, `Copy`, `DebugVerificationReceipt`, `Equals`, `GetHashCode`, `GetItemType`, `GetJsonParam`, `GetJson`, `GetOrderId`, `GetProductID`, `GetProductType`, `GetPurchase`, `GetReceipt`, `IsConsume`, `IsTicketProduct`, `Load`, `PasswordDecodeToBytes`, `PasswordDecodeToString`, `PasswordEncode`, `Save`
- **system.billing.ui.StoreBase** (25): `.ctor`, `CallRestoreFlow`, `CheckPaymentMaintenance`, `CompletePayment`, `ConsumeItem`, `GetIncompletePayments`, `GetProductType`, `GetRestoreRequest`, `GetUnityJson`, `HasIncompletePayments`, `Init`, `InitializePurchasing`, `IsCompletePayment`, `IsInitialized`, `LaunchPurchaseFlow`, `Load`, `ProcessIncompletePayment`, `ProcessIncompletePayments`, `QueryInventory`, `Restore`, `Save`, `SearchReceipt`, `SetRestoreRequest`, `SetTime`, `WaitForInitialized`
- **system.billing.util.IabHelper** (1): `.ctor`*
- **system.billing.util.Inventory** (11): `.ctor`, `AddPurchase`, `AddSkuDetails`, `ErasePurchase`, `GetAllOwnedSkus`*, `GetAllPurchases`*, `GetPurchase`, `GetSkuDetails`, `HasDetails`, `HasPurchase`
- **system.billing.util.Json** (7): `.ctor`*, `AdjustJson`, `GetDetailJson`, `MakeJson`, `ReadJSon`, `Record`
- **system.billing.util.Purchase** (15): `.ctor`, `GetDeveloperPayload`, `GetHashCode`, `GetItemType`, `GetOrderId`, `GetOriginalJson`, `GetPackageName`, `GetPurchaseState`, `GetPurchaseTime`, `GetSignature`, `GetSku`, `GetToken`, `ReadJSon`, `ToString`
- **system.billing.util.SkuDetails** (11): `.ctor`, `GetDescription`, `GetHashCode`, `GetPrice`, `GetSku`, `GetTitle`, `GetTypeA`, `ReadJSon`, `ToString`
- **system.form.BillingForm** (41): `.ctor`, `CheckMainWindow`, `Comma`, `DrawAdOffButtoan`, `DrawCommand`, `DrawDotLine`, `DrawGradation`, `DrawLine`, `DrawObi`, `DrawRect2`, `DrawRect3`, `DrawRect`, `Draw`, `FillRect2`, `FillRect3`, `FillRect4`, `FillRectShadow`, `FillRect`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `LoadResource`, `OnTouchEvent`, `Resume`, `Run`, `ScrollControl`, `ScrollUpdate`, `SetSoftlabel`, `SetTouchValue`, `ThreadStart`, `ToString`, `UpdateSaleList`, `Update`, `_draw`, `_update`
- **system.form.ConnectForm** (10): `.ctor`, `DrawConnect`, `Draw`, `Finish`, `GetHashCode`, `Init`, `Resume`, `ToString`, `Update`, `_draw`
- **system.form.FriendForm** (40): `.ctor`, `DrawBonusObi`, `DrawCommand`, `DrawDotLine`, `DrawGradation`, `DrawLine`, `DrawNumImage`, `DrawObi`, `DrawRandomFriend`, `DrawRect2`, `DrawRect3`, `DrawRect`, `Draw`, `FillRect2`, `FillRect3`, `FillRect4`, `FillRectShadow`, `FillRect`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `LoadResource`, `MakeErrorDialog`, `MakeErrorMsgForm`, `OnTouchEvent`, `Resume`, `SetSoftLabel`, `SetTouchValue`, `ToString`, `Update`, `_draw`, `_update`
- **system.form.HttpForm** (15): `.ctor`, `CheckMainWindow`, `DrawConnect`, `Draw`, `Finish`, `Init`, `Run`, `SetConnectMethod`, `SetResultMethod`, `ToString`, `Update`, `get_IsCancelable`, `get_ProcessError`, `set_IsCancelable`, `set_ProcessError`
- **system.form.HttpForm+HttpMethod** (4): `.ctor`*, `BeginInvoke`*, `EndInvoke`*, `Invoke`*
- **system.form.HttpForm+ResultData** (11): `.ctor`, `Add`, `Get`, `HasKey`, `System.Collections.IEnumerable.GetEnumerator`*, `get_Error`, `get_Exception`, `get_Succeed`, `set_Error`, `set_Exception`, `set_Succeed`
- **system.form.LanguageForm** (7): `.ctor`, `CheckMainWindow`, `Finish`, `Init`, `OnTouchEvent`, `ToString`, `Update`
- **system.form.LineupForm** (14): `.ctor`, `CheckMainWindow`, `DrawCommand`, `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `Resume`, `SetSoftlabel`, `SetTouchValue`, `ToString`, `Update`
- **system.form.MatchForm** (18): `.ctor`, `CheckMainWindow`, `DrawCommand`, `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `Resume`, `Run`, `SetSoftlabel`, `SetTouchValue`, `ThreadStart`, `ToString`, `Update`, `_draw`, `_update`
- **system.form.MatchForm+UserRecord** (1): `.ctor`
- **system.form.RestoreForm** (6): `.ctor`, `CheckMainWindow`, `Draw`, `Init`, `ToString`, `Update`
- **system.friend.MyFriend** (4): `.ctor`, `CgiGetFriendList`, `GetInstance`, `PlayBonus`
- **system.friend.ui.Friend** (6): `.ctor`, `Deserialize`, `Serialize`
- **system.friend.ui.FriendData** (35): `.ctor`, `ActionSendMail`, `CgiApplyFriend`, `CgiApproveFriend`, `CgiGetFriendList`, `CgiRandomFriend`, `CgiRefuseFriend`, `CgiRegistFriend`, `CgiSearchFriend`, `CheckRegistFriend`, `DrawGradation`, `ExistRandomFriend`, `GetCurrentForm`, `GetFriendID`, `GetFriendName`, `GetInstance`, `GetPlayBonus`, `GetRandomFriend`, `Init`, `InitializeData`, `IsEffectiveRegistName`, `IsFriendDataUpdated`, `LoadGame`, `Load`, `NewGame`, `PackFriendBinalyData`, `RefreshFriendList`, `SetFriendName`, `UnpackFriendBinalyData`, `UpdatePlayTime`, `UpdateRandomFriend`, `WriteGame`, `Write`
- **system.friend.ui.FriendPlayTimeData** (4): `.ctor`, `Deserialize`, `Serialize`
- **system.tapjoy.MyTapjoy** (2): `.ctor`*, `GetInstance`*
- **system.tapjoy.ui.Tapjoy** (13): `.ctor`*, `AddBalance`*, `CallBalance`*, `GetBalance`*, `GetInstance`*, `GetOfferState`*, `Init`*, `OnApplicationQuit`*, `Print`*, `Quit`*, `ShowOffers`*, `Start`*, `SubBalance`*

## Depuração (fora do percurso do jogador)

- **form.DebugForm** (19): `Draw_coatEva`, `Draw_gameParam`, `Draw_goalMini`, `Draw_goal`, `Draw_moveArea`, `Draw_param`, `Draw_player`, `Draw_window`, `Draw`, `Finish`, `GetTouchValue`, `Init`, `Resume`, `SetTouchValue`, `UpdateTestParam`, `Update_gameParam`, `Update_param`, `Update_window`, `Update`

## Jogo: telas e formulários

- **form.BootForm** (8): `DivServerData`, `Download`, `GetHashCode`, `GetTouchValue`, `Resume`, `SetTouchValue`, `ToString`, `UpdateScoreFromNetwork`
- **form.FormManager** (4): `GetFps`, `Resume`, `StartVibrator`, `StopVibrator`
- **form.GameForm** (21): `AddCommandEvent`, `AddCommandScene`, `AddCommandSpecial`, `AddCommandWait`, `ClearScript`, `Draw_watch`, `GetFirstScript`, `GetHashCode`, `GetScaleRange`, `GetTouchValue`, `OnTouchCamera`, `OnTouchEvent`, `ResetOffscreen`, `Resume`, `Script`, `SetBuildBtmMessage`, `SetCameraPosition`, `SetCursorPosition`, `SetScale`, `SetTouchValue`, `ToString`
- **form.MyFormBase** (26): `BackFontSize`, `Check`, `Format`, `GetBoxFooterY`, `GetBoxHeaderY`, `Manyen`, `OnTouchEvent`, `Pop`, `PushFontSize`, `Push`, `Replace`, `Resume`, `SetTouchValue`, `UNI`, `Yen`
- **form.RankForm** (12): `ChangeState`, `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `Resume`, `SetSoftLabel`, `SetTouchValue`, `ToString`, `Update`, `_draw`
- **form.SoccerForm** (24): `AddCommandCard`, `AddCommandEvent`, `AddCommandGMChangeState`, `AddCommandScene`, `AddCommandSpecial`, `AddCommandWait`, `ClearScript`, `Draw_matchElse`, `Draw_newPlayerPopular`, `Draw_topBarParts`, `Draw_topBar`, `Draw_watch`, `GetDrawTBAROff`, `GetFirstScript`, `GetHashCode`, `GetScaleRange`, `GetTouchValue`, `OnTouchCamera`, `OnTouchEvent`, `ResetOffscreen`, `Resume`, `SetScale`, `SetTouchValue`, `ToString`
- **form.SpForm** (18): `.ctor`, `AddCommand`, `ChangeState`, `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `MakeSendDataTask`, `Resume`, `Run`, `SetSoftLabel`, `SetTouchValue`, `ShowDialog`, `ToString`, `Update`, `_draw`
- **form.SubForm** (46): `.ctor`, `DrawCommand`, `DrawConfig_jp`, `DrawInputValue`, `DrawMeter`, `DrawWindow2`, `DrawWindow`, `Draw_btmMsg`, `Draw_clearPoint`, `Draw_fanActBack`, `Draw_multiParam`, `Draw_tenantBuildIcon`, `Draw_trainingIcon`, `Draw_udArrow`, `Draw_up`, `FinishMeterParam`, `GetBoxHeaderY`, `GetHashCode`, `GetMeterParam`, `GetStringLength`, `IsSimpleChara`, `MakeNoMymenu`, `MakeSystemDialog`, `MakeTalkForm`, `OnTouchEvent`, `Resume`, `ScrollControl`, `ScrollUpdate`, `SetEvent`, `SetMeterParamDispAdd`, `SetMeterParamRank`, `SetMeterParam`, `SetTicketWindowBtmMsg`, `SetTouchValue`, `SetWinCharaTraining`, `ToString`, `UpdateMeterParam`, `Update_clearPoint`
- **form.TitleForm** (7): `GetHashCode`, `OnTouchEvent`, `Resume`, `SetTouchValue`, `ToString`, `UpdateKairoAdClickNum`
- **panel.MainPanel** (5): `.ctor`, `Show`, `Show`*
- **surface.GamePad** (14): `AddTouch`, `DrawBattery`, `DrawSoftLabelImage`, `DrawWatch`, `GetDivisionArea`, `GetLayoutMode`, `GetOptionPage`, `GetSideSize`, `IsSoftLabelID`, `OnTouchEvent`, `RotateClear`, `SetLayoutMode`, `SetMode`, `SetOptionPage`
- **surface.GameView** (37): `AddDelayPaintBuffer`, `AddEffect`, `AddTouch`, `CheckMarker`, `GetKey`, `Join`, `OnReceiveTouchEvent`, `OnTouchCamera`, `OnTouchDlgCmd`, `OnTouchDlgPage2`, `OnTouchDlgPage`, `OnTouchDlgSel`, `OnTouchEvent`, `OnTouchKeyClick`, `OnTouchKeyDown`, `OnTouchKeyPress`, `OnTouchKeyUp`, `OnTouchList`, `OnTouchMainMenu`, `OnTouchRect`, `OnTouchScrollList`, `OnTouchSubMenu`, `OnTouchTitleMenu`, `OnTouchTrackBar`, `OnTouchUnMarker`, `OnTouchVScrollBar`, `OnTouchVScrollButton`, `RotateClear`, `Set`
- **surface.SurfaceManager** (2): `IsLayoutMode`, `SetLayoutMode`
- **surface.TouchEffect** (5): `.ctor`, `Draw`, `Frame`, `Init`
- **surface.TouchEffectManager** (9): `AddEffect`, `Add`, `Clear`, `RemoveComponentId`, `RemoveComponentKey`, `RemoveEffect`, `RemoveId`
- **system.panel.InputPanel** (4): `.ctor`, `Show`, `Show`*
- **system.surface.GameBanner** (5): `Load`, `OnTouchEvent`, `RotateClear`, `Unload`, `Visible`

## Jogo: dados e regras

- **<PrivateImplementationDetails>** (1): `.ctor`*
- **BuildInfos.BuildInfo** (1): `.ctor`*
- **cfg.MyConfig** (1): `.ctor`*
- **data.BaseData** (1): `Check`
- **data.EventData** (3): `CheckScript`, `LoadStringTable`, `Search`
- **data.FanActData** (10): `AddRankUpParam`, `ChangeAssistAddEva`, `ChangeState`, `GetAddEvaLimitOver`, `GetDispParamToEva`, `GetFanAddParamNum`, `IsNew`, `NewGame`, `RankUp`, `RemoveNew`
- **data.FanBonusData** (1): `NewGame`
- **data.FormationData** (2): `ChangeState`, `NewGame`
- **data.LeagueData** (8): `ChangeState`, `IsVictoryLeague`, `IsVictoryMatch`, `NewGame`, `RegistLeague`, `RemoveNew`, `SetGetTrophy`, `SetLeagueInfoExplain`
- **data.PlayerData** (10): `AddPhysicalParam`, `Dismissal`, `Employ`, `GetBallShedRate`, `GetClearSpeed`, `GetTrapBallV`, `NewGame`, `SetTrainingAddParam`, `Start_aura`
- **data.QuestMatchData** (2): `NewGame`, `SetGenericData`
- **data.SponsorData** (4): `GetDifficultStr`, `GetIncome`, `NewGame`, `RemoveNew`
- **data.StadiumData** (1): `NewGame`
- **data.SupervisorData** (4): `ChangeState`, `ContractSupervisor`, `LvUp`, `NewGame`
- **data.TeamData** (3): `NewGame`, `SetScoreRanking`, `SetScore`
- **data.TenantData** (13): `ChangeState`, `GetFanToEf`, `GetGoodsIncomeRate`, `GetLvUpAddParam`, `IsMaxLv`, `IsNew`, `IsStreangth`, `IsTAreaOrStadiumTenant`, `LvUp`, `NewGame`, `ProcStrenSpecialTenant`, `RemoveNew`, `StrengthTenant`
- **data.TradeData** (3): `GetSuccessRate`, `IsPlayerInMember`, `NewGame`
- **data.TrainingData** (4): `ChangeState`, `GetTrainingAddParamNum`, `NewGame`, `RemoveNew`
- **game.Ball** (1): `ChangeState`
- **game.Camera** (5): `ChDisplayable`, `ConvertAddressToScreen`, `ConvertScreenToCamera`, `SetMapPosData`
- **game.DelayEvent** (1): `Deserialize`
- **game.GameUtil** (29): `Abs`, `AddRand`, `Bezier`, `ChOnLine`, `ChRectHitParallel`, `ClampMax`, `ClampMin`, `Clamp`, `ConvertGameEva`, `ConvertKeyToGameKey`, `Convert_return`, `Dot`, `GetA_fixV0DIS`, `GetCrossPoint`, `GetDistanceFromPos`, `Pow`, `RateChA`, `RateChB`, `RateConvertArea`, `RateConvert`, `SetAMSet`, `SetAReturn`, `SetAVelocity`, `SetVReturn`, `SetVVelocity`, `SetV`
- **game.Map** (3): `Draw_copyArea`, `Draw_goalPoint`, `GetGoalPartsDepth`
- **game.MapMain** (3): `Draw_copyArea`, `Draw_trainingCoat`, `UpdateTrainingCoatNum`
- **game.Player** (14): `AddCommandChangeState`, `AddCommandFlag`, `AddCommandGoalSad`, `AddCommandMove`, `AddCommandThrowIn`, `AddCommandVolley`, `AddCommandWaitStop`, `ChRepetition`, `ChTrapOrHeading`, `ChangeState`, `Collision`, `DebugLogOut`, `Debug_1keyStop`, `GetActIdFromSeb`
- **game.TArea** (1): `SetPlayerGatherPos`
- **game.TBall** (1): `Init_training`
- **game.TGroupArea** (1): `SetPlayerGatherPos`
- **game.TPlayer** (4): `AddCommandRunningRegist`, `AddCommandRunning`, `EndTrainingScript`, `StopTraining`
- **game.Team** (9): `Cal_evaCoatAdd9block`, `Cal_evaCoatAdd`, `Cal_evaCoatMulti`, `Collision`, `GetMostEvaAddress`, `Update_coatEvaDefence`, `Update_coatEvaFreeRun`, `Update_coatEvaLooseBall`, `Update_coatEvaPasser`
- **game.Tenant** (5): `BuildTenant`, `ChangeState`, `DestructTenant`, `OutUserTPlayers`, `StrenghTenant`
- **game.UserData** (37): `ChGetFeelPtEfCommentParam_dispRefresh`, `ChTime1`, `ChTime2`, `ChangeTraining`, `CustomerNumReset`, `DrawGraph_menuElement`, `Draw_editButton`, `GetAddFeelPtEf`, `GetDispPlayer`, `GetEvaWarPNameValue`, `GetFeelPtEfCommentParam`, `GetFeelPtEfRetStr`, `GetFeelPtEf`, `GetLeagueDataIndex`, `GetLeagueData`, `GetNextBattleLeagueIndex`, `GetParamPlusNum`, `GetTeamScore`, `GetTicketPriceRate`, `League_finish`, `League_resetScore`, `League_setFightResult`, `League_update`, `NewGame`, `PrintOut`, `RecordReset`, `ReflectContinueGameData`, `RotateTestPlayParam`, `SetClearPoint`, `SetContinueGameData`, `SetMemberChangeList`, `SetNegotiateResult`, `SubResearchPoint`, `Update_12v3`, `Update_45v1`, `Update_78v2`, `Update_league`
- **main.AppData** (121): `AddDebugLog`, `AddEffectTUp`, `AddPopupScriptBuffer`, `BooleanToByteArray`, `BubbleSort`, `CgiGetScoreURL`, `CgiGetScore`, `CgiRankingURL`, `CgiRanking`, `CgiRegistScoreURL`, `CgiRegistScore`, `CgiRegistURL`, `ChangeMap`, `CheckNightTime`, `CheckPointInPolygon`, `CheckSleepingTime`, `CheckTimeZone`, `ClampMax`, `ClampMin`, `Clamp`, `ClearPopupMessages`, `ColRect`, `DateToDays`, `DateToTime`, `DeserializeScripts`, `Draw3DBox`, `DrawArcRect`, `DrawCommand`, `DrawFillArcRect`, `DrawFukidashiBalloon`, `DrawFukidashiKimochiOLD`, `DrawFukidashiKimochi`, `DrawFukidashiOLD`, `DrawIcon`, `DrawMeter`, `DrawMoney2`, `DrawMoney3`, `DrawMoney4`, `DrawNumImageComma_en`, `DrawNumImage`, `DrawOutline`, `DrawSebReverse`, `DrawSebV`, `DrawSeb`, `DrawTrophyEffect`, `DrawZSortObjects`, `Draw`, `ExecuteScript`, `FillArcRect`, `FrameToMilliSecond`, `Gc`, `GetAllStock`, `GetBRectSeb`, `GetHighScore`, `GetHttpErrorText`, `GetInt2Array`, `GetIntArray`, `GetIsometricX`, `GetIsometricY`, `GetMainBGM`, `GetNearNeighborNode`, `GetNeighborNodeList`, `GetNetHighScore`, `GetNowStoreIndex`, `GetPopupMessage`, `GetSeason`, `GetStockTotal`, `GetTime`, `GettMoneyNetHighScore`, `InsertGameObject`, `IntToByteArray`, `IntegerVectorToIntAry`, `IsPushStateSoftLabel`, `LoadGame`, `MakeQuery`, `Max`, `Min`, `NewGame`, `PhpDlFile`, `Post`, `Print`, `Random`, `RemovePopupMessages`, `ResourceReDownload`, `RotatePoint`, `SaveGame`, `SbyteArrayToBoolean`, `SbyteArrayToInt`, `SearchInteger`, `SendSaveData`, `SerializeScripts`, `SetHighScore`, `SetNetHighScore`, `SetNowStoreIndex`, `SettMoneyNetHighScore`, `ShowNews`, `Sort`, `UpdatePassiveScript`
- **main.AppData+stringErrorCode** (1): `.ctor`*
- **main.Main** (4): `GetInstance`, `GetJingle`, `OnResume`, `OnSuspend`
- **system.KairoText** (4): `.ctor`*, `LT`
- **system.lineup.MyLineup** (3): `.ctor`, `GetInstance`, `Start`
- **system.notification.MyNotify** (4): `.ctor`, `GetInstance`, `OnNotify`, `OnReceiveValue`

`*` = sem corpo (`todo`).
