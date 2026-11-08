// Own synthetic source oracle. No game assembly, content or binary is loaded.
using System;
using System.IO;
public static class ManagedStreams {
 class DelegatingStream : Stream {
  readonly MemoryStream inner=new MemoryStream();
  public override bool CanRead {get{return inner.CanRead;}}
  public override bool CanSeek {get{return inner.CanSeek;}}
  public override bool CanWrite {get{return inner.CanWrite;}}
  public override long Length {get{return inner.Length;}}
  public override long Position {get{return inner.Position;}set{inner.Position=value;}}
  public override int Read(byte[] b,int o,int n){return inner.Read(b,o,n);}
  public override void Write(byte[] b,int o,int n){inner.Write(b,o,n);}
  public override long Seek(long o,SeekOrigin origin){return inner.Seek(o,origin);}
  public override void SetLength(long n){inner.SetLength(n);}
  public override void Flush(){inner.Flush();}
  public override void Close(){inner.Close();}
 }
 delegate string Probe();
 delegate void Procedure();
 static void P(string name, Probe body) {
  try { Console.WriteLine(name+"="+body()); }
  catch(Exception ex) { Console.WriteLine(name+"=!"+ex.GetType().FullName); }
 }
 static string B(byte[] bytes) { string s=""; foreach(byte b in bytes)s+=b+",";return s; }
 static string S(MemoryStream m) {return m.Length+":"+m.Position+":"+m.Capacity+":"+B(m.ToArray());}
 static string N(Procedure body) {body();return "ok";}
 public static void Main() {
  MemoryStream m=new MemoryStream();
  P("empty",delegate{return S(m);});
  P("empty-eof",delegate{return m.ReadByte().ToString();});
  P("first-write",delegate{m.WriteByte(7);return S(m);});
  P("seek-gap",delegate{m.Position=5;m.WriteByte(9);return S(m);});
  P("shrink",delegate{m.SetLength(2);return S(m);});
  P("expand-zero",delegate{m.SetLength(6);return S(m);});
  P("capacity-shrink",delegate{m.Capacity=6;return S(m);});
  P("capacity-below-length",delegate{return N(delegate{m.Capacity=5;});});
  P("write-expand",delegate{m.Position=6;m.Write(new byte[]{3,4,5},0,3);return S(m);});
  P("seek-begin",delegate{return m.Seek(1,SeekOrigin.Begin)+":"+m.Position;});
  P("seek-current",delegate{return m.Seek(2,SeekOrigin.Current)+":"+m.Position;});
  P("seek-end",delegate{return m.Seek(-1,SeekOrigin.End)+":"+m.Position;});
  P("seek-negative",delegate{return m.Seek(-20,SeekOrigin.Begin).ToString();});
  P("seek-invalid-origin",delegate{return m.Seek(0,(SeekOrigin)4).ToString();});
  P("position-negative",delegate{return N(delegate{m.Position=-1;});});
  P("position-too-large",delegate{return N(delegate{m.Position=2147483648L;});});
  P("length-negative",delegate{return N(delegate{m.SetLength(-1);});});
  P("length-too-large",delegate{return N(delegate{m.SetLength(2147483648L);});});
  byte[] target=new byte[]{90,91,92,93,94};m.Position=7;
  P("read-offset",delegate{return m.Read(target,1,3)+":"+B(target)+":"+m.Position;});
  P("read-eof",delegate{return m.Read(target,0,5)+":"+m.Position;});
  P("read-null",delegate{return m.Read(null,0,0).ToString();});
  P("read-offset-negative",delegate{return m.Read(target,-1,0).ToString();});
  P("read-count-negative",delegate{return m.Read(target,0,-1).ToString();});
  P("read-bounds",delegate{return m.Read(target,4,2).ToString();});
  P("write-null",delegate{return N(delegate{m.Write(null,0,0);});});
  P("write-offset-negative",delegate{return N(delegate{m.Write(target,-1,0);});});
  P("write-count-negative",delegate{return N(delegate{m.Write(target,0,-1);});});
  P("write-bounds",delegate{return N(delegate{m.Write(target,4,2);});});
  byte[] backing=new byte[]{10,11,12,13,14,15};
  MemoryStream slice=new MemoryStream(backing,2,3,true,true);
  P("slice-initial",delegate{return S(slice);});
  P("slice-seek-begin",delegate{return slice.Seek(0,SeekOrigin.Begin)+":"+slice.Position;});
  P("slice-seek-current",delegate{return slice.Seek(1,SeekOrigin.Current)+":"+slice.Position;});
  P("slice-seek-end",delegate{return slice.Seek(-1,SeekOrigin.End)+":"+slice.Position;});
  P("slice-read-alias",delegate{backing[4]=88;return slice.ReadByte()+":"+S(slice);});
  P("slice-write-alias",delegate{slice.Position=0;slice.WriteByte(77);return B(backing);});
  P("slice-buffer-alias",delegate{return Object.ReferenceEquals(backing,slice.GetBuffer()).ToString();});
  P("slice-copy-not-alias",delegate{byte[] b=slice.ToArray();b[0]=99;return B(slice.ToArray());});
  P("slice-expand",delegate{return N(delegate{slice.SetLength(4);});});
  P("slice-capacity-same",delegate{return N(delegate{slice.Capacity=3;});});
  P("slice-capacity-change",delegate{return N(delegate{slice.Capacity=4;});});
  P("slice-overlap",delegate{slice.Position=0;slice.Write(backing,1,3);return B(backing);});
  MemoryStream ro=new MemoryStream(new byte[]{1,2},false);
  P("readonly-flags",delegate{return ro.CanRead+":"+ro.CanSeek+":"+ro.CanWrite;});
  P("readonly-write",delegate{return N(delegate{ro.WriteByte(1);});});
  P("readonly-zero-write",delegate{return N(delegate{ro.Write(new byte[0],0,0);});});
  P("readonly-setlength",delegate{return N(delegate{ro.SetLength(1);});});
  P("private-buffer",delegate{return B(ro.GetBuffer());});
  P("null-buffer-constructor",delegate{return S(new MemoryStream((byte[])null));});
  P("negative-capacity-constructor",delegate{return S(new MemoryStream(-1));});
  P("slice-negative-offset",delegate{return S(new MemoryStream(backing,-1,1));});
  P("slice-negative-count",delegate{return S(new MemoryStream(backing,0,-1));});
  P("slice-invalid-range",delegate{return S(new MemoryStream(backing,5,2));});
  MemoryStream edge=new MemoryStream(2);
  P("far-eof-read",delegate{edge.Position=20;return edge.Read(target,0,1)+":"+edge.Position;});
  P("far-eof-byte",delegate{return edge.ReadByte()+":"+edge.Position;});
  P("zero-write-extends",delegate{edge.Write(new byte[0],0,0);return S(edge);});
  P("retained-buffer",delegate{MemoryStream x=new MemoryStream(2);x.Write(new byte[]{1,2},0,2);byte[] old=x.GetBuffer();x.WriteByte(3);return Object.ReferenceEquals(old,x.GetBuffer())+":"+B(old)+":"+B(x.ToArray());});
  P("overlap-read",delegate{byte[] b=new byte[]{1,2,3,4,5,6};MemoryStream x=new MemoryStream(b);int n=x.Read(b,2,4);return n+":"+B(b);});
  P("slice-shrink-expand",delegate{byte[] b=new byte[]{1,2,3,4,5,6};MemoryStream x=new MemoryStream(b,1,4,true,true);x.SetLength(1);x.SetLength(3);return S(x)+":"+B(b);});
  P("slice-position-max",delegate{MemoryStream x=new MemoryStream(backing,2,3);x.Position=Int32.MaxValue;return x.Position.ToString();});
  P("seek-too-large",delegate{return edge.Seek(2147483648L,SeekOrigin.Begin).ToString();});
  P("seek-minimum",delegate{return edge.Seek(Int64.MinValue,SeekOrigin.Current).ToString();});
  P("position-max-write",delegate{MemoryStream x=new MemoryStream();x.Position=Int32.MaxValue;return N(delegate{x.WriteByte(1);});});
  P("position-max-write-state",delegate{MemoryStream x=new MemoryStream();x.Position=Int32.MaxValue;try{x.WriteByte(1);}catch(Exception){}return x.Position.ToString();});
  P("fixed-zero-write-gap",delegate{MemoryStream x=new MemoryStream(backing);x.Position=20;return N(delegate{x.Write(new byte[0],0,0);});});
  P("readonly-null-write",delegate{return N(delegate{ro.Write(null,0,0);});});
  P("readonly-negative-length",delegate{return N(delegate{ro.SetLength(-1);});});
  P("dispose-idempotent",delegate{MemoryStream x=new MemoryStream();x.Dispose();x.Dispose();return x.CanRead.ToString();});
  Stream bridge=new DelegatingStream();
  P("base-write-byte",delegate{bridge.WriteByte(255);return bridge.Length+":"+bridge.Position;});
  P("base-read-byte",delegate{bridge.Position=0;return bridge.ReadByte().ToString();});
  P("base-eof-byte",delegate{return bridge.ReadByte().ToString();});
  P("base-dispose",delegate{bridge.Dispose();return bridge.CanRead.ToString();});
  m.Close();
  P("closed-flags",delegate{return m.CanRead+":"+m.CanSeek+":"+m.CanWrite;});
  P("closed-array",delegate{return B(m.ToArray());});
  P("closed-buffer",delegate{return m.GetBuffer().Length.ToString();});
  P("closed-flush",delegate{return N(delegate{m.Flush();});});
  P("closed-read",delegate{return m.ReadByte().ToString();});
  P("closed-read-null",delegate{return m.Read(null,0,0).ToString();});
  P("closed-read-negative-offset",delegate{return m.Read(target,-1,0).ToString();});
  P("closed-write-null",delegate{return N(delegate{m.Write(null,0,0);});});
  P("closed-write-byte",delegate{return N(delegate{m.WriteByte(1);});});
  P("closed-length",delegate{return m.Length.ToString();});
  P("closed-capacity",delegate{return m.Capacity.ToString();});
  P("closed-set-capacity-negative",delegate{return N(delegate{m.Capacity=-1;});});
  P("closed-position",delegate{return m.Position.ToString();});
  P("closed-negative-position",delegate{return N(delegate{m.Position=-1;});});
  P("closed-negative-length",delegate{return N(delegate{m.SetLength(-1);});});
  P("closed-setlength",delegate{return N(delegate{m.SetLength(0);});});
  P("closed-seek",delegate{return m.Seek(0,SeekOrigin.Begin).ToString();});
  P("closed-private-buffer",delegate{ro.Close();return B(ro.GetBuffer());});
 }
}
