"""Exercise the content gate on a real Git index, including forced additions."""
import importlib.util
from pathlib import Path
import subprocess
import tempfile
import unittest

SCRIPT = Path(__file__).resolve().parents[2]/'tools/check_repository.py'
spec = importlib.util.spec_from_file_location('policy', SCRIPT)
policy = importlib.util.module_from_spec(spec)
spec.loader.exec_module(policy)


class ContentPolicyTests(unittest.TestCase):
    def test_blocked_files_case_insensitive(self):
        for suffix in policy.BLOCKED_SUFFIXES:
            with self.subTest(suffix=suffix):
                self.assertIsNotNone(policy.violation('nested/game.'+suffix.upper(), 1))

    def test_private_paths_and_size(self):
        self.assertIsNotNone(policy.violation('assets/text.csv', 1))
        self.assertIsNotNone(policy.violation('build/report.json', 1))
        self.assertIsNone(policy.violation('tools/tool.py', 2_000_000))
        self.assertIsNotNone(policy.violation('docs/large.md', 2_000_001))

    def test_reference_pin(self):
        self.assertIsNone(policy.violation('reference', 0, '160000', policy.EXPECTED_REFERENCE))
        self.assertIsNotNone(policy.violation('reference', 0, '160000', '0'*40))

    def test_forced_git_index_asset_is_rejected(self):
        # Synthetic fixture only: no file from the game is used.
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            subprocess.run(['git', 'init', '-q', folder], check=True)
            (root/'.gitignore').write_text('*.dll\n', encoding='utf-8')
            (root/'forbidden.dll').write_bytes(b'synthetic-fixture')
            subprocess.run(['git', '-C', folder, 'add', '-f', 'forbidden.dll'], check=True)
            result = subprocess.run(['python', str(SCRIPT), '--staged'], cwd=folder, capture_output=True)
            self.assertEqual(result.returncode, 1)

    def test_oversized_index_blob_is_checked_even_after_working_file_removed(self):
        with tempfile.TemporaryDirectory() as folder:
            root=Path(folder)
            subprocess.run(['git','init','-q',folder],check=True)
            file=root/'large.txt';file.write_bytes(b'x'*2_000_001)
            subprocess.run(['git','-C',folder,'add','large.txt'],check=True)
            file.unlink()
            result=subprocess.run(['python',str(SCRIPT),'--staged'],cwd=folder,capture_output=True)
            self.assertEqual(result.returncode,1)


if __name__ == '__main__':
    unittest.main()
