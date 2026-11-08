"""Generate explicit translator platform overrides; this is not a state ledger."""
import json
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]


def main():
    policies=[]
    def add(symbol,action,result,hook=None,**extra):
        policies.append(dict(symbol=symbol,action=action,result_contract=result,native_hook=hook,**extra))
    add('M:main.AppData.CgiRegist(System.String,System.String)','native','System.Byte[]',
        'pls::services::register_local_wire',wire_contract='Exact original local fallback: ASCII 1 newline 202',
        preserve_source_effects=['BootForm.Run keeps its counter reset to30 and SaveSystem calls',
                                 'BootForm.Update/Run parse response line1 asversion202'])
    prefix='M:system.billing.ui.BillingManager.'
    for name,args,result in [('UpdateBillingItems','System.Boolean','void'),('LaunchPurchaseFlow','system.billing.ui.BillingItem','false'),
        ('Purchase','system.billing.ui.BillingItem','void'),('RegistApplyTask','System.Boolean','false'),
        ('UpdateApplyTask','System.Boolean','void'),('ExecuteApplyTask','system.billing.ui.ApplyTask','false'),
        ('Provisioning','system.billing.ui.ApplyTask','void'),('Cancel','system.billing.ui.ApplyTask','void')]:
        add(prefix+name+'('+args+')','disabled-before-original-body',result,
            'pls::services::refresh_billing_inventory' if result=='void' else None,
            reason='Preserve billing save, pending tasks and provisions; no removal or grant')
    for name,result in [('ExecuteApplyTask','false'),('Provisioning','void'),('Cancel','void')]:
        add('M:system.billing.MyBilling.'+name+'(system.billing.ui.ApplyTask)',
            'disabled-before-original-body',result,reason='Derived override must not bypass unavailable billing policy')
    add('M:system.billing.ui.StoreBase.LaunchPurchaseFlow(System.String)','constant','null Purchase')
    add('M:system.billing.ui.StoreBase.Restore','constant','RestoreResult.Faild = 1')
    add('M:system.billing.ui.StoreBase.WaitForInitialized','constant','void')
    add('M:system.billing.ui.StoreBase.IsInitialized','constant','true (disabled local backend is ready; not shop availability)')
    add('M:system.billing.ui.StoreBase.ConsumeItem(system.billing.util.Purchase)','constant','false')
    add('M:system.billing.ui.BillingManager.ConnectRegistMarketPurchase','constant','void')
    add('M:system.billing.ui.BillingManager.ConnectGetMarketPurchase','constant','null string[][]')
    add('M:surface.SurfaceManager.UpdateAdMobView','native-field-aware','void',
        'pls::services::advertisements_enabled',
        required_assignments=['Config.ADMOB_ENABLE=false','Canvas ads state absent','GamePad.SIZE_PLAIN=65'],
        reason='Preserve the non-ad GamePad assignment from the original method')
    add('M:kairo.unity.ui.Canvas.UpdateAdMobView','native-field-aware','false after state cleared',
        'pls::services::advertisements_enabled',required_assignments=['Config.ADMOB_ENABLE=false','admobView_=null','updateAdMobViewRun_=false'])
    add('M:kairo.unity.ad.AdMobView.GetAdHeight','native','System.Int32','pls::services::ad_height')
    for member in ['IsLoad','IsStart']:
        add('M:kairo.unity.ad.AdMobView.'+member,'constant','false')
    for member,result in [('Load','false'),('Show','void'),('GetState','State.None = -1'),('IsLoaded','false')]:
        add('M:kairo.unity.ad.InterstitialAd.'+member,'constant',result)
    add('M:system.tapjoy.ui.Tapjoy.ShowOffers','native-field-aware','false',required_assignments=['offerState_=OfferState.Failed'],
        reason='No reward; existing balance getters/save remain original')
    # Local promotional fallback is also an ad; it must not become a substitute ad.
    add('M:system.surface.GameBanner.Draw(kairo.unity.ui.Graphics)','constant','void')
    add('M:system.surface.GameBanner.Load','constant','void')
    add('M:kairo.unity.system.notification.ui.NotifyManager.UpdateValues','constant','void')
    add('M:system.notification.MyNotify.OnReceiveValue','constant','void')
    for family in ['SendString','SendText']:
        for args in ['System.Int64,System.String,System.String','System.Int32,System.Int64,System.String,System.String']:
            add('M:kairo.unity.system.notification.ui.NotifyManager.'+family+'('+args+')','constant','void')
    for family in ['SendPushString','SendPushText']:
        for args in ['System.String,System.String,System.String','System.Int32,System.String,System.String,System.String']:
            add('M:kairo.unity.system.notification.ui.NotifyManager.'+family+'('+args+')','constant','void')
    add('M:kairo.unity.system.notification.ui.NotifyManager.SetPushEnable(System.Boolean)','constant','void; never enable transport')
    add('M:kairo.unity.system.notification.ui.NotifyManager.IsPushEnable','native','false','pls::services::notifications_enabled')
    add('M:kairo.unity.system.KairoBase.ConnectNotificationSend(System.String,System.String,System.String)','constant','void')
    add('M:kairo.unity.system.KairoBase.ConnectNotificationRegist(System.String)','constant','void')
    for name,args,result in [('SendNotification','System.Int64,System.String,System.String','void'),
        ('CancelNotifications','System.Boolean,System.Boolean','void'),('SetNotificationFilter','System.Int32','void'),
        ('SetNotificationBackground','System.Boolean','void'),('RemoveNotificationData','','void'),
        ('GetNotificationData','','empty string[]'),('GetNotificationFilter','','FilterLevel.None = 0')]:
        add('M:kairo.unity.native.KairoPlugin.'+name+('('+args+')' if args else ''),'constant',result)
    add('M:kairo.unity.iOSsupport.DeviceUtil.CheckPushNotification','constant','false')
    # No fabricated license result: these two internals are cut by local register
    # substitution and by not generating the removed licensing API at all.
    report=dict(schema_version=1,operation='explicit-user-platform-policies',
        integration_status='PENDING_GENERATED_GAME_BINDING',
        host_bootstrap=['Construct OfflineServices with host preference directory','install(&services)',
                        'Call device_id() before constructing generated Main; do not wait for registration counter'],
        overrides=policies,
        preserved_original_account_symbols=['M:kairo.unity.system.KairoBase.GetUserId',
            'M:kairo.unity.system.KairoBase.GetUserIdInt','M:kairo.unity.system.KairoBase.CheckUserId'],
        device_identity_scope='Persistent local device installation ID only; never an account ID or friend registration',

        removed_licensing_routes=[dict(symbol='M:kairo.unity.native.KairoPlugin.LicenseCheck',
            callers=['kairo.unity.io.HttpObject._connect registration branch'],
            handling='Local AppData.CgiRegist bypasses this branch; no JNI implementation or fabricated licensing result'),
            dict(symbol='M:kairo.unity.licensing.LicenseChecker.DoCheck',callers=[],
                 handling='No caller found in recovered source; remove facade from runtime dependency set; unexpected call is a diagnostic')],
        save_policy='No service function accepts a mutable game save; preserve serialized billing and unknown fields',
        states_modified=False,reference_modified=False)
    (ROOT/'config/service-overrides.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(platform_overrides=len(policies),integration_status=report['integration_status'])))


if __name__=='__main__':main()
