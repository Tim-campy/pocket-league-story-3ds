"""A run must retain the launch identity even if its image is rebuilt."""
import contextlib
import hashlib
import importlib.util
import io
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

SCRIPT = Path(__file__).resolve().parents[2] / 'tools/run_arm11_null.py'


class ArmRunnerIdentity(unittest.TestCase):
    def run_case(self, mutate):
        spec = importlib.util.spec_from_file_location('arm_runner_fixture', SCRIPT)
        runner = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(runner)
        with tempfile.TemporaryDirectory(prefix='pls-arm-runner-') as directory:
            root = Path(directory)
            runner.ROOT = root
            runner.AZAHAR = root / 'emulator'
            (runner.AZAHAR / 'plugins').mkdir(parents=True)
            (runner.AZAHAR / 'azahar.exe').write_bytes(b'fixture, never executed')
            image = root / 'build/image/null_game.3dsx'
            image.parent.mkdir(parents=True)
            original = b'fixture launch image'
            image.write_bytes(original)
            expected = hashlib.sha256(original).hexdigest()
            (image.parent / 'build-proof.json').write_text(json.dumps({
                'executable_sha256': expected, 'diagnostic_only': True}))
            output = root / 'build/run'
            private = output / 'launcher/user/sdmc/pls-benchmark'

            def prepare(*args, **kwargs):
                private.mkdir(parents=True)
                (private / 'private-manifest.json').write_text(json.dumps({
                    'first_frame': 1, 'last_frame': 300}))

            class Process:
                pid = 12345

                def __init__(self, *args, **kwargs):
                    self.code = None
                    frames = ''.join('PLS_NULL_FRAME=' + json.dumps({
                        'frame': i, 'form_id': 4, 'wall_ns': 1000}) + '\n'
                        for i in range(1, 301))
                    (private / 'stdout.log').write_text(frames + 'PLS_NULL_MEMORY=1\n')
                    (private / 'stderr.log').write_text('')
                    log = output / 'launcher/user/log/azahar_log.txt'
                    log.parent.mkdir(parents=True)
                    log.write_text('System_IsNew3ds: true\nCore_CPUClockPercentage: 100\nRenderer_FrameLimit: 100\n')
                    if mutate:
                        image.write_bytes(b'later rebuilt image')

                def poll(self):
                    return self.code

                def terminate(self):
                    self.code = 0

                def wait(self, timeout):
                    return self.code

            argv = ['run', '--apk', str(root / 'unused.apk'), '--image', str(image),
                    '--output', str(output), '--scenario', 'menu', '--model', 'new']
            class Startup:
                dwFlags = 0

            with patch('sys.argv', argv), patch.object(runner.subprocess, 'run', prepare), \
                    patch.object(runner.subprocess, 'STARTUPINFO', Startup, create=True), \
                    patch.object(runner.subprocess, 'STARTF_USESHOWWINDOW', 1, create=True), \
                    patch.object(runner.subprocess, 'Popen', Process), contextlib.redirect_stdout(io.StringIO()):
                if mutate:
                    with self.assertRaises(SystemExit) as caught:
                        runner.main()
                    self.assertEqual(caught.exception.code, 1)
                else:
                    runner.main()
            report = json.loads((output / 'result.json').read_text())
            self.assertEqual(report['image_sha256'], expected)
            self.assertEqual(report['frames'], 300)
            self.assertTrue(report['diagnostic_only'])
            return report

    def test_rebuilt_image_is_rejected_without_relabeling_launch(self):
        report = self.run_case(True)
        self.assertEqual(report['status'], 'ARTIFACT_CHANGED')
        self.assertNotEqual(report['image_sha256'], report['image_after_sha256'])
        self.assertNotIn('elapsed_ms', report)

    def test_unchanged_image_keeps_complete_window(self):
        report = self.run_case(False)
        self.assertEqual(report['status'], 'WINDOW_COMPLETE')
        self.assertEqual(report['image_sha256'], report['image_after_sha256'])


if __name__ == '__main__':
    unittest.main()
