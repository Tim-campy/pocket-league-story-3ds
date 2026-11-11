"""Prepare isolated ablations of the measured projection; never product code."""
from pathlib import Path
import re,json,hashlib

ROOT=Path(__file__).resolve().parents[2]
BASE=ROOT/'build/gc-prototype'
OUT=ROOT/'build/gc-ablation'
NAMES=['baseline','no-type-init','inline-lambdas','numeric-audit','numeric-conversion','conversion-constant-bounds','no-null','no-bounds','fp-precise','handwritten']
FILES=['probe_numeric.hpp','probe_type_init.hpp','probe_types.hpp','tracing_heap.hpp','harness.cpp','kernels.cpp']
original={name:(BASE/name).read_text(encoding='utf8')for name in FILES}
records=[]
for variant in NAMES:
    folder=OUT/variant;folder.mkdir(parents=True,exist_ok=False)
    files=dict(original);changes={}
    if variant=='no-type-init':
        files['kernels.cpp'],changes['initializers']=re.subn(r'(void cs_init_[a-f0-9]+\(\))\{[^\n]+\}',r'\1{}',files['kernels.cpp'])
    elif variant=='inline-lambdas':
        files['kernels.cpp'],changes['lambdas']=re.subn(r'\[&\]\(\)',r'[&] [[msvc::forceinline]] ()',files['kernels.cpp'])
    elif variant in ['numeric-conversion','numeric-audit']:
        # Measurement on the 80 finite, representable captured cases only.
        # Not a product implementation: NaN/range behavior is intentionally absent.
        pattern=r'(template<class To,class From>To conv_signed\(From value\)noexcept)\{.*?\n\}'
        audit='if(!std::isfinite(value)||static_cast<long double>(value)<static_cast<long double>(std::numeric_limits<To>::min())||static_cast<long double>(value)>=-static_cast<long double>(std::numeric_limits<To>::min()))std::terminate();' if variant=='numeric-audit' else ''
        files['probe_numeric.hpp'],changes['conversion_helpers']=re.subn(pattern,r'\1{'+audit+'return static_cast<To>(value);}',files['probe_numeric.hpp'],flags=re.S)
    elif variant=='conversion-constant-bounds':
        old='const long double lower=-std::ldexp(static_cast<long double>(1),sizeof(To)*8-1),upper=-lower;'
        new='constexpr long double lower=static_cast<long double>(std::numeric_limits<To>::min()),upper=-lower;'
        changes['constant_bounds']=files['probe_numeric.hpp'].count(old)
        files['probe_numeric.hpp']=files['probe_numeric.hpp'].replace(old,new)
    elif variant=='no-null':
        for name in ['probe_types.hpp','kernels.cpp']:
            files[name],changes[name]=re.subn(r'if\(![a-zA-Z_][a-zA-Z_0-9]*\)throw (?:pls::cs::)?NullReferenceException\(\);','',files[name])
    elif variant=='no-bounds':
        pattern='if(i<0||i>=ptr->size)throw IndexOutOfRangeException();'
        changes['bounds_helpers']=files['probe_types.hpp'].count(pattern)
        files['probe_types.hpp']=files['probe_types.hpp'].replace(pattern,'')
    elif variant=='handwritten':
        prefix=files['kernels.cpp'].split('void cs_ce67d59af0bdb552(')[0]
        files['kernels.cpp']=prefix+'}\n'
        files['handwritten.cpp']=(Path(__file__).with_name('handwritten.cpp')).read_text()
        changes['handwritten_kernels']=5
    if variant not in ['baseline','fp-precise'] and not all(changes.values()):raise ValueError((variant,changes))
    for name,value in files.items():(folder/name).write_text(value,encoding='utf8',newline='\n')
    records.append(dict(variant=variant,changes=changes,fp='precise'if variant=='fp-precise'else'strict',
        files={name:hashlib.sha256((folder/name).read_bytes()).hexdigest()for name in files}))
(OUT/'preparation.json').write_text(json.dumps(dict(status='PREPARED_NOT_MEASURED',
    baseline={name:hashlib.sha256((BASE/name).read_bytes()).hexdigest()for name in FILES},
    variants=records,limits='Five unchanged generated bodies in the published prototype projection; no product or ARM claims. Null/bounds/FP variants are measurement only.'),indent=2)+'\n')
print(json.dumps({'variants':len(records),'status':'PREPARED_NOT_MEASURED'}))
