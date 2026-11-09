"""Original image metadata bodies, native receiver helpers and field aliases.

Every input byte is synthetic. The independent managed oracle compiles original
source fragments with own collaborators, never an original game binary.
"""
import hashlib,json,subprocess,sys
from pathlib import Path
from translate import ROOT,prepare,run
sys.path.insert(0,str(ROOT/'tools'))
from test_input import span

def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()

def main():
 folder,runtime,tool,producer=prepare();output=folder/'image-metadata-generated';output.mkdir(parents=True,exist_ok=True)
 original=ROOT/'reference/src/KairoLibrary/kairo/unity/ui/Image.cs';text=original.read_text(encoding='utf-8-sig')
 signatures=['private static string GetFileFormat(byte[] data)','public static int[] GetAreaSize(byte[] data)',
  'private static int[] GetPaletteInfo(byte[] data)','public static byte[] OverwritePaletteData(byte[] image, byte[] palette)',
  'public static byte[] OverwritePaletteData(byte[] image, byte[] palette, int imageOffset, int paletteOffset, int colors)',
  'public void SetName(string name)','public string GetName()']
 math=ROOT/'reference/src/KairoLibrary/kairo/unity/math/KairoMath.cs'
 facade='using System;namespace kairo.unity.ui {public class Image {string name_;static int[] getAreaSize_result=new int[2],getPaletteInfo_result=new int[2];\n'+'\n'.join(span(text,s)for s in signatures)+'\n}}\n'
 facade+='class Config{public static bool DEBUG;}class Log{public static void Info(string message){}}class JSystem{public static void Arraycopy(byte[] source,int from,byte[] target,int to,int count){Array.Copy(source,from,target,to,count);}}class KairoMath{'+span(math.read_text(encoding='utf-8-sig'),'public static int Pow(int x, int y)')+'}\n'
 fixture=ROOT/'tests/translator/ImageMetadataFixtures.cs';source=output/'OriginalImageMetadata.cs';source.write_text('using kairo.unity.ui;\n'+facade+fixture.read_text().replace('using kairo.unity.ui;','').replace('using System;',''),encoding='utf8',newline='\n')
 helpers=['M:kairo.unity.ui.Image.'+s for s in ['GetFileFormat(System.Byte[])','GetAreaSize(System.Byte[])','GetPaletteInfo(System.Byte[])','OverwritePaletteData(System.Byte[],System.Byte[])','OverwritePaletteData(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32)','SetName(System.String)','GetName']]
 roots=['M:ImageMetadataProbe.'+n+'(System.Int32)'for n in ['Header','SharedHeaderResult','Palette','LocalPalette','NullPalette','NativeFieldAlias']]
 unity=Path.home()/'AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity'
 header=ROOT/'tests/translator/image_metadata_native.hpp'
 request=dict(assembly='ImageMetadataFixtures',sources=[str(source)],references=[str(unity/(n+'.dll'))for n in ['mscorlib','System','System.Core']],selected=roots,output=str(output),source_native_helpers=helpers,
  external_types={'T:kairo.unity.ui.Image':'synthetic_image_metadata::Image'},external_methods={'M:kairo.unity.ui.Image.#ctor':'pls::cs::make_ref<synthetic_image_metadata::Image>','M:JSystem.Arraycopy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)':'pls::cs::Array<std::uint8_t>::copy'},
  external_fields={'F:kairo.unity.ui.Image.name_':'display_name','F:kairo.unity.ui.Image.getAreaSize_result':'synthetic_image_metadata::Image::area','F:kairo.unity.ui.Image.getPaletteInfo_result':'synthetic_image_metadata::Image::palette'},native_includes=[header.as_posix()])
 req=folder/'image-metadata-input.json';report_file=folder/'image-metadata-report.json';req.write_text(json.dumps(request)+'\n',encoding='utf8',newline='\n');run([runtime,tool,req,report_file],folder/'image-metadata-translator.log')
 report=json.loads(report_file.read_text());methods={m['id']:m for m in report['emitted_methods']}
 missing=set(roots)-methods.keys()
 if missing:raise ValueError('Image metadata roots rejected: '+str({k:report['rejected_methods'].get(k)for k in missing}))
 state=''.join('public static '+f['type']+' '+f['cpp_name']+'{get{return '+f['id'][2:]+';}set{'+f['id'][2:]+'=value;}}'for f in report['static_fields'])
 oracle=output/'OwnImageMetadataOracle.cs';oracle.write_text(source.read_text(encoding='utf8')+'\npublic static class SourceOracle{'+state+''.join('public static '+methods[k]['return_type']+' '+methods[k]['cpp_name']+'(int seed){return ImageMetadataProbe.'+methods[k]['name']+'(seed);}'for k in roots)+'}\n',encoding='utf8',newline='\n')
 scenario=dict(report,emitted_methods=[methods[k]for k in roots],generated_classes=[]);scenarios=folder/'image-metadata-scenarios.json';scenarios.write_text(json.dumps(scenario)+'\n',encoding='utf8',newline='\n')
 target=ROOT/'config/phase2-image-metadata-lowering-fixtures.json'
 subprocess.run([sys.executable,ROOT/'translator/test_portable.py','--report',scenarios,'--generated',output,'--oracle',oracle,'--folder',folder/'image-metadata-differential','--result',target],check=True,cwd=ROOT)
 result=json.loads(target.read_text());result.update(operation='original-image-metadata-source-native-helper-differential',producer=producer,runner_sha256=sha(Path(__file__)),fixture_sha256=sha(fixture),native_header_sha256=sha(header),source_manifest=[dict(path=p.relative_to(ROOT/'reference').as_posix(),sha256=sha(p))for p in [original,math]],original_methods=signatures,verified_boundary_ids=[],game_assets_used=False,limitations=['Metadata parsing and native helper field aliases only; no production image decoder, atlas, original engine or game boot is exercised.'])
 target.write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n')

if __name__=='__main__':main()
