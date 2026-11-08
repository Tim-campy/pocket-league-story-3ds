"""Verify built-in encodings against own CLR source fixtures."""
import importlib.util
from pathlib import Path
import sys
ROOT=Path(__file__).resolve().parents[1]
def main():
    runner=ROOT/'tests/translator/run_semantic_fixtures.py'
    spec=importlib.util.spec_from_file_location('runtime_encoding_runner',runner)
    module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)
    fixture='RuntimeEncodingFixtures'
    module.FIXTURES[fixture]=('runtime-encoding-fixtures','runtime_encoding_fixtures.cpp','runtime-encoding')
    module.EXTRA_NATIVE_SOURCES[fixture]=[ROOT/'src/kairo/common/managed_encoding.cpp']
    module.EXTRA_INPUTS[fixture]=[Path(__file__),ROOT/'src/kairo/common/managed_encoding.hpp']
    sys.argv=[str(runner),'--fixture',fixture];return module.main()
if __name__=='__main__':sys.exit(main())
