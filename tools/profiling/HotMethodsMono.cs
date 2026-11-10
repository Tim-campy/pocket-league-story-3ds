// Diagnostic oracle only. Uses the user's locally rebuilt managed assemblies.
using System;
using System.IO;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.Serialization;
using game;
using main;

class HotMethodsMono {
    class Case { public Action Reset, Call; public Action<BinaryWriter> Dump; }
    static int[] Ints(BinaryReader r) { int n=r.ReadInt32(); if(n<0)return null; int[] a=new int[n]; for(int i=0;i<n;i++)a[i]=r.ReadInt32(); return a; }
    static float[] Floats(BinaryReader r) { int n=r.ReadInt32(); if(n<0)return null; float[] a=new float[n]; for(int i=0;i<n;i++)a[i]=r.ReadSingle(); return a; }
    static int[][] Grid(BinaryReader r) { int n=r.ReadInt32(); if(n<0)return null; int[][] a=new int[n][];for(int i=0;i<n;i++)a[i]=Ints(r);return a; }
    static void Put(BinaryWriter w,int[] a){w.Write(a==null?-1:a.Length);if(a!=null)foreach(int v in a)w.Write(v);}
    static void Put(BinaryWriter w,int[][] a){w.Write(a==null?-1:a.Length);if(a!=null)foreach(int[] v in a)Put(w,v);}
    static void Put(BinaryWriter w,byte[] a){w.Write(a==null?-1:a.Length);if(a!=null)foreach(byte v in a)w.Write((int)v);}
    static int[][] Clone(int[][] a){int[][] b=new int[a.Length][];for(int i=0;i<a.Length;i++)b[i]=a[i]==null?null:(int[])a[i].Clone();return b;}
    static void Copy(int[][] a,int[][] b){for(int i=0;i<a.Length;i++)if(a[i]!=null)Array.Copy(a[i],b[i],a[i].Length);}
    static FieldInfo Field(Type t,string n){return t.GetField(n,BindingFlags.Instance|BindingFlags.Static|BindingFlags.Public|BindingFlags.NonPublic);}
    static Case Load(string path,int kind){
        using(BinaryReader r=new BinaryReader(File.OpenRead(path))){
            Case c=new Case();
            if(kind==0){
                int[] screen=Ints(r),initial=Ints(r),output=(int[])initial.Clone();
                int x=r.ReadInt32(),y=r.ReadInt32(),vy=r.ReadInt32(),h=r.ReadInt32();float px=r.ReadSingle(),py=r.ReadSingle();
                var pos=new kairo.unity.m3d4.util3d.Vector3D();
                c.Reset=delegate {Array.Copy(initial,output,initial.Length);Camera.DRAW_CENTER_X=x;Camera.DRAW_CENTER_Y=y;Camera.DRAW_VIEW_Y=vy;Camera.DRAW_VIEW_H=h;Camera.pos=pos;pos.x_=px;pos.y_=py;};
                c.Call=delegate{Camera.ConvertScreenToCamera(screen,output);};c.Dump=delegate(BinaryWriter w){Put(w,output);};
            }else if(kind==1||kind==2){
                int[][] initial=Grid(r),data=Clone(initial);int cx=r.ReadInt32(),cy=r.ReadInt32();
                bool div=false;float[] mul=null;if(kind==1)mul=Floats(r);else div=r.ReadInt32()!=0;
                int[][] offsets=Grid(r);float[] weights=kind==2?Floats(r):null;int width=r.ReadInt32(),height=r.ReadInt32();
                Team team=(Team)FormatterServices.GetUninitializedObject(typeof(Team));
                FieldInfo offsetField=Field(typeof(Team),"PANEL_DIRECT_R_9BLOCK");
                if(kind==2)Field(typeof(Team),"CEVA_PASSER_MP2").SetValue(team,weights);
                int result=0;
                c.Reset=delegate{Copy(initial,data);offsetField.SetValue(null,offsets);Map.MAPCHIP_COAT_WNUM=width;Map.MAPCHIP_COAT_HNUM=height;};
                if(kind==1){c.Call=delegate{team.Cal_evaCoatMulti9block(data,cx,cy,mul);};c.Dump=delegate(BinaryWriter w){Put(w,data);};}
                else {c.Call=delegate{result=team.GetSum(data,cx,cy,div);};c.Dump=delegate(BinaryWriter w){w.Write(result);};}
            }else if(kind==3){
                float[] a=new float[8];for(int i=0;i<8;i++)a[i]=r.ReadSingle();bool mode=r.ReadInt32()!=0,result=false;
                c.Reset=delegate{};c.Call=delegate{result=GameUtil.ChRectHitRect(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],mode);};c.Dump=delegate(BinaryWriter w){w.Write(result?1:0);};
            }else{
                int[] a=new int[10];for(int i=0;i<10;i++)a[i]=r.ReadInt32();
                int index=r.ReadInt32();int[][] pool0=Grid(r);int[] count0=Ints(r);int[][] sort0=Grid(r);int start=r.ReadInt32(),last=r.ReadInt32();
                int[][] pool=Clone(pool0),sort=Clone(sort0);byte[] count=new byte[count0.Length],initialCount=new byte[count0.Length];for(int i=0;i<count0.Length;i++)initialCount[i]=checked((byte)count0[i]);
                AppData app=(AppData)FormatterServices.GetUninitializedObject(typeof(AppData));
                FieldInfo fi=Field(typeof(AppData),"gameObjectPoolIndex_"),fs=Field(typeof(AppData),"zsortObjectStart_"),fl=Field(typeof(AppData),"zsortObjectLast_");
                Field(typeof(AppData),"gameObjectPool_").SetValue(app,pool);Field(typeof(AppData),"zsortObjects_").SetValue(app,sort);Field(typeof(AppData),"zsortObjectCount_").SetValue(app,count);
                c.Reset=delegate{Copy(pool0,pool);Copy(sort0,sort);Array.Copy(initialCount,count,count.Length);fi.SetValue(app,index);fs.SetValue(app,start);fl.SetValue(app,last);};
                c.Call=delegate{app.InsertGameObject(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]!=0,a[9]);};
                c.Dump=delegate(BinaryWriter w){w.Write((int)fi.GetValue(app));Put(w,pool);Put(w,count);Put(w,sort);w.Write((int)fs.GetValue(app));w.Write((int)fl.GetValue(app));};
            }
            if(r.BaseStream.Position!=r.BaseStream.Length)throw new Exception("Capture trailing bytes");return c;
        }
    }
    static void Main(string[] args){
        Directory.CreateDirectory(args[1]);Console.WriteLine("frequency="+Stopwatch.Frequency);
        Action empty=delegate{};long overhead=0;
        for(int i=0;i<1250;i++){long t=Stopwatch.GetTimestamp();for(int j=0;j<16;j++)empty();overhead+=Stopwatch.GetTimestamp()-t;}
        Console.WriteLine("empty_ns="+(overhead*1e9/Stopwatch.Frequency/20000).ToString("R",System.Globalization.CultureInfo.InvariantCulture));
        for(int kind=0;kind<5;kind++){
            Case[] cases=new Case[16];for(int i=0;i<16;i++)cases[i]=Load(Path.Combine(args[0],kind+"-"+i+".bin"),kind);
            for(int k=0;k<10;k++)foreach(Case c in cases){c.Reset();c.Call();}
            for(int i=0;i<16;i++){cases[i].Reset();cases[i].Call();using(BinaryWriter w=new BinaryWriter(File.Create(Path.Combine(args[1],kind+"-"+i+".bin"))))cases[i].Dump(w);}
            for(int batch=0;batch<5;batch++){
                long total=0;for(int k=0;k<1000;k++){foreach(Case c in cases)c.Reset();long t=Stopwatch.GetTimestamp();foreach(Case c in cases)c.Call();total+=Stopwatch.GetTimestamp()-t;}
                Console.WriteLine("method="+kind+" batch="+batch+" calls=16000 gross_ns="+(total*1e9/Stopwatch.Frequency/16000).ToString("R",System.Globalization.CultureInfo.InvariantCulture));
            }
        }
    }
}
