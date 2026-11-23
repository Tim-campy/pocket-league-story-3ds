"""Force small generated chunks and exercise every actual emitted method."""
import hashlib
import json
import subprocess
import sys
from translate import ROOT,prepare,run


def main():
    folder,runtime,tool,producer=prepare()
    request=json.loads((folder/'KairoLibrary-input.json').read_text(encoding='utf-8'))
    output=folder/'split-generated';output.mkdir(parents=True,exist_ok=True)
    request.update(output=str(output),chunk_bytes=32768)
    input_file=folder/'split-input.json';report_file=folder/'split-report.json'
    input_file.write_text(json.dumps(request,indent=2)+'\n',encoding='utf-8',newline='\n')
    run([runtime,tool,input_file,report_file],folder/'split-translator.log')
    report=json.loads(report_file.read_text(encoding='utf-8'))
    chunks=report['generated_chunks']
    if len(chunks)<=2 or any(c['bytes']>32768 for c in chunks):raise ValueError('Forced chunking budget/coverage failed')
    result_file=ROOT/'config/phase2-split-fixtures.json'
    subprocess.run([sys.executable,ROOT/'translator/test_portable.py','--report',report_file,'--generated',output,'--oracle',output/'source_oracle.cs','--folder',folder/'split-differential','--result',result_file],check=True,cwd=ROOT)
    result=json.loads(result_file.read_text(encoding='utf-8'))
    result.update(operation='forced-chunking-of-real-generated-portable-methods',producer=producer,chunk_budget_bytes=32768,chunk_count=len(chunks),max_chunk_bytes=max(c['bytes'] for c in chunks),generated_chunks=chunks,split_runner_sha256=hashlib.sha256(__import__('pathlib').Path(__file__).read_bytes()).hexdigest())
    result_file.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8',newline='\n')


if __name__=='__main__':main()
