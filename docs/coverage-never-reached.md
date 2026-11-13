# Métodos nunca alcançados

Gerado em 2026-11-13 a partir de `config/translation.csv` (estado `translated` = compilado e nunca executado em diagnóstico; `todo` = sem corpo). Só nomes de métodos do C# reconstruído; nenhum conteúdo do jogo. Regenerar após cada rodada de cobertura.

| Grupo | translated | todo |
|---|---:|---:|
| Serviços removidos / políticas offline (cobrança, amigos, rede, Tapjoy) | 383 | 134 |
| Depuração (fora do percurso do jogador) | 19 | 1 |
| Jogo: telas e formulários | 255 | 21 |
| Jogo: dados e regras | 331 | 34 |

## Serviços removidos / políticas offline (cobrança, amigos, rede, Tapjoy)

- **TJPlacement** (1): `.ctor`*
- **UnityEngine.Purchasing.Product** (1): `.ctor`*
- **analytics.AnalyticsTracker** (4): `.ctor`*, `DispatchPageView`, `TrackPageViewId`, `TrackPageView`
- **main.WebBox** (8): `.ctor`*, `Create`*, `Dispose`*, `LoadUrl`*, `SetViewRect`*, `SetVisible`*, `Visible`*
- **native.AppPlugin** (6): `.cctor`*, `<Finish>m__4`*, `Finish`*, `Init`*, `LaunchMailer`*, `ShowPurchaseLog`*
- **native.AppPlugin+<LaunchMailer>c__AnonStorey3** (2): `.ctor`*, `<>m__6`*
- **native.AppPlugin+<ShowPurchaseLog>c__AnonStorey2** (2): `.ctor`*, `<>m__5`*
- **native.WebBoxPlugin** (10): `.cctor`*, `<Create>m__7`*, `<Dispose>m__A`*, `<Visible>m__B`*, `Create`*, `Dispose`*, `LoadUrl`*, `SetViewRect`*, `SetVisible`*, `Visible`*
- **native.WebBoxPlugin+<LoadUrl>c__AnonStorey5** (2): `.ctor`*, `<>m__9`*
- **native.WebBoxPlugin+<SetViewRect>c__AnonStorey4** (2): `.ctor`*, `<>m__8`*
- **native.WebBoxPlugin+<SetVisible>c__AnonStorey6** (2): `.ctor`*, `<>m__C`*
- **system.KairoService** (15): `.ctor`, `<Update>m__D`*, `Connected`*, `Finish`, `GetInstance`, `OnInit`*, `OnLoadGame`, `OnLoad`*, `OnNewGame`, `OnStart`*, `OnWriteGame`, `OnWrite`, `SaveAll`, `Save`, `Update`
- **system.billing.MyBilling** (8): `.ctor`, `Cancel`, `CheckPlayingGame`, `ExecuteApplyTask`, `GetBillingTable`, `GetInstance`, `Init`*, `Provisioning`
- **system.billing.ui.ApplyTask** (12): `.ctor`, `Deserialize`, `Enable`, `Equals`, `Init`, `IsGameApply`, `IsGiftScript`, `IsGift`, `IsItem`, `Serialize`
- **system.billing.ui.BillingItem** (26): `.ctor`*, `ChangeState`, `CheckProvision`, `CheckTestProduct`, `Check`, `Deserialize`, `GetExplain`, `GetId`, `GetItemType`, `GetName`, `GetPlatformProductID`, `GetPrice`, `GetProductId`, `GetProvisionType`, `GetProvisionValueText`, `GetProvisionValue`, `GetPurchase`, `GetSeriesName`, `GetSeriesNumber`, `GetState`, `Init`, `Off`, `On`, `Serialize`, `SetProvision`, `SetPurchase`
- **system.billing.ui.BillingManager** (44): `.cctor`*, `.ctor`, `<Provisioning>m__10`*, `AddApplyTask`, `AddPurchaseLog`, `Cancel`, `CheckNextConsume`, `CheckPlayingGame`, `CheckRegistApply`, `ClearPurchaseLog`, `ConnectGetMarketPurchase`, `ConnectRegistMarketPurchase`, `Consume`, `ExecuteApplyTask`, `Finish`, `GetApplyTaskList`, `GetInstance`, `GetItemGroup`, `GetItemList`, `GetItem`, `GetItems`, `GetPurchaseLog`, `GetSales`, `Init`*, `LaunchPurchaseFlow`, `LoadGame`, `Load`*, `NewGame`, `Provisioning`, `Purchase`, `RegistApplyTask`, `RemoveApplyTask`, `SearchApplyTask`, `UpdateApplyTask`, `UpdateBillingItems`, `WriteGame`, `Write`
- **system.billing.ui.PurchaseLogView** (3): `.ctor`, `SetLog`, `Show`*
- **system.billing.ui.PurchaseRecord** (12): `.ctor`, `ChangeState`, `Deserialize`, `GetHashCode`, `GetOrderId`, `GetProductId`, `GetState`, `GetTimeStampNengappi`, `GetTimeStamp`, `Serialize`, `ToString`
- **system.billing.ui.Receipt** (26): `.cctor`*, `.ctor`, `Consume`, `Copy`, `DebugVerificationReceipt`, `Equals`, `GetHashCode`, `GetItemType`, `GetJsonParam`, `GetJson`, `GetOrderId`, `GetProductID`, `GetProductType`, `GetPurchase`, `GetReceipt`, `IsConsume`, `IsTicketProduct`, `Load`, `PasswordDecodeToBytes`, `PasswordDecodeToString`, `PasswordEncode`, `Save`
- **system.billing.ui.StoreBase** (28): `.cctor`*, `.ctor`, `<GetRestoreRequest>m__E`*, `CallRestoreFlow`, `CheckPaymentMaintenance`*, `CompletePayment`, `ConsumeItem`, `GetIncompletePayments`, `GetItems`*, `GetProductType`, `GetRestoreRequest`, `GetUnityJson`, `HasIncompletePayments`, `Init`, `InitializePurchasing`, `IsCompletePayment`, `IsInitialized`, `LaunchPurchaseFlow`, `Load`, `ProcessIncompletePayment`*, `ProcessIncompletePayments`*, `QueryInventory`, `Restore`, `Save`, `SearchReceipt`, `SetRestoreRequest`, `SetTime`, `WaitForInitialized`
- **system.billing.ui.StoreBase+<SetRestoreRequest>c__AnonStorey7** (2): `.ctor`*, `<>m__F`*
- **system.billing.util.IabHelper** (1): `.ctor`*
- **system.billing.util.Inventory** (11): `.ctor`, `AddPurchase`, `AddSkuDetails`, `ErasePurchase`, `GetAllOwnedSkus`*, `GetAllPurchases`*, `GetPurchase`, `GetSkuDetails`, `HasDetails`, `HasPurchase`
- **system.billing.util.Json** (7): `.ctor`*, `AdjustJson`, `GetDetailJson`, `MakeJson`, `ReadJSon`, `Record`
- **system.billing.util.Purchase** (15): `.ctor`, `GetDeveloperPayload`, `GetHashCode`, `GetItemType`, `GetOrderId`, `GetOriginalJson`, `GetPackageName`, `GetPurchaseState`, `GetPurchaseTime`, `GetSignature`, `GetSku`, `GetToken`, `ReadJSon`, `ToString`
- **system.billing.util.SkuDetails** (11): `.ctor`, `GetDescription`, `GetHashCode`, `GetPrice`, `GetSku`, `GetTitle`, `GetTypeA`, `ReadJSon`, `ToString`
- **system.form.BillingForm** (42): `.cctor`*, `.ctor`, `CheckMainWindow`, `Comma`, `DrawAdOffButtoan`, `DrawCommand`, `DrawDotLine`, `DrawGradation`, `DrawLine`, `DrawObi`, `DrawRect2`, `DrawRect3`, `DrawRect`, `Draw`, `FillRect2`, `FillRect3`, `FillRect4`, `FillRectShadow`, `FillRect`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `LoadResource`, `OnTouchEvent`, `Resume`, `Run`*, `ScrollControl`, `ScrollUpdate`, `SetSoftlabel`, `SetTouchValue`, `ThreadStart`, `ToString`, `UpdateSaleList`, `Update`*, `_draw`, `_update`*
- **system.form.ConnectForm** (11): `.cctor`*, `.ctor`, `DrawConnect`, `Draw`, `Finish`, `GetHashCode`, `Init`, `Resume`, `ToString`, `Update`, `_draw`
- **system.form.FriendForm** (53): `.cctor`*, `.ctor`, `<Init>m__11`*, `<_update>m__12`*, `<_update>m__13`*, `<_update>m__14`*, `<_update>m__15`*, `<_update>m__16`*, `<_update>m__17`*, `<_update>m__18`*, `<_update>m__19`*, `<_update>m__1A`*, `<_update>m__1B`*, `<_update>m__1C`*, `DrawBonusObi`, `DrawCommand`, `DrawDotLine`, `DrawGradation`, `DrawLine`, `DrawNumImage`, `DrawObi`, `DrawRandomFriend`, `DrawRect2`, `DrawRect3`, `DrawRect`, `Draw`, `FillRect2`, `FillRect3`, `FillRect4`, `FillRectShadow`, `FillRect`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`*, `LoadResource`, `MakeErrorDialog`, `MakeErrorMsgForm`, `OnTouchEvent`, `Resume`, `SetSoftLabel`, `SetTouchValue`, `ToString`, `Update`*, `_draw`, `_update`*
- **system.form.HttpForm** (16): `.cctor`*, `.ctor`, `CheckMainWindow`, `DrawConnect`, `Draw`, `Finish`, `Init`, `Run`, `SetConnectMethod`, `SetResultMethod`, `ToString`, `Update`, `get_IsCancelable`, `get_ProcessError`, `set_IsCancelable`, `set_ProcessError`
- **system.form.HttpForm+HttpMethod** (4): `.ctor`*, `BeginInvoke`*, `EndInvoke`*, `Invoke`*
- **system.form.HttpForm+ResultData** (11): `.ctor`, `Add`, `Get`, `HasKey`, `System.Collections.IEnumerable.GetEnumerator`*, `get_Error`, `get_Exception`, `get_Succeed`, `set_Error`, `set_Exception`, `set_Succeed`
- **system.form.LanguageForm** (11): `.ctor`, `<Update>m__1D`*, `<Update>m__1E`*, `<Update>m__1F`*, `<Update>m__20`*, `CheckMainWindow`, `Finish`, `Init`, `OnTouchEvent`, `ToString`, `Update`*
- **system.form.LineupForm** (15): `.cctor`*, `.ctor`, `CheckMainWindow`, `DrawCommand`, `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `Resume`, `SetSoftlabel`, `SetTouchValue`, `ToString`, `Update`
- **system.form.MatchForm** (19): `.cctor`*, `.ctor`, `CheckMainWindow`, `DrawCommand`, `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `Resume`, `Run`*, `SetSoftlabel`, `SetTouchValue`, `ThreadStart`, `ToString`, `Update`, `_draw`, `_update`
- **system.form.MatchForm+UserRecord** (1): `.ctor`*
- **system.form.RestoreForm** (7): `.ctor`, `<Init>m__21`*, `CheckMainWindow`, `Draw`, `Init`, `ToString`, `Update`
- **system.friend.MyFriend** (4): `.ctor`, `CgiGetFriendList`*, `GetInstance`, `PlayBonus`
- **system.friend.ui.Friend** (6): `.ctor`, `.ctor`*, `Deserialize`, `Serialize`
- **system.friend.ui.FriendData** (37): `.cctor`*, `.ctor`, `ActionSendMail`*, `CgiApplyFriend`*, `CgiApproveFriend`*, `CgiGetFriendList`*, `CgiRandomFriend`*, `CgiRefuseFriend`*, `CgiRegistFriend`*, `CgiSearchFriend`*, `CheckRegistFriend`, `DrawGradation`, `ExistRandomFriend`, `GetCurrentForm`, `GetFriendID`, `GetFriendName`, `GetInstance`, `GetPlayBonus`, `GetRandomFriend`, `Init`, `InitializeData`, `IsEffectiveRegistName`, `IsFriendDataUpdated`, `LoadGame`, `Load`, `NewGame`, `PackFriendBinalyData`, `PlayBonus`*, `RefreshFriendList`*, `SetFriendName`, `UnpackFriendBinalyData`, `UpdatePlayTime`, `UpdateRandomFriend`*, `WriteGame`, `Write`
- **system.friend.ui.FriendPlayTimeData** (4): `.ctor`, `Deserialize`, `Serialize`
- **system.tapjoy.MyTapjoy** (2): `.ctor`*, `GetInstance`*
- **system.tapjoy.ui.Tapjoy** (13): `.ctor`*, `AddBalance`*, `CallBalance`*, `GetBalance`*, `GetInstance`*, `GetOfferState`*, `Init`*, `OnApplicationQuit`*, `Print`*, `Quit`*, `ShowOffers`*, `Start`*, `SubBalance`*

## Depuração (fora do percurso do jogador)

- **form.DebugForm** (20): `.cctor`*, `Draw_coatEva`, `Draw_gameParam`, `Draw_goalMini`, `Draw_goal`, `Draw_moveArea`, `Draw_param`, `Draw_player`, `Draw_window`, `Draw`, `Finish`, `GetTouchValue`, `Init`, `Resume`, `SetTouchValue`, `UpdateTestParam`, `Update_gameParam`, `Update_param`, `Update_window`, `Update`

## Jogo: telas e formulários

- **form.BootForm** (9): `.cctor`*, `DivServerData`, `Download`, `GetHashCode`, `GetTouchValue`, `Resume`, `SetTouchValue`, `ToString`, `UpdateScoreFromNetwork`
- **form.FormManager** (5): `.cctor`*, `GetFps`, `Resume`, `StartVibrator`*, `StopVibrator`
- **form.GameForm** (22): `.cctor`*, `AddCommandEvent`, `AddCommandScene`, `AddCommandSpecial`, `AddCommandWait`, `ClearScript`, `Draw_watch`, `GetFirstScript`, `GetHashCode`, `GetScaleRange`, `GetTouchValue`, `OnTouchCamera`, `OnTouchEvent`, `ResetOffscreen`, `Resume`, `Script`, `SetBuildBtmMessage`, `SetCameraPosition`, `SetCursorPosition`, `SetScale`, `SetTouchValue`, `ToString`
- **form.MyFormBase** (31): `.cctor`*, `BackFontSize`, `Check`, `DrawWindow2`, `DrawWindow`, `Format`, `GetBoxFooterY`, `GetBoxHeaderY`, `GetTouchValue`, `Manyen`, `OnTouchEvent`, `Pop`, `PushFontSize`, `Push`, `Replace`, `Resume`, `SetTouchValue`, `Tv`, `UNI`, `Yen`
- **form.RankForm** (13): `.cctor`*, `ChangeState`, `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `Resume`, `SetSoftLabel`, `SetTouchValue`, `ToString`, `Update`, `_draw`
- **form.SoccerForm** (25): `.cctor`*, `AddCommandCard`, `AddCommandEvent`, `AddCommandGMChangeState`, `AddCommandScene`, `AddCommandSpecial`, `AddCommandWait`, `ClearScript`, `Draw_matchElse`, `Draw_newPlayerPopular`, `Draw_topBarParts`, `Draw_topBar`, `Draw_watch`, `GetDrawTBAROff`, `GetFirstScript`, `GetHashCode`, `GetScaleRange`, `GetTouchValue`, `OnTouchCamera`, `OnTouchEvent`, `ResetOffscreen`, `Resume`, `SetScale`, `SetTouchValue`, `ToString`
- **form.SpForm** (19): `.cctor`*, `.ctor`, `AddCommand`, `ChangeState`, `Draw`, `Finish`, `GetHashCode`, `GetTouchValue`, `Init`, `MakeSendDataTask`, `Resume`, `Run`*, `SetSoftLabel`, `SetTouchValue`, `ShowDialog`, `ToString`, `Update`, `_draw`
- **form.SubForm** (55): `.cctor`*, `.ctor`, `DrawCommand`, `DrawConfig_en`, `DrawConfig_jp`, `DrawInputValue`, `DrawMeter`, `DrawWindow2`, `DrawWindow`, `Draw_btmMsg`, `Draw_clearPoint`, `Draw_fanActBack`, `Draw_multiParam`, `Draw_tenantBuildIcon`, `Draw_trainingIcon`, `Draw_udArrow`, `Draw_up`, `FinishMeterParam`, `GetBoxFooterY`, `GetBoxHeaderY`, `GetHashCode`, `GetMeterParam`, `GetStringLength`, `InitDialog`, `IsSimpleChara`, `MakeDialog`, `MakeNews`, `MakeNoMymenu`, `MakeSystemDialog`, `MakeTalkForm`, `MakeWait`, `OnTouchEvent`, `Resume`, `ScrollControl`, `ScrollUpdate`, `SetEvent`, `SetMeterParamDispAdd`, `SetMeterParamRank`, `SetMeterParam`, `SetTicketWindowBtmMsg`, `SetTouchValue`, `SetWinCharaTraining`, `ToString`, `UpdateMeterParam`, `Update_clearPoint`
- **form.SubForm+<Update2>c__AnonStorey0** (3): `.ctor`*, `<>m__0`*, `<>m__1`*
- **form.TitleForm** (9): `.cctor`*, `<_draw>m__2`*, `GetHashCode`, `OnTouchEvent`, `Resume`, `SetTouchValue`, `ToString`, `UpdateKairoAdClickNum`
- **panel.MainPanel** (5): `.ctor`, `Show`, `Show`*
- **surface.GamePad** (15): `.cctor`*, `AddTouch`, `DrawBattery`, `DrawSoftLabelImage`, `DrawWatch`, `GetDivisionArea`, `GetLayoutMode`, `GetOptionPage`, `GetSideSize`, `IsSoftLabelID`, `OnTouchEvent`, `RotateClear`, `SetLayoutMode`, `SetMode`, `SetOptionPage`
- **surface.GameView** (39): `.cctor`*, `AddDelayPaintBuffer`, `AddEffect`, `AddTouch`, `CheckMarker`, `GetKey`, `Join`, `OnReceiveTouchEvent`, `OnTouchCamera`, `OnTouchDlgCmd`, `OnTouchDlgPage2`, `OnTouchDlgPage`, `OnTouchDlgSel`, `OnTouchEvent`, `OnTouchKeyClick`, `OnTouchKeyDown`, `OnTouchKeyPress`, `OnTouchKeyUp`, `OnTouchList`, `OnTouchMainMenu`, `OnTouchRect`, `OnTouchScrollList`, `OnTouchSubMenu`, `OnTouchTitleMenu`, `OnTouchTrackBar`, `OnTouchUnMarker`, `OnTouchVScrollBar`, `OnTouchVScrollButton`, `RotateClear`, `Set`
- **surface.SurfaceManager** (2): `IsLayoutMode`, `SetLayoutMode`
- **surface.TouchEffect** (5): `.ctor`, `Draw`, `Frame`, `Init`
- **surface.TouchEffectManager** (9): `AddEffect`, `Add`, `Clear`, `RemoveComponentId`, `RemoveComponentKey`, `RemoveEffect`, `RemoveId`
- **system.panel.InputPanel** (4): `.ctor`, `Show`, `Show`*
- **system.surface.GameBanner** (6): `.cctor`*, `Load`, `OnTouchEvent`, `RotateClear`, `Unload`, `Visible`*

