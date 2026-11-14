"""Generate explicit translator platform overrides; this is not a state ledger."""
import json
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]


# Policy 54 (user decision 2026-11-13): fixed local text with no meaning. The
# Android package signature is never read; the offline transport never sends it.
OFFLINE_SIGNATURE='pls-offline'


def typed_lowering(policy):
    """A finite lowering contract; the emitter never parses prose results."""
    identifier=policy['symbol']
    result=policy['result_contract']
    constants={
        'void':dict(kind='void'),
        'false':dict(kind='bool_false'),
        'false after state cleared':dict(kind='bool_false'),
        'true (disabled local backend is ready; not shop availability)':dict(kind='bool_true'),
        'null Purchase':dict(kind='null'),
        'null string[][]':dict(kind='null'),
        'null string':dict(kind='null'),
        'null AdMobView':dict(kind='null'),
        'empty string[]':dict(kind='empty_string_array'),
        'RestoreResult.Faild = 1':dict(kind='int_exact',value=1),
        'State.None = -1':dict(kind='int_exact',value=-1),
        'FilterLevel.None = 0':dict(kind='int_exact',value=0),
        'closed by the user: 0':dict(kind='int_exact',value=0),
        'void; never enable transport':dict(kind='void'),
    }
    if identifier=='M:main.AppData.CgiRegist(System.String,System.String)':
        return dict(kind='register_local',native_hook='pls::services::managed::register_local',native_include='services_managed.hpp',field_assignments=[])
    if identifier=='M:kairo.unity.system.KairoBase.GetSignature':
        return dict(kind='string_exact',value=OFFLINE_SIGNATURE,field_assignments=[])
    if identifier=='M:kairo.unity.ad.AdMobView.GetAdHeight':
        return dict(kind='int_exact',value=0,field_assignments=[])
    if result not in constants:raise ValueError('No typed lowering for '+identifier)
    lowering=dict(constants[result],field_assignments=[])
    if identifier=='M:surface.SurfaceManager.UpdateAdMobView':
        lowering['field_assignments']=[
            dict(field='F:kairo.common.cfg.Config.ADMOB_ENABLE',kind='bool',value=False),
            dict(field='F:surface.GamePad.SIZE_PLAIN',kind='int',value=65)]
        lowering['native_representation']='canvas_ads_absent'
    elif identifier=='M:kairo.unity.ui.Canvas.UpdateAdMobView':
        lowering['kind']='canvas_ads_absent'
        lowering['return_kind']='bool_false'
        lowering['field_assignments']=[dict(field='F:kairo.common.cfg.Config.ADMOB_ENABLE',kind='bool',value=False)]
        lowering['native_representation']='Canvas has no ad object, pending flag, JNI creation/destruction callbacks or transport; absence is structural'
    elif identifier=='M:system.tapjoy.ui.Tapjoy.ShowOffers':
        lowering['field_assignments']=[dict(field='F:system.tapjoy.ui.Tapjoy.offerState_',kind='enum',value=2,
            enum_member='F:system.tapjoy.ui.Tapjoy.OfferState.Failed')]
    return lowering


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
    # Removed Android services (user decision 2026-11-13): no effect; no caller waits
    # for a callback or state change (survey of reference/src, docs/design/services.md).
    add('M:native.AppPlugin.ShowPurchaseLog(System.String,System.Int32,System.String,System.Boolean)','constant','closed by the user: 0',
        reason='Removed Android purchase-log dialog; PurchaseLogView.Show clears the log only on 1')
    add('M:native.AppPlugin.LaunchMailer(System.String,System.String)','constant','void',
        reason='Removed Android mailer; FriendData.ActionSendMail continues as after the user backs out')
    for name,result in [('Create','false'),('SetViewRect(System.Int32,System.Int32,System.Int32,System.Int32)','void'),
        ('LoadUrl(System.String)','void'),('Dispose','void'),('Visible','false'),('SetVisible(System.Boolean)','void')]:
        add('M:native.WebBoxPlugin.'+name,'constant',result,reason='Removed Android web view; main.WebBox has no caller in the game source')
    # Ads removed: Canvas has no ad object (same contract as Canvas.UpdateAdMobView).
    add('M:kairo.unity.ui.Canvas.GetAdMobView','constant','null AdMobView',reason='Ads removed; admobView_ is always null in the port')
    # Device vibration: no vibrator on the PC or 3DS targets; platform leaf a Phase 3 design may replace.
    add('M:kairo.unity.ui.Canvas.Vibrator(System.Int64)','constant','void',reason='No vibration hardware; KairoPlugin.Vibrator JNI leaf not called')
    # Notification family (removed): push registration id. Reached only when IsPushEnable() is true (KairoBase.cs:1675-1693).
    add('M:kairo.unity.native.KairoPlugin.GetGCMRegistrationId','constant','null string',
        reason='Notifications removed: no GCM registration; JNI leaf not called')
    # Policy 54: KairoBase.Connect* answers "server unavailable" through the
    # original no-network path (Connect -> ConnectLogin/HttpConnect -> Http ->
    # HttpObject, offline WWW -> IOException). Only the JNI signature leaf is
    # replaced; the bodies that handle the failure stay original.
    add('M:kairo.unity.system.KairoBase.GetSignature','constant','fixed local text',
        reason='Policy 54: Android package signature replaced by a meaningless local constant; never transmitted (transport is offline)')
    # Policy 54: no network. Original body: Application.internetReachability != NotReachable (KairoBase.cs:1831-1834).
    add('M:kairo.unity.system.KairoBase.CheckNetwork','constant','false',
        reason='Policy 54: the port has no network; same value as the original with internetReachability == NotReachable')
    # Policy 54: Android clock bridge fed only by server time after a successful login (ClockTime.cs:12).
    add('M:kairo.unity.native.KairoPlugin.SetClockTime(System.Int64,System.Int32)','constant','void',
        reason='Policy 54: no server time offline; the Android setClockTime JNI leaf is not called')
    for policy in policies:policy['lowering']=typed_lowering(policy)
    # No fabricated license result. The transitive call site has an explicit
    # throwing platform guard; the removed JNI/checker body is never generated.
    report=dict(schema_version=1,lowering_schema_version=1,operation='explicit-user-platform-policies',
        integration_status='PENDING_GENERATED_GAME_BINDING',
        host_bootstrap=['Construct OfflineServices with host preference directory','install(&services)',
                        'Call device_id() before constructing generated Main; do not wait for registration counter'],
        overrides=policies,
        preserved_original_account_symbols=['M:kairo.unity.system.KairoBase.GetUserId',
            'M:kairo.unity.system.KairoBase.GetUserIdInt','M:kairo.unity.system.KairoBase.CheckUserId'],
        device_identity_scope='Persistent local device installation ID only; never an account ID or friend registration',

        removed_licensing_routes=[dict(symbol='M:kairo.unity.native.KairoPlugin.LicenseCheck',
            callers=['kairo.unity.io.HttpObject._connect registration branch'],
            handling='Local AppData.CgiRegist bypasses this branch; removed_license_check throws NotSupportedException on an unexpected call; no JNI or fabricated licensing result'),
            dict(symbol='M:kairo.unity.licensing.LicenseChecker.DoCheck',callers=[],
                 handling='No caller found in recovered source; remove facade from runtime dependency set; unexpected call is a diagnostic')],
        save_policy='No service function accepts a mutable game save; preserve serialized billing and unknown fields',
        states_modified=False,reference_modified=False)
    (ROOT/'config/service-overrides.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(platform_overrides=len(policies),typed_overrides=sum('lowering' in p for p in policies),integration_status=report['integration_status'])))


if __name__=='__main__':main()
