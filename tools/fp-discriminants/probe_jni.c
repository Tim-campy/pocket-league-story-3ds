// Local oracle embedding only. Runtime library comes from the official editor.
#include <jni.h>
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <stdint.h>
#include <sys/auxv.h>
#include <sys/utsname.h>
#include <asm/hwcap.h>
#if !defined(__arm__) || defined(__aarch64__)
#error This oracle bridge must execute as ARM32, not Android x86 or AArch64.
#endif

typedef void MonoDomain;
typedef void MonoAssembly;
typedef void MonoImage;
typedef void MonoObject;
typedef void MonoString;
typedef void MonoArray;
typedef void MonoClass;
typedef void MonoMethod;
static void (*set_dirs)(const char*,const char*);
static void (*config_parse)(const char*);
static void (*signal_chaining)(int);
static MonoDomain* (*jit_init)(const char*,const char*);
static MonoAssembly* (*assembly_open)(MonoDomain*,const char*);
static MonoImage* (*assembly_image)(MonoAssembly*);
static MonoClass* (*class_from_name)(MonoImage*,const char*,const char*);
static MonoMethod* (*class_method)(MonoClass*,const char*,int);
static MonoArray* (*array_new)(MonoDomain*,MonoClass*,unsigned long);
static MonoClass* (*string_class)(void);
static char* (*array_addr)(MonoArray*,int,unsigned long);
static MonoString* (*string_new)(MonoDomain*,const char*);
static void (*array_store)(MonoArray*,void*,MonoObject*);
static MonoObject* (*invoke)(MonoMethod*,void*,void**,MonoObject**);
static MonoClass* (*object_class)(MonoObject*);
static const char* (*class_name)(MonoClass*);
static void (*print_exception)(MonoObject*);
static void* (*compile_method)(MonoMethod*);
static void* (*jit_info_find)(MonoDomain*,void*);
static void* (*jit_code_start)(void*);
static int (*jit_code_size)(void*);

static int dump_method(MonoDomain* domain,const char* assembly,const char* space,
                       const char* type,const char* name,int arguments,
                       const char* directory,FILE* status) {
    MonoAssembly* loaded=assembly_open(domain,assembly);
    MonoClass* klass=loaded?class_from_name(assembly_image(loaded),space,type):NULL;
    MonoMethod* method=klass?class_method(klass,name,arguments):NULL;
    if(!method){fprintf(status,"JIT method absent: %s.%s\n",type,name);return 0;}
    void* entry=compile_method(method);
    void* info=entry?jit_info_find(domain,(void*)((uintptr_t)entry&~(uintptr_t)1)):NULL;
    void* code=info?jit_code_start(info):NULL;int size=info?jit_code_size(info):0;
    if(!code||size<=0||size>1024*1024){fprintf(status,"JIT range UNKNOWN: %s.%s\n",type,name);return 0;}
    char path[4096];snprintf(path,sizeof(path),"%s/jit-%s-%s.bin",directory,type,name);
    FILE* out=fopen(path,"wb");if(!out)return 0;
    size_t written=fwrite((void*)((uintptr_t)code&~(uintptr_t)1),1,(size_t)size,out);fclose(out);
    fprintf(status,"JIT %s.%s code_bytes=%d thumb=%u captured=%u\n",type,name,size,(unsigned)((uintptr_t)entry&1),(unsigned)written);fflush(status);
    return written==(size_t)size;
}

static int execute(MonoDomain* domain,const char* assembly,const char* type,
                   const char* first,const char* second,FILE* status) {
    MonoAssembly* loaded=assembly_open(domain,assembly);
    if(!loaded){fprintf(status,"Assembly load failed: %s\n",assembly);return 0;}
    MonoClass* klass=class_from_name(assembly_image(loaded),"",type);
    MonoMethod* main=klass?class_method(klass,"Main",1):NULL;
    if(!main){fprintf(status,"Main not found: %s\n",type);return 0;}
    MonoArray* arguments=array_new(domain,string_class(),2);
    array_store(arguments,array_addr(arguments,sizeof(void*),0),(MonoObject*)string_new(domain,first));
    array_store(arguments,array_addr(arguments,sizeof(void*),1),(MonoObject*)string_new(domain,second));
    void* params[]={arguments}; MonoObject* exception=NULL;
    invoke(main,NULL,params,&exception);
    if(exception){
        fprintf(status,"Managed exception: %s\n",class_name(object_class(exception)));
        fflush(status);print_exception(exception);
        return 0;
    }
    fprintf(status,"Completed: %s\n",type);fflush(status);return 1;
}

