"""Mechanism test for per-check verification groups (tools/verification_groups.py)."""
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
import verification_groups as vg  # noqa: E402

BASE = {
    'src/runtime/tracing_gc.cpp': 'a', 'src/kairo/common/semantic_runtime.cpp': 'a', 'src/kairo/common/forms.cpp': 'a',
    'src/kairo/api/forms.hpp': 'a', 'src/kairo/common/generated/portable_generated_type_x.cpp': 'a',
    'src/main/pc_main.cpp': 'a', 'src/game/game_generated_type_y.cpp': 'a', 'translator/Translator.cs': 'a',
    'tests/translator/LoweringFixtures.cs': 'a', 'reference/src/Assembly-CSharp/form/SubForm.cs': 'a',
    'config/boundary.csv': 'a', 'tools/test_tracing_gc.py': 'a', 'CMakeLists.txt': 'a',
}


def changed(path):
    after = dict(BASE)
    after[path] = 'b'
    return set(vg.invalidated(BASE, after))


class GroupMechanism(unittest.TestCase):
    def test_classification(self):
        self.assertEqual(vg.classify('src/runtime/tracing_gc.cpp'), 'runtime')
        self.assertEqual(vg.classify('src/kairo/api/forms.hpp'), 'runtime')  # headers reach runtime units
        self.assertEqual(vg.classify('src/kairo/common/managed_string_ops.cpp'), 'runtime')
        self.assertEqual(vg.classify('src/kairo/common/forms.cpp'), 'kairo')
        self.assertEqual(vg.classify('src/kairo/common/generated/x.cpp'), 'portable')
        self.assertEqual(vg.classify('src/main/pc_main.cpp'), 'kairo')
        self.assertEqual(vg.classify('src/game/x.cpp'), 'game')
        self.assertEqual(vg.classify('tests/translator/LoweringFixtures.cs'), 'fixtures')
        self.assertEqual(vg.classify('translator/Translator.cs'), 'translator')
        self.assertEqual(vg.classify('reference/src/x.cs'), 'reference')
        self.assertEqual(vg.classify('config/boundary.csv'), 'config')
        self.assertEqual(vg.classify('CMakeLists.txt'), 'tools')

    def test_game_change_reaches_only_game_consumers(self):
        hit = changed('src/game/game_generated_type_y.cpp')
        self.assertIn('progress', hit)
        self.assertNotIn('lowering-differential', hit)
        self.assertNotIn('tracing-gc-engine', hit)
        self.assertNotIn('runtime-GcFixtures', hit)

    def test_runtime_change_reaches_runtime_checks(self):
        hit = changed('src/runtime/tracing_gc.cpp')
        for name in ('tracing-gc-engine', 'runtime-GcFixtures', 'lowering-differential', 'progress'):
            self.assertIn(name, hit)
        self.assertNotIn('reference', hit)
        self.assertNotIn('android-math-static', hit)

    def test_platform_cpp_change_skips_runtime_only_checks(self):
        hit = changed('src/kairo/common/forms.cpp')
        self.assertIn('forms', hit)
        self.assertNotIn('tracing-gc-engine', hit)
        self.assertNotIn('runtime-SemanticFixtures', hit)

    def test_header_change_is_conservative(self):
        hit = changed('src/kairo/api/forms.hpp')
        self.assertIn('runtime-SemanticFixtures', hit)
        self.assertIn('forms', hit)

    def test_translator_change(self):
        hit = changed('translator/Translator.cs')
        self.assertIn('lowering-differential', hit)
        self.assertNotIn('tracing-gc-engine', hit)
        self.assertNotIn('storage', hit)

    def test_fixture_change(self):
        hit = changed('tests/translator/LoweringFixtures.cs')
        self.assertIn('lowering-differential', hit)
        self.assertIn('tracing-gc-engine', hit)
        self.assertNotIn('storage', hit)

    def test_tools_change_invalidates_everything_mapped(self):
        hit = changed('tools/test_tracing_gc.py')
        self.assertEqual(hit, set(vg.CHECK_GROUPS) | {'progress'})

    def test_unmapped_check_is_conservative(self):
        self.assertEqual(vg.groups_for('some-new-check'), vg.ALL)
        self.assertEqual(vg.groups_for('progress'), vg.ALL)


if __name__ == '__main__':
    unittest.main()
