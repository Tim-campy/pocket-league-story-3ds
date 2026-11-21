"""Performance bisection on the Azahar emulator (canonical game, null backend).

For each commit: a detached worktree under .claude/worktrees/bisect-<sha>, that
commit's own diagnostic snapshot, ARM build and Azahar run (match and/or menu,
New 3DS). Results go to build/perf-bisect/<sha>-<scenario>-<n>.json and are
summarised in build/perf-bisect/summary.json. Local build folders (deps,
generated, asset pack, converted assets) are shared by junctions; nothing from
the APK enters Git.

Same method for every point: tools/run_arm11_null.py --scenario S --model new
--asset-root build/ctr-assets-native-v1, reading result.json elapsed_ms.
"""
import argparse, json, os, shutil, subprocess, sys, time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'build/perf-bisect'
MANAGED = 'C:/Users/l_abn/Documents/Projetos/Pocket League Story/original/extracted/assets/bin/Data/Managed'
SHARED = ['build/deps', 'build/generated', 'assets']
COPIED = ['build/ctr-assets-native-v1']  # prepare_arm11_sd resolves the path: it must really be inside the tree


def run(cmd, cwd, log):
    with open(log, 'wb') as f:
        return subprocess.run([str(c) for c in cmd], cwd=cwd, stdout=f, stderr=subprocess.STDOUT).returncode


def junction(link, target):
    if link.exists():
        return
    link.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run(['cmd', '/c', 'mklink', '/J', str(link), str(target)], check=True, capture_output=True)


def prepare(sha):
    tree = ROOT / '.claude/worktrees' / ('bisect-' + sha)
    if not tree.exists():
        subprocess.run(['git', 'worktree', 'add', '--detach', str(tree), sha], cwd=ROOT, check=True, capture_output=True)
    if not (tree / 'reference/src').is_dir():  # removed after each point (3.3 GB)
        for attempt in range(3):  # transient lock failures seen when worktrees run back to back
            if subprocess.run(['git', 'submodule', 'update', '--init'], cwd=tree, capture_output=True).returncode == 0:
                break
            time.sleep(10)
        else:
            raise RuntimeError(f'{sha}: submodule update failed')
    for rel in SHARED:
        junction(tree / rel, ROOT / rel)
    for rel in COPIED:
        target = tree / rel
        if target.is_dir() and not any(target.iterdir()) or (target.exists() and target.resolve() != target):
            subprocess.run(['cmd', '/c', 'rmdir', str(target)], check=True)
        if not target.exists():
            shutil.copytree(ROOT / rel, target)
    # Replay anchors and saves used by prepare_arm11_sd (menu 34/25, match 35/31).
    for n in (25, 31, 34, 35):
        target = tree / f'build/pc-diagnostic-release/attempts/{n}'
        if not target.exists():
            shutil.copytree(ROOT / f'build/pc-diagnostic-release/attempts/{n}', target)
    shutil.copyfile(ROOT / 'build/claude-run-utf8.py', tree / 'build/claude-run-utf8.py')
    return tree


def build(sha, tree, apk, label, extra):
    image = tree / 'build/bisect-arm' / 'null_game.3dsx'
    if image.exists() and not extra:
        return image
    OUT.mkdir(parents=True, exist_ok=True)
    if not (tree / 'build/translator/bootstrap_source.cs').exists():
        # The snapshot reads that commit's translator request and bootstrap source.
        rc = run([sys.executable, 'build/claude-run-utf8.py', 'tools/translate', '--assembly', 'Assembly-CSharp', '--bootstrap-main',
                  '--diagnostics-only', '--original-managed', MANAGED], tree, OUT / f'{label}-translate.log')
        if rc:
            raise RuntimeError(f'{sha}: translator diagnostics failed')
        subprocess.run(['git', 'checkout', '--', 'config'], cwd=tree, capture_output=True)
    snapshot = tree / 'build/bisect-snapshot'
    if snapshot.exists():
        shutil.rmtree(snapshot)
    rc = run([sys.executable, 'build/claude-run-utf8.py', 'translator/diagnostic_snapshot.py', '--output', snapshot], tree, OUT / f'{label}-snapshot.log')
    if rc:
        raise RuntimeError(f'{sha}: snapshot failed (see {label}-snapshot.log)')
    arm = tree / 'build/bisect-arm'
    if arm.exists():
        shutil.rmtree(arm)
    started = time.time()
    rc = run([sys.executable, 'tools/build_arm11_null.py', '--apk', apk, '--snapshot', snapshot, '--output', arm, *extra], tree, OUT / f'{label}-build.log')
    if rc or not image.exists():
        raise RuntimeError(f'{sha}: ARM build failed (see {label}-build.log)')
    return image, round(time.time() - started)


