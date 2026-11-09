"""Measure the frozen a418890 generated corpus before emitter splitting.

Invalidating one source timestamp models a body-only edit's compiler input
without modifying reference C#, generated statements or program behavior.
"""
import argparse,io,json,os,shutil,subprocess,sys,tarfile,time
from pathlib import Path
from generated_build import compile_objects,sha
ROOT=Path(__file__).resolve().parents[1]
def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--after',action='store_true');args=parser.parse_args()
    if args.after:return after()
    folder=ROOT/'build/incremental-benchmark';source=folder/'baseline-a418890';source.mkdir(parents=True,exist_ok=True)
    if not (source/'src/game/game_generated.cpp').exists():
        archive=subprocess.run(['git','archive','a418890'],cwd=ROOT,check=True,capture_output=True).stdout
        with tarfile.open(fileobj=io.BytesIO(archive))as stream:stream.extractall(source,filter='data')
    units=[source/'src/game/game_generated.cpp',source/'src/kairo/common/generated/portable_generated.cpp']
    includes=[source/'src/kairo/common',source/'src/kairo/api',source/'src']
    build=folder/'before-objects'
    complete=compile_objects(units,build,includes,optimize=True,jobs=2,log_name='complete')
    time.sleep(1.1);os.utime(units[0],None)
    incremental=compile_objects(units,build,includes,optimize=True,jobs=2,log_name='one-game-type-invalidation')
    report=dict(operation='frozen-generated-corpus-build-benchmark',checkpoint='a418890',status='PASS',
        before=dict(complete=complete,one_type_invalidation=incremental),
        method='Same generated statements and compiler options. Object build only; backend compilation and link excluded. A game method body edit invalidates the monolithic game TU. Timestamp invalidation leaves source bytes unchanged.',
        baseline_sources=[dict(path=str(p.relative_to(folder)),sha256=sha(p))for p in units],after='PENDING')
    (ROOT/'config/phase2-incremental-build.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n')
    print(json.dumps(dict(status='PASS',complete_seconds=complete['elapsed_ns']/1e9,incremental_seconds=incremental['elapsed_ns']/1e9)))
def after():
    folder=ROOT/'build/incremental-benchmark';source=folder/'split-a418890';index=1
    while source.exists():index+=1;source=folder/('split-a418890-'+str(index))
    source.mkdir(parents=True)
    archive=subprocess.run(['git','archive','a418890'],cwd=ROOT,check=True,capture_output=True).stdout
    with tarfile.open(fileobj=io.BytesIO(archive))as stream:stream.extractall(source,filter='data')
    # Same historical lowerer and bootstrap adapters as before. Only replace
    # the output packaging and its content-stable file writer.
    program=source/'translator/Translator.cs';text=program.read_text(encoding='utf8')
    text=text.replace('sealed class Lowerer {','sealed partial class Lowerer {')
    text=text.replace('public string output {get;set;}="";','public string external_unit_manifest {get;set;}="";\n    public string output {get;set;}="";')
    marker='    static string[] WriteGenerated(';end='    public Lowerer('
    current=(ROOT/'translator/Translator.cs').read_text(encoding='utf8')
    text=text[:text.index(marker)]+current[current.index(marker):current.index(end)]+text[text.index(end):]
    lines=text.splitlines()
    found=[i for i,line in enumerate(lines)if 'var generatedChunks=WriteGenerated('in line]
    if len(found)!=1:raise ValueError('Historical packaging insertion point differs')
    lines[found[0]]='        var generatedChunks=WritePerTypeUnits(input,basename,ns,header.ToString(),cpp.ToString(),usedClasses,usedTypes,usedFields,bootstrap);'
    program.write_text('\n'.join(lines)+'\n',encoding='utf8',newline='\n')
    shutil.copyfile(ROOT/'translator/EmissionUnits.cs',source/'translator/EmissionUnits.cs')
    driver=source/'translator/translate.py';text=driver.read_text(encoding='utf8')
    text=text.replace("[str(ROOT/'translator/Translator.cs')]","[str(ROOT/'translator/Translator.cs'),str(ROOT/'translator/EmissionUnits.cs')]")
    marker="        portable=json.loads((ROOT/'config/phase2-translation.json').read_text(encoding='utf-8'))"
    if marker not in text:raise ValueError('Historical portable manifest insertion point differs')
    text=text.replace(marker,marker+"\n        request['external_unit_manifest']=str(ROOT/'src/kairo/common/generated/emission_units.json')")
    driver.write_text(text,encoding='utf8',newline='\n')
    reference=source/'reference'
    if reference.exists():reference.rmdir() # archive gitlink placeholder, empty only
    literal=lambda p:"'"+str(p).replace("'","''")+"'"
    command='New-Item -ItemType Junction -Path '+literal(reference)+' -Target '+literal(ROOT/'reference')
    subprocess.run(['powershell','-NoProfile','-Command',command],check=True,capture_output=True)
    managed=(ROOT/'../Pocket League Story/original/extracted/assets/bin/Data/Managed').resolve()
    expected={assembly:json.loads((source/'config'/name).read_text(encoding='utf8'))for assembly,name in [('KairoLibrary','phase2-translation.json'),('Assembly-CSharp','phase2-game-translation.json')]}
    for assembly in ('KairoLibrary','Assembly-CSharp'):
        run=subprocess.run([sys.executable,'-B',str(driver),'--assembly',assembly,'--original-managed',str(managed),'--bootstrap-main'],cwd=source,capture_output=True)
        (folder/('after-generate-'+assembly+'.log')).write_bytes(run.stdout+run.stderr)
        if run.returncode:raise RuntimeError('Isolated baseline repackaging failed: '+assembly)
        report=json.loads((source/'config'/('phase2-translation.json'if assembly=='KairoLibrary'else'phase2-game-translation.json')).read_text(encoding='utf8'))
        if {row['id']:row['cpp_name']for row in report['emitted_methods']}!={row['id']:row['cpp_name']for row in expected[assembly]['emitted_methods']}:
            raise ValueError('Benchmark corpus changed: '+assembly)
    units=sorted((source/'src/game').glob('game_generated*.cpp'))+sorted((source/'src/kairo/common/generated').glob('portable_generated*.cpp'))
    includes=[source/'src/kairo/common',source/'src/kairo/api',source/'src']
    build=folder/('after-objects-'+str(index));complete=compile_objects(units,build,includes,optimize=True,jobs=2,log_name='complete')
    manifest=json.loads((source/'src/game/emission_units.json').read_text(encoding='utf8'))
    selected=next(row for row in manifest['units']if row['id']=='T:main.AppData');unit=source/'src/game'/selected['cpp']
    time.sleep(1.1);os.utime(unit,None)
    incremental=compile_objects(units,build,includes,optimize=True,jobs=2,log_name='one-game-type-invalidation')
    path=ROOT/'config/phase2-incremental-build.json';report=json.loads(path.read_text(encoding='utf8'))
    report['after']=dict(complete=complete,one_type_invalidation=incremental,type=selected['id'],units=len(units),same_original_method_ids=True,
        packaging_source_sha256=sha(source/'translator/EmissionUnits.cs'),isolated_historical_lowerer_sha256=sha(program))
    path.write_text(json.dumps(report,indent=2)+'\n',encoding='utf8',newline='\n')
    print(json.dumps(dict(status='PASS',units=len(units),complete_seconds=complete['elapsed_ns']/1e9,incremental_seconds=incremental['elapsed_ns']/1e9)))
if __name__=='__main__':main()
