"""Independent precision predictions for the locally captured Cal kernel.

Reference: Team.Cal_evaCoatMulti9block: convert int to float, multiply the
stored float coefficient, truncate to int. No game inputs/results enter Git.
"""
import hashlib
import io
import json
from pathlib import Path
import struct

ROOT = Path(__file__).resolve().parents[2]


def f32(value):
    return struct.unpack('<f',struct.pack('<f',value))[0]


def evaluate(payload, narrow_product):
    reader = io.BytesIO(payload)
    def integer(): return struct.unpack('<i',reader.read(4))[0]
    def integers():
        size=integer()
        return None if size<0 else [integer() for _ in range(size)]
    def grid(): return [integers() for _ in range(integer())]
    data=grid();cx,cy=integer(),integer()
    coefficients=[struct.unpack('<f',reader.read(4))[0] for _ in range(integer())]
    offsets=grid();width,height=integer(),integer()
    assert reader.tell()==len(payload)
    for index,offset in enumerate(offsets):
        x,y=cx+offset[0],cy+offset[1]
        if 0<=x<width and 0<=y<height:
            product=f32(data[y][x])*coefficients[index]
            if narrow_product: product=f32(product)
            result=int(product)
            if not -(2**31)<=result<2**31: raise ValueError('Captured conversion is not representable')
            data[y][x]=result
    out=io.BytesIO()
    def put(value):out.write(struct.pack('<i',value))
    put(len(data))
    for row in data:
        put(-1 if row is None else len(row))
        if row is not None:
            for value in row:put(value)
    return out.getvalue()


def main():
    output=ROOT/'build/fp-discriminants-x86/cal-models';output.mkdir(parents=True,exist_ok=True)
    rows=[]
    for source in sorted((ROOT/'build/hot-input-capture/inputs').glob('1-*.bin')):
        row=dict(case=source.name,input_sha256=hashlib.sha256(source.read_bytes()).hexdigest())
        for name,narrow in [('binary32',True),('binary64',False)]:
            predicted=evaluate(source.read_bytes(),narrow)
            directory=output/name;directory.mkdir(exist_ok=True)
            (directory/source.name).write_bytes(predicted)
            mono=(ROOT/'build/hot-methods/mono-results'/source.name).read_bytes()
            native=(ROOT/'build/hot-methods/native-results'/source.name).read_bytes()
            row[name]=dict(sha256=hashlib.sha256(predicted).hexdigest(),matches_mono=predicted==mono,matches_native=predicted==native)
        rows.append(row)
    report=dict(cases=len(rows),rows=rows,source_method='game.Team.Cal_evaCoatMulti9block',
                matches={name:{oracle:sum(r[name]['matches_'+oracle] for r in rows)for oracle in ['mono','native']}for name in ['binary32','binary64']})
    (output/'report.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(dict(cases=len(rows),matches=report['matches'])))


if __name__=='__main__':main()
