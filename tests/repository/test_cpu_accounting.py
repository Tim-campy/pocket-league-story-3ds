"""A caller must not inherit the sampled cost of its inlined runtime work."""
import sys
from pathlib import Path
import unittest
sys.path.insert(0, str(Path(__file__).resolve().parents[2]/'tools/profiling'))
from cpu_accounting import category


class AttributionTests(unittest.TestCase):
    def test_inline_refcount_wins_over_game_caller(self):
        self.assertEqual(category([{'symbol':'std::_Ref_count_base::_Incref'},
            {'symbol':'pls::game::cs_hot'}]), 'runtime/refcount')

    def test_copy_is_not_an_atomic_instruction(self):
        self.assertEqual(category([{'symbol':'std::_Ptr_base<Example>::_Copy_construct_from'},
            {'symbol':'pls::game::cs_hot'}]), 'runtime/reference-copy-other')

    def test_unknown_inline_is_not_logic(self):
        self.assertEqual(category([{'symbol':'unrecognized_template'},
            {'symbol':'pls::game::cs_hot'}]), 'unattributed/inlined-library')

    def test_type_init_is_not_game_logic(self):
        self.assertEqual(category([{'symbol':'pls::game::cs_init_123'}]), 'runtime/type-init')

    def test_array_access_is_not_pure_bounds_cost(self):
        self.assertEqual(category([{'symbol':'pls::cs::Array<int>::at'}]), 'runtime/array-access-and-bounds')

    def test_game_and_portable_are_distinct(self):
        self.assertEqual(category([{'symbol':'pls::game::cs_hot'}]), 'game-logic')
        self.assertEqual(category([{'symbol':'pls::generated::cs_hot'}]), 'portable-kairo')


if __name__ == '__main__': unittest.main()
