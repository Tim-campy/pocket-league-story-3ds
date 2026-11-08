"""Select exact boundary identities supported by native source-oracle receipts.

This is evidence metadata, not a ledger/state writer. Partial platform routes
remain excluded even when their pure helper has differential coverage.
"""
import csv
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]


def boundary_ids(owners=None,exact=()):
    csv.field_size_limit(2_000_000)
    with (ROOT/'config/boundary.csv').open(encoding='utf-8-sig',newline='') as source:
        rows=list(csv.DictReader(source))
    available={r['id'] for r in rows}
    wanted=set(exact)
    if owners:
        wanted.update(r['id'] for r in rows if r['tipo'] in owners and r['id'].startswith('M:'))
    if not wanted<=available:raise ValueError('Native proof references an unknown boundary identity')
    return sorted(wanted)


def storage_ids():
    return boundary_ids(owners={'kairo.unity.io.Storage','kairo.unity.io.RecordStore'})


def input_ids():
    owner='M:kairo.unity.ui.Canvas.'
    return boundary_ids(exact=[owner+s for s in [
        'CheckKeyPulse(System.Int32)','CheckKeyRepeat(System.Int32)','CheckKeyState(System.Int32)',
        'GetKeypadState','KeyClick(System.Int32)','KeyDown(System.Int32,System.Boolean)','KeyUp(System.Int32)',
        'SetKeyDoubleInterval(System.Int32)','SetKeyRepeatInterval(System.Int32)',
    ]])


def forms_ids():
    owner='M:kairo.unity.form.'
    return boundary_ids(exact=[owner+s for s in [
        'FormBase.#ctor(System.Int32)','FormBase.CheckUsable','FormBase.GetId','FormBase.GetLeftSoftLabel','FormBase.IsAlive',
        'FormBase.Pop','FormBase.Push(kairo.unity.form.FormBase)',
        'FormBase.SetSoftLabel(System.String,System.String,System.String,System.String)',
        'FormManagerBase.#ctor','FormManagerBase.Draw(kairo.unity.ui.Graphics)','FormManagerBase.DrawAllForms',
        'FormManagerBase.GetCurrentForm','FormManagerBase.GetForm(System.Int32)','FormManagerBase.GetFormsNum',
        'FormManagerBase.GetTopForm','FormManagerBase.Pop','FormManagerBase.Pop(kairo.unity.form.FormBase)',
        'FormManagerBase.Push(kairo.unity.form.FormBase,kairo.unity.form.FormBase)','FormManagerBase.Push(kairo.unity.form.FormBase)',
    ]]+['M:kairo.unity.ui.Canvas.'+s for s in [
        'GetSoftLabel(System.Int32)','GetSoftLabelL','GetSoftLabelR','SetSoftLabel(System.Int32,System.String)',
        'SetSoftLabel(System.String,System.String,System.String,System.String)','UpdateSoftLabel',
    ]])
