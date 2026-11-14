import sys
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[2]/'tools'))
from freeze_progress import criteria,markdown

class FreezeProgressTests(unittest.TestCase):
    def test_missing_slot_evidence_is_unknown(self):
        self.assertIn('UNKNOWN slots',criteria({}, {})[0][2])
    def test_complete_translation_does_not_approve_other_gates(self):
        rows=criteria({'game_translated_methods':1958,'game_executed_methods':1958},{'missing_virtual_definitions':[]})
        self.assertEqual(len(rows),5)
        # Only criterion 2 is met, by the user's hardware decision (v6, three runs);
        # a complete translation or execution count never approves the others.
        self.assertEqual([row[1]for row in rows].count('cumprido'),1)
        self.assertEqual(rows[1][1],'cumprido')
        self.assertIn('v6',rows[1][2])
        self.assertNotIn('cumprido',[row[1]for row in rows[:1]+rows[2:]])
        self.assertIn('0 slots',rows[0][2])
    def test_pending_counts_are_measured(self):
        text='\n'.join(markdown({'game_translated_methods':1768,'game_executed_methods':751},{'missing_virtual_definitions':['a','b']}))
        self.assertIn('1768/1958',text)
        self.assertIn('2 slots',text)
        self.assertIn('751',text)
        self.assertIn('alcançáveis' if Path(__file__).resolve().parents[2].joinpath('config/phase2-reachability.json').is_file() else 'métodos exercitados',text)
        self.assertIn('aprovação explícita',text)
