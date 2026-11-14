"""Lossless path interning for public Game receipts; raw reports stay private."""
from copy import deepcopy

ENCODING='source-file-table-v1'
METHOD_ENCODING='defaults-v1'
METHOD_DEFAULTS={'is_abstract_type':False,'constructor_factory_defined':True,'is_constructor':False,
                 'is_indexer':False,'concrete_cpp_type_arguments':[],'concrete_cs_type_arguments':[],
                 'concrete_cs_method_type_arguments':[],'root':True,'identity_hash_result':False,'body_origin':'source','kind':'Ordinary'}
METHOD_LISTS=('emitted_methods','emitted_kairo_dependencies')
FIELD_ENCODING='derived-name-declaring-v1'

def _field_name(field):return field['id'].rsplit('.',1)[1] if isinstance(field.get('id'),str) and field['id'].startswith('F:') else None

def _objects(value):
    if isinstance(value,dict):
        yield value
        for child in value.values():yield from _objects(child)
    elif isinstance(value,list):
        for child in value:yield from _objects(child)

def pack_source_paths(report):
    """Replace only C# source/node_source locators, retaining every record."""
    if 'source_path_encoding' in report:raise ValueError('Report paths already packed')
    objects=list(_objects(report))
    paths=sorted({node[key] for node in objects for key in ('source','node_source')
                  if isinstance(node.get(key),str) and node[key].endswith('.cs')})
    table={path:index for index,path in enumerate(paths)}
    for node in objects:
        for key in ('source','node_source'):
            if isinstance(node.get(key),str) and node[key] in table:node[key]=table[node[key]]
    report['source_files']=paths
    report['source_path_encoding']=ENCODING
    records=[row for name in METHOD_LISTS for row in report.get(name,[])]
    defaults={key:deepcopy(value)for key,value in METHOD_DEFAULTS.items()if records and all(key in row for row in records)}
    if defaults:
        report['method_record_encoding']=METHOD_ENCODING;report['method_record_defaults']=defaults
        for row in records:
            for key,value in defaults.items():
                if type(row.get(key))is type(value)and row[key]==value:row.pop(key)
    # Field records: name is the DocID suffix and declaring_type usually the class type; omit when derivable.
    classes=report.get('generated_classes',[])
    if classes and all(isinstance(c,dict) for c in classes):
        report['field_record_encoding']=FIELD_ENCODING
        for cls in classes:
            for field in cls.get('fields',[]):
                if 'name' in field and field['name']==_field_name(field):field.pop('name')
                if 'declaring_type' in field and field['declaring_type']==cls.get('type'):field.pop('declaring_type')
    return report

def unpack_source_paths(report):
    """Return an independent expanded report, accepting older path receipts."""
    result=deepcopy(report)
    method_encoding=result.pop('method_record_encoding',None)
    if method_encoding is not None:
        defaults=result.pop('method_record_defaults',None)
        if method_encoding!=METHOD_ENCODING or not isinstance(defaults,dict)or not defaults or any(key not in METHOD_DEFAULTS or type(value)is not type(METHOD_DEFAULTS[key])or value!=METHOD_DEFAULTS[key]for key,value in defaults.items()):raise ValueError('Invalid method record defaults')
        for name in METHOD_LISTS:
            for row in result.get(name,[]):
                for key,value in defaults.items():row.setdefault(key,deepcopy(value))
    elif 'method_record_defaults'in result:raise ValueError('Method defaults require an encoding')
    field_encoding=result.pop('field_record_encoding',None)
    if field_encoding is not None:
        if field_encoding!=FIELD_ENCODING:raise ValueError('Unknown field record encoding')
        for cls in result.get('generated_classes',[]):
            for field in cls.get('fields',[]):
                if 'name' not in field:
                    name=_field_name(field)
                    if name is None:raise ValueError('Field name is not derivable')
                    field['name']=name
                field.setdefault('declaring_type',cls.get('type'))
    encoding=result.pop('source_path_encoding',None)
    if encoding is None:return result
    if encoding!=ENCODING:raise ValueError('Unknown source path encoding')
    paths=result.pop('source_files')
    if not isinstance(paths,list)or any(not isinstance(p,str)or not p.endswith('.cs')for p in paths)or paths!=sorted(set(paths)):
        raise ValueError('Invalid source file table')
    for node in _objects(result):
        for key in ('source','node_source'):
            if type(node.get(key))is int:
                index=node[key]
                if index<0 or index>=len(paths):raise ValueError('Source file index out of range')
                node[key]=paths[index]
    return result
