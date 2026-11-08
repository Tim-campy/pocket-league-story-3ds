"""Verify exception references independently against own CLR source fixtures."""
import importlib.util
from pathlib import Path
import sys
ROOT=Path(__file__).resolve().parents[1]
def main():
    runner=ROOT/'tests/translator/run_semantic_fixtures.py'
    spec=importlib.util.spec_from_file_location('exception_reference_runner',runner)
    module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)
    fixture='ExceptionObjectFixtures'
    module.FIXTURES[fixture]=('exception-object-fixtures','exception_object_fixtures.cpp','exception-objects')
    module.EXTRA_NATIVE_SOURCES[fixture]=[ROOT/'src/kairo/common/managed_exceptions.cpp']
    module.EXTRA_INPUTS[fixture]=[Path(__file__),ROOT/'src/kairo/common/managed_exceptions.hpp',ROOT/'src/kairo/common/managed_type_init.hpp',ROOT/'src/kairo/common/managed_thread.hpp']
    sys.argv=[str(runner),'--fixture',fixture];return module.main()
if __name__=='__main__':sys.exit(main())
