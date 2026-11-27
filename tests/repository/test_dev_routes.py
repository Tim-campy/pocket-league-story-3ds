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


class AffectedSelection(unittest.TestCase):
    def test_doc_class_drops_the_member_prefix(self):
        self.assertEqual(dev.doc_class('M:game.Team.Update(System.Int32)'), 'game.Team')
        self.assertEqual(dev.doc_class('P:system.form.HttpForm.ResultData.Value'), 'system.form.HttpForm.ResultData')
        self.assertEqual(dev.doc_class('M:data.BaseData.#ctor'), 'data.BaseData')

    def test_change_outside_a_method_selects_the_runs_of_its_class(self):
        # Before the fix a constant above the first `// M:` line selected no route at all.
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            game = root / 'src/game'; game.mkdir(parents=True)
            (game / 'game.Camera.cpp').write_text('constexpr float pan = 6.0f;\n// M:game.Camera.Update\nvoid Update() {}\n', encoding='utf8')
            attempts = root / 'build/pc-frozen-diagnostic-release/attempts'
            for number, ids in ((1, ['M:game.Camera.Update']), (2, ['M:game.Team.Update'])):
                (attempts / str(number)).mkdir(parents=True)
                (attempts / str(number) / 'readable-method-counters.json').write_text(json.dumps([dict(id=i, calls=1, completed=1) for i in ids]))
            (root / 'build/c6b-route-set-frozen.json').write_text(json.dumps(dict(runs={'10': dict(readable_attempt=1), '20': dict(readable_attempt=2)})))
            real_root, real_run = dev.ROOT, dev.subprocess.run
            dev.ROOT = root
            dev.subprocess.run = lambda command, *a, **k: types.SimpleNamespace(stdout='@@ -1 +1 @@\n-x\n+y\n')
            try: keys, reasons = dev.affected_selection('HEAD', names={'src/game/game.Camera.cpp'})
            finally: dev.ROOT, dev.subprocess.run = real_root, real_run
        self.assertEqual(keys, ['10'], reasons)


class CoverageGate(unittest.TestCase):
    def test_lost_methods_fail_unless_scenarios_or_never_replayed(self):
        lost = dev.lost_coverage(['M:game.Tenant.DestructTenant', 'M:surface.GamePad.SetMode(System.Int32)', 'M:form.GameForm.SetScale(System.Int32)'],
                                 {'M:form.GameForm.SetScale(System.Int32)'})
        self.assertEqual(lost, ['M:game.Tenant.DestructTenant'])


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


class Durations(unittest.TestCase):
    def test_newest_dated_backup_is_used_when_the_state_was_moved(self):
        with tempfile.TemporaryDirectory() as folder:
            build = Path(folder)
            (build / 'c6b-route-set-frozen-20261126-010000.json').write_text(json.dumps(dict(runs={'1': dict(seconds=5)})))
            (build / 'c6b-route-set-frozen-20261127-010000.json').write_text(json.dumps(dict(runs={'1': dict(seconds=900)})))
            (build / 'c6b-route-set-frozen-subset.json').write_text(json.dumps(dict(runs={'1': dict(seconds=1)})))
            self.assertEqual(routes.previous_durations(build), {'1': 900})
            (build / 'c6b-route-set-frozen.json').write_text(json.dumps(dict(runs={'1': dict(seconds=42)})))
            self.assertEqual(routes.previous_durations(build), {'1': 42})


if __name__ == '__main__': unittest.main()
