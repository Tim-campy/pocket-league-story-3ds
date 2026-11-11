"""Differential unchanged original image use/expiry/eviction state bodies.

Own texture decoders/catalog and counters isolate lifetime from Unity. No game
image is needed or distributed, and atlas/OOM/native decoder behavior is not
claimed by this fixture.
"""
import hashlib
import json
import os
from pathlib import Path
import struct
import sys
from test_input import ROOT,sha,run,span,compile_modern
from pc_compiler import VS,environment
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths

METHODS=['public Image(Texture image)','public Image(byte[] src, Format format = Format.Default, Filter filterMode = Filter.Default)',
'public Image(string file, Format format = Format.Default, Filter filterMode = Filter.Default)',
'public static Image CreateImage(int width, int height, Format format = Format.RGB24, Filter filterMode = Filter.Default)',
'public void Use()','public void Unuse()','public void Dispose()','internal void Release()',
'public void SetExpiration(bool yes, int validateFrames = -1)','public bool IsExpiration()',
'public static void UnuseExpirationImages()','public static void SetSourceImageMaxCount(int max)',
'public static void SetSourceImageMaxPixels(int max)','public static void SetSourceImageValidateFrames(int frames)',
'public int GetWidth()','public int GetHeight()']


def synthetic_catalog(folder):
 (folder/'converted').mkdir(parents=True,exist_ok=True)
 data=b'PLSASV1\0'+b'd557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'+struct.pack('<I',3)
 def field(s):b=s.encode();return struct.pack('<I',len(b))+b
 for i,(w,h) in enumerate([(3,2),(4,1),(1,1)]):
  raw=bytes([w,h,41]);rgba=bytes([41,0,0,255])*(w*h);name='own-'+str(i)+'.rgba8';(folder/name).write_bytes(rgba)
  data+=bytes([3])+field(hashlib.sha256(raw).hexdigest())+field(name)+struct.pack('<QII',len(rgba),w,h)+hashlib.sha256(rgba).digest()
 (folder/'converted/catalog.idx').write_bytes(data)


