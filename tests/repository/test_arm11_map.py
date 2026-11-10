import importlib.util
from pathlib import Path
import tempfile
import unittest

ROOT=Path(__file__).resolve().parents[2]
spec=importlib.util.spec_from_file_location('arm_map',ROOT/'tools/measure_arm11_binary.py')
module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)

class ArmMapTests(unittest.TestCase):
    def test_debug_offsets_are_not_allocated_addresses(self):
        sections=[dict(name='.text',address=0x100000,bytes=16,flags='AX',kind='PROGBITS'),
                  dict(name='.rodata',address=0x200000,bytes=16,flags='A',kind='PROGBITS')]
        data=''' .debug_info 0x100000 0x200000 CMakeFiles/null_main.o
 .text.unused 0x0 0x200000 libdiscarded.a(foo.o)
 .text.a 0x100000 0x4 CMakeFiles/null_main.o
 .text.b
                0x100008 0x4 /sdk/libgcc.a(helper.o)
 .rodata.table 0x200000 0x10 libnull_runtime.a(managed_collation.cpp.o)
'''
        with tempfile.TemporaryDirectory() as folder:
            path=Path(folder)/'own.map';path.write_text(data)
            result=module.map_provenance(path,sections)['sections']
        self.assertEqual(result['.text'],{'benchmark_host':4,'libgcc.a':4,'padding_or_unattributed':8})
        self.assertEqual(result['.rodata'],{'collation_runtime_and_constants':16,'padding_or_unattributed':0})

if __name__=='__main__':unittest.main()
