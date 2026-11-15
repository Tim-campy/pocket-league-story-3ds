"""Every static field storage emitted by the translator must be a GC root.

The translator declares static storage as `static T cs_<hash>_value{};` in the
unit that owns the field and traces it from a GcRootProvider in the same unit:
the type initializer's provider, or `<init>_unit_roots` when the type is
initialized by another unit (KairoLibrary members first needed by the game).
A storage missing from every provider is invisible to the collector; on
2026-11-15 this left Language.systemLangPackFiles_ unrooted and the language
screen failed intermittently (NullReferenceException/IndexOutOfRangeException).
"""
import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
STORAGE = re.compile(r'^static (?!pls::cs::GcRootProvider)(.+?) (cs_[0-9a-f]{16})_value\{\};', re.M)
SCALAR = re.compile(r'^(?:bool|char16_t|float|double|std::u?int(?:8|16|32|64)_t)$')


def unrooted(folder):
    missing = []
    for path in sorted((ROOT / folder).glob('*.cpp')):
        text = path.read_text(encoding='utf-8')
        for match in STORAGE.finditer(text):
            kind, name = match.group(1), match.group(2)
            if SCALAR.match(kind):
                continue
            if 'trace_value(' + name + '_value,' not in text:
                missing.append(f'{path.relative_to(ROOT).as_posix()}: {name}_value ({kind})')
    return missing


class GeneratedStaticRootsTests(unittest.TestCase):
    def test_game_statics_are_rooted(self):
        self.assertEqual(unrooted('src/game'), [])

    def test_portable_statics_are_rooted(self):
        self.assertEqual(unrooted('src/kairo/common/generated'), [])

    def test_detector_flags_missing_root(self):
        sample = 'static pls::cs::String cs_0123456789abcdef_value{};\n'
        self.assertTrue(STORAGE.search(sample))
        self.assertFalse(SCALAR.match('pls::cs::String'))
        self.assertTrue(SCALAR.match('std::int32_t'))


if __name__ == '__main__':
    unittest.main()
