// Own storage instrumentation around the unchanged original method body.
// The source field is represented as a property only to pause individual
// reads/writes; this is not a claim that the original field was a property.
using System;
using System.Threading;
class InputPulseOracle {
 int storage=3,loads,stores,ready,release;
 bool gated;
 int keyPulse_ {
  get {int value=Thread.VolatileRead(ref storage);Interlocked.Increment(ref loads);
   if(gated){Interlocked.Increment(ref ready);while(Thread.VolatileRead(ref release)==0)Thread.Sleep(0);}
   else Thread.VolatileWrite(ref storage,8);
   return value;
  }
  set {Interlocked.Increment(ref stores);Thread.VolatileWrite(ref storage,value);}
 }
 /* ORIGINAL_CHECK_KEY_PULSE */
 static void Main(){
  var snapshot=new InputPulseOracle();bool single=snapshot.CheckKeyPulse(1);
  Console.WriteLine("cached-read="+single+":"+snapshot.storage+":"+snapshot.loads+":"+snapshot.stores);
  var concurrent=new InputPulseOracle();concurrent.gated=true;bool a=false,b=false;
  var first=new Thread(delegate(){a=concurrent.CheckKeyPulse(1);});
  var second=new Thread(delegate(){b=concurrent.CheckKeyPulse(2);});first.Start();second.Start();
  while(Thread.VolatileRead(ref concurrent.ready)!=2)Thread.Sleep(0);Thread.VolatileWrite(ref concurrent.release,1);first.Join();second.Join();
  Console.WriteLine("lost-update="+a+":"+b+":"+(concurrent.storage==1||concurrent.storage==2)+":"+concurrent.loads+":"+concurrent.stores);
 }
}
