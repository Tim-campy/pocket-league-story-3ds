"""Compare arc emission against complete original C# methods, without Unity.

This test proves only the geometry/command trace under identity point mapping
and one shape render pass. It does not run the game or validate rasterization.
"""
import hashlib
import json
import os
from pathlib import Path
import shutil
import struct
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths
from pc_compiler import environment


def sha(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def span(text,signature):
    begin=text.index(signature);end=text.index('{',begin)+1;depth=1
    while depth:
        depth+=(text[end]=='{')-(text[end]=='}');end+=1
    return text[begin:end]


def cases():
    # Own synthetic values, never derived from an APK asset.
    shapes=[
        (10,20,20,12,0,90), (3,4,33,24,-370,721),
        (3,4,24,33,370,-721), (0,0,20,20,-10,-91),
        (0,0,20,20,359,0), (0,0,20,12,1,1),
        (1,2,9,9,7,8), (1,2,20,20,8,9),
        (0,0,0,12,9,89), (0,0,12,0,0,-90),
        (0,0,0,0,-0.0,360), (-2,-3,1,2,0,359),
        (2,3,20,20,0,360), (2,3,9,9,0,-360),
        (-3,2,33,24,370,-1), (0,0,24,13,359,7),
        (1,2,-2,12,-1,90), (1,2,12,-2,-359,-90),
    ]
    result=[]
    for gui in (0,1):
        for index,shape in enumerate(shapes):
            for width in (0,0.5,1,20):
                result.append(dict(id=f'draw-g{gui}-b{index}-w{width}',kind='draw',gui=gui,
                                   values=[*shape,width]))
            result.append(dict(id=f'fill-g{gui}-b{index}',kind='fill',gui=gui,values=[*shape,1]))
    return result


COLLABORATORS=r'''
using System;using System.IO;using System.Globalization;
using UnityEngine;using kairo.unity.graphics;using kairo.common.cfg;
public static class ArcTrace {
 public static string Bits(float v){return unchecked((uint)BitConverter.ToInt32(BitConverter.GetBytes(v),0)).ToString("x8",CultureInfo.InvariantCulture);}
 public static float Value(string v){return BitConverter.ToSingle(BitConverter.GetBytes(unchecked((int)uint.Parse(v,NumberStyles.HexNumber,CultureInfo.InvariantCulture))),0);}
 public static void Map(float x,float y){Console.WriteLine("map:"+Bits(x)+","+Bits(y));}
 public static void Vertex(float x,float y,float z){Console.WriteLine("v:"+Bits(x)+","+Bits(y)+","+Bits(z));}
 public static void Indices(int[] values,int n){Console.Write("i:");for(int i=0;i<n;i++){if(i!=0)Console.Write(",");Console.Write(values[i].ToString(CultureInfo.InvariantCulture));}Console.WriteLine();}
}
namespace UnityEngine {
 public struct Color {public float r,g,b,a;}
 public static class GL {
  public static void Begin(int mode){Console.WriteLine("begin:"+mode.ToString(CultureInfo.InvariantCulture));}
  public static void Color(Color color){}
  public static void Vertex3(float x,float y,float z){ArcTrace.Vertex(x,y,z);}
  public static void End(){Console.WriteLine("end");}
 }
}
namespace kairo.common.cfg {public static class Config {public static bool COUNT_ENABLE=false;public static int drawShapeCount_;}}
namespace kairo.unity.graphics {
 public class Material {public void SetPass(int n){Console.WriteLine("pass:"+n.ToString(CultureInfo.InvariantCulture));}}
 public class MeshBuilder {
  public void ReadyAddition(){Console.WriteLine("ready");}
  public void AddVertex(float x,float y,float z,Color color){ArcTrace.Vertex(x,y,z);}
  public void AddIndicies(int[] values,int n){ArcTrace.Indices(values,n);}
 }
 public class MeshManager {public MeshBuilder GetMeshBuilder(Material material){return new MeshBuilder();}}
 public class MaterialManager {
  public Material GetMaterial(Material m,object image){return new Material();}
  public Material GetMaterial(kairo.unity.ui.Graphics g,object image,float alpha){return new Material();}
 }
}
namespace kairo.unity.ui {
 public class OwnNormal {public Color textColor=new Color{r=1,g=1,b=1,a=1};}
 public class OwnStyle {public OwnNormal normal=new OwnNormal();}
 public partial class Graphics {
  readonly bool gui_;OwnStyle guiStyle_=new OwnStyle();MaterialManager mateMan_=new MaterialManager();
  MeshManager[] meshManList_=new MeshManager[]{new MeshManager()};int meshId_=0;
  static float[][] drawArcPoints=new float[][]{new float[2],new float[2],new float[2],new float[2]};
  static float[][] fillArcPoints_=new float[][]{new float[2],new float[2],new float[2]};
  static int[] addIndiciesBuffer_=new int[6];
  public Graphics(bool gui){gui_=gui;}
  bool BeginRenderMatrix(ref float x,ref float y){return false;}
  void EndRenderMatrix(){}
  void UpdateGLClip(){}
  bool IsRenderGUIMode(){return gui_;}
  float[] GetTransPointGL(float x,float y,float[] output){ArcTrace.Map(x,y);output[0]=x;output[1]=y;return output;}
  class RenderPass {
   readonly Color value;public Material Material=null;
   public RenderPass(Color color){value=color;}
   public Color[] BeginShape(){return new Color[]{value};}
   public void End(){}
  }
  RenderPass[] GetRenderPass(Color color){return new RenderPass[]{new RenderPass(color)};}
  ORIGINAL_GRAPHICS_METHODS
 }
}
namespace java.lang {public static class JMath {ORIGINAL_RADIANS}}
namespace kairo.unity.m3d4.util3d {public static class FastMath {ORIGINAL_TRIG}}
public class ArcGeometryOracle {
 public static void Main(string[] args){
  if(args[0]=="--precision"){ArcPrecisionProbe.Run(args[1]);return;}
  foreach(var line in File.ReadAllLines(args[0])){
   var f=line.Split('\t');if(f.Length!=10)throw new ArgumentException("Own geometry case shape");
   Console.WriteLine("case:"+f[0]);var g=new kairo.unity.ui.Graphics(f[2]=="1");
   float x=ArcTrace.Value(f[3]),y=ArcTrace.Value(f[4]),w=ArcTrace.Value(f[5]),h=ArcTrace.Value(f[6]),start=ArcTrace.Value(f[7]),sweep=ArcTrace.Value(f[8]),width=ArcTrace.Value(f[9]);
   if(f[1]=="draw")g.DrawArc(x,y,w,h,start,sweep,width);
   else if(f[1]=="fill")g.FillArc(x,y,w,h,start,sweep);
   else throw new ArgumentException("Own geometry case kind");
   Console.WriteLine("done");
  }
 }
}
public static class ArcPrecisionProbe {
 static float Single(float value){return BitConverter.ToSingle(BitConverter.GetBytes(value),0);}
 static float Expression(float center,float value,float radius){return center+value*radius;}
 static float RoundedProduct(float center,float value,float radius){return center+Single(value*radius);}
 static float StepAt(int count,bool single){
  float step=360f/26f;if(single)step=Single(step);float angle=0f;
  for(int i=0;i<count;i++){float next=angle+step;if(i==0)next=(float)(int)(next/step)*step+step;angle=single?Single(next):next;}
  return angle;
 }
 public static void Run(string path){
  Console.WriteLine("platform-pointer-bytes="+IntPtr.Size);
  foreach(var line in File.ReadAllLines(path)){
   var f=line.Split('\t');float angle=ArcTrace.Value(f[1]),center=ArcTrace.Value(f[2]),radius=ArcTrace.Value(f[3]),value=ArcTrace.Value(f[4]);
   Console.WriteLine(f[0]+"-cos="+ArcTrace.Bits(kairo.unity.m3d4.util3d.FastMath.Cos(angle)));
   Console.WriteLine(f[0]+"-sin="+ArcTrace.Bits(kairo.unity.m3d4.util3d.FastMath.Sin(angle)));
   Console.WriteLine(f[0]+"-radians="+unchecked((ulong)BitConverter.DoubleToInt64Bits(java.lang.JMath.ToRadians(angle))).ToString("x16",CultureInfo.InvariantCulture));
   Console.WriteLine(f[0]+"-expr="+ArcTrace.Bits(Expression(center,value,radius)));
   Console.WriteLine(f[0]+"-single-product="+ArcTrace.Bits(RoundedProduct(center,value,radius)));
   Console.WriteLine(f[0]+"-diagnostic-wide="+ArcTrace.Bits((float)((double)center+(double)value*(double)radius)));
  }
  for(int count=1;count<=8;count++){
   Console.WriteLine("step-"+count+"-plain="+ArcTrace.Bits(StepAt(count,false)));
   Console.WriteLine("step-"+count+"-single="+ArcTrace.Bits(StepAt(count,true)));
  }
 }
}
'''


def parse_trace(text):
    result={};current=None
    for line in text.splitlines():
        if line.startswith('case:'):
            current=line[5:]
            if current in result:raise ValueError('Duplicate geometry case')
            result[current]=[]
        elif line=='done':
            if current is None:raise ValueError('Geometry case ended without a beginning')
            current=None
        else:
            if current is None:raise ValueError('Geometry command outside a case')
            result[current].append(line)
    if current is not None:raise ValueError('Truncated geometry case')
    return result


def main():
    folder=ROOT/'build/arc-geometry-tests';folder.mkdir(parents=True,exist_ok=True)
    original=ROOT/'reference/src/KairoLibrary'
    graphics=original/'kairo/unity/ui/Graphics.cs'
    fastmath=original/'kairo/unity/m3d4/util3d/FastMath.cs'
    jmath=original/'java/lang/JMath.cs'
    signatures=['public void DrawArc(float x, float y, float width, float height, float startAngle, float arcAngle, float lineWidth = 1f)',
                'public void FillArc(float x, float y, float width, float height, float startAngle, float arcAngle)']
    gt=graphics.read_text(encoding='utf-8-sig')
    fragments=[span(gt,s) for s in signatures]
    ft=fastmath.read_text(encoding='utf-8-sig');jt=jmath.read_text(encoding='utf-8-sig')
    trig=[span(ft,s) for s in ['public static float Sin(float a)','public static float Cos(float a)']]
    radians=span(jt,'public static double ToRadians(double angdeg)')
    source=COLLABORATORS.replace('ORIGINAL_GRAPHICS_METHODS','\n'.join(fragments))
    source=source.replace('ORIGINAL_TRIG','\n'.join(trig)).replace('ORIGINAL_RADIANS',radians)
    # Original Graphics uses this namespace-level import for its FastMath calls.
    source='using kairo.unity.m3d4.util3d;\nusing java.lang;\n'+source
    generated=folder/'OriginalArcGeometry.cs';generated.write_text(source,encoding='utf-8',newline='\n')
    own_cases=cases();case_file=folder/'cases.tsv'
    def bits(v):return struct.pack('<f',float(v))[::-1].hex()
    case_file.write_text(''.join('\t'.join([r['id'],r['kind'],str(r['gui']),*[bits(v) for v in r['values']]])+'\n' for r in own_cases),encoding='utf-8',newline='\n')
    if len(own_cases)!=180 or len({r['id'] for r in own_cases})!=180:
        raise ValueError('Incomplete own arc geometry corpus')
    precision_file=folder/'precision.tsv'
    angles=[27.692308,41.53846,55.384613,90,180,359,0,-0.0]
    centers=[20,26,0,-3];radii=[9.5,6,-14,0.0001]
    precision_rows=[]
    for i in range(32):
        v=struct.unpack('<f',struct.pack('<I',0x3f000001+i*0x100003))[0]
        precision_rows.append('\t'.join([f'p{i}',bits(angles[i%8]),bits(centers[i%4]),bits(radii[i%4]),bits(v)]))
    precision_file.write_text('\n'.join(precision_rows)+'\n',encoding='utf-8',newline='\n')
    inputs=[Path(__file__),ROOT/'src/kairo/common/arc_geometry.hpp',ROOT/'tests/kairo/arc_geometry_fixtures.cpp']
    snapshot={p.relative_to(ROOT).as_posix():sha(p) for p in inputs}
    sources={p.relative_to(ROOT/'reference').as_posix():sha(p) for p in [graphics,fastmath,jmath]}
    def run(command,name,env=None):
        result=subprocess.run(list(map(str,command)),cwd=ROOT,env=env,capture_output=True,timeout=120)
        (folder/(name+'.stdout')).write_bytes(result.stdout);(folder/(name+'.stderr')).write_bytes(result.stderr)
        if result.returncode:raise RuntimeError('See build/arc-geometry-tests/'+name+'.stderr/.stdout')
        return result.stdout.decode('utf-8-sig')
    csc,dotnet,framework=compiler_paths()
    modern=folder/'ArcGeometryOracle.dll'
    refs=[framework/(n+'.dll') for n in ['System.Private.CoreLib','System.Runtime','System.Console','System.IO.FileSystem','System.Runtime.Extensions']]
    options=['/nologo','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(modern)]
    options+=['/r:'+str(p) for p in refs]+[str(generated)]
    response=folder/'modern.rsp';response.write_text('\n'.join('"'+a+'"' for a in options)+'\n',encoding='utf-8',newline='\n')
    run([csc,'/noconfig','@'+str(response)],'modern-compile')
    modern.with_suffix('.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version=framework.name))))+'\n',encoding='utf-8',newline='\n')
    unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')))/'Editor/Data/Mono'
    core=unity/'lib/mono/unity/mscorlib.dll';mono=unity/'bin/mono.exe'
    if sha(core)!='7f16171cf5f87ca1e4c229727526d2fbc786079fc0c960f36197013ea0d986e1':
        raise ValueError('APK-identical historical SDK core required')
    historical=folder/'ArcGeometryOracle-mono.exe'
    options=['/nologo','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(historical),'/r:'+str(core),str(generated)]
    response=folder/'mono.rsp';response.write_text('\n'.join('"'+a+'"' for a in options)+'\n',encoding='utf-8',newline='\n')
    run([csc,'/noconfig','@'+str(response)],'mono-compile')
    env=environment();compiler=shutil.which('cl.exe',path=env['PATH']);native=folder/'arc-geometry-fixtures.exe'
    options=['/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/utf-8','/O2',
             '/Fe:'+str(native),'/Fo:'+str(folder)+'/',ROOT/'tests/kairo/arc_geometry_fixtures.cpp']
    run([compiler,*options],'native-compile',env)
    actual=parse_trace(run([native,case_file],'native',env));rows=[]
    if actual.keys()!={r['id'] for r in own_cases}:raise ValueError('Native case identity coverage differs')
    oracle_hashes={}
    monoenv=dict(os.environ,MONO_PATH=str(core.parent),MONO_CFG_DIR=str(unity/'etc'))
    for profile,command,oracle_env in [('UnityMono265',[mono,historical,case_file],monoenv),('DotNet',[dotnet,modern,case_file],None)]:
        expected=parse_trace(run(command,profile+'-oracle',oracle_env))
        if expected.keys()!=actual.keys():raise ValueError('Original case identity coverage differs')
        oracle_hashes[profile]=sha(folder/(profile+'-oracle.stdout'))
        for identifier,value in expected.items():
            candidate=actual[identifier];passed=value==candidate
            structure=(len(value)==len(candidate) and all(
                a==b or a.startswith(('map:','v:')) and a.split(':')[0]==b.split(':')[0]
                for a,b in zip(value,candidate)))
            first=next((i for i,(a,b) in enumerate(zip(value,candidate)) if a!=b),min(len(value),len(candidate))) if not passed else None
            rows.append(dict(profile=profile,case=identifier,passed=passed,structural_passed=structure,expected_commands=len(value),actual_commands=len(candidate),
                first_mismatch=first,expected_context=value[max(0,first-1):first+2] if first is not None else [],
                actual_context=candidate[max(0,first-1):first+2] if first is not None else []))
    def probe(command,name,probe_env):
        text=run(command,name,probe_env)
        return dict(line.split('=',1) for line in text.splitlines())
    native_precision=probe([native,'--precision',precision_file],'native-precision',env)
    precision=dict(native=native_precision)
    for profile,command,probe_env in [('UnityMono265',[mono,historical,'--precision',precision_file],monoenv),
                                      ('DotNet',[dotnet,modern,'--precision',precision_file],None)]:
        values=probe(command,profile+'-precision',probe_env)
        if values.keys()!=native_precision.keys():raise ValueError('Precision diagnostic key coverage differs')
        groups={}
        for suffix in ['-cos','-sin','-radians','-expr','-single-product','-diagnostic-wide','-plain','-single']:
            keys=[k for k in values if k.endswith(suffix)]
            mismatches=[k for k in keys if values[k]!=native_precision[k]]
            groups[suffix]=dict(cases=len(keys),passed=len(keys)-len(mismatches),mismatches=len(mismatches),
                witnesses=[dict(case=k,oracle=values[k],native=native_precision[k])for k in mismatches[:5]])
        precision[profile]=dict(values=values,comparison_to_native=groups,
            stdout_sha256=sha(folder/(profile+'-precision.stdout')))
    if any(sha(ROOT/p)!=h for p,h in snapshot.items()):raise ValueError('Arc test producer changed during compile/run')
    if any(sha(ROOT/'reference'/p)!=h for p,h in sources.items()):raise ValueError('Original source changed during compile/run')
    passed=sum(r['passed'] for r in rows)
    report=dict(operation='original-complete-arc-methods-geometry-only',status='PASS' if passed==len(rows) else 'FAIL',
        fixture_cases=len(rows),passed=passed,own_parameter_cases=len(own_cases),cases=rows,
        structural_passed=sum(r['structural_passed']for r in rows),
        profile_results={p:dict(cases=sum(r['profile']==p for r in rows),passed=sum(r['passed']for r in rows if r['profile']==p),
            structural_passed=sum(r['structural_passed']for r in rows if r['profile']==p))for p in ['UnityMono265','DotNet']},
        precision_probe=precision,precision_manifest_sha256=sha(precision_file),
        original_method_signatures=signatures,original_fragments_sha256=[hashlib.sha256(s.encode()).hexdigest() for s in fragments],
        source_manifest=[dict(path=p,sha256=h) for p,h in sources.items()],inputs=snapshot,
        case_manifest_sha256=sha(case_file),generated_oracle_sha256=sha(generated),oracle_stdout_sha256=oracle_hashes,
        native_compiler_sha256=sha(compiler),native_options=list(map(str,options)),
        native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),
        native_stdout_sha256=sha(folder/'native.stdout'),historical_core_sha256=sha(core),
        historical_oracle_executable_sha256=sha(historical),modern_oracle_executable_sha256=sha(modern),
        verified_boundary_ids=[],game_boot=False,game_assets_used=False,original_binaries_executed=False,
        limitations=['Geometry and ordering only; identity GetTransPointGL collaborator deliberately excludes transforms, GL Y conversion and clip rasterization.',
            'One synthetic shape render pass/color; material shaders, alpha/blend pixels and Config counters are not qualified.',
            'Full original DrawArc/FillArc and FastMath.Sin/Cos/JMath.ToRadians bodies are compiled; no original Unity/game assembly executes.',
            'GUI/offscreen, zero and oversized stroke, negative and normalized angles, zero dimensions and first-step alignment are covered.',
            'Non-progressing or million-plus segment domains are explicitly refused by the independent kernel and are outside this source-equivalence corpus.',
            'Precision probes are diagnostics only: the wider expression is never substituted into the binary32 production-contract geometry.',
            'No raster or Android equivalence claim; no translation or boundary state is promoted.'])
    (ROOT/'config/phase2-arc-geometry-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps(dict(status=report['status'],fixture_cases=len(rows),passed=passed,own_parameter_cases=len(own_cases))))
    return 0 if passed==len(rows) else 1


if __name__=='__main__':sys.exit(main())
