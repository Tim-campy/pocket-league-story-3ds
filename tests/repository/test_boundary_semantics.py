"""Synthetic semantic coverage fixture; no game data is included."""
import importlib.util
import json
from pathlib import Path
import shutil
import subprocess
import unittest

ROOT = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location('boundary_tool', ROOT/'tools/inventory_boundary.py')
tool = importlib.util.module_from_spec(spec)
spec.loader.exec_module(tool)


class BoundarySemanticTests(unittest.TestCase):
    @unittest.skipUnless(Path(r'C:\Program Files\Microsoft Visual Studio\18\Community\MSBuild\Current\Bin\Roslyn\csc.exe').is_file(), 'local Roslyn fixture; CI content gate is cross-platform')
    def test_implicit_and_explicit_contracts_are_bound(self):
        roslyn=Path(r'C:\Program Files\Microsoft Visual Studio\18\Community\MSBuild\Current\Bin\Roslyn\csc.exe')
        folder,runtime,driver=tool.prepare_driver(roslyn)
        fixture=folder/'fixture';fixture.mkdir(exist_ok=True)
        vs=next(p for p in roslyn.parents if (p/'dotnet/net10.0/runtime').is_dir())
        framework=vs/'dotnet/net10.0/runtime/shared/Microsoft.NETCore.App/10.0.10'
        refs=[framework/(name+'.dll') for name in ['System.Private.CoreLib','System.Runtime','System.Collections']]
        library=fixture/'KairoLibrary.cs'
        library.write_text('''namespace FixtureApi {
public class Base { public Base() {} }
public class Value { public const int Flag=1; public int Field; public int Prop {get;set;}
 public static implicit operator bool(Value x) {return x!=null;} public void Run() {} }
public class Box<T> { public T Item; }
public class Sequence { public Iterator GetEnumerator() {return new Iterator();} }
public class Iterator { public bool MoveNext(){return false;} public Value Current {get{return null;}} }
}''',encoding='utf-8')
        binary=fixture/'KairoLibrary.dll'
        command=[str(roslyn),'/nologo','/noconfig','/nostdlib+','/target:library','/out:'+str(binary)]+['/r:'+str(p) for p in refs]+[str(library)]
        result=subprocess.run(command,capture_output=True)
        self.assertEqual(result.returncode,0,result.stdout.decode('utf-8',errors='replace'))
        source=fixture/'App.cs'
        source.write_text('''using FixtureApi;
public class App:Base {
 public bool Test(Value v,Box<Value> box,Sequence items) {
  v.Field=Value.Flag; v.Prop=1; v.Run();
  foreach(var value in items) {value.Run();}
  return v;
 }
}''',encoding='utf-8')
        request=fixture/'input.json';output=fixture/'output.json'
        request.write_text(json.dumps(dict(sources=[str(source)],references=[str(p) for p in refs]+[str(binary)])),encoding='utf-8')
        result=subprocess.run([str(runtime),str(driver),str(request),str(output)],capture_output=True)
        self.assertEqual(result.returncode,0,result.stderr.decode('utf-8',errors='replace'))
        data=json.loads(output.read_text(encoding='utf-8-sig'))
        self.assertEqual(data['compilation_errors'],[])
        self.assertEqual(data['unresolved_symbol_sites'],[])
        members={m['id']:m for m in data['members']}
        for expected in ['M:FixtureApi.Base.#ctor','M:FixtureApi.Value.Run','P:FixtureApi.Value.Prop',
                         'F:FixtureApi.Value.Flag','F:FixtureApi.Value.Field','M:FixtureApi.Sequence.GetEnumerator',
                         'M:FixtureApi.Iterator.MoveNext','P:FixtureApi.Iterator.Current',
                         'M:FixtureApi.Value.op_Implicit(FixtureApi.Value)~System.Boolean','T:FixtureApi.Box`1','T:FixtureApi.Value']:
            self.assertIn(expected,members)
        self.assertIn('implicit-default-base-constructor',members['M:FixtureApi.Base.#ctor']['roles'])
        self.assertTrue(all(any(c.startswith('M:App.') or c=='T:App' for c in m['callers']) for m in members.values()))
        self.assertFalse(data['literal_values_emitted'])


if __name__=='__main__':
    unittest.main()