def main():
 folder=ROOT/'build/image-lifetime-tests';folder.mkdir(parents=True,exist_ok=True);synthetic=folder/'synthetic';synthetic_catalog(synthetic)
 source=ROOT/'tests/kairo/ImageLifetimeOracle.cs';original=ROOT/'reference/src/KairoLibrary/kairo/unity/ui/Image.cs';text=original.read_text(encoding='utf-8-sig')
 prefix='''using System;using System.Collections.Generic;using kairo.common.cfg;using kairo.unity.graphics;using kairo.unity.io;using kairo.unity.util;using UnityEngine;
namespace kairo.unity.ui {public class Image {
 public enum Format{Default=-1,RGB24=3,ARGB32=5}public enum Filter{Default=-1,Point,Bilinear,Trilinear}
 static ImageAtlasManager atlasMan_;internal Texture image_;protected string name_="";protected int width_,height_;
 internal Format requestFormat_=Format.Default;internal Filter requestFilter_;internal byte[] src_;internal string file_,paletteFile_;internal int rsId_=-1,rcId_=-1,imageAtlasId_=-1;
 internal bool lockExpiration_;protected static FastVector sourceImageList_=new FastVector();protected static int sourceImagePixels_,sourceImageMaxCount_,sourceImageMaxPixels_,sourceImageValidateFrames_;
 protected int localSourceImageValidateFrames_=-1;internal int checkCount_;protected int alphaType_=-1;protected bool isDisposed_,isCreateImage_;object images_,optimize_;
 class Component{public int hasCount;public Component option;}class TouchTask{public Component Component;}
 List<TouchTask> touchTasks_=new List<TouchTask>();public static Filter DEFAULT_FILTER=Filter.Point;
 public bool IsDisposed{get{return isDisposed_;}}public bool Resident{get{return image_!=null;}}public static int CacheCount{get{return sourceImageList_.Size();}}public static int CachePixels{get{return sourceImagePixels_;}}
 public void Stamp(){checkCount_=Config.checkCount_;}
 static int[] GetAreaSize(byte[] data){return new int[]{data[0],data[1]};}
 static Texture DecodeByteArray(byte[] data){return new Texture(data[0],data[1]);}
 static int GetAlphaType(byte[] data){return -1;}void SetAlpha(int n){}
 static void CopeOutOfMemory(int n,OutOfMemoryException error){throw error;}
 static void OverwritePaletteData(byte[] a,byte[] b){throw new NotSupportedException();}
'''
 generated=folder/'OriginalImageLifetime.cs';generated.write_text(prefix+'\n'.join(span(text,s) for s in METHODS)+'\n}}\n',encoding='utf-8',newline='\n');sources=[source,generated]
 csc,dotnet,framework=compiler_paths();oracle=folder/'ImageLifetimeOracle.dll';compile_modern(sources,oracle,folder,'dotnet',csc,framework)
 unity=Path(os.environ.get('UNITY_ROOT',str(Path.home()/'AppData/Local/Programs/Unity/5.3.4f1')));refs=unity/'Editor/Data/Mono/lib/mono/2.0';mono=unity/'Editor/Data/Mono/bin/mono.exe';old=folder/'ImageLifetimeOracle-mono.exe'
 env=dict(os.environ,MONO_PATH=str(refs),MONO_CFG_DIR=str(unity/'Editor/Data/Mono/etc'))
 args=['/nologo','/nostdlib+','/target:exe','/optimize+','/langversion:6','/out:'+str(old)]+['/r:'+str(refs/(p+'.dll')) for p in ['mscorlib','System','System.Core']]+[str(p) for p in sources]
 rsp=folder/'mono.rsp';rsp.write_text('\n'.join('"'+v+'"' for v in args)+'\n',encoding='utf-8',newline='\n');run([csc,'/noconfig','@'+str(rsp)],folder,'mono-compile')
 units=[ROOT/p for p in ['tests/kairo/image_lifetime_fixtures.cpp','src/kairo/common/image_lifetime.cpp','src/kairo/common/graphics.cpp','src/kairo/common/mesh.cpp','src/kairo/common/font.cpp','src/kairo/common/asset_catalog.cpp','src/kairo/common/semantic_runtime.cpp','src/kairo/platform/sdl/font.cpp']]
 sdk=ROOT/'build/deps/native-media';sdl=ROOT/'build/deps/SDL2-2.32.10';cl=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe';native=folder/'image-lifetime-fixtures.exe';objects=[]
 for i,unit in enumerate(units):
  obj=folder/(str(i)+'-'+unit.stem+'.obj');objects.append(obj)
  run([cl,'/nologo','/c','/std:c++17','/EHsc','/MD','/fp:strict','/permissive-','/W4','/WX','/O2','/utf-8',
   '/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(sdk/'include'),'/I'+str(sdk/'include/freetype2'),'/Fo:'+str(obj),unit],folder,'cpp-compile-'+str(i),environment())
 run([cl,'/nologo','/Fe:'+str(native),*objects,sdk/'lib/freetype.lib'],folder,'cpp-link',environment())
 actual=run([native,synthetic],folder,'native-run',environment()).splitlines();cases=[]
 for profile,command,env_ in [('dotnet',[dotnet,oracle],None),('mono',[mono,old],env)]:
  expected=run(command,folder,profile+'-run',env_).splitlines()
  if len(expected)!=len(actual):raise ValueError('Image lifetime trace lengths differ')
  cases += [dict(profile=profile,case=x.split('=',1)[0],expected=x,actual=y,passed=x==y) for x,y in zip(expected,actual)]
 passed=all(c['passed'] for c in cases)
 policy=json.loads(run([native,synthetic,'policy'],folder,'native-policy',environment()))
 inputs=units+[source,ROOT/'tools/test_image_lifetime.py',ROOT/'tools/test_input.py']
 inputs += [ROOT/'tests/translator/gc_test_support.hpp']
 inputs += [ROOT/'src/kairo/api'/p for p in ['graphics.hpp','font.hpp','application.hpp']]+[ROOT/'src/kairo/common'/p for p in ['semantic_runtime.hpp','asset_catalog.hpp','sha256.hpp']]+[ROOT/'src/kairo/platform/sdl/font.hpp']
 report=dict(operation='original-source-Image-use-expiry-eviction-differential',status='PASS' if passed else 'FAIL',fixture_cases=len(cases),passed=sum(c['passed'] for c in cases),cases=cases,
 verified_boundary_ids=[],native_policy=policy,inputs={p.relative_to(ROOT).as_posix():sha(p) for p in inputs},source_manifest=[dict(path=original.relative_to(ROOT/'reference').as_posix(),sha256=sha(original))],
 original_methods=METHODS,native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),game_assets_used=False,original_binaries_executed=False,game_boot=False,
 limits=['Own texture decoder/catalog exercise original lifetime bodies, not Unity PNG decoding, atlas behavior, texture format conversion or OOM recovery.',
 'Draw stamp is the observed checkCount assignment; full Android rendering equivalence is not asserted.',
 'Game bindings must read/update generated Config counters; standalone graphics without those bindings do not report game accounting.'])
 (ROOT/'config/phase2-image-lifetime-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
 print(json.dumps(dict(status=report['status'],fixture_cases=len(cases),passed=report['passed'])))
 for c in cases:
  if not c['passed']:print(json.dumps(c))
 return 0 if passed else 1


if __name__=='__main__':sys.exit(main())
