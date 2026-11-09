"""Generate source adapters and typed native bindings for original Awake phases.

No MyConfig values are written here: Config.Create is specialized from the
authenticated field-copy plan and all values are emitted from readonly C#.
"""
import hashlib
import json
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
PREFIX='M:PlsPortGeneratedBootstrap.Source.'

PHASES={
    'create_config':PREFIX+'CreateConfig',
    'initialize_platform':PREFIX+'InitializePlatform',
    'load_library_resources':PREFIX+'LoadLibraryResources',
    'initialize_language':PREFIX+'InitializeLanguage',
}

SOURCE='''// GENERATED platform adapter from the documented IApplication.Awake order.
using System;
using kairo.common.cfg;
using kairo.unity.ui;
using kairo.unity.io;
using kairo.unity.util;
using kairo.unity.native;
using kairo.unity.analytics;
using kairo.unity.system;
using kairo.unity.panel;
namespace PlsPortGeneratedBootstrap {
 public static class Host {
  [System.Runtime.CompilerServices.MethodImpl(System.Runtime.CompilerServices.MethodImplOptions.InternalCall)]
  public static extern void InstallNativeBindings();
 }
 public static class Source {
  public static void CreateConfig(){/*FIELD_COPIES*/}
  public static void InitializePlatform(){
   KairoPlugin.Init(Language.Get(),Config.PRINT,Config.BASE64_PUBLIC_KEY);
   KairoPlugin.CancelNotifications(true,false);
   KairoPlugin.SetNotificationBackground(false);
   AnalyticsTracker.Setup();
   var metrics=new DisplayMetrics();
   Canvas.GetInstance().SetDisplayCurrent(IApplication.GetCurrentApp());
   Host.InstallNativeBindings();
  }
  public static object LoadLibraryResources(){
   var manager=new ResourceManager();
   manager.Load(Storage.Read(3,false,"kairolib.dat"));
   foreach(Image image in manager.img){if(image!=null)image.SetExpiration(true,40);}
   return manager;
  }
  public static void InitializeLanguage(){Language.Init();}
  public static KairoBase GetKairo(){return KairoBase.GetInstance();}
  public static bool IsPlaying(KairoBase value){return value.IsGamePlaying();}
  public static void SetGameState(KairoBase value,bool playing){value.SetGameState(playing);}
  public static void UpdateKairo(KairoBase value){value.Update();}
  public static bool GetReserveEnabled(KairoBase value){return value.reserveSaveEnable;}
  public static void SetReserveEnabled(KairoBase value,bool enabled){value.reserveSaveEnable=enabled;}
  public static int GetReserve(KairoBase value){return value.reserveSave;}
  public static void SetReserve(KairoBase value,int reserved){value.reserveSave=reserved;}
  public static void Save(KairoBase value){value.Save();}
  public static void SaveAll(KairoBase value){value.SaveAll();}
  public static FepPanel GetFep(){return FepPanel.Current;}
  public static bool UpdateFep(){return FepPanel.Current.Update();}
  public static void DrawCounters(){
   if(Config.COUNT_ENABLE){Config.drawImageCount_=0;Config.drawStringCount_=0;Config.drawShapeCount_=0;Config.drawImageArea_=0;Config.drawSourceImageArea_=0;}
   Config.checkCount_=(Config.checkCount_+1)%int.MaxValue;
  }
  public static int CheckCount(){return Config.checkCount_;}
  public static bool CountEnabled(){return Config.COUNT_ENABLE;}
  public static void AdjustCreateArea(int delta){Config.createImageArea_+=delta;}
  public static bool DebugFlag(){return Config.DEBUG;}
  public static void DisableAds(){Config.ADMOB_ENABLE=false;}
  public static void CloseJarCache(){ResourceManager.CloseJarCache();}
  public static string Translate(string value){return Language.TranslateText(value);}
  public static bool Japanese(){return Language.Japanese();}
  public static bool LocalizeScale(){return Config.LOCALIZE_FONT_SCALE;}
  public static long Millis(){return java.lang.JSystem.CurrentTimeMillis();}
  public static void Pause(long value){java.lang.JThread.Sleep(value);}
  public static void Yield(){java.lang.JThread.Yield();}
  public static void Collect(){java.lang.JRuntime.GetRuntime().Gc();}
 }
}
'''


