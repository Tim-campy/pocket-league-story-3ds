"""Stable identity normalization must retain parameter and method identity."""
import sys
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[2]/'tools/profiling'))
from arm_method_sizes import original_identity

class IdentityTests(unittest.TestCase):
    def test_nested_metadata_type(self):
        self.assertEqual(original_identity('Form/Worker::Run(System.Int32)'), 'Assembly-CSharp::Form+Worker::Run(System.Int32)')
    def test_ordinary_type_unchanged(self):
        self.assertEqual(original_identity('Camera::ConvertScreenToCamera(System.Int32[],System.Int32[])'), 'Assembly-CSharp::Camera::ConvertScreenToCamera(System.Int32[],System.Int32[])')

if __name__ == '__main__': unittest.main()
