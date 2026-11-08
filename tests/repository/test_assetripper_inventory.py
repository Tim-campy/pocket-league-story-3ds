"""Synthetic HTML fixtures for the metadata-only AssetRipper reader."""
import importlib.util
from pathlib import Path
import unittest

ROOT=Path(__file__).resolve().parents[2]
spec=importlib.util.spec_from_file_location('assetripper_inventory',ROOT/'tools/assetripper_inventory.py')
module=importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class AssetRipperPageTests(unittest.TestCase):
    def test_collection_assets_are_distinguished_from_dependency_rows(self):
        page=module.Page('''<h1>synthetic collection</h1><table><tbody>
<tr data-class="Texture2D"><td>7</td><td>Texture2D</td><td><a href="/Assets/View?Path=x&amp;y=z">synthetic</a></td></tr>
<tr><td>1</td><td>dependency metadata</td></tr></tbody></table>''')
        self.assertEqual(page.title,'synthetic collection')
        assets=[(attrs,cells) for attrs,cells in page.rows if 'data-class' in attrs]
        self.assertEqual(len(assets),1)
        self.assertEqual(assets[0][1][0],'7')
        self.assertEqual(page.links,['/Assets/View?Path=x&y=z'])

    def test_metadata_cells_ignore_markup(self):
        page=module.Page('<table><tr><th>Width</th><td><span>64</span></td></tr><tr><th>Height</th><td>32</td></tr></table>')
        fields={cells[0]:cells[1] for attrs,cells in page.rows}
        self.assertEqual(fields,{'Width':'64','Height':'32'})


if __name__=='__main__':
    unittest.main()
