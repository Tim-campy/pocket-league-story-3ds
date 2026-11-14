"""Source-bound C# -> C++ driver. Never reports unsupported bodies as translated."""
import argparse
import csv
import hashlib
import json
import re
from pathlib import Path
import shutil
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools'))
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths
from pc_compiler import environment
from report_paths import pack_source_paths

csv.field_size_limit(2_000_000)


def digest(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def run(command,log,env=None):
    p=subprocess.run([str(v) for v in command],cwd=ROOT,capture_output=True,env=env)
    log.parent.mkdir(parents=True,exist_ok=True);log.write_bytes(p.stdout+p.stderr)
    if p.returncode:raise RuntimeError('Command failed: see '+str(log))
    return p


def prepare():
    compiler,runtime,framework=compiler_paths()
    folder=ROOT/'build/translator';folder.mkdir(parents=True,exist_ok=True)
    libraries=['System.Private.CoreLib','System.Runtime','System.Console','System.Linq','System.Collections',
               'System.Text.Json','System.Reflection.Metadata','System.Collections.Immutable','System.Memory',
               'System.Security.Cryptography','System.Text.RegularExpressions','netstandard']
    references=[framework/(name+'.dll') for name in libraries]+[compiler.parent/name for name in ['Microsoft.CodeAnalysis.dll','Microsoft.CodeAnalysis.CSharp.dll']]
    target=folder/'Translator.dll'
    args=['/nologo','/noconfig','/nostdlib+','/nullable:enable','/target:exe','/out:'+str(target)]
    args+=['/r:'+str(p) for p in references]+[str(ROOT/'translator/Translator.cs'),str(ROOT/'translator/EmissionUnits.cs')]
    response=folder/'compile.rsp';response.write_text('\n'.join('"'+a+'"' for a in args if a!='/noconfig')+'\n',encoding='utf-8',newline='\n')
    run([compiler,'/noconfig','@'+str(response)],folder/'compiler.log')
    for p in references[-2:]:shutil.copy2(p,folder/p.name)
    (folder/'Translator.runtimeconfig.json').write_text(json.dumps({'runtimeOptions':{'tfm':'net10.0','framework':{'name':'Microsoft.NETCore.App','version':'10.0.10'}}})+'\n',encoding='utf-8',newline='\n')
    return folder,runtime,target,dict(compiler_sha256=digest(compiler),runtime_sha256=digest(runtime),
        translator_source_sha256=digest(ROOT/'translator/Translator.cs'),emission_source_sha256=digest(ROOT/'translator/EmissionUnits.cs'),driver_sha256=digest(Path(__file__)))


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--assembly',choices=['KairoLibrary','Assembly-CSharp'],default='KairoLibrary')
    parser.add_argument('--original-managed',type=Path,required=True,help='External read-only metadata references; never copied')
    parser.add_argument('--compile',action='store_true')
    parser.add_argument('--diagnostics-only',action='store_true',help='Bind and attempt every source body, without writing C++ or promoting any status')
    parser.add_argument('--output',type=Path)
    parser.add_argument('--bootstrap-main',action='store_true',help='Declare Main factory even when its body remains unsupported, without emitting a stub')
    parser.add_argument('--diagnostic-defer-capture',action='store_true',help='Private build-only variant: fatal guard at the missing Capture API, never normal coverage')
    args=parser.parse_args()
    if args.diagnostic_defer_capture:
        if args.assembly!='Assembly-CSharp'or args.compile or args.diagnostics_only or args.output is None:parser.error('Capture diagnostic requires Assembly-CSharp, an explicit private output and no compile/diagnostics-only')
        if not args.output.resolve().is_relative_to((ROOT/'build').resolve()):parser.error('Capture diagnostic output must remain below ignored build/')
        args.output=args.output.resolve()
    folder,runtime,target,producer=prepare()
    reference=ROOT/'reference'
    subprocess.run([sys.executable,ROOT/'tools/check_reference.py'],check=True,cwd=ROOT,capture_output=True)
    order=(reference/'config/compile-order'/f'{args.assembly}.txt').read_text(encoding='utf-8').splitlines()
    source_names=[p for p in order if p and not p.startswith('#')]
    assembly_info=f'src/{args.assembly}/AssemblyInfo.cs'
    if assembly_info not in source_names:source_names.append(assembly_info)
    if args.assembly=='KairoLibrary':
        vs=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1')
        refs=[Path('C:/Windows/Microsoft.NET/Framework/v2.0.50727/mscorlib.dll'),vs/'Editor/Data/Mono/lib/mono/2.0/System.Core.dll',args.original_managed/'UnityEngine.dll',vs/'Editor/Data/Mono/lib/mono/2.0/System.dll']
        with (ROOT/'config/boundary.csv').open(encoding='utf-8',newline='') as f: selected=[r['id'] for r in csv.DictReader(f) if r['classificacao']=='portavel']
        output=args.output or ROOT/'src/kairo/common/generated'
    else:
        refs=[args.original_managed/n for n in ['mscorlib.dll','UnityEngine.dll','System.Core.dll','System.dll']]
        library_order=(reference/'config/compile-order/KairoLibrary.txt').read_text(encoding='utf-8').splitlines()
        source_names+=[name for name in library_order if name and not name.startswith('#') and not name.endswith('/AssemblyInfo.cs')]
        # Translation metadata uses original full signatures; Roslyn selectors are
        # taken from its bound source methods rather than hand-edited ledgers.
        selected=[];output=args.output or ROOT/'src/game'
    policies=json.loads((ROOT/'config/service-overrides.json').read_text(encoding='utf-8'))
    request=dict(assembly=args.assembly,sources=[str(reference/p) for p in source_names],references=[str(p.resolve()) for p in refs],selected=selected,output=str(output.resolve()),diagnostics_only=args.diagnostics_only,check_symbols=[p['symbol'] for p in policies['overrides']])
    # Confirmed on the official Unity Mono ARM/VFP JIT in an ARM emulator:
    # 36 discriminants and all 144 captured kernel observations. Device pending.
    request['numeric_model']='mono-arm-vfp'
    request['source_root']=str(reference)
    request['external_methods']={'M:UnityEngine.Debug.Log(System.Object)':'pls::kairo::debug_log'}
    request['native_includes']=['system.hpp']
    bootstrap_adapter=None
    adapter_sources=[]
    if args.assembly=='Assembly-CSharp':
        request['service_overrides']={row['symbol']:row['lowering'] for row in policies['overrides']}
        concurrency=json.loads((ROOT/'config/phase2-boot-concurrency.json').read_text(encoding='utf8'))
        supported_classes={'progress_concurrent','multi_writer_load_then_store','payload_published_by_state_candidate','lifecycle_handoff_reinit_unknown'}
        request['shared_fields']=[field['field']for field in concurrency['boot_field_classifications']if field['classification']in supported_classes]
        portable=json.loads((ROOT/'config/phase2-translation.json').read_text(encoding='utf-8'))
        manifest=ROOT/'src/kairo/common/generated/emission_units.json'
        if manifest.exists():request['external_unit_manifest']=str(manifest)
        request.update(select_all_source_methods=True,select_source_prefix="src/Assembly-CSharp/",
            external_types={c['id']:'pls::generated::'+c['cpp_name'].split('<')[0] for c in portable['generated_classes']},
            external_methods={m['id']:'pls::generated::'+m['cpp_name'] for m in portable['emitted_methods']},
            external_fields={**{f['id']:f['cpp_name'] for c in portable['generated_classes'] for f in c['fields'] if 'id' in f},**{f['id']:'pls::generated::'+f.get('cpp_accessor',f['cpp_name']) for f in portable['static_fields']}},
            external_type_initializers={row['id']:'pls::generated::'+row['cpp_name'] for row in portable.get('type_initializers',[])},
            bootstrap_method='M:main.Main.#ctor' if args.bootstrap_main else '')
        request['external_complete_bases']=list(request['external_types'])
        request['external_types']['T:kairo.unity.ui.IApplication']='pls::kairo::IApplication'
        request['external_types']['T:kairo.unity.form.FormManagerBase']='pls::kairo::FormManagerBase'
        request['external_complete_bases'].append('T:kairo.unity.ui.IApplication')
        request['native_includes']=['application.hpp','baked_arrays.hpp','services_managed.hpp']
        baked=json.loads((ROOT/'config/baked-array-index.json').read_text(encoding='utf-8'))
        request['baked_arrays']={b['id']:b for b in baked['matched']}
        app='M:kairo.unity.ui.IApplication.'
        request['external_methods'].update({app+'Init(kairo.unity.ui.IApplication)':'member:source_Init',app+'GetCurrentApp':'pls::kairo::IApplication::GetCurrentApp',app+'SetViewport(System.Int32,System.Int32)':'member:SetViewport'})
        request['external_methods'].update({app+'GetPackageName':'member:GetPackageName','M:kairo.unity.native.KairoPlugin.GetPackageName':'pls::kairo::native_package_name'})
        request['external_methods'][app+'GetTotalFrames']='member:GetTotalFrames'
        request['external_methods'][app+'SetScaleRatio(System.Single)']='member:SetScaleRatio'
        request['source_native_helpers']=['M:kairo.unity.ui.Graphics.GetColorOfName(System.Int32)','M:kairo.unity.ui.Canvas.OpenBrowser(System.String)']
        request['source_native_helpers']+=['M:kairo.unity.ui.Graphics.DrawRect2(System.Single,System.Single,System.Single,System.Single)']
        request['source_native_helpers']+=['M:kairo.unity.ui.Font.Draw(kairo.unity.ui.Graphics,System.String,System.Single,System.Single)']
        request['source_native_helpers']+=['M:kairo.unity.ui.Graphics.GetLineSpace','M:kairo.unity.ui.Graphics.SetLineSpace(System.Int32)']
        request['external_fields']['F:kairo.unity.ui.Graphics.lineSpacing_']='pls::kairo::Graphics::lineSpacing_'
        request['source_native_helpers']+=['M:kairo.unity.ui.Canvas.VersionUp(System.String)','M:kairo.unity.ui.Canvas.IsGetStatusBarHeight',
            'M:kairo.unity.ui.Canvas.IsGetStatusBarPosition','M:kairo.unity.ui.Canvas.SetLinearFilterEnable(System.Boolean)',
            'M:kairo.unity.ui.Canvas.Fullscreen(System.Boolean)']
        request['source_native_helpers'].append('M:kairo.unity.ui.Canvas.IsLinearFilterEnable')
        request['external_methods']['M:UnityEngine.QualitySettings.get_antiAliasing']='pls::kairo::QualitySettings::get_antiAliasing'
        request['source_native_helpers']+=['M:kairo.unity.ui.IApplication.GetBattery','M:kairo.unity.ui.IApplication.IsBatteryCharging']
        request['external_methods']['M:kairo.unity.native.KairoPlugin.GetBatteryInfo']='pls::kairo::native_battery_info'
        request['source_native_helpers'].append('M:kairo.unity.ui.Canvas.ImeOnBlock(System.String,System.Int32,System.Int32)')
        request['external_methods']['M:kairo.unity.native.KairoPlugin.ImeOnBlock(System.String,System.Int32,System.Int32)']='pls::kairo::request_text_input'
        request['native_includes'].append('text_input.hpp')
        request['external_methods'].update({
            'M:kairo.unity.native.KairoPlugin.StartFepPanel(System.String,System.String,System.Int32,System.String,System.String,System.Int32)':'pls::kairo::start_text_panel',
            'M:kairo.unity.native.KairoPlugin.IsFepPanelFinish':'pls::kairo::text_panel_finished',
            'M:kairo.unity.native.KairoPlugin.GetFepPanelResult':'pls::kairo::text_panel_result'})
        request['source_native_helpers']+=['M:kairo.unity.ui.Graphics.DrawText(System.String,System.Single,System.Single,System.Single,System.Int32)',
            'M:kairo.unity.ui.Graphics.DrawText(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Single,System.Int32)']
        request['external_methods'].update({
            'M:kairo.unity.ui.Graphics.DrawArc(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)':'member:DrawArc',
            'M:kairo.unity.ui.Graphics.DrawArc2(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)':'member:DrawArc2',
            'M:kairo.unity.ui.Graphics.FillArc(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)':'member:FillArc'})
        request['external_fields']['F:kairo.unity.ui.Canvas.statusBarPosition_']='source_status_bar_position'
        request['external_fields'].update({'F:kairo.unity.ui.Graphics.color_':'source_color()',
            'F:kairo.unity.ui.Graphics.font_':'source_font()',
            'F:kairo.unity.ui.Graphics.outlineWidth_':'pls::kairo::Graphics::outlineWidth_',
            'F:kairo.unity.ui.Graphics.outlineQuality_':'pls::kairo::Graphics::outlineQuality_',
            'F:kairo.unity.ui.Font.requestFontScale_':'pls::kairo::Font::requestFontScale',
            'F:kairo.unity.ui.Font.LT_DISABLE_TEXTLAYOUT':'pls::kairo::Font::LT_DISABLE_TEXTLAYOUT'})
        for name in ('DrawStringBold','DrawStringBold2'):
            for parameters in ('System.String,System.Single,System.Single,System.Int32',
                               'System.String,System.Single,System.Single,System.Int32,System.Int32',
                               'kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32',
                               'kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32,System.Int32'):
                request['source_native_helpers'].append('M:kairo.unity.ui.Graphics.'+name+'('+parameters+')')
        for parameters in ('System.String,System.Single,System.Single','System.String,System.Single,System.Single,System.Int32',
                           'System.String,System.Single,System.Single,System.Int32,System.Int32',
                           'kairo.unity.ui.TextFormat,System.String,System.Single,System.Single',
                           'kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32',
                           'kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32,System.Int32'):
            request['source_native_helpers'].append('M:kairo.unity.ui.Graphics.DrawString2('+parameters+')')
        request['source_native_helpers']+=['M:kairo.unity.ui.Image.'+s for s in (
            'GetFileFormat(System.Byte[])','GetAreaSize(System.Byte[])','GetPaletteInfo(System.Byte[])',
            'OverwritePaletteData(System.Byte[],System.Byte[])','OverwritePaletteData(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32)',
            'LoadOptimize(java.io.InputStream,kairo.unity.ui.Image[])','LoadOptimize(System.Byte[],kairo.unity.ui.Image[])',
            'GetOptimize(System.Int32,System.Int32,System.Int32)','GetOptimizeSeb(System.Int32)',
        )]
        for field in ('useBin_','standardWidth_','standardHeight_','renderQueue_','imageAtlasId_','optimize_','optimizeAccess_',
                      'optimizeSeb_','optimizeEx_','optimizeAccessL_','optimizeSebEx_','images_',
                      'optimizeWidthNum_','optimizeHeightNum_','optimizePass_','optimizeBlockWidth_','optimizeBlockHeight_','name_'):
            request['external_fields']['F:kairo.unity.ui.Image.'+field]=field
        for field in ('DEFAULT_FORMAT','DEFAULT_FILTER','getOptimize_result','getOptimizeSeb_result','getPaletteInfo_result','getAreaSize_result'):
            request['external_fields']['F:kairo.unity.ui.Image.'+field]='pls::kairo::Image::'+field
        for signature,binding in {
            '#ctor':'pls::cs::make_ref<pls::kairo::Image>',
            '#ctor(System.Byte[],kairo.unity.ui.Image.Format,kairo.unity.ui.Image.Filter)':'pls::kairo::Image::FromBytes',
            '#ctor(System.String,kairo.unity.ui.Image.Format,kairo.unity.ui.Image.Filter)':'pls::kairo::Image::FromFile',
            '#ctor(System.String,System.String,kairo.unity.ui.Image.Format,kairo.unity.ui.Image.Filter)':'pls::kairo::Image::FromFile',
            '#ctor(System.Int32,System.Int32,System.String,System.String,kairo.unity.ui.Image.Format,kairo.unity.ui.Image.Filter)':'pls::kairo::Image::FromRecord',
            'SetStandardResolution(System.Int32,System.Int32)':'member:SetStandardResolution',
            'SetImageAtlasId(System.Int32)':'member:SetImageAtlasId',
            'SetName(System.String)':'member:SetName','GetName':'member:GetName',
        }.items():request['external_methods']['M:kairo.unity.ui.Image.'+signature]=binding
        request['external_fields']['F:kairo.unity.ui.Canvas.lastOpenBrowserFrame_']='pls::kairo::Canvas::source_last_browser_frame()'
        request['external_methods']['M:UnityEngine.Application.OpenURL(System.String)']='pls::kairo::UnityApplication::OpenURL'
        request['external_methods']['M:kairo.unity.native.KairoPlugin.ShowDialog(System.Int32,System.String,System.String,System.String)']='pls::kairo::show_dialog'
        request['external_methods']['M:kairo.unity.form.FormManagerBase.ProcessEvent(kairo.unity.ui.AppEventType,System.Object[])']='pls::kairo::FormManagerBase::ProcessEvent'
        request['native_includes'].append('dialog_service.hpp')
        # The SDL host follows KairoPlugin._getClockTime's non-Android branch.
        # Keep the already translated JSystem epoch/rounding implementation.
        request['external_methods']['M:kairo.unity.native.KairoPlugin.GetClockTime']=request['external_methods']['M:java.lang.JSystem.CurrentTimeMillis']
        slots=['OnCreate','OnStart','OnRestart','OnStop','OnResume','OnSuspend','OnUpdate','OnDraw','OnRender','OnDestroy','GetFormManager']
        request['external_slots']={app+n:n for n in slots}
        request['external_methods'].update({app+n:'member:source_'+n for n in ['OnCreate','OnResume','OnSuspend','OnDestroy']})
        request['external_methods']['M:native.AppPlugin.Finish']='pls::kairo::request_host_finish'
        request['external_methods']['M:UnityEngine.Debug.Log(System.Object)']='pls::kairo::debug_log'
        request['external_methods']['M:UnityEngine.Debug.LogException(System.Exception)']='pls::kairo::debug_log_exception'
        # Exact native API leaves. A mapping supplies a declaration/implementation;
        # it does not promote API verification or game execution states.
        native_types={
            'kairo.unity.ui.IApplication':'IApplication','kairo.unity.ui.Image':'Image','kairo.unity.ui.Graphics':'Graphics','kairo.unity.ui.Font':'Font',
            'kairo.unity.ui.SoundBase':'SoundBase','kairo.unity.ui.SoundOGG':'SoundOGG','kairo.unity.ui.SoundPlayer':'SoundPlayer',
            'kairo.unity.ui.Canvas':'Canvas','kairo.unity.form.FormBase':'FormBase','kairo.unity.form.FormManagerBase':'FormManagerBase',
            'kairo.unity.io.Storage':'Storage','kairo.unity.io.RecordStore':'RecordStore',
            'UnityEngine.PlayerPrefs':'PlayerPrefs','UnityEngine.Application':'UnityApplication','UnityEngine.QualitySettings':'QualitySettings',
            'kairo.unity.surface.MotionEvent':'MotionEvent','kairo.unity.ui.KeyEvent':'KeyEvent','kairo.unity.ui.AppEvent':'AppEvent'}
        request['external_types'].update({'T:'+k:'pls::kairo::'+v for k,v in native_types.items()})
        request['external_types']['T:kairo.unity.graphics.Offscreen']='pls::kairo::Offscreen'
        request['external_types']['T:kairo.unity.graphics.MeshManager']='pls::kairo::MeshManager'
        request['native_includes'].append('mesh.hpp')
        request['external_methods'].update({
            'M:kairo.unity.ui.Graphics.GetMeshManager':'member:GetMeshManager',
            'M:kairo.unity.graphics.MeshManager.SetDepth(System.Int32,System.Boolean)':'member:SetDepth',
            'M:kairo.unity.graphics.MeshManager.SetDepthFront':'member:SetDepthFront',
            'M:kairo.unity.graphics.Offscreen.CreateOffscreen(kairo.unity.graphics.Offscreen.RenderMethod,kairo.unity.graphics.Offscreen.RenderMethod,kairo.unity.graphics.Offscreen.GetLayoutMethod,System.Int32)':'pls::kairo::Offscreen::CreateOffscreen',
            'M:kairo.unity.graphics.Offscreen.Dispose':'member:Dispose',
            'M:kairo.unity.graphics.Offscreen.get_Image':'member:get_Image'})
        request['external_fields'].update({'F:kairo.unity.ui.Graphics.render_':'source_render_',
            'F:kairo.unity.ui.Graphics.offscreen_':'offscreen_',
            'F:kairo.unity.ui.Image.balloonRenderTasks_':'list-slot:source_balloon_tasks',
            'F:kairo.unity.ui.Image.textRenderTasks_':'list-slot:source_text_tasks',
            'F:kairo.unity.ui.Image.touchTasks_':'list-slot:source_touch_tasks',
            'F:kairo.unity.graphics.Offscreen.dynamicTransform_':'dynamicTransform_'})
        for name in ('GetClip','GetImageClip','ClearImageClip','SetImageClip(System.Single,System.Single,System.Single,System.Single)'):
            request['external_methods']['M:kairo.unity.ui.Graphics.'+name]='member:'+name.split('(')[0]
        request['external_complete_bases']+=['T:kairo.unity.form.FormBase','T:kairo.unity.form.FormManagerBase']
        request['native_includes']+=['graphics.hpp','font.hpp','sound.hpp','forms.hpp','canvas.hpp','storage.hpp','input.hpp','system.hpp']
        allow={
            'IApplication':{'GetCurrentApp','SetViewport','GetViewport','GetWidth','GetHeight','GetWidth2','GetHeight2','GetScaleRatio','CheckUiThread','IsTermination','Visibe','Focus','HasWindowFocus','IsRendering','RunOnUiThread','RunOnUpdate'},
            'Graphics':{'GetColorOfRGB','GetAnchorPosition','GetRenderRect','SetColor','GetColor','SetFont','GetFont','PushFont','PopFont','SetAutoTextLayout','IsAutoTextLayout','StringWidth','DrawString','SetOrigin','GetOriginX','GetOriginY','PushOrigin','PopOrigin','Scale','GetScale','SetClip','ClipRect','PushClip','PopClip','ClearClip','SetRenderRect','ClearRenderRect','SetRenderMode','GetRenderModeOperator','GetRenderModeSrcRatio','GetRenderModeDstRatio','PushRenderMode','PopRenderMode','FillRect','DrawRect','DrawLine','DrawImage','DrawScaledImage','CopyArea','Dispose'},
            'Image':{'CreateImage','GetWidth','GetHeight','GetAlpha','SetAlpha','GetTransparentColor','SetTransparentColor','SetTransparentEnabled','GetGraphics','Dispose'},
            'Font':{'GetSize','GetHeight','SetSize','GetWidth','GetStyle','SetStyle','SetFace','GetFace','Copy','Set','Equals','AdjustFontSize','Dispose','PushLocalizeSetting','PopLocalizeSetting','ClearLocalizeSettings','LockLocalizeSetting','UnlockLocalizeSetting','IsNeedLocalizeScale','GetLocalizeScale','StringWidth','StringWidthF'},
            'SoundBase':{'GetState','SetLoop','SetSoundType','Stop','Play','SetVolume','Dispose','GetData','GetName','SetName','GetLoop','GetSoundType','ToString'},
            'SoundOGG':{'Load','Play','SetVolume','Stop','Dispose','GetState'},
            'SoundPlayer':{'GetInstance','Init','Dispose','SetVolume','SetMute','IsMute','ReflectVolumeAndMute','Play','Stop','StopAll','Resume','Suspend','IsSilentMode','IsOtherAudioPlay','UpdateOtherAudioPlay','GetPort','RemovePort','SetPort','AddPlayingList','RemovePlayingList','SetPortMax','GetPortMax'},
            'Canvas':{'GetInstance','SetDisplayCurrent','GetGraphicsInstance','BeginPaint','EndPaint','SetBackground','SetBackColor','GetBackColor','GetWidth','GetHeight','GetWidth2','GetHeight2','SetAspectRatio','SetSoftLabel','GetSoftLabelL','GetSoftLabelR','GetSoftLabel','UpdateSoftLabel','DecideKeyState','ClearKeyBuffer','GetKeyState','GetKeypadState','CheckKeyState','CheckKeyPulse','CheckKeyRepeat','CheckKeyDouble','SetKeyRepeatInterval','GetKeyRepeatInterval','SetKeyDoubleInterval','GetKeyDoubleInterval','KeyDown','KeyUp','KeyClick','OnKeyDown','OnKeyUp','OnTouchEvent','GetSyncMillSecound'},
            'FormBase':{'SetSoftLabel','GetLeftSoftLabel','GetRightSoftLabel','GetSoftLabel3','GetSoftLabel4','Push','Pop','CheckUsable','GetId','GetProcessMode','SetProcessMode','IsAlive'},
            'FormManagerBase':{'GetForm','GetFormIndex','ChangeCurrentForm','Push','Pop','GetFormsNum','GetTopForm','GetDownForm','GetCurrentForm','RemoveAllForms','MoveToTop','MoveToDown','CheckUsable','DrawAllForms','DrawSkip','IsDrawSkip','SetLoadingForm','SetPrintForm','Draw','Execute','OnDraw','Resume','ProcessEvent','ProcessBackKey','ShowTerminationDialog','CheckShowTerminationDialog','SetPause','IsPause','SurfaceChanged','IsCapturing'},
            'Storage':{'Setup','Open','GetFolder','Close','Read','Write','Delete','Exists','GetSize','GetFiles'},
            'RecordStore':{'SetPreferenceMode','Setup','CreateRecordStore','PreferencesToFile','FileToPreferences','SetResourceFiles','AddRecord','WriteRecord','ReadRecord','ExistRecord','GetRecordSize','GetNumRecords','RemoveLastRecord','RemoveAllRecord','CloseRecordStore','GetSizeAvailable','GetCapacity','GetSize','GetRecordInfoSize','OpenRecordStore'},
            'PlayerPrefs':{'HasKey','GetInt','GetFloat','GetString','SetInt','SetFloat','SetString','DeleteKey','DeleteAll','Save'},
            'UnityApplication':set(),'QualitySettings':set(),'AppEvent':set(),'MotionEvent':{'GetAction','GetX','GetY','GetDeltaX','GetDeltaY','GetDeltaTime','IsMousePointer','GetPointerCount','GetPointerId'},'KeyEvent':{'GetAction','GetKeyCode','GetRepeatCount'}}
        csv.field_size_limit(2_000_000)
        with (ROOT/'config/boundary.csv').open(encoding='utf-8',newline='') as stream:
            for row in csv.DictReader(stream):
                identifier=row['id']
                for source_type,native_type in native_types.items():
                    prefix='M:'+source_type+'.'
                    if identifier.startswith(prefix):
                        name=identifier[len(prefix):].split('(')[0]
                        if name in allow[native_type]:request['external_methods'][identifier]='native'
        request['external_methods'].update({
            'M:kairo.unity.ui.Graphics.GetColorOfRGB(System.Int32,System.Int32,System.Int32)':'native',
            'M:kairo.unity.ui.Graphics.GetColorOfRGB(System.Int32,System.Int32,System.Int32,System.Int32)':'native',
            'M:kairo.unity.ui.Font.#ctor':'native',
            'M:kairo.unity.ui.Font.#ctor(kairo.unity.ui.Font)':'native',
            'M:kairo.unity.ui.Image.Load(System.Byte[],kairo.unity.ui.Image.Format,kairo.unity.ui.Image.Filter)':'native',
            'M:native.AppPlugin.Init(System.Int32,System.Boolean,System.String)':'pls::kairo::native_plugin_init',
            'M:UnityEngine.Application.set_targetFrameRate(System.Int32)':'pls::kairo::UnityApplication::set_targetFrameRate',
            'M:UnityEngine.QualitySettings.set_vSyncCount(System.Int32)':'pls::kairo::QualitySettings::set_vSyncCount'})
        request['external_types']['T:UnityEngine.WWW']='pls::kairo::OfflineWebRequest'
        request['native_includes'].append('offline_http.hpp')
        request['external_methods'].update({
            'M:UnityEngine.WWW.#ctor(System.String)':'pls::cs::make_ref<pls::kairo::OfflineWebRequest>',
            'M:UnityEngine.WWW.#ctor(System.String,System.Byte[])':'pls::cs::make_ref<pls::kairo::OfflineWebRequest>',
            'M:UnityEngine.WWW.get_isDone':'member:get_isDone','M:UnityEngine.WWW.get_error':'member:get_error',
            'M:UnityEngine.WWW.get_bytes':'member:get_bytes','M:UnityEngine.WWW.Dispose':'member:Dispose',
            'M:UnityEngine.PlayerPrefs.HasKey(System.String)':'pls::kairo::PlayerPrefs::HasKey',
            'M:kairo.unity.ui.SoundBase.Dispose':'member:Dispose',
            'M:kairo.unity.native.KairoPlugin.LicenseCheck':'pls::kairo::removed_license_check',
            'M:kairo.unity.native.KairoPlugin.GetInstallReferrer(System.String)':'pls::kairo::native_install_referrer'})
        for member,signatures in {
            'GetString':['(System.String)','(System.String,System.String)'],
            'GetInt':['(System.String)','(System.String,System.Int32)'],
            'GetFloat':['(System.String)','(System.String,System.Single)'],
            'SetString':['(System.String,System.String)'],'SetInt':['(System.String,System.Int32)'],
            'SetFloat':['(System.String,System.Single)'],'DeleteKey':['(System.String)'],
            'DeleteAll':[''],'Save':[''],
        }.items():
            for signature in signatures:request['external_methods']['M:UnityEngine.PlayerPrefs.'+member+signature]='pls::kairo::PlayerPrefs::'+member
        for base,slots in {'FormBase':['Init','Draw','Update','Resume','Suspend','Finish','GetTouchValue','SetTouchValue','CheckMainWindow','ProcessEvent','ProcessBackKey'],'FormManagerBase':['PreUpdate','Updated','PreDraw','Drawn','Execute','OnDraw','Resume']}.items():
            for name in slots:
                # Full signatures are supplied by Roslyn in the lowerer. Slot
                # matching is by original declaring method documentation ID.
                file=reference/'src/KairoLibrary/kairo/unity/form'/str(base+'.cs')
                for row in csv.DictReader((ROOT/'config/boundary.csv').open(encoding='utf-8',newline='')):
                    if row['id'].startswith('M:kairo.unity.form.'+base+'.'+name+'(') or row['id']=='M:kairo.unity.form.'+base+'.'+name:
                        request.setdefault('external_slots',{})[row['id']]=name
                        if name not in ('Execute','OnDraw'):request['external_methods'][row['id']]='member:source_'+name
        request['external_methods']['M:kairo.unity.form.FormBase.#ctor(System.Int32)']='base:source_construct'
        request['external_methods']['M:kairo.unity.form.FormManagerBase.#ctor']='base:source_construct'
        request['native_includes'].append('capture.hpp')
        request['external_methods']['M:kairo.unity.form.FormManagerBase.Capture(kairo.unity.surface.SurfaceBase,System.String[],kairo.unity.form.FormManagerBase.OnCaptureCompleted,System.Boolean)']='source-adapter:M:PlsPortGeneratedBootstrap.Source.Capture(kairo.unity.form.FormManagerBase,kairo.unity.surface.SurfaceBase,System.String[],kairo.unity.form.FormManagerBase.OnCaptureCompleted,System.Boolean)'
        request['external_methods']['M:PlsPortGeneratedBootstrap.Host.QueueCapture(kairo.unity.form.FormManagerBase,System.Int32,System.Int32,System.Int32,System.Int32,System.String[],kairo.unity.form.FormManagerBase.OnCaptureCompleted,System.Boolean)']='pls::kairo::queue_capture'
        request['external_value_types']={'T:UnityEngine.Vector2':'pls::kairo::Vector2'}
        request['external_fields'].update({'F:UnityEngine.Vector2.x':'x','F:UnityEngine.Vector2.y':'y'})
        request['external_methods']['M:UnityEngine.Vector2.Set(System.Single,System.Single)']='value-member:Set'
        request['external_methods']['M:kairo.unity.ui.Canvas.GetSurfaceManager']='canvas-source:get'
        request['external_methods']['M:kairo.unity.ui.Canvas.SetSurfaceManager(kairo.unity.surface.SurfaceManagerBase)']='canvas-source:set'
        request['native_includes'].append('forms_callbacks.hpp')
        request['external_value_types']['T:UnityEngine.Vector3']='pls::kairo::Vector3'
        request['external_value_types']['T:UnityEngine.Matrix4x4']='pls::kairo::Matrix4x4'
        for column in range(4):
            for row in range(4):
                name=f'm{row}{column}';request['external_fields']['F:UnityEngine.Matrix4x4.'+name]=name
        request['native_includes'].append('matrix4.hpp')
        request['external_methods']['M:UnityEngine.Matrix4x4.get_identity']='pls::kairo::Matrix4x4::identity'
        request['external_methods']['M:UnityEngine.Matrix4x4.MultiplyPoint(UnityEngine.Vector3)']='value-member:MultiplyPoint'
        for column in range(4):
            for row in range(4):request['external_fields']['F:UnityEngine.Matrix4x4.m'+str(row)+str(column)]='m'+str(row)+str(column)
        request['external_fields'].update({'F:UnityEngine.Vector3.x':'x','F:UnityEngine.Vector3.y':'y','F:UnityEngine.Vector3.z':'z'})
        request['external_methods'].update({'M:UnityEngine.Input.GetKey(UnityEngine.KeyCode)':'pls::kairo::DebugInput::GetKey','M:UnityEngine.Input.GetMouseButton(System.Int32)':'pls::kairo::DebugInput::GetMouseButton','M:UnityEngine.Input.GetMouseButtonDown(System.Int32)':'pls::kairo::DebugInput::GetMouseButtonDown','M:UnityEngine.Input.get_mousePosition':'pls::kairo::DebugInput::get_mousePosition','M:UnityEngine.Screen.get_height':'pls::kairo::DebugInput::screen_height'})
        request['native_includes'].append('debug_input.hpp')
        request['external_methods']['M:UnityEngine.Input.get_touchCount']='pls::kairo::DebugInput::get_touchCount'
        request['external_methods']['M:UnityEngine.Input.get_multiTouchEnabled']='pls::kairo::DebugInput::get_multiTouchEnabled'
        request['external_methods']['M:kairo.unity.ui.SoundOGG.Load(System.String)']='pls::kairo::SoundOGG::Load'
        request['external_methods']['M:kairo.unity.ui.SoundBase.SetName(System.String)']='member:SetName'
        request['external_methods']['M:kairo.unity.native.KairoPlugin.GetRelease']='pls::kairo::native_release'
        request['external_methods']['M:kairo.unity.ui.IApplication.Terminate']='member:Terminate'
        request['external_methods']['M:kairo.unity.ui.IApplication.ResetOrientation']='member:ResetOrientation'
        request['external_methods']['M:kairo.unity.ui.IApplication.SetOrientation(System.Int32)']='member:SetOrientation'
        request['external_methods']['M:kairo.unity.ui.IApplication.GetResource']='source-adapter:M:PlsPortGeneratedBootstrap.Source.GetApplicationResource(kairo.unity.ui.IApplication)'
        request['native_includes'].append('runtime_memory.hpp')
        for name in ('Free','Total'):
            request['external_methods']['M:java.native.JavaPlugin.'+name+'Memory']='source-static:M:PlsPortGeneratedBootstrap.Source.'+name+'HeapMemory'
        request['external_methods']['M:kairo.unity.native.KairoPlugin.ShowToast(System.String,System.Int32)']='source-static:M:PlsPortGeneratedBootstrap.Source.ShowToast(System.String,System.Int32)'
        for name in ('GetRenderModeOperator','GetRenderModeSrcRatio','GetRenderModeDstRatio'):
            request['external_methods']['M:kairo.unity.ui.Graphics.'+name]='member:'+name
        for name in ('LockLocalizeSetting','UnlockLocalizeSetting'):
            request['external_methods']['M:kairo.unity.ui.Font.'+name]='pls::kairo::Font::'+name
        for name in ('GetWidth','GetStyle','GetLocalizeScale'):
            request['external_methods']['M:kairo.unity.ui.Font.'+name]='member:'+name
        request['external_methods']['M:kairo.unity.ui.Font.AdjustFontSize(System.Single)']='member:AdjustFontSize'
        request['external_methods']['M:kairo.unity.ui.Font.SetStyle(System.Int32)']='member:SetStyle'
        # Transitive library callers also use these exact native overloads;
        # membership in the direct Game boundary is not an emission condition.
        for signature in ('GetSize','GetHeight','GetWidth','GetStyle','GetFace','SetSize(System.Int32,System.Boolean)',
                          'SetStyle(System.Int32)','SetFace(System.Int32)','AdjustFontSize(System.Single)',
                          'Copy(kairo.unity.ui.Font)','Set(kairo.unity.ui.Font)','Equals(kairo.unity.ui.Font)',
                          'StringWidth(System.String)','StringWidthF(System.String)','Dispose',
                          'PushLocalizeSetting(System.Boolean)','PopLocalizeSetting','ClearLocalizeSettings',
                          'LockLocalizeSetting','UnlockLocalizeSetting','IsNeedLocalizeScale','GetLocalizeScale'):
            request['external_methods']['M:kairo.unity.ui.Font.'+signature]='native'
        for name in ('PeekAutoTextLayout','PopAutoTextLayout'):
            request['external_methods']['M:kairo.unity.ui.Graphics.'+name]='pls::kairo::Graphics::'+name
        request['external_methods']['M:kairo.unity.ui.Graphics.PushAutoTextLayout(System.Boolean)']='pls::kairo::Graphics::PushAutoTextLayout'
        request['external_methods']['M:kairo.unity.ui.Graphics.GetTransRectGUI(System.Single,System.Single,System.Single,System.Single,kairo.unity.graphics.RectangleF)']='source-adapter:M:PlsPortGeneratedBootstrap.Source.GetGraphicsTransRectGUI(kairo.unity.ui.Graphics,System.Single,System.Single,System.Single,System.Single,kairo.unity.graphics.RectangleF)'
        for signature in ('','(System.Single@,System.Single@)','(System.Int32@,System.Int32@)'):
            request['external_methods']['M:kairo.unity.ui.Graphics.BeginLocalCoordination'+signature]='member:BeginLocalCoordination'
        request['external_methods']['M:kairo.unity.ui.Graphics.EndLocalCoordination']='member:EndLocalCoordination'
        for signature in ('SetBlendMode(System.Int32,System.Int32)','SetBlendMode(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)',
                          'PushBlendMode','PushBlendMode(System.Int32,System.Int32)','PushBlendMode(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)',
                          'PopBlendMode','GetBlendMode','GetBlendColor'):
            request['external_methods']['M:kairo.unity.ui.Graphics.'+signature]='native'
        request['external_fields']['F:kairo.unity.ui.Graphics.fontScaleOffsetEnable_']='fontScaleOffsetEnable_'
        for parameters in ('System.Int64,System.Single,System.Single','System.Int64,System.Single,System.Single,System.Int32',
                           'System.String,System.Single,System.Single,System.Int32,System.Int32',
                           'kairo.unity.ui.TextFormat,System.Int64,System.Single,System.Single',
                           'kairo.unity.ui.TextFormat,System.Int64,System.Single,System.Single,System.Int32',
                           'kairo.unity.ui.TextFormat,System.String,System.Single,System.Single',
                           'kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32,System.Int32'):
            member='M:kairo.unity.ui.Graphics.DrawString('+parameters+')';request['external_methods'].pop(member,None);request['source_native_helpers'].append(member)
        request['external_methods']['M:kairo.unity.ui.Graphics.DrawString(kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32)']='source-adapter:M:PlsPortGeneratedBootstrap.Source.DrawGraphicsText(kairo.unity.ui.Graphics,kairo.unity.ui.TextFormat,System.String,System.Single,System.Single,System.Int32)'
        for name,adapter in [('PushMatrix','PushGraphicsMatrix'),('SetMatrix','SetGraphicsMatrix'),('GetMatrix','GetGraphicsMatrix'),('GetLocalMatrix','GetGraphicsLocalMatrix'),('GetScreenMatrix','GetGraphicsScreenMatrix')]:
            request['external_methods']['M:kairo.unity.ui.Graphics.'+name+'(kairo.unity.ui.Matrix)']='source-adapter:M:PlsPortGeneratedBootstrap.Source.'+adapter+'(kairo.unity.ui.Graphics,kairo.unity.ui.Matrix)'
        for name in ('PopMatrix','CheckLocalMatrix','ClearLocalMatrix'):
            request['external_methods']['M:kairo.unity.ui.Graphics.'+name]='member:'+name
        request['external_methods']['M:kairo.unity.ui.Graphics.SetFlipMode(System.Int32)']='member:SetFlipMode'
        request['external_methods'].update({'M:UnityEngine.Screen.get_dpi':'pls::kairo::DebugInput::get_dpi','M:UnityEngine.Screen.get_fullScreen':'pls::kairo::DebugInput::get_fullScreen',
            'M:kairo.unity.native.KairoPlugin.IsFullscreen':'pls::kairo::DebugInput::get_fullScreen',
            'M:kairo.unity.native.KairoPlugin.GetStatusBarHeight':'pls::kairo::native_status_bar_height','M:kairo.unity.native.KairoPlugin.GetStatusBarPosition':'pls::kairo::native_status_bar_position',
            'M:kairo.unity.ui.Canvas.IsFullscreen':'member:IsFullscreen','M:kairo.unity.ui.Canvas.GetStatusBarHeight':'member:GetStatusBarHeight','M:kairo.unity.ui.Canvas.GetStatusBarPosition':'member:GetStatusBarPosition',
            'M:kairo.unity.ui.IApplication.GetResolutionScaleRatio':'member:GetResolutionScaleRatio'})
        request['external_methods'].update({'M:kairo.unity.ui.Graphics.GetCurrent':'pls::kairo::Graphics::GetCurrent','M:kairo.unity.ui.Graphics.IsGUI':'member:IsGUI','M:kairo.unity.ui.Graphics.ResetRender':'member:ResetRender'})
        request['external_fields']['F:kairo.unity.ui.Graphics.current_']='readonly:pls::kairo::Graphics::GetCurrent()'
        for signature in ('BeginGLRender(System.Boolean)','EndGLRender(System.Boolean)','FlushGLRender(System.Boolean)',
                          'IsRenderGUIMode','SetClipEnable(System.Boolean)','IsClipEnable',
                          'PushClipEnable','PushClipEnable(System.Boolean)','PopClipEnable'):
            request['external_methods']['M:kairo.unity.ui.Graphics.'+signature]='member:'+signature.split('(')[0]
        request['external_methods']['M:kairo.unity.ui.Font.SetScale(System.Int32)']='pls::kairo::Font::SetScale'
        request['external_methods']['M:kairo.unity.io.Storage.Write(System.Int32,System.Boolean,System.String,System.Byte[])']='pls::kairo::Storage::Write'
        request['external_methods']['M:kairo.unity.io.Storage.Exists(System.Int32,System.String)']='pls::kairo::Storage::Exists'
        for signature in ('GetAction','GetX','GetY','GetX(System.Int32)','GetY(System.Int32)',
                          'GetDeltaX','GetDeltaY','GetDeltaTime','GetDeltaX(System.Int32)','GetDeltaY(System.Int32)','GetDeltaTime(System.Int32)',
                          'IsMousePointer','GetPointerCount','GetPointerId(System.Int32)'):
            request['external_methods']['M:kairo.unity.surface.MotionEvent.'+signature]='member:'+signature.split('(')[0]
        for name in ('IsNeedLocalizeScale','GetLocalizeScale'):
            request['external_methods']['M:kairo.unity.ui.Font.'+name]='member:'+name
        request['native_includes']+=['vector2.hpp']
        request['external_types']['T:kairo.unity.surface.TouchValueAccessor']='pls::kairo::TouchValueAccessor'
        request['native_includes']+=['touch_value_accessor.hpp']
        for name in ('GetTouchValue','SetTouchValue'):
            identifier='M:kairo.unity.surface.TouchValueAccessor.'+name+'(System.Int32,System.Int32)'
            request['external_methods'][identifier]='member:'+name
            request.setdefault('external_slots',{})[identifier]=name
    # Platform fixtures inject deterministic locale/timezone independently of
    # the game's Language selection. Production host installs its real backend.
    request['native_includes']+=['globalization.hpp']
    request['external_methods'].update({
        'M:java.native.JavaPlugin.GetDefaultTimeZone':'pls::kairo::native_timezone_id',
        'M:java.native.JavaPlugin.GetUtcOffset(System.String)':'pls::kairo::native_timezone_raw_offset',
        'M:java.native.JavaPlugin.GetDefaultLocale':'pls::kairo::native_locale'})
    request['oracle_external_methods']={
        'M:java.native.JavaPlugin.GetDefaultTimeZone':'SyntheticPlatform.TimeZone',
        'M:java.native.JavaPlugin.GetUtcOffset(System.String)':'SyntheticPlatform.RawOffset',
        'M:java.native.JavaPlugin.GetDefaultLocale':'SyntheticPlatform.Locale'}
    request['oracle_support']='public static class SyntheticPlatform {public static string TimeZone(){return "Fixture/Zone";} public static int RawOffset(string id){if(id==null)throw new System.ArgumentNullException();return id=="Fixture/Zone"?32400000:0;} public static string[] Locale(){return new string[]{"en","US"};}}'
    request['oracle_native_setup']='pls::kairo::install_globalization_provider({[](){return pls::cs::String(u"Fixture/Zone");},[](const pls::cs::String&id){if(id.is_null())throw pls::cs::ArgumentNullException();return id==pls::cs::String(u"Fixture/Zone")?32400000:0;},[](){return pls::cs::Array<pls::cs::String>::from({pls::cs::String(u"en"),pls::cs::String(u"US")});}});'
    # Shared, concrete platform leaves used by generated JarInflater/AssetReader.
    request.setdefault('external_types',{}).update({'T:kairo.unity.io.Storage':'pls::kairo::Storage','T:kairo.unity.ui.IApplication':'pls::kairo::IApplication','T:kairo.unity.util.DisplayMetrics':'pls::kairo::DisplayMetrics','T:UnityEngine.TextAsset':'pls::kairo::NativeTextAsset','T:UnityEngine.Object':'pls::cs::Object'})
    request['native_includes']+=['storage.hpp','application.hpp','asset_reader.hpp','display_metrics.hpp']
    request['external_methods'].update({'M:kairo.unity.io.Storage.Read(System.Int32,System.Boolean,System.String)':'pls::kairo::Storage::Read','M:kairo.unity.ui.IApplication.GetCurrentApp':'pls::kairo::IApplication::GetCurrentApp','M:kairo.unity.ui.IApplication.GetProperty(System.String)':'pls::kairo::IApplication::GetProperty','M:kairo.unity.ui.IApplication.RunOnUiThread(kairo.unity.ui.IApplication.UIMethod,System.Boolean)':'member:RunOnUiThread','M:kairo.unity.ui.IApplication.RunOnUiThread(System.Threading.ThreadStart,System.Boolean)':'member:RunOnUiThread','M:UnityEngine.TextAsset.get_bytes':'member:get_bytes','M:UnityEngine.TextAsset.get_text':'member:get_text','M:kairo.unity.util.DisplayMetrics.get_Density':'pls::kairo::DisplayMetrics::get_Density'})
    request['external_methods'].update({'M:kairo.unity.ui.IApplication.IsSide':'member:IsSide','M:kairo.unity.ui.IApplication.GetOrientation':'member:GetOrientation'})
    if args.assembly=='KairoLibrary':
        request['oracle_external_methods'].update({'M:kairo.unity.io.Storage.Read(System.Int32,System.Boolean,System.String)':'SyntheticAssets.Read','M:kairo.unity.ui.IApplication.GetCurrentApp':'SyntheticAssets.Current','M:UnityEngine.Resources.Load(System.String)':'UnityEngine.Resources.Load','M:UnityEngine.Resources.UnloadAsset(UnityEngine.Object)':'UnityEngine.Resources.UnloadAsset'})
        request['oracle_support']+='''
public static class SyntheticAssets {public static byte[] Read(int media,bool security,string file){if(media!=3)throw new NotSupportedException();return null;}public static kairo.unity.ui.IApplication Current(){return new kairo.unity.ui.IApplication();}}
namespace kairo.unity.ui { public partial class IApplication {public object RunOnUiThread(UIMethod method,bool wait=false){return method();}public void RunOnUiThread(System.Threading.ThreadStart method,bool wait=false){method();}}}
namespace kairo.unity.util {public static class DisplayMetrics {public static float Density {get{return 1.6f;}}}}
namespace UnityEngine { public class Object {} public class TextAsset:Object{public byte[] bytes;public string text;}public static class Resources {public static Object Load(string name){return null;}public static void UnloadAsset(Object value){}}}
'''
        request['oracle_native_setup']+='struct FixtureApp:pls::kairo::IApplication{void OnUpdate()override{}void OnDraw()override{}pls::cs::Ref<pls::kairo::FormManagerBase> GetFormManager()override{return {};}};auto fixtureApp=pls::cs::make_ref<FixtureApp>();fixtureApp->source_Init(fixtureApp);fixtureApp->host_configure(240,280,{},[](){});'
    if args.assembly=='Assembly-CSharp' and args.bootstrap_main:
        import bootstrap_source as bootstrap_adapter
        extra_source=bootstrap_adapter.write(folder)
        adapter_sources=[dict(path=extra_source.relative_to(ROOT).as_posix(),sha256=digest(extra_source)),
                         dict(path='translator/bootstrap_source.py',sha256=digest(ROOT/'translator/bootstrap_source.py')),
                         dict(path='config/phase2-bootstrap-plan.json',sha256=digest(ROOT/'config/phase2-bootstrap-plan.json'))]
        request['sources'].append(str(extra_source))
        request['selected']+=bootstrap_adapter.selected()
        request['native_includes'].append('bootstrap_bindings.hpp')
        request['external_methods'].update({
            'M:PlsPortGeneratedBootstrap.Host.InstallNativeBindings':'pls::game::native_install_bootstrap_bindings',
            'M:PlsPortGeneratedBootstrap.Host.PushGraphicsMatrix(kairo.unity.ui.Graphics,System.Single[])':'pls::kairo::native_graphics_push_matrix',
            'M:PlsPortGeneratedBootstrap.Host.SetGraphicsMatrix(kairo.unity.ui.Graphics,System.Single[])':'pls::kairo::native_graphics_set_matrix',
            'M:PlsPortGeneratedBootstrap.Host.ReadGraphicsMatrix(kairo.unity.ui.Graphics,System.Int32)':'pls::kairo::native_graphics_read_matrix',
            'M:PlsPortGeneratedBootstrap.Host.ReadGraphicsClip(kairo.unity.ui.Graphics)':'pls::kairo::native_graphics_read_clip',
            'M:PlsPortGeneratedBootstrap.Host.ReadGraphicsFont(kairo.unity.ui.Graphics)':'pls::kairo::native_graphics_read_font',
            'M:PlsPortGeneratedBootstrap.Host.DrawPreparedText(kairo.unity.ui.Graphics,System.String,System.Single,System.Single,System.Int32)':'pls::kairo::native_graphics_draw_prepared',
            'M:PlsPortGeneratedBootstrap.Host.ReadApplicationResource(kairo.unity.ui.IApplication)':'pls::kairo::native_application_resource',
            'M:PlsPortGeneratedBootstrap.Host.FreeHeapMemory':'pls::kairo::native_heap_free',
            'M:PlsPortGeneratedBootstrap.Host.TotalHeapMemory':'pls::kairo::native_heap_total',
            'M:PlsPortGeneratedBootstrap.Host.SetWindowFullscreen(System.Boolean)':'pls::kairo::native_window_fullscreen',
            'M:kairo.unity.native.KairoPlugin.Init(System.Int32,System.Boolean,System.String)':'pls::kairo::native_plugin_init',
            'M:kairo.unity.util.DisplayMetrics.#ctor':'pls::cs::make_ref<pls::kairo::DisplayMetrics>',
            'M:kairo.unity.ui.Image.SetExpiration(System.Boolean,System.Int32)':'member:SetExpiration'})
        producer['bootstrap_generator_sha256']=digest(ROOT/'translator/bootstrap_source.py')
        request['external_methods']['M:kairo.unity.native.KairoPlugin.Fullscreen(System.Boolean)']='source-static:M:PlsPortGeneratedBootstrap.Source.SetWindowFullscreen(System.Boolean)'
        if not args.diagnostics_only:
            output.mkdir(parents=True,exist_ok=True)
            bootstrap_adapter.header(output)
    if args.diagnostic_defer_capture:
        from diagnostic_leaves import CAPTURE,CPP_NAME
        request['external_methods'][CAPTURE]=CPP_NAME
    input_path=output/'diagnostic-request.json'if args.diagnostic_defer_capture else folder/(args.assembly+'-input.json')
    raw_path=output/'diagnostic-raw-report.json'if args.diagnostic_defer_capture else folder/(args.assembly+'-translation.json')
    input_path.write_text(json.dumps(request,indent=2)+'\n',encoding='utf-8',newline='\n')
    run([runtime,target,input_path,raw_path],folder/(args.assembly+'-translator.log'))
    report=json.loads(raw_path.read_text(encoding='utf-8-sig'))
    # Snippets may contain source numeric payloads. Keep those diagnostics only
    # in ignored build/raw reports; public receipts contain locations, not data.
    def redact_sites(value):
        if isinstance(value,dict):
            site=value.pop('site',None)
            if isinstance(site,str):
                location=re.match(r'^(.*?\.cs):(\d+):',site)
                if location:value.update(node_source=location.group(1),node_line=int(location.group(2)))
            # Preserve every locator without repeating the absolute checkout
            # prefix thousands of times in public receipts. Raw diagnostics
            # remain private; these paths resolve against the repository root.
            if args.assembly=='Assembly-CSharp':
                for key in ('source','node_source'):
                    path=Path(value[key]) if isinstance(value.get(key),str) else None
                    if path is not None and path.is_absolute() and path.is_relative_to(ROOT):value[key]=path.relative_to(ROOT).as_posix()
            if args.assembly=='Assembly-CSharp' and 'node_source' in value and value['node_source']==value.get('source'):
                value.pop('node_source')
            for child in value.values():redact_sites(child)
        elif isinstance(value,list):
            for child in value:redact_sites(child)
    redact_sites(report)
    if args.assembly=='Assembly-CSharp':
        report['source_path_base']='repository_root'
        report['node_source_default']='source'
        pack_source_paths(report)
        producer['report_paths_sha256']=digest(ROOT/'translator/report_paths.py')
    if args.diagnostics_only:
        report.update(producer=producer,source_manifest=[dict(path=p,sha256=digest(reference/p)) for p in source_names],platform_adapter_sources=adapter_sources,reference_metadata=[dict(filename=p.name,sha256=digest(p)) for p in refs])
        target_report=ROOT/'config'/('phase2-game-diagnostics.json' if args.assembly=='Assembly-CSharp' else 'phase2-portable-diagnostics.json')
        target_report.write_text(json.dumps(report,indent=None if args.assembly=='Assembly-CSharp' else 2,ensure_ascii=True,separators=(',',':') if args.assembly=='Assembly-CSharp' else None)+'\n',encoding='utf-8',newline='\n')
        print(json.dumps({k:report[k] for k in ['source_method_declarations','binding_errors','source_bodies_lowered_in_memory','generated_cpp_methods','compiled_methods','executed_methods']}))
        return
    # The source-only oracle is a test artifact, not public game output.
    oracle=output/'source_oracle.cs'
    if args.assembly=='Assembly-CSharp':
        # Game constant data comes from authenticated local assets, never from
        # a duplicated source-oracle initializer or a C++ literal payload.
        oracle.unlink(missing_ok=True)
        (folder/'Assembly-CSharp-source-oracle.cs').unlink(missing_ok=True)
    elif oracle.exists():shutil.move(str(oracle),folder/(args.assembly+'-source-oracle.cs'))
    if bootstrap_adapter:report['bootstrap_bindings']=bootstrap_adapter.emit(output,report,portable)
    if args.diagnostic_defer_capture:
        from diagnostic_leaves import package,CAPTURE
        callers=package(output)
        report['diagnostic_leaf_guards']=dict(ids=[CAPTURE],callers=callers,producer_sha256=digest(ROOT/'translator/diagnostic_leaves.py'),request_path=input_path.relative_to(ROOT).as_posix(),request_sha256=digest(input_path))
        report['diagnostic_only']=True
        report['normal_coverage_promoted']=0
    compiled=False;compile_evidence=None
    if args.compile and report['emitted_method_count']:
        env=environment();native=folder/'native';native.mkdir(exist_ok=True)
        from generated_build import compile_objects
        units=sorted(p for p in output.glob('*.cpp')if p.name!='bootstrap_generated.cpp')
        inputs=sorted(set((ROOT/'src/kairo/common').rglob('*.hpp'))|set((ROOT/'src/kairo/common').rglob('*.inc'))|set((ROOT/'src/kairo/api').rglob('*.hpp'))|set(output.glob('*.?pp'))|set(output.glob('*.inc')))
        inputs+=list((ROOT/'src/kairo/platform/sdl').glob('*.hpp'))
        before={p.relative_to(ROOT).as_posix():digest(p) for p in inputs}
        evidence=compile_objects(units,native/args.assembly,[ROOT/'src/kairo/common',ROOT/'src/kairo/api',ROOT/'src',output],jobs=2)
        after={p.relative_to(ROOT).as_posix():digest(p) for p in inputs}
        if before!=after:raise RuntimeError('Native compile inputs changed concurrently; rerun translation before publishing a receipt')
        compiled=True
        compiler=shutil.which('cl.exe',path=env['PATH'])
        compile_evidence=dict(compiler=dict(path=compiler,sha256=digest(compiler)),objects=[dict(path=Path(row['path']).relative_to(ROOT).as_posix(),sha256=row['sha256'])for row in evidence['objects']],incremental_build=evidence,inputs=after)
    manifest=output/'emission_units.json'
    if manifest.exists():report['unit_layout']=dict(path=manifest.relative_to(ROOT).as_posix(),sha256=digest(manifest),units=json.loads(manifest.read_text(encoding='utf8'))['units'])
    report.update(producer=producer,source_manifest=[dict(path=p,sha256=digest(reference/p)) for p in source_names],platform_adapter_sources=adapter_sources,
        reference_commit='c7d097a847ca1f1a8e5fb7141ff11d338f5915c4',
        reference_metadata=[dict(filename=p.name,sha256=digest(p)) for p in refs],compiled=compiled,compile_evidence=compile_evidence,
        compiled_method_count=report['emitted_method_count'] if compiled else 0,
        game_translated_methods=report['emitted_method_count'] if args.assembly=='Assembly-CSharp' and compiled else 0,game_compiled_methods=report['emitted_method_count'] if args.assembly=='Assembly-CSharp' and compiled else 0,game_executed_methods=0,
        generated_files=[dict(path=p.relative_to(ROOT).as_posix(),sha256=digest(p)) for p in sorted(set(output.glob('*.?pp'))|set(output.glob('*.inc')))])
    report_target=output/'diagnostic-report.json'if args.diagnostic_defer_capture else ROOT/'config'/('phase2-game-translation.json' if args.assembly=='Assembly-CSharp' else 'phase2-translation.json')
    report_target.write_text(json.dumps(report,indent=None if args.assembly=='Assembly-CSharp' else 2,ensure_ascii=True,separators=(',',':') if args.assembly=='Assembly-CSharp' else None)+'\n',encoding='utf-8',newline='\n')
    if args.diagnostic_defer_capture:
        print(json.dumps(dict(diagnostic_only=True,normal_coverage_promoted=0,emitted_candidates=report['emitted_method_count'],guarded_callers=callers)))
        return
    measured=list(csv.DictReader((ROOT/'config/csharp-syntax.csv').open(encoding='utf-8')))
    covered=set(report['emitted_kind_occurrences'])
    syntax=[dict(kind=r['kind'],measured_count=r['count'],observed_in_emitted_body=r['kind'] in covered,
                 status='observed-in-emitted-body' if r['kind'] in covered else 'NOT_YET_VALIDATED') for r in measured]
    with (ROOT/'config'/('game-translator-syntax.csv' if args.assembly=='Assembly-CSharp' else 'translator-syntax.csv')).open('w',encoding='utf-8',newline='') as f:
        w=csv.DictWriter(f,fieldnames=list(syntax[0]),lineterminator='\n');w.writeheader();w.writerows(syntax)
    print(json.dumps({k:report[k] for k in ['requested_symbols','requested_methods','emitted_method_count','root_methods_emitted','compiled_method_count','executed_methods']}))


if __name__=='__main__':main()
