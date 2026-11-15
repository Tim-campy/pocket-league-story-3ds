"""Hand-written storage holding managed references must be audited and rooted.

tools/gc_root_scan.py finds namespace-scope variables, static/inline static
members, function statics and thread_locals in src/runtime, src/kairo (not
generated) and src/main whose type names a managed reference (Ref, String,
Array, Delegate, SharedField, ...) or an aggregate known to contain them.
Every finding must be listed in config/gc-root-inventory.json with its rooting
form, and the form is checked:

- provider: the name is traced (trace_value/trace_edges) in the same unit;
- provider-other-unit: traced in the unit named by root_unit;
- provider-thread-local: a thread_local provider captures its address;
- uncaptured-functions: std::function storage whose installers capture nothing
  (managed types only in signatures);
- not-installed: std::function storage that no source installs;
- self-rooted: cs::RootedOnce / cs::Pinned, which register their own root.

A new storage location therefore fails until someone audits it.
"""
import json
import re
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
import gc_root_scan  # noqa: E402

FORMS = {'provider', 'provider-other-unit', 'provider-thread-local', 'uncaptured-functions', 'not-installed', 'self-rooted'}


def inventory():
    return json.loads((ROOT / 'config/gc-root-inventory.json').read_text(encoding='utf-8'))['entries']


class GcRootInventoryTests(unittest.TestCase):
    def test_every_finding_is_inventoried(self):
        listed = {(e['file'], e['name'], e['storage']) for e in inventory()}
        missing = sorted({(f['file'], f['name'], f['storage']) for f in gc_root_scan.scan()} - listed)
        self.assertEqual(missing, [], 'Audit these locations and add them to config/gc-root-inventory.json')

    def test_inventory_has_no_stale_entries(self):
        found = {(f['file'], f['name'], f['storage']) for f in gc_root_scan.scan()}
        stale = sorted((e['file'], e['name'], e['storage']) for e in inventory() if (e['file'], e['name'], e['storage']) not in found)
        self.assertEqual(stale, [])

    def test_rooting_forms_hold(self):
        for entry in inventory():
            with self.subTest(entry=(entry['file'], entry['name'])):
                form = entry['rooting']
                self.assertIn(form, FORMS)
                if form in ('provider', 'provider-other-unit'):
                    unit = ROOT / (entry['root_unit'] or entry['file'])
                    self.assertIn(entry['name'], gc_root_scan.traced_names(unit))
                elif form == 'provider-thread-local':
                    text = (ROOT / entry['root_unit']).read_text(encoding='utf-8')
                    self.assertRegex(text, r'thread_local\s+(?:cs::)?GcRootProvider\b[^;]*&' + re.escape(entry['name']))
                elif form == 'not-installed':
                    assigned = [p.relative_to(ROOT).as_posix() for folder in ('src', 'tests') for p in (ROOT / folder).rglob('*.[ch]pp')
                                if re.search(r'\b' + re.escape(entry['name']) + r'\s*=(?!=)', p.read_text(encoding='utf-8', errors='replace'))]
                    self.assertEqual(assigned, [], 'Installed now: pin captured managed references and change the form')
                elif form == 'self-rooted':
                    # cs::RootedOnce / cs::Pinned register their own GcRootProvider.
                    self.assertRegex(entry['type'], r'^(?:cs::)?(?:RootedOnce|Pinned)<')
                else:
                    self.assertTrue(entry['note'])

    def test_scanner_detects_managed_storage(self):
        sample = 'namespace x {\ncs::Ref<Foo> cached{};\nint plain=0;\nstruct S { static cs::String name; int f(); };\nvoid g(){ static auto value=make(); int local=0; }\n}\n'
        folder = ROOT / 'build/gc-root-scan-fixture'
        folder.mkdir(parents=True, exist_ok=True)
        path = folder / 'sample.cpp'
        path.write_text(sample, encoding='utf-8')
        try:
            names = {(f['name'], f['storage']) for f in gc_root_scan.scan_file(path)}
        finally:
            path.unlink()
        self.assertEqual(names, {('cached', 'namespace'), ('name', 'class-static'), ('value', 'function-static')})


if __name__ == '__main__':
    unittest.main()
