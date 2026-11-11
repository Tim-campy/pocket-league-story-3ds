// Local oracle embedding only. Runtime library comes from the official editor.
#include <jni.h>
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

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
#undef LOAD
    snprintf(path,sizeof(path),"%s/managed",data);
    setenv("MONO_PATH",path,1);set_dirs(path,data);config_parse(NULL);
    // ART already owns signal handlers in this Android process.
    signal_chaining(1);
    fprintf(status,"Initializing official Unity Mono ARMv7; pointer bytes=%u\n",(unsigned)sizeof(void*));fflush(status);
    MonoDomain* domain=jit_init("numerical-oracle","v2.0.50727");
    if(!domain){snprintf(message,sizeof(message),"Mono domain initialization failed");goto close;}
    snprintf(assembly,sizeof(assembly),"%s/managed/FloatDiscriminants.exe",data);
    snprintf(first,sizeof(first),"%s/discriminants.tsv",data);
    snprintf(second,sizeof(second),"%s/cil.tsv",data);
    if(!execute(domain,assembly,"FloatDiscriminants",first,second,status)){
        snprintf(message,sizeof(message),"Discriminants failed; inspect status.txt and logcat");goto close;
    }
    snprintf(assembly,sizeof(assembly),"%s/managed/HotMethodsMono.exe",data);
    snprintf(first,sizeof(first),"%s/inputs",data);
    snprintf(second,sizeof(second),"%s/kernel-results",data);mkdir(second,0700);
    if(!execute(domain,assembly,"HotMethodsMono",first,second,status)){
        snprintf(message,sizeof(message),"Kernel cases failed; inspect status.txt and logcat");goto close;
    }
    snprintf(message,sizeof(message),"Completed. Results: files/probe. Android results still require host comparison.");
close:
    fprintf(status,"%s\n",message);fclose(status);
done:
    (*env)->ReleaseStringUTFChars(env,data_arg,data);
    (*env)->ReleaseStringUTFChars(env,libraries_arg,libraries);
    return (*env)->NewStringUTF(env,message);
}