def measure(sha, tree, apk, image, scenario, label):
    out = tree / f'build/bisect-run-{scenario}'
    if out.exists():
        shutil.rmtree(out)
    rc = run([sys.executable, 'tools/run_arm11_null.py', '--apk', apk, '--image', image, '--output', out, '--scenario', scenario,
              '--model', 'new', '--asset-root', tree / 'build/ctr-assets-native-v1'], tree, OUT / f'{label}-{scenario}-run.log')
    result = out / 'result.json'
    if not result.exists():
        return dict(status='NO_RESULT', returncode=rc)
    d = json.loads(result.read_text(encoding='utf-8'))
    return dict(status=d.get('status'), returncode=rc, elapsed_ms=d.get('elapsed_ms'), frames=d.get('frames'),
                form_ids=d.get('form_ids'), image_sha256=d.get('image_sha256'), emulator_sha256=d.get('emulator_sha256'))


def main():
    p = argparse.ArgumentParser()
    p.add_argument('--apk', required=True)
    p.add_argument('--commit', action='append', required=True)
    p.add_argument('--scenario', action='append', default=None)
    p.add_argument('--repeat', type=int, default=1)
    p.add_argument('--label', help='Result label (default: the commit)')
    p.add_argument('--build-arg', action='append', default=[], help='Extra build_arm11_null.py argument (forces rebuild)')
    a = p.parse_args()
    scenarios = a.scenario or ['match']
    summary_path = OUT / 'summary.json'
    OUT.mkdir(parents=True, exist_ok=True)
    summary = json.loads(summary_path.read_text(encoding='utf-8')) if summary_path.exists() else {}
    for sha in a.commit:
        label = a.label or sha
        tree = prepare(sha)
        built = build(sha, tree, a.apk, label, a.build_arg)
        image, seconds = (built, None) if isinstance(built, Path) else built
        row = summary.setdefault(label, dict(commit=sha, runs={}))
        if seconds is not None:
            row['build_seconds'] = seconds
        row['image_bytes'] = image.stat().st_size
        for scenario in scenarios:
            for i in range(a.repeat):
                r = measure(sha, tree, a.apk, image, scenario, label)
                row['runs'].setdefault(scenario, []).append(r)
                print(json.dumps(dict(label=label, scenario=scenario, **r)), flush=True)
                summary_path.write_text(json.dumps(summary, indent=2) + '\n', encoding='utf-8')
        # Keep the image, ELF and results; drop what is regenerable (objects,
        # snapshot, emulator copies, the 3.3 GB reference checkout).
        for rel in ('build/bisect-snapshot', 'build/bisect-run-match/launcher', 'build/bisect-run-menu/launcher', 'reference'):
            shutil.rmtree(tree / rel, ignore_errors=True)
        for q in (tree / 'build/bisect-arm').iterdir():
            if q.name not in ('null_game.elf', 'null_game.3dsx', 'build-proof.json'):
                shutil.rmtree(q, ignore_errors=True) if q.is_dir() else q.unlink()


if __name__ == '__main__':
    main()
