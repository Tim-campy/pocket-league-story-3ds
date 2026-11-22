"""Bulky per-attempt detail kept out of the tracked diagnostic history.

config/phase2-diagnostic-attempts.json is tracked and must stay under the
content-policy size limit (tools/check_repository.py, 2,000,000 bytes). The
per-frame capture list and the Ninja dependency audit of each attempt grow
without bound, so they live in a private file
build/diagnostic-attempt-details/<attempt>.json; the tracked record keeps a
`details` pointer (path, SHA-256, keys) that binds the private file to it.
"""
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DETAILS = ROOT / 'build/diagnostic-attempt-details'
BULKY = ('frame_captures', 'dependency_audit')


def externalize(attempt, folder=DETAILS):
    """Move the bulky keys of one attempt record to its private detail file."""
    moved = {key: attempt.pop(key) for key in BULKY if key in attempt}
    if not moved:
        return attempt
    if 'number' not in attempt:
        attempt.update(moved)  # no stable name; leave it in place
        return attempt
    previous = attempt.get('details')
    if previous:
        moved = {**json.loads((ROOT / previous['path']).read_text(encoding='utf-8')), **moved}
    folder = (ROOT / folder).resolve()
    folder.mkdir(parents=True, exist_ok=True)
    path = folder / f"{attempt['number']}.json"
    text = json.dumps(moved, separators=(',', ':')) + '\n'
    path.write_text(text, encoding='utf-8', newline='\n')
    attempt['details'] = dict(path=path.relative_to(ROOT).as_posix(),
                              sha256=hashlib.sha256(text.encode('utf-8')).hexdigest(), keys=sorted(moved))
    return attempt


def field(attempt, key, default=None):
    """A bulky field of an attempt record, from the record or its verified detail file."""
    if key in attempt:
        return attempt[key]
    pointer = attempt.get('details')
    if not pointer or key not in pointer.get('keys', []):
        return default
    path = ROOT / pointer['path']
    if not path.is_file():
        raise FileNotFoundError(f"Private attempt detail missing: {pointer['path']}")
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != pointer['sha256']:
        raise ValueError(f"Private attempt detail changed: {pointer['path']}")
    return json.loads(data.decode('utf-8')).get(key, default)
