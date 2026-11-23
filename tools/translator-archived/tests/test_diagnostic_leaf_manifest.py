"""Private leaf variants cannot hide source changes or promote partial bodies."""
import hashlib,json,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'));sys.path.insert(0,str(ROOT/'translator'))
from build_pc import validate_diagnostic_manifest
from diagnostic_leaves import CAPTURE,CPP_NAME,HEADER,header
from update_phase2_progress import validate_emission
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
class LeafManifestTests(unittest.TestCase):
    def setUp(self):
        parent=ROOT/'build/leaf-manifest-tests';parent.mkdir(parents=True,exist_ok=True)
        self.temporary=tempfile.TemporaryDirectory(dir=parent);self.addCleanup(self.temporary.cleanup)
        self.root=Path(self.temporary.name).resolve();self.assertTrue(self.root.is_relative_to(parent.resolve()))
        root=self.root
        for name in ('src/game','config','translator','build/diagnostic','build/translator'):(root/name).mkdir(parents=True,exist_ok=True)
        producer={}
        for name,key in [('Translator.cs','translator_source_sha256'),('EmissionUnits.cs','emission_source_sha256'),('translate.py','driver_sha256')]:
            path=root/'translator'/name;path.write_text('// own producer fixture\n');producer[key]=sha(path)
        generator=root/'translator/diagnostic_snapshot.py';generator.write_text('# own generator fixture\n')
        helper=root/'translator/diagnostic_leaves.py';helper.write_bytes((ROOT/'translator/diagnostic_leaves.py').read_bytes())
        cpp=root/'src/game/game.cpp';cpp.write_text('int own_fixture;\n')
        rows=[dict(path='src/game/game.cpp',sha256=sha(cpp))]
        canonical=dict(assembly='Assembly-CSharp',compiled=True,producer=producer,generated_files=rows,emitted_methods=[dict(id='M:Own.Existing')])
        canonical_file=root/'config/phase2-game-translation.json';self.write(canonical_file,canonical)
        self.output=root/'build/diagnostic';(self.output/'game.cpp').write_bytes(cpp.read_bytes());(self.output/HEADER).write_text(header(),encoding='utf8')
        normal=dict(output=str(root/'src/game'),external_methods={'M:Own.Existing':'pls::existing'})
        normal_path=root/'build/translator/Assembly-CSharp-input.json';self.write(normal_path,normal)
        request=json.loads(json.dumps(normal));request['output']=str(self.output);request['external_methods'][CAPTURE]=CPP_NAME
        self.request=self.output/'candidate_request.json';self.write(self.request,request)
        variant=dict(diagnostic_only=True,normal_coverage_promoted=0,compiled=False,producer=producer,emitted_methods=[dict(id='M:Own.Existing'),dict(id='M:Own.Partial')])
        self.report=self.output/'candidate_report.json';self.write(self.report,variant)
        candidate=dict(report_path=self.report.name,report_sha256=sha(self.report),request_path=self.request.name,request_sha256=sha(self.request),canonical_request_sha256=sha(normal_path),guard_ids=[CAPTURE],producer_sha256=sha(helper),candidate_bodies=['M:Own.Partial'])
        self.manifest=dict(diagnostic_only=True,canonical_report_sha256=sha(canonical_file),canonical_files=rows,producer=producer,
            diagnostic_generator=dict(path='translator/diagnostic_snapshot.py',sha256=sha(generator)),traps=[dict(id=CAPTURE)],candidate_generation=candidate,candidate_bodies=['M:Own.Partial'],
            generated_files=[dict(path=p.name,sha256=sha(p))for p in [self.output/'game.cpp',self.output/HEADER]])
        self.save()
    def write(self,path,value):path.write_text(json.dumps(value),encoding='utf8')
    def save(self):self.write(self.output/'manifest.json',self.manifest)
    def validate(self):return validate_diagnostic_manifest(self.output,self.root)
    def test_valid_explicit_variant(self):self.assertTrue(self.validate()['diagnostic_only'])
    def test_normal_ledger_rejects_a_diagnostic_report_before_trusting_counts(self):
        for report in [dict(diagnostic_only=True,compiled=True),dict(diagnostic_leaf_guards={'ids':[CAPTURE]},compiled=True)]:
            with self.assertRaisesRegex(ValueError,'cannot promote'):validate_emission(report,'Assembly-CSharp')
    def test_partial_method_cannot_be_promoted(self):
        data=json.loads(self.report.read_text());data['normal_coverage_promoted']=1;self.write(self.report,data)
        self.manifest['candidate_generation']['report_sha256']=sha(self.report);self.save()
        with self.assertRaisesRegex(ValueError,'promote'):self.validate()
    def test_extra_override_is_rejected(self):
        data=json.loads(self.request.read_text());data['external_methods']['M:Own.HideLogic']='pls::fake';self.write(self.request,data)
        self.manifest['candidate_generation']['request_sha256']=sha(self.request);self.save()
        with self.assertRaisesRegex(ValueError,'beyond Capture'):self.validate()
    def test_canonical_method_withdrawal_is_rejected(self):
        data=json.loads(self.report.read_text());data['emitted_methods']=[dict(id='M:Own.Partial')];self.write(self.report,data)
        self.manifest['candidate_generation']['report_sha256']=sha(self.report);self.save()
        with self.assertRaisesRegex(ValueError,'body inventory'):self.validate()
if __name__=='__main__':unittest.main()
