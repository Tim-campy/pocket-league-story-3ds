"""Generate a private diagnostic vtable snapshot; never compile or execute it."""
import argparse
import hashlib
import json
import re
from pathlib import Path
from report_paths import unpack_source_paths

ROOT=Path(__file__).resolve().parents[1]


def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()


def cpp_string(value):return '"'+value.replace('\\','\\\\').replace('"','\\"').replace('\n','\\n').replace('\r','\\r')+'"'


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output',type=Path,required=True)
    parser.add_argument('--allow-uncompiled',action='store_true',help='Private Release-first experiment only; zero normal compiled-method claims')
    options=parser.parse_args();output=options.output.resolve()
    if not output.is_relative_to((ROOT/'build').resolve()):raise ValueError('Diagnostic output must stay below the ignored build directory')
    if output.exists()and any(output.iterdir()):raise ValueError('Use a new empty directory for each diagnostic snapshot')
    report_file=ROOT/'config/phase2-game-translation.json';report=unpack_source_paths(json.loads(report_file.read_text(encoding='utf8')));producer=report['producer']
    canonical_compiled=report.get('compiled')is True
    if not canonical_compiled and not options.allow_uncompiled:raise ValueError('A compiled canonical snapshot is required, or explicit --allow-uncompiled for a private Release-first experiment')
    for key,path in [('translator_source_sha256',ROOT/'translator/Translator.cs'),('emission_source_sha256',ROOT/'translator/EmissionUnits.cs'),('driver_sha256',ROOT/'translator/translate.py')]:
        if producer.get(key)!=sha(path):raise ValueError('Canonical producer is stale; regenerate normal Game first')
    if 'report_paths_sha256'in producer and producer['report_paths_sha256']!=sha(ROOT/'translator/report_paths.py'):raise ValueError('Canonical path producer is stale')
    for entry in report.get('platform_adapter_sources',[]):
        if sha(ROOT/entry['path'])!=entry['sha256']:raise ValueError('Bootstrap producer/source is stale')
    canonical=report['generated_files'];names=set()
    for entry in canonical:
        source=(ROOT/entry['path']).resolve()
        if not source.is_relative_to((ROOT/'src/game').resolve())or source.suffix not in ('.cpp','.hpp','.inc')or sha(source)!=entry['sha256']:raise ValueError('Canonical generated input is invalid: '+entry['path'])
        if source.name in names:raise ValueError('Canonical filename collision')
        names.add(source.name)
    traps=report['missing_virtual_definitions']
    layout={}
    if report.get('unit_layout'):
        metadata=report['unit_layout'];path=ROOT/metadata['path']
        if sha(path)!=metadata['sha256']:raise ValueError('Canonical unit ownership manifest is stale')
        layout=json.loads(path.read_text(encoding='utf8'))['symbols']
    if any('cpp_signature'not in row for row in traps):raise ValueError('Canonical report lacks typed trap signatures; regenerate normal Game')
    output.mkdir(parents=True,exist_ok=True)
    # Keep the exact canonical evidence with this private snapshot, so a later
    # canonical regeneration does not leave historical runs with only a hash.
    (output/'canonical_report.json').write_bytes(report_file.read_bytes())
    for entry in canonical:(output/Path(entry['path']).name).write_bytes((ROOT/entry['path']).read_bytes())
    helper='''// GENERATED diagnostic helper. No normal ledger or game-body promotion.
#pragma once
#include <cstdio>
#include <exception>
#include <string>
#include "diagnostic_output.hpp"
namespace pls::game {
class TranslationGap final:public std::exception {
    std::string id_;
public:
    explicit TranslationGap(const char* id):id_(id){}
    const char*what()const noexcept override{return id_.c_str();}
};
[[noreturn]] inline void diagnostic_translation_gap(const char* id){
    const auto marker=std::string("PLS_TRANSLATION_GAP=")+id+"\\n";
    {std::lock_guard<std::mutex> lock(pls::kairo::debug_log_mutex);std::fwrite(marker.data(),1,marker.size(),stderr);std::fflush(stderr);}
    throw TranslationGap(id);
}
}
#define PLS_BOOTSTRAP_GAP(id) ::pls::game::diagnostic_translation_gap(id)
'''
    cpp=['// GENERATED private diagnostic traps; no original/translated method claim.\n#include "game_generated.hpp"\nnamespace pls::game {\n']
    generic=['\nnamespace pls::game {\n']
    generic_by_class={}
    manifest_traps=[]
    for row in traps:
        definition=row['cpp_signature']+'{ diagnostic_translation_gap('+cpp_string(row['id'])+'); }\n'
        if row['generic_class']and layout:
            name=re.match(r'(cs_[0-9a-f]{16})',row['cpp_class'])
            if not name or name[1]not in layout:raise ValueError('Generic diagnostic class lacks a per-type header')
            generic_by_class.setdefault(name[1],[]).append(definition)
        else:(generic if row['generic_class']else cpp).append(definition)
        diagnostic=row.get('diagnostic')or{}
        manifest_traps.append(dict(id=row['id'],cpp_class=row['cpp_class'],slot=row['slot'],reason=diagnostic.get('reason','Virtual member body was not emitted'),cpp_signature=row['cpp_signature']))
    cpp.append('}\n');generic.append('}\n')
    if layout:
        (output/'diagnostic_runtime.hpp').write_text(helper,encoding='utf8',newline='\n')
        for name,definitions in generic_by_class.items():
            trap_header='diagnostic_generic_'+name+'.hpp';body=''.join(definitions)
            includes={layout[token]['header']for token in re.findall(r'\bcs_[0-9a-f]{16}\b',body)if token in layout}
            text='#pragma once\n#include "diagnostic_runtime.hpp"\n'+''.join('#include "'+p+'"\n'for p in sorted(includes))+'namespace pls::game {\n'+body+'}\n'
            (output/trap_header).write_text(text,encoding='utf8',newline='\n')
            owner=output/layout[name]['header'];owner.write_bytes(owner.read_bytes()+('\n#include "'+trap_header+'"\n').encode('utf8'))
        (output/'diagnostic_virtual_traps.hpp').write_text('#pragma once\n#include "diagnostic_runtime.hpp"\n',encoding='utf8',newline='\n')
        bootstrap=output/'bootstrap_generated.cpp'
        if bootstrap.exists():bootstrap.write_bytes(b'#include "diagnostic_runtime.hpp"\n'+bootstrap.read_bytes())
    else:(output/'diagnostic_virtual_traps.hpp').write_text(helper+''.join(generic),encoding='utf8',newline='\n')
    (output/'diagnostic_virtual_traps.cpp').write_text(''.join(cpp),encoding='utf8',newline='\n')
    header=output/'game_generated.hpp'
    header.write_bytes(header.read_bytes()+b'\n#include "diagnostic_virtual_traps.hpp"\n')
    generated=sorted(path for path in output.iterdir()if path.suffix in ('.cpp','.hpp','.inc'))
    for identifier in report.get('bootstrap_bindings',{}).get('missing_bindings',[]):
        manifest_traps.append(dict(id=identifier,cpp_class='platform-bootstrap',slot='guard',reason='Missing generated bootstrap collaborator',cpp_signature='explicit bootstrap guard'))
    manifest=dict(diagnostic_only=True,diagnostic_stage='missing_virtual_slots_and_bootstrap_guards',canonical_report_sha256=sha(report_file),canonical_files=canonical,
        generated_files=[dict(path=path.relative_to(output).as_posix(),sha256=sha(path))for path in generated],traps=manifest_traps,producer=producer,
        diagnostic_generator=dict(path=Path(__file__).relative_to(ROOT).as_posix(),sha256=sha(Path(__file__))),candidate_bodies=[],
        canonical_compiled=canonical_compiled,precompile_diagnostic=not canonical_compiled,
        normal_compiled_methods=report.get('compiled_method_count',0)if canonical_compiled else 0,
        emitted_candidate_method_count=report['emitted_method_count'],diagnostic_game_execution_promotes_zero_methods=True,
        execution_requirement='Root supervisor must terminate on PLS_TRANSLATION_GAP= even if game/framework catches an exception wrapper; isolated preferences and separate diagnostic CMake build are mandatory.',
        marker='PLS_TRANSLATION_GAP=',notes=['Canonical sources/reports are never edited. Each named trap throws a native exception outside cs::Exception after a flushed stderr marker.','This first diagnostic stage may stop at a missing Main callback; no alternative Main or silent body is supplied.'])
    (output/'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n',encoding='utf8',newline='\n')
    print(json.dumps(dict(output=str(output),diagnostic_only=True,traps=len(manifest_traps),generated_files=len(generated),executed=False)))


if __name__=='__main__':main()
