"""Prove actual generated Canvas source-identity adapter with own collaborators."""
import hashlib
import json
from pathlib import Path
import subprocess
import sys
from translate import ROOT,prepare,run


def main():
    folder,runtime,tool,producer=prepare();output=folder/'surface-adapter-generated';output.mkdir(parents=True,exist_ok=True)
    source=ROOT/'tests/translator/SurfaceAdapterFixtures.cs'
    unity=Path('C:/Users/l_abn/AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono/lib/mono/unity')
    text=source.read_text();facade=text[text.index('namespace kairo.unity.ui {'):text.index('namespace kairo.unity.surface {')]
    # The managed oracle needs its own platform facade, not the original DLL.
    motion='namespace kairo.unity.surface {public class MotionEvent{}}'
    native_header=ROOT/'tests/translator/surface_adapter_native.hpp'
    request=dict(assembly='SurfaceAdapterFixtures',sources=[str(source)],references=[str(unity/(name+'.dll'))for name in ['mscorlib','System','System.Core']],selected=['M:AdapterProbe.'+name for name in ['Identity','LateList','Clear','TracedReference']],output=str(output),
        external_types={'T:kairo.unity.ui.Canvas':'synthetic_surface::Canvas','T:kairo.unity.ui.Graphics':'pls::kairo::Graphics','T:kairo.unity.ui.KeyEvent':'pls::kairo::KeyEvent','T:kairo.unity.surface.MotionEvent':'pls::kairo::MotionEvent'},
        external_methods={'M:kairo.unity.ui.Canvas.#ctor':'native','M:kairo.unity.ui.Canvas.GetSurfaceManager':'canvas-source:get','M:kairo.unity.ui.Canvas.SetSurfaceManager(kairo.unity.surface.SurfaceManagerBase)':'canvas-source:set','M:kairo.unity.ui.Canvas.OnTouchEvent(kairo.unity.surface.MotionEvent)':'member:OnTouchEvent'},native_includes=[native_header.as_posix()],oracle_support=facade+motion)
    request_file=folder/'surface-adapter-input.json';report_file=folder/'surface-adapter-report.json'
    request_file.write_text(json.dumps(request)+'\n',encoding='utf8',newline='\n')
    run([runtime,tool,request_file,report_file],folder/'surface-adapter-translator.log')
    report=json.loads(report_file.read_text())
    rejected={key:value for key,value in report['rejected_methods'].items()if key.startswith('M:AdapterProbe.')}
    if rejected:raise ValueError('Unexpected unsupported source adapter fixture: '+str(rejected))
    # Execute the four scenario roots. Helpers and their real generic layouts
    # stay in the complete generated TU and are exercised through those roots;
    # they are not claimed as separately exercised method entries.
    scenario=dict(report,emitted_methods=[method for method in report['emitted_methods']if method['id'] in request['selected']],generated_classes=[])
    scenario_file=folder/'surface-adapter-scenarios.json'
    scenario_file.write_text(json.dumps(scenario)+'\n',encoding='utf8',newline='\n')
    target=ROOT/'config/phase2-surface-adapter-lowering-fixtures.json'
    subprocess.run([sys.executable,ROOT/'translator/test_portable.py','--report',scenario_file,'--generated',output,'--oracle',output/'source_oracle.cs','--folder',folder/'surface-adapter-differential','--result',target],check=True,cwd=ROOT)
    result=json.loads(target.read_text());result.update(operation='generated-surface-source-identity-adapter',producer=producer,runner_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),fixture_sha256=hashlib.sha256(source.read_bytes()).hexdigest(),limitations=['Own source/platform collaborators prove this generated bridge. This does not promote a game body as executed. Native original-fragment adapter routes are independently tested.'])
    target.write_text(json.dumps(result,indent=2)+'\n',encoding='utf8',newline='\n')


if __name__=='__main__':main()
