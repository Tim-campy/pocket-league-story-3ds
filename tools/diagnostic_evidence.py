"""Summarize retained private logs without granting method or screen coverage."""
import hashlib,json
from pathlib import Path

def frame_evidence(root):
    root=Path(root).resolve();history=root/'config/phase2-diagnostic-attempts.json'
    result=dict(available=False,max_reported_presented_frames=0,attempts_with_frames=[],normal_methods_promoted=0,title_verified=False,menu_verified=False)
    if not history.exists():return result
    for attempt in json.loads(history.read_text(encoding='utf8')).get('attempts',[]):
        if attempt.get('configuration')!='Release'or not attempt.get('diagnostic_only')or attempt.get('game_coverage_promoted')is not False:continue
        for row in attempt.get('logs',[]):
            if not row['path'].endswith('/game-run.stderr'):continue
            path=(root/row['path']).resolve()
            if not path.is_relative_to(root/'build'):raise ValueError('Diagnostic log escaped private build')
            if not path.is_file():continue # A fresh clone does not carry logs.
            data=path.read_bytes()
            if hashlib.sha256(data).hexdigest()!=row['sha256']:raise ValueError('Retained diagnostic log differs')
            frames=0
            for line in data.splitlines():
                if not line.startswith(b'PLS_PC_METRICS='):continue
                try:value=json.loads(line[len(b'PLS_PC_METRICS='):])
                except (ValueError,UnicodeError):continue
                n=value.get('completed_presented_frames')
                if value.get('event')in('memory','frame_summary')and value.get('game_screen')=='UNKNOWN'and type(n)is int and n>=0:frames=max(frames,n)
            if frames:
                result['available']=True;result['max_reported_presented_frames']=max(result['max_reported_presented_frames'],frames)
                result['attempts_with_frames'].append(dict(number=attempt['number'],max_reported_presented_frames=frames,log_sha256=row['sha256']))
    return result
