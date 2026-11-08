"""Bounded, read-only Unity 5.3 serialized-file metadata reader.

Supports serialization version15 and Android player objects only. Inspects object
tables and dimensional/audio metadata, never renders, decrypts or exports assets.
Layout cross-reference: Perfare/AssetStudio SerializedFile.cs and Classes/{Texture,
Texture2D,AudioClip,TextAsset}.cs. This is new inventory code, not a runtime loader.
"""
import math
import struct

CLASS_NAMES = {1:'GameObject',4:'Transform',20:'Camera',21:'Material',23:'MeshRenderer',
    28:'Texture2D',33:'MeshFilter',43:'Mesh',48:'Shader',49:'TextAsset',54:'Rigidbody',
    65:'BoxCollider',74:'AnimationClip',83:'AudioClip',89:'Cubemap',91:'AnimatorController',
    104:'RenderSettings',114:'MonoBehaviour',115:'MonoScript',128:'Font',
    137:'SkinnedMeshRenderer',142:'AssetBundle',150:'PreloadData',157:'LightmapSettings',
    196:'NavMeshSettings',212:'SpriteRenderer',213:'Sprite',222:'CanvasRenderer',
    223:'Canvas',224:'RectTransform',258:'LightProbes'}
TEXTURE_FORMATS = {1:'Alpha8',2:'ARGB4444',3:'RGB24',4:'RGBA32',5:'ARGB32',7:'RGB565',
    10:'DXT1',12:'DXT5',13:'RGBA4444',14:'BGRA32',34:'ETC_RGB4',45:'ETC2_RGB',
    46:'ETC2_RGBA1',47:'ETC2_RGBA8'}
AUDIO_FORMATS = {0:'PCM',1:'Vorbis',2:'ADPCM',3:'MP3',4:'PSMVAG',5:'HEVAG',
    6:'XMA',7:'AAC',8:'GCADPCM',9:'ATRAC9'}


class Reader:
    def __init__(self, data, start=0, end=None, endian='<'):
        self.data=data;self.p=start;self.end=len(data) if end is None else end;self.endian=endian

    def take(self, n):
        if n < 0 or self.p+n > self.end:
            raise ValueError('Serialized extent outside bounded input')
        start=self.p;self.p+=n;return self.data[start:self.p]

    def number(self, fmt):
        return struct.unpack(self.endian+fmt,self.take(struct.calcsize(fmt)))[0]

    def align(self):
        self.take((-self.p)%4)

    def cstring(self):
        end=self.data.find(b'\0',self.p,self.end)
        if end < 0:raise ValueError('Unterminated metadata string')
        value=self.take(end-self.p).decode('utf-8',errors='strict');self.take(1);return value

    def aligned_string(self):
        size=self.number('i');value=self.take(size).decode('utf-8',errors='strict');self.align();return value


def serialized_header(data):
    if len(data)<20:return None
    metadata_size,file_size,version,data_offset=struct.unpack_from('>4I',data)
    if version != 15 or file_size != len(data):return None
    if not (20 <= metadata_size+20 <= data_offset <= file_size):
        raise ValueError('Invalid serialized header geometry')
    if data[16] not in (0,1):raise ValueError('Invalid endianness')
    return dict(metadata_size=metadata_size,file_size=file_size,version=version,
                data_offset=data_offset,endian='<' if data[16]==0 else '>')


