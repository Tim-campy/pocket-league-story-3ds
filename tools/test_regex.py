"""Differentially verify the regex subset exercised by language/text layout."""
import importlib.util
from pathlib import Path
import sys
ROOT=Path(__file__).resolve().parents[1]
def main():
    runner=ROOT/'tests/translator/run_semantic_fixtures.py'
    spec=importlib.util.spec_from_file_location('regex_runner',runner)
    module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)
    fixture='RegexFixtures'
    module.FIXTURES[fixture]=('regex-fixtures','regex_fixtures.cpp','regex')
    module.EXTRA_NATIVE_SOURCES[fixture]=[ROOT/'src/kairo/common/managed_regex.cpp']
    module.EXTRA_INPUTS[fixture]=[Path(__file__),ROOT/'src/kairo/common/managed_regex.hpp']
    module.EXTRA_CSHARP_REFERENCES[fixture]=['System.Text.RegularExpressions']
    module.EXTRA_MONO_REFERENCES[fixture]=['System']
    sys.argv=[str(runner),'--fixture',fixture];return module.main()
if __name__=='__main__':sys.exit(main())
