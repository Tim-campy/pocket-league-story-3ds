"""Compare logical GetExtension to own historical/current Windows CLR cases."""
import importlib.util
from pathlib import Path
import sys
ROOT=Path(__file__).resolve().parents[1]
def main():
    runner=ROOT/'tests/translator/run_semantic_fixtures.py'
    spec=importlib.util.spec_from_file_location('path_runner',runner)
    module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)
    fixture='PathFixtures';module.FIXTURES[fixture]=('path-fixtures','path_fixtures.cpp','path')
    module.EXTRA_INPUTS[fixture]=[Path(__file__),ROOT/'src/kairo/common/managed_path.hpp']
    sys.argv=[str(runner),'--fixture',fixture];return module.main()
if __name__=='__main__':sys.exit(main())
