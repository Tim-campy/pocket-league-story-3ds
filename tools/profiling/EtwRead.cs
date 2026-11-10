using System;
using Microsoft.Diagnostics.Tracing;
using Microsoft.Diagnostics.Tracing.Parsers;
class Program {
 static void Main(string[] args) {
 using var source=new ETWTraceEventSource(args[0]);
 bool first=true;
 source.Kernel.ThreadCSwitch += e => {if(first){Console.WriteLine(FormattableString.Invariant($"A,{e.TimeStampQPC},{e.TimeStampRelativeMSec}"));first=false;} Console.WriteLine($"S,{e.TimeStampQPC},{e.ProcessorNumber},{e.OldThreadID},{e.NewThreadID}");};
 source.Kernel.ThreadStart += e => Console.WriteLine($"T,{e.TimeStampQPC},{e.ThreadID},{e.ProcessID}");
 source.Kernel.ThreadDCStart += e => Console.WriteLine($"T,{e.TimeStampQPC},{e.ThreadID},{e.ProcessID}");
 source.Kernel.PerfInfoDPC += e => Console.WriteLine(FormattableString.Invariant($"I,{e.TimeStampQPC},{e.ProcessorNumber},{e.ElapsedTimeMSec}"));
 source.Kernel.PerfInfoTimerDPC += e => Console.WriteLine(FormattableString.Invariant($"I,{e.TimeStampQPC},{e.ProcessorNumber},{e.ElapsedTimeMSec}"));
 source.Kernel.PerfInfoISR += e => Console.WriteLine(FormattableString.Invariant($"I,{e.TimeStampQPC},{e.ProcessorNumber},{e.ElapsedTimeMSec}"));
 source.Process();
 Console.Error.WriteLine($"lost={source.EventsLost}");
 }
}
