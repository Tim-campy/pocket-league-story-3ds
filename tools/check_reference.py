"""Verify the readonly source submodule before a port analysis/build."""
import json
from pathlib import Path
import subprocess
from check_repository import EXPECTED_REFERENCE

ROOT=Path(__file__).resolve().parents[1]


def main():
    folder=ROOT/'reference'
    commit=subprocess.check_output(['git','-C',str(folder),'rev-parse','HEAD'],text=True).strip()
    if commit!=EXPECTED_REFERENCE:raise ValueError('Reference differs from immutable reconstruction milestone')
    changed=subprocess.check_output(['git','-C',str(folder),'status','--porcelain','--untracked-files=all'],text=True)
    if changed.strip():raise ValueError('Readonly reference has local changes')
    print(json.dumps(dict(reference_commit=commit,reference_clean=True)))


if __name__=='__main__':main()