def object_metadata(data, obj, endian, platform):
    result=dict(obj)
    if platform != 13:
        result['metadata_status']='unsupported-non-Android-platform';return result
    if obj['class_id'] not in (28,49,83,128):
        result['metadata_status']='object-table-only';return result
    r=Reader(data,obj['offset'],obj['offset']+obj['size'],endian)
    # Names are file/resource identifiers; this function's full result is private.
    result['resource_identifier']=r.aligned_string()
    if obj['class_id']==28:
        width=r.number('i');height=r.number('i');image_size=r.number('i');fmt=r.number('i');mips=r.number('i')
        readable=r.number('B');read_allowed=r.number('B');r.align()
        images=r.number('i');dimension=r.number('i');r.take(16);r.take(8)
        payload_size=r.number('i')
        if not (0<=width<=65536 and 0<=height<=65536 and image_size>=0 and 0<=mips<=32 and images>=0):
            raise ValueError('Invalid Texture2D numeric metadata '+str((width,height,image_size,fmt,mips,images)))
        result.update(width=width,height=height,format=TEXTURE_FORMATS.get(fmt,'UNKNOWN_'+str(fmt)),
            format_id=fmt,mip_count=mips,image_count=images,dimension=dimension,
            original_image_bytes=image_size,readable=bool(readable),read_allowed=bool(read_allowed))
        if payload_size:
            r.take(payload_size);result['inline_payload_bytes']=payload_size
        else:
            offset=r.number('I');size=r.number('I');path=r.aligned_string()
            result['stream']=dict(offset=offset,size=size,path=path)
        result['metadata_status']='dimensions-and-format'
    elif obj['class_id']==83:
        load_type=r.number('i');channels=r.number('i');frequency=r.number('i');bits=r.number('i');duration=r.number('f')
        tracker=r.number('B');r.align();subsound=r.number('i')
        preload=r.number('B');background=r.number('B');legacy=r.number('B');r.align()
        source=r.aligned_string();offset=r.number('q');size=r.number('q');fmt=r.number('i')
        if not (1<=channels<=8 and 1<=frequency<=384000 and math.isfinite(duration) and duration>=0 and size>=0):
            raise ValueError('Invalid AudioClip metadata')
        result.update(channels=channels,frequency=frequency,bits_per_sample=bits,duration_seconds=duration,
            compression=AUDIO_FORMATS.get(fmt,'UNKNOWN_'+str(fmt)),compression_id=fmt,load_type=load_type,
            preload=bool(preload),stream=dict(path=source,offset=offset,size=size),
            pcm16_estimate_bytes=math.ceil(duration*frequency)*channels*2,
            metadata_status='audio-format-and-duration')
    elif obj['class_id']==49:
        size=r.number('i');start=r.p;r.take(size)
        result.update(payload_offset=start,payload_size=size,metadata_status='opaque-payload-size-only')
        magic=data[start:start+8]
        result['payload_signature']='PNG' if magic==b'\x89PNG\r\n\x1a\n' else 'UNKNOWN'
    else:
        result['metadata_status']='font-resource-identifier-only'
    return result


def inspect(data):
    header=serialized_header(data)
    if header is None:return None
    r=Reader(data,20,20+header['metadata_size'],header['endian'])
    unity_version=r.cstring();platform=r.number('i');has_type_tree=r.number('B');type_count=r.number('i')
    if not 0<=type_count<=100000:raise ValueError('Invalid type count')
    type_ids=[]
    for _ in range(type_count):
        class_id=r.number('i');type_ids.append(class_id)
        if class_id<0:r.take(16)
        r.take(16)
        if has_type_tree:
            nodes=r.number('i');strings=r.number('i')
            if not (0<=nodes<=100000 and strings>=0):raise ValueError('Invalid type tree')
            r.take(nodes*24+strings)
    count=r.number('i')
    if not 0<=count<=100000:raise ValueError('Invalid object count')
    objects=[]
    for _ in range(count):
        r.align();path_id=r.number('q');offset=header['data_offset']+r.number('I');size=r.number('I')
        type_id=r.number('i');class_id=r.number('H');script_index=r.number('h');stripped=r.number('B')
        if type_id not in type_ids:raise ValueError('Object references absent type')
        if offset<header['data_offset'] or offset+size>len(data):raise ValueError('Object outside file')
        obj=dict(path_id=path_id,offset=offset,size=size,class_id=class_id,
                 class_name=CLASS_NAMES.get(class_id,'ClassID_'+str(class_id)))
        try:
            objects.append(object_metadata(data,obj,header['endian'],platform))
        except (ValueError,struct.error,UnicodeError) as error:
            # An unsupported body must not erase an otherwise validated object table.
            objects.append(dict(obj,metadata_status='body-metadata-unsupported',metadata_error=str(error)))
    if len({o['path_id'] for o in objects})!=len(objects):raise ValueError('Duplicate object IDs')
    ordered=sorted(objects,key=lambda o:o['offset'])
    if any(a['offset']+a['size']>b['offset'] for a,b in zip(ordered,ordered[1:])):
        raise ValueError('Overlapping object extents')
    return dict(header=header,unity_version=unity_version,platform=platform,type_tree=bool(has_type_tree),objects=objects)
