"""Route-set tooling fixes of 2026-11-27 (changes.md): --affected class matching, coverage gate,
longest-first durations and the versioned replay copies. No game is built or run."""
import importlib.util
import json
from pathlib import Path
import sys
import tempfile
import types
import unittest

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))


def load(name, path):
    spec = importlib.util.spec_from_file_location(name, ROOT / path)
    module = importlib.util.module_from_spec(spec); spec.loader.exec_module(module); return module


dev = load('dev_under_test', 'tools/dev.py')
routes = load('routes_under_test', 'tools/run_readable_routes.py')


class ScenarioVerdict(unittest.TestCase):
    """A scenario that reached `end` but failed afterwards must not pass (review of 2026-11-27)."""
    GOOD = dict(number=1, route_result=dict(status='done', frame=10, last_step=3, timeout=None), process_exit_code=0, exit_code=0,
                stage='process-executed', translation_gap_detected=False, reachability_alerts=[], stopped_at_timeout=False,
                stopped_reason=None, trap_count=0)

    def failures(self, returncode=0, **changes):
        return dev.scenario_failures(returncode, {**self.GOOD, **changes})

    def test_clean_run_passes(self):
        self.assertEqual(self.failures(), [])

    def test_each_failure_after_done_is_rejected(self):
        cases = {'tool exit 1': dict(returncode=1), 'game exit 1': dict(process_exit_code=1), 'game exit missing': dict(process_exit_code=None),
                 'translation gap': dict(translation_gap_detected=True, stage='diagnostic-gap-detected'),
                 'gc alert': dict(reachability_alerts=[dict(id='x', stack=[])]), 'time limit': dict(stopped_at_timeout=True, stopped_reason='timeout'),
                 'trap': dict(trap_count=1), 'stage': dict(stage='linked'), 'exit code': dict(exit_code=2),
                 'timeout note with done': dict(route_result=dict(status='done', timeout='{"note":"x"}'))}
        for name, change in cases.items():
            with self.subTest(name): self.assertTrue(self.failures(**change), name)

    def test_unfinished_route_and_missing_attempt_are_rejected(self):
        self.assertIn('stalled', ' '.join(self.failures(route_result=dict(status='timeout', timeout='{"note":"stalled 600 frames"}'))))
        self.assertTrue(self.failures(route_result=dict(status='incomplete', timeout=None)))
        self.assertTrue(dev.scenario_failures(0, {}))


class SaveReload(unittest.TestCase):
    def test_snapshot_checks_persisted_fields(self):
        state=dict(money=123,tenants=[[1,1,2,3,4]],cursor=[10,20],camera=[30,40])
        self.assertEqual(dev.saved_game_differences(state,dict(state)),[])
        self.assertEqual(dev.saved_game_differences(state,{**state,'money':0}),['money'])
        self.assertTrue(dev.saved_game_differences(state,None))



if __name__ == '__main__': unittest.main()
