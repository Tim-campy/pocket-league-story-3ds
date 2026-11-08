"""Regression: unchanged top-level C++ must not hide changed included bodies."""
from pathlib import Path
import tempfile
import sys
import unittest
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
from build_pc import source_snapshot
class BuildInputSnapshotTests(unittest.TestCase):
    def test_changed_chunk_is_bound_even_if_cpp_is_identical(self):
        parent=(ROOT/'build/input-snapshot-tests').resolve();parent.mkdir(parents=True,exist_ok=True)
        self.assertTrue(parent.is_relative_to(ROOT.resolve()))
        with tempfile.TemporaryDirectory(dir=parent)as folder:
            root=Path(folder).resolve();self.assertTrue(root.is_relative_to(parent))
            game=root/'src/game';game.mkdir(parents=True)
            cpp=game/'game.cpp';chunk=game/'body.inc';header=game/'game.hpp'
            cpp.write_text('#include "body.inc"\n');chunk.write_text('int own(){return 1;}\n');header.write_text('int own();\n')
            before=source_snapshot(root);chunk.write_text('int own(){return 2;}\n');after=source_snapshot(root)
            self.assertEqual(before['src/game/game.cpp'],after['src/game/game.cpp'])
            self.assertNotEqual(before['src/game/body.inc'],after['src/game/body.inc'])
            self.assertIn('src/game/game.hpp',before)
if __name__=='__main__':unittest.main()
