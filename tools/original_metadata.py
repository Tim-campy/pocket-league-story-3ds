"""Original Unity metadata (UnityEngine.dll of the user's APK), without the translator.

The managed directory extracted from the authenticated APK stays outside the
repository; verify_phase2.py passes it in PLS_ORIGINAL_MANAGED (its
--original-managed). Before the freeze the translator request is still accepted
as a fallback.
"""
import json
import os
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def unity_engine():
    managed = os.environ.get('PLS_ORIGINAL_MANAGED')
    if managed:
        dll = Path(managed).resolve() / 'UnityEngine.dll'
    else:
        request = ROOT / 'build/translator/KairoLibrary-input.json'
        if not request.exists():
            raise FileNotFoundError('Set PLS_ORIGINAL_MANAGED to the Managed directory extracted from the authenticated APK')
        dll = next(Path(p).resolve() for p in json.loads(request.read_text(encoding='utf-8'))['references'] if Path(p).name == 'UnityEngine.dll')
    if not dll.is_file():
        raise FileNotFoundError(dll)
    if dll.is_relative_to(ROOT):
        raise ValueError('Original Unity metadata must remain outside the port')
    return dll