def write(folder:Path):
    plan=json.loads((ROOT/'config/phase2-bootstrap-plan.json').read_text(encoding='utf8'))
    if plan['apk_sha256']!='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8':raise ValueError('Bootstrap plan belongs to another APK')
    for row in plan['source_manifest']:
        if hashlib.sha256((ROOT/'reference'/row['path']).read_bytes()).hexdigest()!=row['sha256']:raise ValueError('Bootstrap source plan is stale')
    copies=[]
    for row in plan['config_copy_plan']:
        name=row['source'].rsplit('.',1)[1]
        if name=='APPLI_TYPE' or row['target']!='F:kairo.common.cfg.Config.'+name:raise ValueError('Invalid Config.Create specialization')
        copies.append('Config.'+name+'=cfg.MyConfig.'+name+';')
    if len(copies)!=27:raise ValueError('Unexpected authenticated Config.Create copy count')
    target=folder/'bootstrap_source.cs'
    target.write_text(SOURCE.replace('/*FIELD_COPIES*/','\n'.join(copies)),encoding='utf8',newline='\n')
    return target


def selected():
    # Syntax is bound by Roslyn; declarations below are additional platform
    # adapters, excluded from the original Game method denominator.
    import re
    result=[]
    aliases={'KairoBase':'kairo.unity.system.KairoBase','FepPanel':'kairo.unity.panel.FepPanel','bool':'System.Boolean','int':'System.Int32','long':'System.Int64','string':'System.String'}
    for name,parameters in re.findall(r'public static [\w<>]+ (\w+)\(([^)]*)\)',SOURCE):
        types=[aliases[p.strip().split()[0]]for p in parameters.split(',')if p.strip()]
        result.append(PREFIX+name+('('+','.join(types)+')'if types else ''))
    return result


def header(output):
    (output/'bootstrap_bindings.hpp').write_text('''// GENERATED platform bootstrap interface; no source gameplay replacement.
#pragma once
#include "bootstrap.hpp"
namespace pls::game {void native_install_bootstrap_bindings();}
''',encoding='utf8',newline='\n')


