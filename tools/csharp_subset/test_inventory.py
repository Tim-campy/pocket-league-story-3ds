"""Synthetic semantic fixtures: no source, phrase or asset from the game."""
import json
from pathlib import Path
import subprocess
import tempfile
import unittest

from inventory import ROOT, build, compiler_paths


class InventoryFixtures(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder = ROOT/'build/csharp-subset-fixtures'
        cls.runtime, cls.helper, _ = build(cls.folder/'tool')
        _, _, framework = compiler_paths()
        cls.reference = cls.folder/'reference'
        for assembly in ('Assembly-CSharp', 'KairoLibrary'):
            source = cls.reference/'src'/assembly
            source.mkdir(parents=True, exist_ok=True)
            (source/'AssemblyInfo.cs').write_text('// Synthetic fixture.\n', encoding='utf-8')
            order = cls.reference/'config/compile-order'/f'{assembly}.txt'
            order.parent.mkdir(parents=True, exist_ok=True)
            order.write_text(f'src/{assembly}/Input.cs\n', encoding='utf-8')
        game = '''
namespace kairo.unity.ui { public class Graphics { public void DrawString(string text) {} } }
namespace UnityEngine { public static class Resources { public static object Load(string path) { return null; } } }
class Demo {
    string[] notFollowed = new string[] { "fixture-array" };
    void Proxy(kairo.unity.ui.Graphics g, string value) { g.DrawString(value); }
    string GetText(string key) { return null; }
    void Run(kairo.unity.ui.Graphics g) {
        g.DrawString("fixture-direct");
        Proxy(g, "fixture-wrapper");
        string alias = "fixture-local";
        g.DrawString(alias);
        g.DrawString(GetText("fixture-key") == "fixture-condition" ? "fixture-left" : "fixture-right");
        g.DrawString("");
        string mutable = "fixture-mutable";
        mutable = GetText("fixture-reassigned-key");
        g.DrawString(mutable);
        g.DrawString(notFollowed[0]);
        UnityEngine.Resources.Load("fixture-resource");
    }
}
'''
        (cls.reference/'src/Assembly-CSharp/Input.cs').write_text(game, encoding='utf-8')
        (cls.reference/'src/KairoLibrary/Input.cs').write_text('class Unrelated {}\n', encoding='utf-8')
        references = [str(framework/'System.Private.CoreLib.dll'), str(framework/'System.Runtime.dll')]
        request = dict(reference=str(cls.reference), references={a: references for a in ('Assembly-CSharp', 'KairoLibrary')})
        request_path = cls.folder/'request.json'
        request_path.write_text(json.dumps(request), encoding='utf-8')
        output = cls.folder/'result.json'
        subprocess.run([str(cls.runtime), str(cls.helper), str(request_path), str(output)], check=True, capture_output=True)
        cls.raw = output.read_text(encoding='utf-8')
        cls.result = json.loads(cls.raw)

    def test_no_source_or_literal_values_are_serialized(self):
        self.assertTrue(self.result['no_literal_values_serialized'])
        for text in ('fixture-direct', 'fixture-wrapper', 'fixture-array', 'fixture-condition', 'fixture-resource'):
            self.assertNotIn(text, self.raw)

    def test_semantic_direct_wrapper_and_local_classification(self):
        row = next(x for x in self.result['string_class_counts'] if x['type'] == 'Demo')
        self.assertEqual(row['ui_value_direct'], 4)
        self.assertEqual(row['ui_value_wrapper'], 1)
        self.assertEqual(row['ui_value_single_assignment_local'], 1)
        self.assertEqual(row['ui_nonempty'], 5)
        self.assertEqual(row['code_key_direct'], 1)

    def test_keys_conditions_mutable_locals_and_field_arrays_stay_unknown(self):
        row = next(x for x in self.result['string_class_counts'] if x['type'] == 'Demo')
        self.assertEqual(row['total'], 12)
        self.assertEqual(row['unknown'], 5)
        self.assertEqual(row['empty'], 1)

    def test_semantic_binding_and_fixed_point_are_complete(self):
        self.assertEqual(self.result['semantic_errors_by_code'], {'Assembly-CSharp': {}, 'KairoLibrary': {}})
        self.assertFalse(self.result['wrapper_limit_reached'])


if __name__ == '__main__':
    unittest.main()
