"""Native Kairo API fixtures plus selected original-source state oracles."""
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths


def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    folder=ROOT/'build/graphics-tests';folder.mkdir(parents=True,exist_ok=True)
    original=ROOT/'reference/src/KairoLibrary/kairo/unity/ui/Graphics.cs'
    text=original.read_text(encoding='utf-8-sig')
    signatures=['public static int GetColorOfRGB(int r, int g, int b)',
                'public static int GetColorOfRGB(int r, int g, int b, int a)',
                'public static int[] GetAnchorPosition(int x, int y, int width, int height, int anchor)',
                'public int[] GetRenderRect()']
    methods=[]
    for signature in signatures:
        start=text.index(signature);opening=text.index('{',start);end=opening+1;depth=1
        while depth:
            depth+=(text[end]=='{')-(text[end]=='}');end+=1
        methods.append(text[start:end])
    oracle=folder/'GraphicsOracle.cs'
    font_original=ROOT/'reference/src/KairoLibrary/kairo/unity/ui/Font.cs'
    font_source=font_original.read_text(encoding='utf-8-sig');font_methods=[]
    for signature in ['public void SetSize(int size, bool usePreset = true)','public int GetSize()','public int GetHeight()','public float GetWidth()']:
        start=font_source.index(signature);end=font_source.index('{',start)+1;depth=1
        while depth:depth+=(font_source[end]=='{')-(font_source[end]=='}');end+=1
        font_methods.append(font_source[start:end])
    body='''using System;
class JSystem {public static void Arraycopy(object a,int x,object b,int y,int n){Array.Copy((Array)a,x,(Array)b,y,n);}}
class GraphicsOracle {
static int[] getAnchorPosition_tmp=new int[2];
float[] clipRect_=new float[4];int[] getRenderRect_tmp=new int[4];
METHODS
static void Main(){int[] values={int.MinValue,-1,0,1,255,256,int.MaxValue};
for(int i=0;i<128;i++){int r=values[i%7],g=values[(i/7)%7],b=values[(i*3)%7],a=values[(i*5)%7];Console.WriteLine("c"+i+"="+unchecked((uint)GetColorOfRGB(r,g,b,a))+","+unchecked((uint)GetColorOfRGB(r,g,b)));}
for(int i=0;i<128;i++){int[] a=GetAnchorPosition(values[i%7],values[(i*2)%7],values[(i*3)%7],values[(i*4)%7],i);Console.WriteLine("a"+i+"="+a[0]+","+a[1]);}
try{new GraphicsOracle().GetRenderRect();Console.WriteLine("renderrect=NO_EXCEPTION");}catch(Exception e){Console.WriteLine("renderrect="+e.GetType().FullName);}
var font=new FontOracle();int[] sizes={-1,0,1,2,3,12,30,int.MaxValue,int.MinValue};
for(int i=0;i<9;i++)for(int p=0;p<2;p++){string error="none";try{font.SetSize(sizes[i],p!=0);}catch(Exception e){error=e.GetType().FullName;}
Console.WriteLine("f"+i+p+"="+font.GetSize()+","+font.GetHeight()+","+unchecked((uint)BitConverter.ToInt32(BitConverter.GetBytes(font.GetWidth()),0))+","+error);}
}}
'''.replace('METHODS','\n'.join(methods))
    body+='\nclass FontOracle {class GUIStyle {public int fontSize;}GUIStyle guiStyle_=new GUIStyle();int size_,usedSize_,fontScale_=100;bool usePreset_;static int[] HEIGHT={12,24,30};\n'+'\n'.join(font_methods)+'\n}\n'
    oracle.write_text(body,encoding='utf-8',newline='\n')
    def run(command,label,env=None):
        r=subprocess.run([str(v) for v in command],cwd=ROOT,capture_output=True,env=env,timeout=90)
        (folder/(label+'.log')).write_bytes(r.stdout+r.stderr)
        if r.returncode:raise RuntimeError(label+' failed; inspect build/graphics-tests/'+label+'.log')
        return r.stdout.decode('utf-8-sig').replace('\r\n','\n')
    csc,dotnet,framework=compiler_paths();target=folder/'GraphicsOracle.dll'
    refs=[framework/(n+'.dll') for n in ('System.Private.CoreLib','System.Runtime','System.Console')]
    args=['/nologo','/nostdlib+','/target:exe','/optimize+','/out:'+str(target)]+['/r:'+str(f) for f in refs]+[str(oracle)]
    rsp=folder/'oracle.rsp';rsp.write_text('\n'.join('"'+a+'"' for a in args)+'\n',encoding='utf-8',newline='\n')
    run([csc,'/noconfig','@'+str(rsp)],'compile-modern')
    (folder/'GraphicsOracle.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10')))),encoding='utf-8',newline='\n')
    modern=run([dotnet,target],'modern')
    unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))
    mono=unity/'Editor/Data/Mono/bin/mono.exe';smcs=unity/'Editor/Data/Mono/lib/mono/unity/smcs.exe'
    env=dict(os.environ,MONO_PATH=str(smcs.parent),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
    old=folder/'GraphicsOracle-mono.exe';run([mono,smcs,'-nologo','-noconfig','-optimize+','-out:'+str(old),oracle],'compile-historical',env)
    historical=run([mono,old],'historical',env)
    exe=ROOT/'build/pc/graphics_api_test.exe';native=run([exe,ROOT/'assets'],'native')
    rows=native.splitlines();summary=json.loads(rows.pop());trace='\n'.join(rows)+'\n'
    if trace!=modern or trace!=historical:raise ValueError('Native API differs from original-source oracle')
    catalog_result=json.loads(run([ROOT/'build/pc/asset_catalog_test.exe',ROOT/'assets'],'catalog'))
    proof=json.loads((ROOT/'config/phase2-resource-catalog.json').read_text(encoding='utf-8'))
    if sha(ROOT/'assets/converted/catalog.idx')!=proof['catalog_sha256']:raise ValueError('Private catalog changed')
    report=dict(operation='native-Kairo-graphics-and-source-oracles',status='PASS',source_oracle_cases=2*len(rows),
        native_assertions=summary['native_assertions'],png_occurrences_loaded=summary['png_occurrences_loaded'],
        text_frames=summary['text_frames'],
        catalog_records_verified=catalog_result['records_verified'],raw_resource_views_verified=catalog_result['raw_resources'],
        raw_resource_views_different_from_decoded=catalog_result['raw_decoded_different'],game_boot=False,
        original_renderrect_exception_preserved=True,android_raster_comparison='UNKNOWN',
        sources={p:sha(ROOT/p) for p in ['tools/test_graphics.py','src/kairo/api/graphics.hpp','src/kairo/common/graphics.cpp','src/kairo/common/image_lifetime.cpp',
            'src/kairo/api/font.hpp','src/kairo/common/font.cpp','src/kairo/platform/sdl/font.hpp','src/kairo/platform/sdl/font.cpp',
            'src/kairo/common/asset_catalog.hpp','src/kairo/common/asset_catalog.cpp','src/kairo/common/sha256.hpp',
            'tests/kairo/graphics_api_test.cpp','tests/kairo/asset_catalog_test.cpp']},
        original_source_sha256=sha(original),font_original_source_sha256=sha(font_original),catalog_sha256=proof['catalog_sha256'],
        original_sources={str(p.relative_to(ROOT)).replace('\\','/'):sha(p) for p in [original,font_original]},
        oracle_artifacts={str(p.relative_to(ROOT)).replace('\\','/'):sha(p) for p in [oracle,target,old]},
        executable_sha256=sha(exe),oracle_sha256=sha(oracle),trace_sha256=hashlib.sha256(trace.encode()).hexdigest(),
        verified_source_ids=['M:kairo.unity.ui.Graphics.GetColorOfRGB(System.Int32,System.Int32,System.Int32)',
            'M:kairo.unity.ui.Graphics.GetColorOfRGB(System.Int32,System.Int32,System.Int32,System.Int32)',
            'M:kairo.unity.ui.Graphics.GetAnchorPosition(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)',
            'M:kairo.unity.ui.Graphics.GetRenderRect','M:kairo.unity.ui.Font.GetSize','M:kairo.unity.ui.Font.GetHeight',
            'M:kairo.unity.ui.Font.SetSize(System.Int32,System.Boolean)'])
    for path in [ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'src/kairo/common/semantic_runtime.cpp',*(ROOT/'src/kairo/common').glob('managed_*.hpp')]:
        report['sources'][path.relative_to(ROOT).as_posix()]=sha(path)
    (ROOT/'config/phase2-graphics-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps({k:v for k,v in report.items() if not isinstance(v,(dict,list))}))


if __name__=='__main__':main()