def emit(output,report,portable):
    methods={m['id']:m for m in report['emitted_methods']+report.get('emitted_kairo_dependencies',[])}
    gaps=set()
    def invoke(name,args=(),signature='',result='void'):
        key=PREFIX+name+signature
        if key not in methods:
            gaps.add(key)
            return '([&]()->'+result+'{PLS_BOOTSTRAP_GAP('+json.dumps(key)+');}())'
        return methods[key]['cpp_name']+'('+','.join(args)+')'
    def bind(signature,name,args=(),parameters='',suffix=''):
        return 'cs::Delegate<'+signature+'>::from_static('+json.dumps(PREFIX+name+suffix)+',['+']('+parameters+'){'+('return 'if not signature.startswith('void(')else '')+invoke(name,args,suffix,signature.split('(',1)[0])+';})'
    text=['''// GENERATED by translator/bootstrap_source.py; source order: IApplication.Awake.
#include "game_generated.hpp"
#include "bootstrap_bindings.hpp"
#include "forms_callbacks.hpp"
#include "font.hpp"
#include "canvas.hpp"
#include "graphics.hpp"
#include "display_metrics.hpp"
#include "kairo/platform/sdl/globalization.hpp"
#ifndef PLS_BOOTSTRAP_GAP
#define PLS_BOOTSTRAP_GAP(id) throw pls::kairo::BootstrapContractError(id)
#endif
namespace pls::game {
namespace cs=pls::cs;namespace k=pls::kairo;
''']
    text.append('void native_install_bootstrap_bindings(){\n')
    text.append(invoke('DisableAds')+';\n')
    text.append('k::Canvas::GetInstance()->host_input_config([]()->bool{return '+invoke('DebugFlag',result='bool')+';});\n')
    text.append('k::IApplication::host_platform(pls::sdl::device_model());\n')
    text.append('k::ImageRuntimeBindings images;images.check_count='+bind('std::int32_t()','CheckCount')+';images.count_enabled='+bind('bool()','CountEnabled')+';images.adjust_create_area='+bind('void(std::int32_t)','AdjustCreateArea',['delta'],'std::int32_t delta','(System.Int32)')+';k::install_image_runtime(std::move(images));\n')
    text.append('k::TextServices fonts;fonts.translate=[](cs::String value)->cs::String{return '+invoke('Translate',['value'],'(System.String)','cs::String')+';};fonts.japanese=[]()->bool{return '+invoke('Japanese',result='bool')+';};fonts.localize_scale=[]()->bool{return '+invoke('LocalizeScale',result='bool')+';};fonts.application_scale=[](){return k::IApplication::GetCurrentApp()->GetScaleRatio();};k::install_text_services(std::move(fonts));}\n')
    text.append('void configure_application(cs::Ref<k::IApplication> app){\nk::FormCallbacks forms;\n')
    # Bind source singleton lookup lazily. Every operation below retains the
    # exact object returned by that one lookup; it never re-queries a singleton.
    get_kairo=PREFIX+'GetKairo'
    if get_kairo not in methods:
        gaps.add(get_kairo);text.append('forms.kairo=cs::Delegate<cs::Ref<k::FormKairo>()>::from_static("Bootstrap.Kairo",[]()->cs::Ref<k::FormKairo>{PLS_BOOTSTRAP_GAP('+json.dumps(get_kairo)+');});\n')
    else:
        text.append('forms.kairo=cs::Delegate<cs::Ref<k::FormKairo>()>::from_static("Bootstrap.Kairo",[]()->cs::Ref<k::FormKairo>{auto value='+invoke('GetKairo')+';if(!value)return {};k::KairoCallbacks callbacks;\n')
        specs=[('is_game_playing','bool()','IsPlaying','',[],''),('set_game_state','void(bool)','SetGameState','bool x',['x'],',System.Boolean'),
               ('update','void()','UpdateKairo','',[],''),('reserve_enabled','bool()','GetReserveEnabled','',[],''),
               ('set_reserve_enabled','void(bool)','SetReserveEnabled','bool x',['x'],',System.Boolean'),
               ('reserve','std::int32_t()','GetReserve','',[],''),('set_reserve','void(std::int32_t)','SetReserve','std::int32_t x',['x'],',System.Int32'),
               ('save','void()','Save','',[],''),('save_all','void()','SaveAll','',[],'')]
        for field,signature,name,parameters,args,suffix in specs:
            text.append('callbacks.'+field+'=cs::Delegate<'+signature+'>::bind(value,'+json.dumps(PREFIX+name)+',[weak=std::weak_ptr(value)]('+parameters+'){'+('return 'if not signature.startswith('void(')else '')+invoke(name,['weak.lock()']+args,'(kairo.unity.system.KairoBase'+suffix+')',signature.split('(',1)[0])+';});\n')
        text.append('return cs::make_ref<k::CallbackFormKairo>(std::move(callbacks));});\n')
    plan=json.loads((ROOT/'config/phase2-bootstrap-plan.json').read_text())
    if not plan['save_recorder_null_proof']['proven']:raise ValueError('Recorder null specialization lacks proof')
    text.append('// Complete-corpus proof: no concrete SaveRecorder subclass/constructor call.\nforms.recorder=cs::Delegate<cs::Ref<k::FormRecorder>()>::from_static("Bootstrap.Recorder",[]()->cs::Ref<k::FormRecorder>{return {};});\n')
    if PREFIX+'GetFep' in methods:
        text.append('forms.fep=cs::Delegate<cs::Ref<k::FormFep>()>::from_static("Bootstrap.Fep",[]()->cs::Ref<k::FormFep>{auto value='+invoke('GetFep')+';if(!value)return {};auto update='+bind('bool()','UpdateFep')+';return cs::make_ref<k::CallbackFormFep>(std::move(update));});\n')
    else:
        gaps.add(PREFIX+'GetFep');text.append('forms.fep=cs::Delegate<cs::Ref<k::FormFep>()>::from_static("Bootstrap.Fep",[]()->cs::Ref<k::FormFep>{PLS_BOOTSTRAP_GAP('+json.dumps(PREFIX+'GetFep')+');});\n')
    text.append('forms.millis='+bind('std::int64_t()','Millis')+';forms.sleep='+bind('void(std::int64_t)','Pause',['value'],'std::int64_t value','(System.Int64)')+';forms.yield='+bind('void()','Yield')+';forms.collect='+bind('void()','Collect')+';\n')
    text.append('forms.begin_draw_counters='+bind('void()','DrawCounters')+';forms.close_jar_cache='+bind('void()','CloseJarCache')+';forms.release_expired_images=cs::Delegate<void()>::from_static("Image.UnuseExpirationImages",[](){k::Image::UnuseExpirationImages();});\n')
    for field,signature,parameters,target in [('termination_dialog','bool()','','M:kairo.unity.form.FormManagerBase.DoTerminationDialog'),('resume_warning','void(cs::Ref<k::FormBase>)','cs::Ref<k::FormBase>','FormManager.ResumeWarning'),('lifecycle_warning','void(cs::Ref<k::FormBase>,bool)','cs::Ref<k::FormBase>,bool','FormManager.LifecycleWarning')]:
        gaps.add(target);text.append('forms.'+field+'=cs::Delegate<'+signature+'>::from_static('+json.dumps(target)+',[]('+parameters+')'+('->bool'if signature.startswith('bool')else '')+'{PLS_BOOTSTRAP_GAP('+json.dumps(target)+');});\n')
    text.append('k::BootstrapBindings bindings;bindings.forms=cs::make_ref<k::CallbackFormRuntime>(std::move(forms));\n')
    init={r['id']:'pls::generated::'+r['cpp_name']for r in portable.get('type_initializers',[])}
    init.update({r['id']:r['cpp_name']for r in report.get('type_initializers',[])})
    config_init=init.get('T:kairo.common.cfg.Config')
    if not config_init:gaps.add('T:kairo.common.cfg.Config::.cctor')
    text.append('bindings.create_config=cs::Delegate<void()>::from_static("Config.Create<MyConfig>",[](){'+(config_init+'();'if config_init else 'PLS_BOOTSTRAP_GAP("T:kairo.common.cfg.Config::.cctor");')+invoke('CreateConfig')+';});\n')
    for field,name in [('initialize_platform','InitializePlatform'),('initialize_language','InitializeLanguage')]:text.append('bindings.'+field+'='+bind('void()',name)+';\n')
    text.append('bindings.load_library_resources=cs::Delegate<cs::Ref<cs::Object>()>::from_static("Awake.LibraryResources",[]()->cs::Ref<cs::Object>{return '+invoke('LoadLibraryResources',result='cs::Ref<cs::Object>')+';});\nk::configure_bootstrap(std::move(app),std::move(bindings));}\n}\n')
    (output/'bootstrap_generated.cpp').write_text(''.join(text),encoding='utf8',newline='\n')
    return dict(source='IApplication.Awake; Config.Create specialization; FormManagerBase.Execute/OnDraw',
                config_field_copies=27,config_initialized_before_myconfig=True,missing_bindings=sorted(gaps),
                recorder_null_proof='config/phase2-bootstrap-plan.json',original_game_methods_promoted=0)
