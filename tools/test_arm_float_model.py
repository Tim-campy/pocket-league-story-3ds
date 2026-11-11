"""Regress the adopted ARM model and its binary32 negative control."""
import hashlib,json,subprocess,sys,time
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]

def main():
    folder=ROOT/'build/fp-emission-regression'/str(time.time_ns())
    rows=[]
    for model,expected in [('binary32',34),('mono-arm-vfp',36)]:
        output=folder/model
        subprocess.run([sys.executable,str(ROOT/'tools/fp-discriminants/test_emission.py'),
                        '--oracle',str(ROOT/'tests/translator/arm_float_expected.json'),
                        '--model',model,'--output',str(output)],cwd=ROOT,check=True)
        receipt=json.loads((output/'receipt.json').read_text())
        if receipt['matched']!=expected or receipt['cases']!=36:raise ValueError('ARM model or negative control regressed')
        rows.append(dict(model=model,cases=36,matched=receipt['matched'],producer=receipt['producer'],
                         receipt_path=str((output/'receipt.json').relative_to(ROOT)),
                         receipt_sha256=hashlib.sha256((output/'receipt.json').read_bytes()).hexdigest()))
    files=['tools/test_arm_float_model.py','tools/fp-discriminants/test_emission.py','tools/fp-discriminants/FloatDiscriminants.cs','tests/translator/arm_float_expected.json']
    result=dict(status='PASS',operation='generated-arm-float-semantics',cases=36,matched=36,
                emulator_confirmed=True,physical_device_confirmed=False,rows=rows,
                inputs={name:hashlib.sha256((ROOT/name).read_bytes()).hexdigest() for name in files})
    (ROOT/'config/phase2-arm-float-model.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(status='PASS',arm=36,binary32_negative_control=34,device_pending=True)))

if __name__=='__main__':main()
