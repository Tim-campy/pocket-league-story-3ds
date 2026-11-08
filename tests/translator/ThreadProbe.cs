using System;
using System.Threading;

// Own synchronization probe. No game code or data is loaded.
public static class ThreadProbe
{
    delegate object Work();
    static void Row(string id,Work work){try{Console.WriteLine(id+"\t"+work());}catch(Exception e){Console.WriteLine(id+"\t"+e.GetType().FullName);}}
    static void Wait(Work test){int loops=0;while(!(bool)test()){if(++loops>3000)throw new Exception("Probe timeout");Thread.Sleep(1);}}
    public static void Main(){
        Row("null-ctor",delegate(){return new Thread((ThreadStart)null);});
        Thread unstarted=new Thread(delegate(){});
        Row("unstarted-state",delegate(){return (int)unstarted.ThreadState;});Row("unstarted-alive",delegate(){return unstarted.IsAlive;});Row("unstarted-priority",delegate(){return (int)unstarted.Priority;});
        Row("unstarted-join",delegate(){return unstarted.Join(0);});Row("unstarted-interrupt",delegate(){unstarted.Interrupt();return "ok";});
        foreach(int priority in new[]{-1,0,1,2,3,4,5}){int p=priority;Row("priority-"+p,delegate(){unstarted.Priority=(ThreadPriority)p;return (int)unstarted.Priority;});}
        Row("sleep-minus2",delegate(){Thread.Sleep(-2);return "ok";});Row("sleep-zero",delegate(){Thread.Sleep(0);return "ok";});
        Row("current-identity",delegate(){return Object.ReferenceEquals(Thread.CurrentThread,Thread.CurrentThread);});Row("current-state",delegate(){return (int)Thread.CurrentThread.ThreadState;});Row("current-alive",delegate(){return Thread.CurrentThread.IsAlive;});
        string outcome="not-run";Thread first=new Thread(delegate(){try{Thread.Sleep(0);outcome="normal";}catch(ThreadInterruptedException){outcome="interrupted";}});
        first.Interrupt();first.Start();first.Join();Row("interrupt-beforestart",delegate(){return outcome;});Row("stopped-state",delegate(){return (int)first.ThreadState;});Row("stopped-alive",delegate(){return first.IsAlive;});Row("stopped-join",delegate(){return first.Join(0);});Row("stopped-interrupt",delegate(){first.Interrupt();return "ok";});Row("second-start",delegate(){first.Start();return "ok";});Row("stopped-priority",delegate(){return (int)first.Priority;});Row("stopped-setpriority",delegate(){first.Priority=ThreadPriority.Normal;return "ok";});
        int ready=0,go=0;string pending="none";Thread worker=null;bool same=false;
        worker=new Thread(delegate(){same=Object.ReferenceEquals(worker,Thread.CurrentThread);Interlocked.Exchange(ref ready,1);while(Interlocked.CompareExchange(ref go,0,0)==0)Thread.SpinWait(10);string a="ok",b="ok";try{Thread.Sleep(0);}catch(ThreadInterruptedException){a="interrupt";}try{Thread.Sleep(0);}catch(ThreadInterruptedException){b="interrupt";}pending=a+","+b;});
        worker.Start();Wait(delegate(){return Interlocked.CompareExchange(ref ready,0,0)==1;});worker.Interrupt();worker.Interrupt();Interlocked.Exchange(ref go,1);worker.Join();Row("pending-interrupt",delegate(){return pending;});Row("worker-currentidentity",delegate(){return same;});
        Thread sleeping=new Thread(delegate(){try{Thread.Sleep(-1);outcome="normal";}catch(ThreadInterruptedException){outcome="interrupted";}});sleeping.Start();Wait(delegate(){return (sleeping.ThreadState&ThreadState.WaitSleepJoin)!=0;});Row("sleep-state",delegate(){return (int)sleeping.ThreadState;});Row("sleep-alive",delegate(){return sleeping.IsAlive;});sleeping.Interrupt();sleeping.Join();Row("interrupt-sleep",delegate(){return outcome;});
        ready=0;go=0;Thread target=new Thread(delegate(){while(Interlocked.CompareExchange(ref go,0,0)==0)Thread.Sleep(1);});target.Start();Thread joiner=new Thread(delegate(){try{Interlocked.Exchange(ref ready,1);target.Join();outcome="normal";}catch(ThreadInterruptedException){outcome="interrupted";}});joiner.Start();Wait(delegate(){return Interlocked.CompareExchange(ref ready,0,0)==1&&(joiner.ThreadState&ThreadState.WaitSleepJoin)!=0;});joiner.Interrupt();joiner.Join();Interlocked.Exchange(ref go,1);target.Join();Row("interrupt-join",delegate(){return outcome;});
    }
}
