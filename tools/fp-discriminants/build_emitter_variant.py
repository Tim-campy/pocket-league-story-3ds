"""Build a private ARM VFP emission variant; do not modify production sources."""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import sys

ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'translator'))
from translate import prepare,run
from inventory import compiler_paths


def patched(source):
    # After adoption both modes are part of the production frontend. Historical
    # private variants retain their own source hashes in their receipts.
    if 'public string numeric_model' in source and 'bool ArmFloat =>' in source:return source
    def replace(old,new):
        nonlocal source
        if source.count(old)!=1:raise ValueError('Variant patch is ambiguous: '+old[:100])
        source=source.replace(old,new)
    replace('    public bool split_types {get;set;}=true;',
            '    public bool split_types {get;set;}=true;\n    public string numeric_model {get;set;}="binary32";')
    replace('    string Cast(string value,ITypeSymbol? from,ITypeSymbol? to,SyntaxNode node) {',
            '    bool ArmFloat => request.numeric_model=="mono-arm-vfp";\n'
            '    string EvaluationOperand(ExpressionSyntax node,ITypeSymbol? to) {\n'
            '        if(ArmFloat&&to?.SpecialType==SpecialType.System_Single) {\n'
            '            var from=model.GetTypeInfo(node).Type;\n'
            '            var value=from?.SpecialType==SpecialType.System_Single?Expr(node):Converted(node,to);\n'
            '            return "static_cast<double>("+value+")";\n'
            '        }\n'
            '        return Converted(node,to);\n'
            '    }\n'
            '    string Cast(string value,ITypeSymbol? from,ITypeSymbol? to,SyntaxNode node) {\n'
            '        if(ArmFloat&&to?.SpecialType==SpecialType.System_Single&&(Integral(from)||from?.SpecialType is SpecialType.System_Single or SpecialType.System_Double))return "static_cast<float>("+value+")";')
    replace('var left=Converted(b.Left,op?.LeftOperand.Type??model.GetTypeInfo(b.Left).ConvertedType);',
            'var left=EvaluationOperand(b.Left,op?.LeftOperand.Type??model.GetTypeInfo(b.Left).ConvertedType);')
    replace('var right=Converted(b.Right,op?.RightOperand.Type??model.GetTypeInfo(b.Right).ConvertedType);',
            'var right=EvaluationOperand(b.Right,op?.RightOperand.Type??model.GetTypeInfo(b.Right).ConvertedType);')
    replace('return "([&]() -> "+Type(type,b)+" { auto cs_left = "+left+"; auto cs_right = "+right+"; return "+result+"; }())";',
            'return "([&]() -> "+(ArmFloat&&type?.SpecialType==SpecialType.System_Single?"double":Type(type,b))+" { auto cs_left = "+left+"; auto cs_right = "+right+"; return "+result+"; }())";')
    replace('Converted(c.WhenTrue,ct)+" : "+Converted(c.WhenFalse,ct)',
            'EvaluationOperand(c.WhenTrue,ct)+" : "+EvaluationOperand(c.WhenFalse,ct)')
    # Compound stores calculate wide but still narrow the stored result.
    replace('var operation=helper!=""&&suffix!=""?"pls::cs::"+helper+"_"+suffix+"(cs_old,cs_rhs)":"(cs_old "+a.OperatorToken.Text.TrimEnd(\'=\')+" cs_rhs)";',
            'var operation=helper!=""&&suffix!=""?"pls::cs::"+helper+"_"+suffix+"(cs_old,cs_rhs)":"(cs_old "+a.OperatorToken.Text.TrimEnd(\'=\')+" cs_rhs)";\n'
            '            if(ArmFloat&&type?.SpecialType==SpecialType.System_Single)operation="(static_cast<double>(cs_old) "+a.OperatorToken.Text.TrimEnd(\'=\')+" static_cast<double>(cs_rhs))";')
    replace('propertyValue="static_cast<"+Type(type,a)+">(cs_old "+op+" cs_rhs)";',
            'propertyValue="static_cast<"+Type(type,a)+">("+(ArmFloat&&type?.SpecialType==SpecialType.System_Single?"static_cast<double>(cs_old) "+op+" static_cast<double>(cs_rhs)":"cs_old "+op+" cs_rhs")+")";')
    replace('Type(from,node);var boxed="pls::cs::box("+value+")";',
            'Type(from,node);if(ArmFloat&&from?.SpecialType==SpecialType.System_Single)value="static_cast<float>("+value+")";var boxed="pls::cs::box("+value+")";')
    replace('if(type?.SpecialType is SpecialType.System_Single or SpecialType.System_Double)return "pls::cs::floating_to_string("+value+")";',
            'if(type?.SpecialType is SpecialType.System_Single or SpecialType.System_Double)return "pls::cs::floating_to_string("+(ArmFloat&&type.SpecialType==SpecialType.System_Single?"static_cast<float>("+value+")":value)+")";')
    return source


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,required=True);a=p.parse_args()
    output=a.output.resolve()
    if not output.is_relative_to(ROOT/'build') or output.exists():raise ValueError('Fresh private output required')
    folder,runtime,_,producer=prepare();compiler,_,_=compiler_paths();output.mkdir(parents=True)
    (output/'Translator.cs').write_text(patched((ROOT/'translator/Translator.cs').read_text()),encoding='utf8')
    shutil.copyfile(ROOT/'translator/EmissionUnits.cs',output/'EmissionUnits.cs')
    response=(folder/'compile.rsp').read_text()
    for name in ['Translator.cs','EmissionUnits.cs']:
        response=response.replace(str(ROOT/'translator'/name),str(output/name))
    response=response.replace(str(folder/'Translator.dll'),str(output/'Translator.dll'))
    (output/'compile.rsp').write_text(response,encoding='utf8')
    run([compiler,'/noconfig','@'+str(output/'compile.rsp')],output/'compile.log')
    for name in ['Microsoft.CodeAnalysis.dll','Microsoft.CodeAnalysis.CSharp.dll','Translator.runtimeconfig.json']:
        shutil.copyfile(folder/name,output/name)
    proof=dict(private_variant=True,parent=producer,patch_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
               inputs={name:hashlib.sha256((output/name).read_bytes()).hexdigest() for name in ['Translator.cs','EmissionUnits.cs','Translator.dll']})
    (output/'proof.json').write_text(json.dumps(proof,indent=2)+'\n')
    print(json.dumps(proof))


if __name__=='__main__':main()
