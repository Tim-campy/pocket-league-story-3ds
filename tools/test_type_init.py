"""Run independent CLR type-initialization source oracles using the existing harness."""
import hashlib
import importlib.util
import json
from pathlib import Path
import sys
ROOT=Path(__file__).resolve().parents[1]
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    runner=ROOT/'tests/translator/run_semantic_fixtures.py'
    spec=importlib.util.spec_from_file_location('type_init_semantic_runner',runner)
    module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)
    module.FIXTURES['TypeInitFixtures']=('type-init-fixtures','type_init_fixtures.cpp','type-init')
    sys.argv=[str(runner),'--fixture','TypeInitFixtures'];result=module.main()
    if result:return result
    target=ROOT/'config/phase2-type-init-fixtures.json';report=json.loads(target.read_text(encoding='utf-8'))
    report['inputs']['src/kairo/common/managed_type_init.hpp']=sha(ROOT/'src/kairo/common/managed_type_init.hpp')
    report['inputs']['tools/test_type_init.py']=sha(Path(__file__))
    report['operation']='independent-CLR-cctor-versus-native-TypeInitState'
    report['limitations']+=['Tests use explicit C# static constructors, not all beforefieldinit scheduling freedoms.',
        'Cross-thread cycles through arbitrary user locks are outside this type-init coordinator.']
    target.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    return 0
if __name__=='__main__':sys.exit(main())