JNIEXPORT jstring JNICALL Java_org_plsresearch_floatprobe_ProbeActivity_runProbe(
    JNIEnv* env,jclass klass,jstring data_arg,jstring libraries_arg) {
    (void)klass;
    const char* data=(*env)->GetStringUTFChars(env,data_arg,NULL);
    const char* libraries=(*env)->GetStringUTFChars(env,libraries_arg,NULL);
    char path[4096],assembly[4096],first[4096],second[4096],message[4096];
    snprintf(path,sizeof(path),"%s/status.txt",data);
    FILE* status=fopen(path,"w");
    if(!status){snprintf(message,sizeof(message),"Cannot create result status file");goto done;}
    snprintf(path,sizeof(path),"%s/libmono.so",libraries);
    void* library=dlopen(path,RTLD_NOW|RTLD_GLOBAL);
    if(!library){snprintf(message,sizeof(message),"dlopen failed: %s",dlerror());goto close;}
#define LOAD(field,name) do { *(void**)(&field)=dlsym(library,name); if(!field){snprintf(message,sizeof(message),"Missing Mono API: %s",name);goto close;} }while(0)
    LOAD(set_dirs,"mono_set_dirs");LOAD(config_parse,"mono_config_parse");
    LOAD(signal_chaining,"mono_set_signal_chaining");
    LOAD(jit_init,"mono_jit_init_version");LOAD(assembly_open,"mono_domain_assembly_open");
    LOAD(assembly_image,"mono_assembly_get_image");LOAD(class_from_name,"mono_class_from_name");
    LOAD(class_method,"mono_class_get_method_from_name");LOAD(array_new,"mono_array_new");
    LOAD(string_class,"mono_get_string_class");LOAD(array_addr,"mono_array_addr_with_size");
    LOAD(string_new,"mono_string_new");LOAD(array_store,"mono_gc_wbarrier_set_arrayref");
    LOAD(invoke,"mono_runtime_invoke");LOAD(object_class,"mono_object_get_class");
    LOAD(class_name,"mono_class_get_name");LOAD(print_exception,"mono_print_unhandled_exception");
    LOAD(compile_method,"mono_compile_method");LOAD(jit_info_find,"mono_jit_info_table_find");
    LOAD(jit_code_start,"mono_jit_info_get_code_start");LOAD(jit_code_size,"mono_jit_info_get_code_size");
#undef LOAD
    snprintf(path,sizeof(path),"%s/managed",data);
    setenv("MONO_PATH",path,1);set_dirs(path,data);config_parse(NULL);
    // ART already owns signal handlers in this Android process.
    signal_chaining(1);
    fprintf(status,"Initializing official Unity Mono ARMv7; pointer bytes=%u\n",(unsigned)sizeof(void*));fflush(status);
    struct utsname machine;
    if(uname(&machine)==0)fprintf(status,"guest uname machine=%s release=%s\n",machine.machine,machine.release);
    const unsigned long capabilities=getauxval(AT_HWCAP);
    fprintf(status,"guest HWCAP=0x%lx VFP=%u; Mono JIT options: embedding defaults, no explicit optimize override\n",capabilities,(unsigned)((capabilities&HWCAP_VFP)!=0));
    fprintf(status,"MONO_ENV_OPTIONS=%s MONO_ARM=%s\n",getenv("MONO_ENV_OPTIONS")?getenv("MONO_ENV_OPTIONS"):"<unset>",getenv("MONO_ARM")?getenv("MONO_ARM"):"<unset>");
    FILE* cpu=fopen("/proc/cpuinfo","r");if(cpu){char line[512];while(fgets(line,sizeof(line),cpu))fputs(line,status);fclose(cpu);}
    fflush(status);
    MonoDomain* domain=jit_init("numerical-oracle","v2.0.50727");
    if(!domain){snprintf(message,sizeof(message),"Mono domain initialization failed");goto close;}
    snprintf(assembly,sizeof(assembly),"%s/managed/FloatDiscriminants.exe",data);
    snprintf(first,sizeof(first),"%s/discriminants.tsv",data);
    snprintf(second,sizeof(second),"%s/cil.tsv",data);
    if(!execute(domain,assembly,"FloatDiscriminants",first,second,status)){
        snprintf(message,sizeof(message),"Discriminants failed; inspect status.txt and logcat");goto close;
    }
    const char* probes[]={"Expression","Local","Field","Array","PassArgument","Return","Inlining","Loop","ExplicitConversion"};
    for(unsigned i=0;i<sizeof(probes)/sizeof(probes[0]);++i)
        if(!dump_method(domain,assembly,"","FloatDiscriminants",probes[i],2,data,status)){
            snprintf(message,sizeof(message),"JIT evidence incomplete; inspect status.txt");goto close;
        }
    setenv("PLS_NUMERICAL_ALL_CASES","1",1);
    snprintf(assembly,sizeof(assembly),"%s/managed/HotMethodsMono.exe",data);
    snprintf(first,sizeof(first),"%s/inputs",data);
    snprintf(second,sizeof(second),"%s/kernel-results",data);mkdir(second,0700);
    if(!execute(domain,assembly,"HotMethodsMono",first,second,status)){
        snprintf(message,sizeof(message),"Kernel cases failed; inspect status.txt and logcat");goto close;
    }
    snprintf(assembly,sizeof(assembly),"%s/managed/Assembly-CSharp.dll",data);
    if(!dump_method(domain,assembly,"game","Team","Cal_evaCoatMulti9block",4,data,status)){
        snprintf(message,sizeof(message),"Cal JIT evidence incomplete; inspect status.txt");goto close;
    }
    snprintf(message,sizeof(message),"Completed. Results: files/probe. Android results still require host comparison.");
close:
    fprintf(status,"%s\n",message);fclose(status);
done:
    (*env)->ReleaseStringUTFChars(env,data_arg,data);
    (*env)->ReleaseStringUTFChars(env,libraries_arg,libraries);
    return (*env)->NewStringUTF(env,message);
}
