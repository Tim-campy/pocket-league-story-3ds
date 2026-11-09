"""Own Single parser differential; retains source/runtime outputs privately."""
import hashlib,json,os,re,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'tools/csharp_subset'))
from inventory import compiler_paths
sys.path.insert(0,str(ROOT/'tools'))
from pc_compiler import environment
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()

def main():
 folder=ROOT/'build/float-parse-probe';folder.mkdir(parents=True,exist_ok=True)
 csc,dotnet,framework=compiler_paths();source=ROOT/'tests/translator/FloatParseFixtures.cs'
 unity=Path.home()/'AppData/Local/Programs/Unity/5.3.4f1/Editor/Data/Mono';core=unity/'lib/mono/unity/mscorlib.dll'
 if hashlib.sha256(core.read_bytes()).hexdigest()!='7f16171cf5f87ca1e4c229727526d2fbc786079fc0c960f36197013ea0d986e1':raise ValueError('Exact Unity core required')
 def run(cmd,label,env=None):
  r=subprocess.run([str(p)for p in cmd],cwd=ROOT,env=env,capture_output=True,timeout=90);(folder/(label+'.stdout')).write_bytes(r.stdout);(folder/(label+'.stderr')).write_bytes(r.stderr)
  if r.returncode:raise RuntimeError(label)
  return r.stdout.decode('utf-8-sig').replace('\r\n','\n')
 oracles={}
 for name,refs,target,command,env in [('mono',[core],folder/'FloatParse-mono.exe',[unity/'bin/mono.exe'],dict(os.environ,MONO_PATH=str(core.parent),MONO_CFG_DIR=str(unity/'etc'))),('dotnet',[framework/(n+'.dll')for n in ('System.Private.CoreLib','System.Runtime','System.Console')],folder/'FloatParse.dll',[dotnet],None)]:
  args=['/nologo','/nostdlib+','/langversion:6','/target:exe','/out:'+str(target),*['/r:'+str(p)for p in refs],str(source)];rsp=folder/(name+'.rsp');rsp.write_text('\n'.join('"'+s+'"'for s in args)+'\n',encoding='utf8',newline='\n');run([csc,'/noconfig','@'+str(rsp)],name+'-compile')
  if name=='dotnet':target.with_suffix('.runtimeconfig.json').write_text(json.dumps(dict(runtimeOptions=dict(tfm='net10.0',framework=dict(name='Microsoft.NETCore.App',version='10.0.10')))),encoding='utf8')
  output=run([*command,target],name,env);oracles[name]=dict(line.split('\t')for line in output.splitlines())
 literals=re.findall(r'null|"(?:\\.|[^"\\])*"',source.read_text(encoding='utf8').split('Values={',1)[1].split('};',1)[0]);values=[]
 for token in literals:
  if token=='null':values.append('String{}');continue
  value=json.loads(token.replace(r'\0',r'\u0000'));raw=value.encode('utf-16le',errors='surrogatepass');units=[raw[i]+256*raw[i+1]for i in range(0,len(raw),2)]
  values.append('String(std::u16string{'+','.join('char16_t('+str(c)+')'for c in units)+'})')
 generated=folder/'float_values.inc';generated.write_text('std::vector<String> own_values(){return {'+','.join(values)+'};}\n',encoding='utf8',newline='\n')
 env=environment();import shutil
 compiler=Path(shutil.which('cl.exe',path=env['PATH']));native=folder/'float-parse.exe'
 sources=[ROOT/'tests/translator/float_parse_fixtures.cpp',ROOT/'src/kairo/common/semantic_runtime.cpp',ROOT/'src/kairo/common/managed_string_ops.cpp']
 run([compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/W4','/WX','/utf-8','/I'+str(folder),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(ROOT/'build/generated/mono-collation'),'/Fo'+str(folder)+'/', '/Fe'+str(native),*sources],'native-compile',env)
 actual=dict(line.split('\t')for line in run([native],'native',env).splitlines());expected=oracles['mono']
 count=2*(len(values)+65536)
 if len(expected)!=count or expected.keys()!=actual.keys()or expected.keys()!=oracles['dotnet'].keys():raise ValueError('Incomplete Single parser corpus')
 mismatches=[dict(case=k,expected=v,actual=actual[k])for k,v in expected.items()if v!=actual[k]]
 inputs=[source,*sources,Path(__file__),ROOT/'src/kairo/common/semantic_runtime.hpp',ROOT/'src/kairo/common/managed_string_ops.hpp',ROOT/'build/generated/mono-collation/mono_decimal_digit_ranges.inc']
 receipt=dict(operation='own-historical-Single-parser-source-differential',status='FAIL'if mismatches else'PASS',cases=count,passed=count-len(mismatches),mismatches=mismatches,
  cultures=['Invariant','en-US'],modern_context_differences=sum(v!=oracles['dotnet'][k]for k,v in expected.items()),modern_context_is_not_production=True,
  inputs_sha256={p.relative_to(ROOT).as_posix():sha(p)for p in inputs},native_executable=dict(path=native.relative_to(ROOT).as_posix(),sha256=sha(native)),
  historical_core_sha256=sha(core),historical_runtime_sha256=sha(unity/'bin/mono.exe'),compiler_sha256=sha(compiler),own_values_include_sha256=sha(generated),
  limits=['Native parser is own code, not a newly vendored Mono component.','Only historical Mono with invariant/en-US number symbols is admitted; other number formats fail explicitly.','The SDK Mono oracle is not an Android execution.','The full BMP whitespace sweep and listed edges do not prove every decimal rounding case.'],game_boot=False,original_game_binary_loaded=False)
 (ROOT/'config/phase2-float-parse-tests.json').write_text(json.dumps(receipt,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps({k:receipt[k]for k in ['status','cases','passed','modern_context_differences']}))
 if mismatches:print(json.dumps(mismatches[:10]));raise SystemExit(1)
if __name__=='__main__':main()
