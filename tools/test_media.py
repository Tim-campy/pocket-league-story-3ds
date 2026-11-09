"""Exercise local TTF rasterization and bounded four-voice Vorbis playback.

Only metadata/proof is public. Assets, glyph pixels and bounded PCM prefixes stay
under ignored assets/ and build/. This never starts the game or installs tools.
"""
import argparse
import array
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess

from pc_compiler import VS, environment

ROOT=Path(__file__).resolve().parents[1]
EXPECTED='d557af6b4bc7748605a39ed3548821f6763c5773a12432a3fed6e8c413b211e8'


def sha(path):return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--apk',required=True,type=Path)
    args=p.parse_args()
    if sha(args.apk)!=EXPECTED:raise ValueError('Expected local APK is required')
    sdk=json.loads((ROOT/'config/media-sdk.json').read_text(encoding='utf-8'))
    if sdk['status']!='PASS':raise ValueError('Prepare authorized media SDK first')
    if sha(ROOT/'tools/setup_media_deps.py')!=sdk['producer_sha256']:raise ValueError('Media SDK setup receipt is stale')
    for item in sdk['files']:
        if sha(ROOT/item['path'])!=item['sha256']:raise ValueError('Local media SDK file changed')
    converted=json.loads((ROOT/'config/phase2-assets.json').read_text(encoding='utf-8'))
    manifest_path=ROOT/'assets/converted/manifest.json'
    if sha(manifest_path)!=converted['manifest_sha256']:raise ValueError('Local asset manifest changed')
    manifest=json.loads(manifest_path.read_text(encoding='utf-8'))
    if manifest['apk_sha256']!=EXPECTED:raise ValueError('Asset manifest belongs to another APK')
    for item in manifest['fonts']+manifest['audio']:
        path=(ROOT/'assets'/item['path']).resolve(strict=True)
        if not path.is_relative_to((ROOT/'assets').resolve()) or sha(path)!=item['sha256']:raise ValueError('Local font/audio path or digest differs')
    folder=ROOT/'build/media-tests';folder.mkdir(parents=True,exist_ok=True)
    for category in ['fonts','audio']:
        (folder/(category+'.idx')).write_text(''.join(str((ROOT/'assets'/i['path']).resolve())+'\n' for i in manifest[category]),encoding='utf-8',newline='\n')
    native=folder/'media-fixtures.exe'
    compiler=VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'
    prefix=ROOT/sdk['prefix']
    sources=[ROOT/name for name in ['tests/kairo/media_fixtures.cpp','src/kairo/platform/sdl/font.cpp','src/kairo/platform/sdl/audio.cpp','src/kairo/platform/sdl/backend.cpp','src/kairo/platform/sdl/debug_input.cpp','src/kairo/common/semantic_runtime.cpp']]
    sdl=ROOT/'build/deps/SDL2-2.32.10'
    command=[compiler,'/nologo','/std:c++17','/EHsc','/fp:strict','/permissive-','/W4','/WX','/O2','/MD','/utf-8','/DSDL_MAIN_HANDLED',
             '/I'+str(ROOT/'src/kairo/platform/sdl'),'/I'+str(ROOT/'src/kairo/api'),'/I'+str(ROOT/'src/kairo/common'),'/I'+str(sdl/'include'),
             '/I'+str(prefix/'include'),'/I'+str(prefix/'include/freetype2'),'/Fe:'+str(native),*sources,
             '/link','/LIBPATH:'+str(prefix/'lib'),str(sdl/'lib/x64/SDL2.lib'),'freetype.lib','vorbisfile.lib','vorbis.lib','ogg.lib']
    build=subprocess.run([str(a) for a in command],cwd=folder,env=environment(),capture_output=True)
    (folder/'compiler.log').write_bytes(build.stdout+build.stderr)
    if build.returncode:raise RuntimeError('Media fixture compile failed; inspect build/media-tests/compiler.log')
    shutil.copy2(sdl/'lib/x64/SDL2.dll',folder/'SDL2.dll')
    env=dict(environment(),SDL_AUDIODRIVER='dummy',SDL_VIDEODRIVER='dummy')
    process=subprocess.run([str(native),str(folder/'fonts.idx'),str(folder/'audio.idx'),str(folder)],cwd=ROOT,env=env,capture_output=True)
    (folder/'native.stdout').write_bytes(process.stdout)
    (folder/'native.stderr').write_bytes(process.stderr)
    if process.returncode:raise RuntimeError('Media fixture failed; inspect build/media-tests/native.stderr')
    result=json.loads(process.stdout)
    comparisons=[]
    rows=(folder/'decoders.tsv').read_text(encoding='utf-8').splitlines()
    for line in rows:
        index,rate,channels,frames,prefix_frames=map(int,line.split('\t'))
        path=ROOT/'assets'/manifest['audio'][index]['path']
        command=['ffmpeg','-v','error','-nostdin','-i',str(path),'-af','atrim=end_sample='+str(prefix_frames),'-f','f32le','-acodec','pcm_f32le','-']
        oracle=subprocess.run(command,capture_output=True,check=True)
        (folder/('ffmpeg-'+str(index)+'.stderr')).write_bytes(oracle.stderr)
        expected=array.array('f');expected.frombytes(oracle.stdout)
        actual=array.array('f');actual.frombytes((folder/('prefix-'+str(index)+'.f32')).read_bytes())
        if len(expected)!=len(actual):raise ValueError('Vorbis oracle prefix sample count differs')
        error=max((abs(a-b) for a,b in zip(expected,actual)),default=0.0)
        comparisons.append(dict(sample_rate=rate,channels=channels,total_frames=frames,prefix_frames=prefix_frames,
                                max_absolute_float_error=error,passed=error<=0.00002))
    if not all(c['passed'] for c in comparisons):raise ValueError('Vorbis versus FFmpeg prefix exceeds measured tolerance')
    if sha(args.apk)!=EXPECTED:raise ValueError('APK changed during test')
    inputs=sources+[ROOT/p for p in ['src/kairo/platform/sdl/font.hpp','src/kairo/platform/sdl/audio.hpp','src/kairo/platform/sdl/backend.hpp','src/kairo/platform/sdl/debug_input.hpp','src/kairo/api/platform.hpp','src/kairo/api/debug_input.hpp','src/kairo/api/vector3.hpp','src/kairo/api/system.hpp','src/kairo/common/semantic_runtime.hpp','tools/test_media.py']]
    report=dict(operation='local-TTF-SDL-and-bounded-Vorbis-mixer-fixtures',status='PASS',**result,
                inputs={i.relative_to(ROOT).as_posix():sha(i) for i in inputs},sdk_receipt_sha256=sha(ROOT/'config/media-sdk.json'),
                manifest_sha256=sha(manifest_path),apk_sha256=EXPECTED,native_executable_sha256=sha(native),
                native_stdout_sha256=sha(folder/'native.stdout'),ffmpeg_comparisons=comparisons,
                game_assets_published=False,original_binaries_used=False,original_android_behavior='UNKNOWN',
                full_track_pcm_buffer_allocated=False,decoder_internal_allocation_bytes='UNKNOWN',
                font_shape_and_hinting_against_Android='UNKNOWN')
    (ROOT/'config/phase2-media-tests.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps({k:report[k] for k in ['status','fonts','glyph_rasters','vorbis_files','assertions','mixer_ring_bytes','mixer_scratch_bytes','resampler_peak_available_bytes','game_boot']}))


if __name__=='__main__':main()
