"""Build explicitly authorized FreeType/Ogg/Vorbis sources inside ignored build/.

No package manager or global installation; CMake may not download dependencies.
Only the three pinned official HTTPS source archives below are downloaded.
"""
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import tarfile

from pc_compiler import CMAKE, NINJA, VS, environment

ROOT = Path(__file__).resolve().parents[1]
DEPS = ROOT/'build/deps'
PREFIX = DEPS/'native-media'
PACKAGES = [
    dict(name='freetype',version='2.15.0',archive='freetype-2.15.0.tar.xz',
         url='https://download.savannah.gnu.org/releases/freetype/freetype-2.15.0.tar.xz',
         sha256='93cd47eb719c325107f2d3cf087d06299e944c3b48a40b55537302304dea1dd5',
         checksum_source='https://sourceforge.net/projects/freetype/files/freetype2/2.15.0/',
         directory='freetype-2.15.0',
         options=['-DFT_DISABLE_ZLIB=ON','-DFT_DISABLE_BZIP2=ON','-DFT_DISABLE_PNG=ON',
                  '-DFT_DISABLE_HARFBUZZ=ON','-DFT_DISABLE_BROTLI=ON']),
    dict(name='ogg',version='1.3.6',archive='libogg-1.3.6.tar.xz',
         url='https://downloads.xiph.org/releases/ogg/libogg-1.3.6.tar.xz',
         sha256='5c8253428e181840cd20d41f3ca16557a9cc04bad4a3d04cce84808677fa1061',
         checksum_source='https://xiph.org/downloads/',directory='libogg-1.3.6',options=[]),
    dict(name='vorbis',version='1.3.7',archive='libvorbis-1.3.7.tar.xz',
         url='https://downloads.xiph.org/releases/vorbis/libvorbis-1.3.7.tar.xz',
         sha256='b33cc4934322bcbf6efcbacf49e3ca01aadbea4114ec9589d1b1e9d20f72954b',
         checksum_source='https://xiph.org/downloads/',directory='libvorbis-1.3.7',
         options=['-DBUILD_TESTING=OFF']),
]


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def run(command, log, env):
    result = subprocess.run([str(v) for v in command],cwd=ROOT,env=env,capture_output=True)
    log.parent.mkdir(parents=True,exist_ok=True)
    log.write_bytes(result.stdout+result.stderr)
    if result.returncode:
        raise RuntimeError('Media dependency build failed; inspect '+str(log))


def main():
    env = environment()
    downloads = DEPS/'downloads'
    sources = DEPS/'sources'
    downloads.mkdir(parents=True,exist_ok=True)
    sources.mkdir(parents=True,exist_ok=True)
    receipts = []
    for package in PACKAGES:
        archive = downloads/package['archive']
        if not archive.is_file():
            curl = shutil.which('curl.exe') or shutil.which('curl')
            if not curl:
                raise RuntimeError('Existing HTTPS curl missing; no new downloader is installed')
            run([curl,'--fail','--location','--proto','=https','--tlsv1.2',package['url'],'--output',archive],
                DEPS/'logs'/(package['name']+'-download.log'),env)
        if sha(archive) != package['sha256']:
            raise ValueError('Pinned official source archive SHA-256 differs: '+package['name'])
        source = sources/package['directory']
        with tarfile.open(archive,'r:xz') as tar:
            members=tar.getmembers()
            for member in members:
                target = (sources/member.name).resolve()
                if not target.is_relative_to(sources.resolve()) or not (member.isdir() or member.isfile()):
                    raise ValueError('Unsafe source archive member')
            if not source.exists():
                tar.extractall(sources,filter='data')
            source_hashes=[]
            for member in members:
                if not member.isfile():continue
                data=tar.extractfile(member)
                expected=hashlib.sha256(data.read()).hexdigest()
                target=sources/member.name
                if not target.is_file() or target.is_symlink() or sha(target)!=expected:
                    raise ValueError('Cached dependency source differs from official archive')
                source_hashes.append(dict(path=member.name,sha256=expected))
            actual={p.relative_to(sources).as_posix() for p in source.rglob('*') if p.is_file()}
            if actual!={r['path'] for r in source_hashes}:raise ValueError('Unexpected dependency source file')
        build = DEPS/'media-build'/package['name']
        options = ['-DBUILD_SHARED_LIBS=OFF','-DBUILD_TESTING=OFF','-DCMAKE_BUILD_TYPE=Release',
                   '-DCMAKE_INSTALL_PREFIX='+str(PREFIX),'-DCMAKE_PREFIX_PATH='+str(PREFIX),
                   '-DCMAKE_POLICY_VERSION_MINIMUM=3.5','-DCMAKE_FIND_USE_PACKAGE_REGISTRY=OFF',
                   '-DFETCHCONTENT_FULLY_DISCONNECTED=ON','-DCMAKE_MSVC_RUNTIME_LIBRARY=MultiThreadedDLL']+package['options']
        configure = [CMAKE,'-S',source,'-B',build,'-G','Ninja','-DCMAKE_MAKE_PROGRAM='+str(NINJA)]+options
        run(configure,DEPS/'logs'/(package['name']+'-configure.log'),env)
        run([CMAKE,'--build',build,'--parallel','4'],DEPS/'logs'/(package['name']+'-build.log'),env)
        run([CMAKE,'--install',build,'--prefix',PREFIX],DEPS/'logs'/(package['name']+'-local-install.log'),env)
        license_dir=PREFIX/'share/licenses'/package['name']
        license_dir.mkdir(parents=True,exist_ok=True)
        for name in (['LICENSE.TXT','docs/FTL.TXT'] if package['name']=='freetype' else ['COPYING']):
            shutil.copy2(source/name,license_dir/Path(name).name)
        receipts.append(dict(package,archive_bytes=archive.stat().st_size,cmake_options=options,
                             source_file_count=len(source_hashes),
                             source_tree_sha256=hashlib.sha256(json.dumps(source_hashes,sort_keys=True).encode()).hexdigest()))
        print(json.dumps(dict(package=package['name'],version=package['version'],status='BUILT_LOCAL')),flush=True)
    files = [dict(path=p.relative_to(ROOT).as_posix(),sha256=sha(p),bytes=p.stat().st_size)
             for p in sorted(PREFIX.rglob('*')) if p.is_file()]
    report = dict(operation='official-source-local-media-sdk',status='PASS',packages=receipts,
                  prefix=PREFIX.relative_to(ROOT).as_posix(),files=files,
                  compiler_sha256=sha(VS/'VC/Tools/MSVC/14.51.36231/bin/Hostx64/x64/cl.exe'),
                  cmake_sha256=sha(CMAKE),ninja_sha256=sha(NINJA),producer_sha256=sha(Path(__file__)),
                  global_install=False,build_autofetch=False,game_assets_used=False)
    (ROOT/'config/media-sdk.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')


if __name__ == '__main__':
    main()
