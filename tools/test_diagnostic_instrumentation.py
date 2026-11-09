"""Own profile/capture fixtures, including independent PNG decompression."""
import binascii,hashlib,json,struct,subprocess,zlib
from pathlib import Path
from pc_compiler import CMAKE,environment
ROOT=Path(__file__).resolve().parents[1]
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def decode_png(path,width,height):
 data=path.read_bytes();assert data[:8]==b'\x89PNG\r\n\x1a\n';pos=8;compressed=b''
 while pos<len(data):
  n=struct.unpack('>I',data[pos:pos+4])[0];kind=data[pos+4:pos+8];payload=data[pos+8:pos+8+n]
  assert binascii.crc32(kind+payload)&0xffffffff==struct.unpack('>I',data[pos+8+n:pos+12+n])[0]
  if kind==b'IHDR':assert struct.unpack('>IIBBBBB',payload)==(width,height,8,6,0,0,0)
  if kind==b'IDAT':compressed+=payload
  pos+=12+n
 return zlib.decompress(compressed)
def main():
 folder=ROOT/'build/diagnostic-instrumentation-tests';folder.mkdir(parents=True,exist_ok=True)
 sources=[ROOT/p for p in ['tools/test_diagnostic_instrumentation.py','CMakeLists.txt','src/kairo/common/diagnostic_profile.hpp','src/kairo/platform/sdl/capture.cpp','src/kairo/platform/sdl/capture.hpp','tests/kairo/capture_fixtures.cpp','tests/kairo/diagnostic_profile_fixtures.cpp']]
 before={p.relative_to(ROOT).as_posix():sha(p)for p in sources};env=environment()
 before['src/kairo/api/capture.hpp']=sha(ROOT/'src/kairo/api/capture.hpp')
 r=subprocess.run([str(CMAKE),'--build',str(ROOT/'build/pc'),'--target','capture_test','diagnostic_profile_test','--parallel','2'],env=env,cwd=ROOT,capture_output=True);(folder/'compile.log').write_bytes(r.stdout+r.stderr)
 if r.returncode:raise RuntimeError('See build/diagnostic-instrumentation-tests/compile.log')
 cases=[]
 for name,args in [('diagnostic_profile_test',[]),('capture_test',[str(folder)])]:
  exe=ROOT/'build/pc'/(name+'.exe');r=subprocess.run([str(exe),*args],env=env,cwd=ROOT,capture_output=True,timeout=30);(folder/(name+'.log')).write_bytes(r.stdout+r.stderr)
  if r.returncode:raise RuntimeError('Diagnostic fixture failed: '+name)
  cases.append(dict(fixture=name,executable_sha256=sha(exe)))
 assert decode_png(folder/'exact.png',2,3)==bytes([0,255,0,0,255,0,255,0,128,0,0,0,255,255,255,255,255,0,0,1,2,3,4,5,6,7,8])
 captured=next(line.split('=',1)[1]for line in (folder/'capture_test.log').read_text(encoding='utf8').splitlines()if line.startswith('CAPTURE_PNG='))
 assert decode_png(Path(captured),2,2)==bytes([0,255,0,0,255,0,255,0,128,0,0,0,255,255,255,255,255,0])
 assert all(sha(ROOT/p)==h for p,h in before.items())
 report=dict(operation='own-diagnostic-profile-and-capture',status='PASS',cases=cases,inputs_sha256=before,independent_png_readback=True,verified_boundary_ids=[],game_executed=False,limitations=['Own synthetic source pixels only; no Android screenshot oracle.','Coverage counts successful invocations, not branch coverage.','Diagnostic wall-clock overhead remains included.'])
 (ROOT/'config/phase2-diagnostic-runtime-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n');print(json.dumps(dict(status='PASS',cases=len(cases),png_readback=True)))
if __name__=='__main__':main()
