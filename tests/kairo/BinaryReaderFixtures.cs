using System;
using System.IO;
public static class BinaryReaderFixtures {
    delegate string Work();static string Run(Work work){try{return work();}catch(Exception e){return e.GetType().FullName;}}
    class ProbeStream:MemoryStream {
        public int Reads,Closes,MaxRead=Int32.MaxValue;public bool ThrowClose;
        public ProbeStream(byte[]bytes):base(bytes){}
        public override int Read(byte[]b,int o,int n){Reads++;return base.Read(b,o,Math.Min(n,MaxRead));}
        public override void Close(){Closes++;if(ThrowClose)throw new IOException();base.Close();}
    }
    class ProbeReader:BinaryReader {
        public int ByteCalls,WordCalls;public ProbeReader(Stream stream):base(stream){}
        public override byte ReadByte(){ByteCalls++;return 42;}
        public override ushort ReadUInt16(){WordCalls++;return 7;}
    }
    static string Bytes(byte[]a){string s="";foreach(byte b in a){if(s.Length>0)s+=",";s+=b;}return s;}
    public static void Main(){
        Console.WriteLine("null-ctor="+Run(delegate{return new BinaryReader((Stream)null).BaseStream.ToString();}));
        MemoryStream closed=new MemoryStream();closed.Close();Console.WriteLine("closed-ctor="+Run(delegate{return new BinaryReader(closed).BaseStream.ToString();}));
        byte[] boolean={0,1,2,255};foreach(byte v in boolean){Console.WriteLine("bool-"+v+"="+new BinaryReader(new MemoryStream(new byte[]{v})).ReadBoolean());}
        Console.WriteLine("sbyte="+new BinaryReader(new MemoryStream(new byte[]{255})).ReadSByte());
        Console.WriteLine("u16="+new BinaryReader(new MemoryStream(new byte[]{255,255})).ReadUInt16());
        Console.WriteLine("i16="+new BinaryReader(new MemoryStream(new byte[]{0,128})).ReadInt16());
        Console.WriteLine("i32="+new BinaryReader(new MemoryStream(new byte[]{120,86,52,18})).ReadInt32());
        Console.WriteLine("u32="+new BinaryReader(new MemoryStream(new byte[]{255,255,255,255})).ReadUInt32());
        Console.WriteLine("i64="+new BinaryReader(new MemoryStream(new byte[]{0,0,0,0,0,0,0,128})).ReadInt64());
        Console.WriteLine("u64="+new BinaryReader(new MemoryStream(new byte[]{255,255,255,255,255,255,255,255})).ReadUInt64());
        Console.WriteLine("single="+BitConverter.ToInt32(BitConverter.GetBytes(new BinaryReader(new MemoryStream(new byte[]{0,0,0,128})).ReadSingle()),0));
        Console.WriteLine("double="+BitConverter.DoubleToInt64Bits(new BinaryReader(new MemoryStream(new byte[]{66,0,0,0,0,0,248,127})).ReadDouble()));
        for(int n=0;n<=8;n++){MemoryStream s=new MemoryStream(new byte[n]);BinaryReader r=new BinaryReader(s);string e=Run(delegate{return r.ReadInt64().ToString();});Console.WriteLine("eof-i64-"+n+"="+e+","+s.Position);}
        Console.WriteLine("eof-byte="+Run(delegate{return new BinaryReader(new MemoryStream()).ReadByte().ToString();}));
        ProbeStream slow=new ProbeStream(new byte[]{4,3,2,1,9});slow.MaxRead=1;BinaryReader sr=new BinaryReader(slow);Console.WriteLine("slow-numeric="+sr.ReadInt32()+","+slow.Position+","+slow.Reads);
        byte[] buffer={99,99,99,99};int read=sr.Read(buffer,1,3);Console.WriteLine("short-array="+read+","+Bytes(buffer)+","+slow.Position);
        for(int mode=0;mode<2;mode++){MemoryStream s=new MemoryStream(new byte[]{1,2});BinaryReader r=new BinaryReader(s);if(mode==1)r.Close();byte[] b=new byte[2];
            Console.WriteLine("array-null-"+mode+"="+Run(delegate{return r.Read((byte[])null,0,0).ToString();}));
            Console.WriteLine("array-negative-"+mode+"="+Run(delegate{return r.Read(b,-1,0).ToString();}));
            Console.WriteLine("array-negative-count-"+mode+"="+Run(delegate{return r.Read(b,0,-1).ToString();}));
            Console.WriteLine("array-outside-"+mode+"="+Run(delegate{return r.Read(b,2,1).ToString();}));
            Console.WriteLine("array-zero-"+mode+"="+Run(delegate{return r.Read(b,0,0).ToString();}));
        }
        ProbeStream owned=new ProbeStream(new byte[]{7});BinaryReader owner=new BinaryReader(owned);Console.WriteLine("base-identity="+Object.ReferenceEquals(owned,owner.BaseStream));owner.Close();owner.Close();Console.WriteLine("close="+owned.Closes+","+owned.CanRead+","+(owner.BaseStream==null));
        Console.WriteLine("closed-byte="+Run(delegate{return owner.ReadByte().ToString();}));Console.WriteLine("closed-int="+Run(delegate{return owner.ReadInt32().ToString();}));
        ProbeStream failing=new ProbeStream(new byte[]{9});failing.ThrowClose=true;BinaryReader fail=new BinaryReader(failing);Console.WriteLine("close-fail="+Run(delegate{fail.Close();return "none";})+","+Run(delegate{return fail.ReadByte().ToString();}));failing.ThrowClose=false;fail.Close();Console.WriteLine("close-retry="+failing.Closes);
        MemoryStream orphan=new MemoryStream(new byte[]{8});BinaryReader orphanReader=new BinaryReader(orphan);orphanReader=null;GC.Collect();Console.WriteLine("no-auto-close="+orphan.CanRead);
        MemoryStream source=new MemoryStream(new byte[]{0,255,48,0});ProbeReader derived=new ProbeReader(source);bool bval=derived.ReadBoolean();sbyte signed=derived.ReadSByte();short word=derived.ReadInt16();Console.WriteLine("virtual="+bval+","+signed+","+word+","+derived.ByteCalls+","+derived.WordCalls+","+source.Position);
    }
}
