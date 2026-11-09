using System;
class ScalarMinOracle {
 static void Main(){
  uint[] bits={0U,0x80000000U,0x3f800000U,0xbf800000U,0x7f800000U,0xff800000U,0x7fc01234U,0xffc05678U,1U,0x80000001U};
  foreach(uint a in bits)foreach(uint b in bits){
   float x=BitConverter.ToSingle(BitConverter.GetBytes(a),0),y=BitConverter.ToSingle(BitConverter.GetBytes(b),0);
   Console.WriteLine(BitConverter.ToUInt32(BitConverter.GetBytes(Math.Min(x,y)),0).ToString("X8"));
  }
 }
}