## Jogo: dados e regras

- **<PrivateImplementationDetails>** (1): `.ctor`*
- **BuildInfos.BuildInfo** (1): `.ctor`*
- **cfg.MyConfig** (2): `.cctor`*, `.ctor`*
- **data.BaseData** (1): `Check`
- **data.EventData** (3): `CheckScript`, `LoadStringTable`, `Search`
- **data.FanActData** (12): `.cctor`*, `AddRankUpParam`, `ChangeAssistAddEva`, `ChangeState`, `GetAddEvaLimitOver`, `GetDispParamToEva`, `GetFanAddParamNum`, `IsExistNew`, `IsNew`, `NewGame`, `RankUp`, `RemoveNew`
- **data.FanBonusData** (2): `.cctor`*, `NewGame`
- **data.FormationData** (3): `ChangeState`, `NewGame`, `UpdateStamemRole`
- **data.LeagueData** (8): `ChangeState`, `IsVictoryLeague`, `IsVictoryMatch`, `NewGame`, `RegistLeague`, `RemoveNew`, `SetGetTrophy`, `SetLeagueInfoExplain`
- **data.PlayerData** (12): `.cctor`*, `AddPhysicalParam`, `Dismissal`, `Employ`, `GetBallShedRate`, `GetClearSpeed`, `GetTrapBallV`, `NewGame`, `RemoveNew`, `SetTrainingAddParam`, `Start_aura`
- **data.QuestMatchData** (2): `NewGame`, `SetGenericData`
- **data.SponsorData** (7): `.cctor`*, `GetDifficultStr`, `GetIncome`, `IsExistNew`, `IsNew`, `NewGame`, `RemoveNew`
- **data.StadiumData** (1): `NewGame`
- **data.SupervisorData** (5): `.cctor`*, `ChangeState`, `ContractSupervisor`, `LvUp`, `NewGame`
- **data.TeamData** (3): `NewGame`, `SetScoreRanking`, `SetScore`
- **data.TenantData** (15): `.cctor`*, `ChangeState`, `GetFanToEf`, `GetGoodsIncomeRate`, `GetLvUpAddParam`, `IsExistNew`, `IsMaxLv`, `IsNew`, `IsStreangth`, `IsTAreaOrStadiumTenant`, `LvUp`, `NewGame`, `ProcStrenSpecialTenant`, `RemoveNew`, `StrengthTenant`
- **data.TradeData** (4): `GetSuccessRate`, `IsPlayerInMember`, `NewGame`, `RemoveNew`
- **data.TrainingData** (5): `.cctor`*, `ChangeState`, `GetTrainingAddParamNum`, `NewGame`, `RemoveNew`
- **game.Ball** (2): `.cctor`*, `ChangeState`
- **game.Camera** (6): `.cctor`*, `ChDisplayable`, `ConvertAddressToScreen`, `ConvertScreenToCamera`, `SetMapPosData`
- **game.DelayEvent** (1): `Deserialize`
- **game.GameManager** (1): `.cctor`*
- **game.GameUtil** (30): `.cctor`*, `Abs`, `AddRand`, `Bezier`, `ChOnLine`, `ChRectHitParallel`, `ClampMax`, `ClampMin`, `Clamp`, `ConvertGameEva`, `ConvertKeyToGameKey`, `Convert_return`, `Dot`, `GetA_fixV0DIS`, `GetCrossPoint`, `GetDistanceFromPos`, `Pow`, `RateChA`, `RateChB`, `RateConvertArea`, `RateConvert`, `SetAMSet`, `SetAReturn`, `SetAVelocity`, `SetVReturn`, `SetVVelocity`, `SetV`
- **game.Map** (4): `.cctor`*, `Draw_copyArea`, `Draw_goalPoint`, `GetGoalPartsDepth`
- **game.MapMain** (4): `.cctor`*, `Draw_copyArea`, `Draw_trainingCoat`, `UpdateTrainingCoatNum`
- **game.Player** (15): `.cctor`*, `AddCommandChangeState`, `AddCommandFlag`, `AddCommandGoalSad`, `AddCommandMove`, `AddCommandThrowIn`, `AddCommandVolley`, `AddCommandWaitStop`, `ChRepetition`, `ChTrapOrHeading`, `ChangeState`, `Collision`, `DebugLogOut`, `Debug_1keyStop`, `GetActIdFromSeb`
- **game.TArea** (2): `.cctor`*, `SetPlayerGatherPos`
- **game.TBall** (2): `.cctor`*, `Init_training`
- **game.TGroupArea** (2): `.cctor`*, `SetPlayerGatherPos`
- **game.TPlayer** (5): `.cctor`*, `AddCommandRunningRegist`, `AddCommandRunning`, `EndTrainingScript`, `StopTraining`
- **game.Team** (10): `.cctor`*, `Cal_evaCoatAdd9block`, `Cal_evaCoatAdd`, `Cal_evaCoatMulti`, `Collision`, `GetMostEvaAddress`, `Update_coatEvaDefence`, `Update_coatEvaFreeRun`, `Update_coatEvaLooseBall`, `Update_coatEvaPasser`
- **game.Tenant** (6): `.cctor`*, `BuildTenant`, `ChangeState`, `DestructTenant`, `OutUserTPlayers`, `StrenghTenant`
- **game.UserData** (43): `.cctor`*, `ChGetFeelPtEfCommentParam_dispRefresh`, `ChResearchPoin`, `ChTime1`, `ChTime2`, `ChangeEditPhase`, `ChangeTraining`, `CustomerNumReset`, `DrawGraph_menuElement`, `Draw_colorRect`, `Draw_editButton`, `GetAddFeelPtEf`, `GetDispPlayer`, `GetEvaWarPNameValue`, `GetFeelPtEfCommentParam`, `GetFeelPtEfRetStr`, `GetFeelPtEf`, `GetLeagueDataIndex`, `GetLeagueData`, `GetNextBattleLeagueIndex`, `GetParamPlusNum`, `GetPoint`, `GetTeamScore`, `GetTicketPriceRate`, `League_finish`, `League_resetScore`, `League_setFightResult`, `League_update`, `NewGame`, `PrintOut`, `RecordReset`, `ReflectContinueGameData`, `RotateTestPlayParam`, `SetClearPoint`, `SetContinueGameData`, `SetMemberChangeList`, `SetNegotiateResult`, `SubResearchPoint`, `Update_12v3`, `Update_45v1`, `Update_78v2`, `Update_league`
- **main.AppData** (125): `.cctor`*, `AddDebugLog`, `AddEffectLvUp`, `AddEffectTUp`, `AddPopupScriptBuffer`, `BooleanToByteArray`, `BubbleSort`, `CgiGetScoreURL`, `CgiGetScore`, `CgiRankingURL`, `CgiRanking`, `CgiRegistScoreURL`, `CgiRegistScore`, `CgiRegistURL`, `ChangeMap`, `CheckNightTime`, `CheckPointInPolygon`, `CheckSleepingTime`, `CheckTimeZone`, `ClampMax`, `ClampMin`, `Clamp`, `ClearPopupMessages`, `ColRect`, `DateToDays`, `DateToTime`, `DeserializeScripts`, `Draw3DBox`, `DrawArcRect`, `DrawCommand`, `DrawFillArcRect`, `DrawFukidashiBalloon`, `DrawFukidashiKimochiOLD`, `DrawFukidashiKimochi`, `DrawFukidashiOLD`, `DrawIcon`, `DrawMeter`, `DrawMoney2`, `DrawMoney3`, `DrawMoney4`, `DrawNumImageComma_en`, `DrawNumImage`, `DrawOutline`, `DrawSebReverse`, `DrawSebV`, `DrawSeb`, `DrawTrophyEffect`, `DrawVerticalScroll3`, `DrawZSortObjects`, `Draw`, `ExecuteScript`, `FillArcRect`, `FrameToMilliSecond`, `Gc`, `GetAllStock`, `GetBRectSeb`, `GetEvenlyDivisionArea`, `GetHighScore`, `GetHttpErrorText`, `GetInt2Array`, `GetIntArray`, `GetIsometricX`, `GetIsometricY`, `GetMainBGM`, `GetNearNeighborNode`, `GetNeighborNodeList`, `GetNetHighScore`, `GetNowStoreIndex`, `GetPopupMessage`, `GetSeason`, `GetStockTotal`, `GetTime`, `GettMoneyNetHighScore`, `InsertGameObject`, `IntToByteArray`, `IntegerVectorToIntAry`, `IsPushStateSoftLabel`, `LoadGame`, `MakeQuery`, `Max`, `Min`, `NewGame`, `PhpDlFile`, `Post`, `Print`, `Random`, `RemovePopupMessages`, `ResourceReDownload`, `RotatePoint`, `SaveGame`, `SbyteArrayToBoolean`, `SbyteArrayToInt`, `SearchInteger`, `SendSaveData`, `SerializeScripts`, `SetHighScore`, `SetNetHighScore`, `SetNowStoreIndex`, `SettMoneyNetHighScore`, `ShowNews`, `Sort`, `UpdatePassiveScript`
- **main.AppData+<DrawFukidashiKimochi>c__AnonStorey1** (2): `.ctor`*, `<>m__3`*
- **main.AppData+stringErrorCode** (1): `.ctor`*
- **main.Main** (5): `GetInstance`, `GetJingle`, `OnDestroy`, `OnResume`, `OnSuspend`
- **system.KairoText** (5): `.cctor`*, `.ctor`*, `LT`
- **system.lineup.MyLineup** (3): `.ctor`, `GetInstance`, `Start`*
- **system.notification.MyNotify** (4): `.ctor`*, `GetInstance`*, `OnNotify`, `OnReceiveValue`

`*` = sem corpo (`todo`).
