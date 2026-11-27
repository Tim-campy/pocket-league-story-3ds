import contextlib
import csv
import importlib.util
import io
from pathlib import Path
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location('report_ctr_video', ROOT / 'tools/report_ctr_video.py')
reporter = importlib.util.module_from_spec(spec)
spec.loader.exec_module(reporter)


class VideoReportTests(unittest.TestCase):
    def test_exact_percentiles(self):
        d = reporter.distribution([i * 1_000_000 for i in range(1, 101)])
        self.assertEqual(d, dict(mean_ms=50.5, max_ms=100, p50_ms=50, p95_ms=95, p99_ms=99))

    def test_boot_and_transition_are_separate(self):
        row = dict(form_id=1, subform=-1, state=-1, match_state=-1, scale=0, moving=0,
                   transition=1, interaction=0, boot=1)
        self.assertEqual(reporter.scene_key(row)[-1], 'boot')
        row['boot'] = 0
        self.assertEqual(reporter.scene_key(row)[-1], 'transition')
        row['transition'] = 0
        self.assertEqual(reporter.scene_key(row)[-1], 'stable')

    def fixture(self, folder, session):
        rows = []
        for i in range(1, 26):
            row = dict(frame=i, form_id=9, subform=-1, state=0, match_state=-1, scale=100,
                       moving=0, transition=0, interaction=0, from_form=9, from_subform=-1,
                       from_state=0, logic_ns=i * 1_000_000, draw_cpu_ns=2_000_000,
                       gpu_wait_ns=3_000_000, frame_ns=i * 10_000_000, profile_ns=1000,
                       copies=6, copy_ns=500_000, min_linear_free=100000, min_vram_free=200000,
                       asset_reads=0, asset_ns=0, uploads=0, upload_ns=0, target_creations=0)
            rows.append(row)
        rows.append({**rows[-1], 'frame': 26, 'form_id': 4, 'subform': 3, 'transition': 1})
        with (folder / f'{session}-frames.csv').open('w', newline='') as stream:
            writer = csv.DictWriter(stream, fieldnames=list(rows[0]))
            writer.writeheader(); writer.writerows(rows)
        event = dict(frame=25, form_id=9, subform=-1, state=0, match_state=-1, sequence=1,
                     trigger=1, pause_ns=100_000_000, bytes_before=500, bytes_after=300,
                     objects_before=5, objects_after=3, source=f'{session}:M:method(A,B)')
        with (folder / f'{session}-gc.csv').open('w', newline='') as stream:
            writer = csv.DictWriter(stream, fieldnames=list(event))
            writer.writeheader(); writer.writerow(event)
        (folder / f'{session}-meta.txt').write_text('camera_position_version=2\nwritten=26\nframe_dropped=0\ngc_dropped=0\n')

    def test_groups_worst_gc_and_sessions(self):
        with tempfile.TemporaryDirectory() as temp:
            folder = Path(temp)
            self.fixture(folder, 'video-1'); self.fixture(folder, 'video-2')
            data = reporter.report(folder)
            self.assertEqual(len(data['sessions']), 2)
            for session in data['sessions']:
                stable = next(s for s in session['scenes'] if s['phase'] == 'stable')
                self.assertEqual(stable['frames'], 25)
                self.assertEqual(stable['over_50ms'], 20)
                self.assertEqual(len(stable['worst']), 20)
                self.assertEqual(stable['worst'][0]['frame'], 25)
                self.assertEqual(stable['worst'][-1]['frame'], 6)
                self.assertTrue(stable['worst'][0]['gc_events'][0]['source'].startswith(session['session']))
                self.assertFalse(session['warnings'])
            output = io.StringIO()
            with contextlib.redirect_stdout(output): reporter.print_report(data)
            self.assertIn('objects=5->3', output.getvalue())
            self.assertIn('M:method(A,B)', output.getvalue())

    def test_truncated_row_is_not_silently_accepted(self):
        with tempfile.TemporaryDirectory() as temp:
            path = Path(temp) / 'bad.csv'
            path.write_text('frame,form_id\n1\n')
            with self.assertRaisesRegex(ValueError, 'incomplete CSV'):
                list(reporter.read_csv(path))

    def test_discards_are_reported(self):
        with tempfile.TemporaryDirectory() as temp:
            folder = Path(temp); self.fixture(folder, 'video-1')
            (folder / 'video-1-meta.txt').write_text('camera_position_version=2\nwritten=26\nframe_dropped=1\ngc_dropped=2\n')
            warnings = reporter.report(folder)['sessions'][0]['warnings']
            self.assertEqual(len(warnings), 1)
            self.assertIn('discarded', warnings[0])

    def test_legacy_camera_warning_does_not_discard_timings(self):
        with tempfile.TemporaryDirectory() as temp:
            folder = Path(temp); self.fixture(folder, 'video-1')
            (folder / 'video-1-meta.txt').write_text('written=26\n')
            session = reporter.report(folder)['sessions'][0]
            self.assertIn('camera/moving', session['warnings'][0])
            self.assertEqual(sum(s['frames'] for s in session['scenes']), 26)
            self.assertEqual(session['scenes'][0]['times']['frame_ns']['max_ms'], 250)

    def test_between_frame_event_is_preserved_without_wrong_attribution(self):
        with tempfile.TemporaryDirectory() as temp:
            folder = Path(temp); self.fixture(folder, 'video-1')
            path = folder / 'video-1-gc.csv'
            rows = list(reporter.read_csv(path)); rows[0]['frame'] = 0
            with path.open('w', newline='') as stream:
                writer = csv.DictWriter(stream, fieldnames=list(rows[0]))
                writer.writeheader(); writer.writerows(rows)
            session = reporter.report(folder)['sessions'][0]
            self.assertEqual(session['gc_events'][0]['frame'], 0)
            self.assertTrue(all(not row['gc_events'] for scene in session['scenes'] for row in scene['worst']))
            (folder / 'video-1-meta.txt').write_text('written=26\ngc_events=2\n')
            self.assertIn('GC CSV', reporter.report(folder)['sessions'][0]['warnings'][0])


if __name__ == '__main__':
    unittest.main()
