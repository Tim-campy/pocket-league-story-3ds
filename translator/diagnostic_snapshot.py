"""Generate a private diagnostic vtable snapshot; never compile or execute it."""
import argparse
import hashlib
import json
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]


def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def cpp_string(value):return '"'+value.replace('\\','\\\\').replace('"','\\"').replace('\n','\\n').replace('\r','\\r')+'"'


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output',type=Path,required=True)
    options=parser.parse_args();output=options.output.resolve()
    if not output.is_relative_to((ROOT/'build').resolve()):raise ValueError('Diagnostic output must stay below the ignored build directory')
    if output.exists()and any(output.iterdir()):raise ValueError('Use a new empty directory for each diagnostic snapshot')
    report_file=ROOT/'config/phase2-game-translation.json';report=json.loads(report_file.read_text(encoding='utf8'));producer=report['producer']
    if not report.get('compiled'):raise ValueError('A compiled canonical snapshot is required')
    for key,path in [('translator_source_sha256',ROOT/'translator/Translator.cs'),('driver_sha256',ROOT/'translator/translate.py')]:
        if producer.get(key)!=sha(path):raise ValueError('Canonical producer is stale; regenerate normal Game first')
    canonical=report['generated_files'];names=set()
    for entry in canonical:
        source=(ROOT/entry['path']).resolve()
        if not source.is_relative_to((ROOT/'src/game').resolve())or source.suffix not in ('.cpp','.hpp','.inc')or sha(source)!=entry['sha256']:raise ValueError('Canonical generated input is invalid: '+entry['path'])
        if source.name in names:raise ValueError('Canonical filename collision')
        names.add(source.name)
    traps=report['missing_virtual_definitions']
    if any('cpp_signature'not in row for row in traps):raise ValueError('Canonical report lacks typed trap signatures; regenerate normal Game')
    output.mkdir(parents=True,exist_ok=True)
    for entry in canonical:(output/Path(entry['path']).name).write_bytes((ROOT/entry['path']).read_bytes())
    helper='''// GENERATED diagnostic helper. No normal ledger or game-body promotion.
#pragma once
#include <cstdio>
#include <exception>
#include <string>
namespace pls::game {
class TranslationGap final:public std::exception {
    std::string id_;
public:
    explicit TranslationGap(const char* id):id_(id){}
    const char*what()const noexcept override{return id_.c_str();}
};
[[noreturn]] inline void diagnostic_translation_gap(const char* id){
    const auto marker=std::string("PLS_TRANSLATION_GAP=")+id+"\\n";
    std::fwrite(marker.data(),1,marker.size(),stderr);std::fflush(stderr);
    throw TranslationGap(id);
}
}
'''
    cpp=['// GENERATED private diagnostic traps; no original/translated method claim.\n#include "game_generated.hpp"\nnamespace pls::game {\n']
    generic=['\nnamespace pls::game {\n']
    manifest_traps=[]
    for row in traps:
        definition=row['cpp_signature']+'{ diagnostic_translation_gap('+cpp_string(row['id'])+'); }\n'
        (generic if row['generic_class']else cpp).append(definition)
        diagnostic=row.get('diagnostic')or{}
        manifest_traps.append(dict(id=row['id'],cpp_class=row['cpp_class'],slot=row['slot'],reason=diagnostic.get('reason','Virtual member body was not emitted'),cpp_signature=row['cpp_signature']))
    cpp.append('}\n');generic.append('}\n')
    (output/'diagnostic_virtual_traps.hpp').write_text(helper+''.join(generic),encoding='utf8',newline='\n')
    (output/'diagnostic_virtual_traps.cpp').write_text(''.join(cpp),encoding='utf8',newline='\n')
    header=output/'game_generated.hpp'
    header.write_bytes(header.read_bytes()+b'\n#include "diagnostic_virtual_traps.hpp"\n')
    generated=sorted(path for path in output.iterdir()if path.suffix in ('.cpp','.hpp','.inc'))
    manifest=dict(diagnostic_only=True,diagnostic_stage='missing_virtual_slots_only',canonical_report_sha256=sha(report_file),canonical_files=canonical,
        generated_files=[dict(path=path.relative_to(output).as_posix(),sha256=sha(path))for path in generated],traps=manifest_traps,producer=producer,
        diagnostic_generator=dict(path=Path(__file__).relative_to(ROOT).as_posix(),sha256=sha(Path(__file__))),candidate_bodies=[],
        normal_compiled_methods=report['compiled_method_count'],diagnostic_game_execution_promotes_zero_methods=True,
        execution_requirement='Root supervisor must terminate on PLS_TRANSLATION_GAP= even if game/framework catches an exception wrapper; isolated preferences and separate diagnostic CMake build are mandatory.',
        marker='PLS_TRANSLATION_GAP=',notes=['Canonical sources/reports are never edited. Each named trap throws a native exception outside cs::Exception after a flushed stderr marker.','This first diagnostic stage may stop at a missing Main callback; no alternative Main or silent body is supplied.'])
    (output/'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n',encoding='utf8',newline='\n')
    print(json.dumps(dict(output=str(output),diagnostic_only=True,traps=len(traps),generated_files=len(generated),executed=False)))


if __name__=='__main__':main()
