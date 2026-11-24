"""One-off: move bulky per-attempt detail out of the tracked diagnostic history.

See tools/attempt_details.py. Rewrites config/phase2-diagnostic-attempts.json
(same separators as tools/build_pc.py) and prints the size before and after.
"""
import json
from pathlib import Path
import attempt_details

ROOT = Path(__file__).resolve().parents[1]
path = ROOT / 'config/phase2-diagnostic-attempts.json'
before = path.stat().st_size
history = json.loads(path.read_text(encoding='utf-8'))
for attempt in history['attempts']:
    attempt_details.externalize(attempt)
path.write_text(json.dumps(history, separators=(',', ':')) + '\n', encoding='utf-8', newline='\n')
print(json.dumps(dict(before=before, after=path.stat().st_size, attempts=len(history['attempts']))))
