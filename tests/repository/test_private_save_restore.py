import hashlib,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2];sys.path.insert(0,str(ROOT/'tools'))
from build_pc import restore_private_preferences
class PrivateSaveRestoreTests(unittest.TestCase):
    def test_only_earlier_save_is_copied_and_hashed_without_overwrite(self):
        with tempfile.TemporaryDirectory()as temp:
            root=Path(temp);source=root/'attempts/1/preferences/records';source.mkdir(parents=True);(source/'0000').write_bytes(b'own synthetic state')
            receipt=restore_private_preferences(root,1,2)
            self.assertEqual((root/'attempts/2/preferences/records/0000').read_bytes(),b'own synthetic state')
            self.assertEqual(receipt['files'][0]['sha256'],hashlib.sha256(b'own synthetic state').hexdigest())
            with self.assertRaises(ValueError):restore_private_preferences(root,1,2)
            with self.assertRaises(ValueError):restore_private_preferences(root,2,1)
            self.assertEqual((source/'0000').read_bytes(),b'own synthetic state')
    def test_empty_save_is_not_accepted(self):
        with tempfile.TemporaryDirectory()as temp:
            root=Path(temp);(root/'attempts/1/preferences').mkdir(parents=True)
            with self.assertRaisesRegex(ValueError,'no private save'):restore_private_preferences(root,1,2)
if __name__=='__main__':unittest.main()
