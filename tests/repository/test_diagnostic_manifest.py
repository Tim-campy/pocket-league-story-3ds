"""Diagnostic builds must bind current canonical bytes and contained sources."""
import hashlib
import json
from pathlib import Path
import sys
import tempfile
import unittest
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
from build_pc import source_snapshot,validate_diagnostic_manifest

def digest(path):return hashlib.sha256(path.read_bytes()).hexdigest()

class DiagnosticManifestTests(unittest.TestCase):
    def test_manifest_rejects_stale_and_unlisted_sources(self):
        parent=(ROOT/'build/diagnostic-manifest-tests').resolve();parent.mkdir(parents=True,exist_ok=True)
        self.assertTrue(parent.is_relative_to(ROOT.resolve()))
        with tempfile.TemporaryDirectory(dir=parent)as temporary:
            root=Path(temporary).resolve();self.assertTrue(root.is_relative_to(parent))
            canonical=root/'src/game';canonical.mkdir(parents=True)
            config=root/'config';config.mkdir();report=config/'phase2-game-translation.json'
            original=canonical/'game.cpp';original.write_text('int own_fixture(){return 1;}\n')
            header=canonical/'game.hpp';header.write_text('int own_fixture();\n')
            producer_dir=root/'translator';producer_dir.mkdir()
            source=producer_dir/'Translator.cs';source.write_text('// own source fixture\n')
            driver=producer_dir/'translate.py';driver.write_text('# own driver fixture\n')
            diagnostic_generator=producer_dir/'diagnostic_snapshot.py';diagnostic_generator.write_text('# own diagnostic fixture\n')
            producer=dict(translator_source_sha256=digest(source),driver_sha256=digest(driver))
            rows=[dict(path=p.relative_to(root).as_posix(),sha256=digest(p))for p in [original,header]]
            report.write_text(json.dumps(dict(assembly='Assembly-CSharp',compiled=True,producer=producer,generated_files=rows)))
            output=root/'build/diagnostic';output.mkdir(parents=True)
            generated=output/'game.cpp';generated.write_bytes(original.read_bytes())
            value=dict(diagnostic_only=True,canonical_report_sha256=digest(report),
                canonical_files=rows,producer=producer,diagnostic_generator=dict(path='translator/diagnostic_snapshot.py',sha256=digest(diagnostic_generator)),
                generated_files=[dict(path='game.cpp',sha256=digest(generated))],traps=[dict(id='own_fixture')])
            manifest=output/'manifest.json';manifest.write_text(json.dumps(value))
            self.assertTrue(validate_diagnostic_manifest(output,root)['diagnostic_only'])
            uncompiled=json.loads(report.read_text());uncompiled['compiled']=False
            report.write_text(json.dumps(uncompiled));value['canonical_report_sha256']=digest(report);manifest.write_text(json.dumps(value))
            with self.assertRaisesRegex(ValueError,'zero normal coverage'):validate_diagnostic_manifest(output,root)
            value.update(precompile_diagnostic=True,canonical_compiled=False,normal_compiled_methods=0,diagnostic_game_execution_promotes_zero_methods=True)
            manifest.write_text(json.dumps(value));self.assertTrue(validate_diagnostic_manifest(output,root)['precompile_diagnostic'])
            value['normal_compiled_methods']=1;manifest.write_text(json.dumps(value))
            with self.assertRaisesRegex(ValueError,'zero normal coverage'):validate_diagnostic_manifest(output,root)
            value['normal_compiled_methods']=0;uncompiled['compiled']=True;report.write_text(json.dumps(uncompiled))
            value['canonical_report_sha256']=digest(report);manifest.write_text(json.dumps(value))
            value['canonical_files']=rows[:1];manifest.write_text(json.dumps(value))
            with self.assertRaisesRegex(ValueError,'inventory is incomplete'):validate_diagnostic_manifest(output,root)
            value['canonical_files']=rows;value['producer']={};manifest.write_text(json.dumps(value))
            with self.assertRaisesRegex(ValueError,'producer differs'):validate_diagnostic_manifest(output,root)
            value['producer']=producer;manifest.write_text(json.dumps(value))
            before=source_snapshot(root,output);generated.write_text('int own_fixture(){return 2;}\n')
            after=source_snapshot(root,output)
            self.assertNotEqual(before['build/diagnostic/game.cpp'],after['build/diagnostic/game.cpp'])
            with self.assertRaisesRegex(ValueError,'source differs'):validate_diagnostic_manifest(output,root)
            generated.write_bytes(original.read_bytes());(output/'unlisted.cpp').write_text('int own_extra;\n')
            with self.assertRaisesRegex(ValueError,'inventory is incomplete'):validate_diagnostic_manifest(output,root)
            # Restore by declaring the extra file, rather than deleting paths.
            value['generated_files'].append(dict(path='unlisted.cpp',sha256=digest(output/'unlisted.cpp')))
            manifest.write_text(json.dumps(value));report.write_text('{"changed":true}')
            with self.assertRaisesRegex(ValueError,'report is stale'):validate_diagnostic_manifest(output,root)

    def test_output_outside_private_build_is_rejected(self):
        with self.assertRaisesRegex(ValueError,'ignored build'):validate_diagnostic_manifest(ROOT/'src/game')

if __name__=='__main__':unittest.main()
