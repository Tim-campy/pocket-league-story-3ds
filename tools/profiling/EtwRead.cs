using System;
using Microsoft.Diagnostics.Tracing;
using Microsoft.Diagnostics.Tracing.Parsers;
class Program {
 static void Main(string[] args) {
 using var source=new ETWTraceEventSource(args[0]);
 if(args.Length>1 && args[1]=="--samples") {
 int pid=int.Parse(args[2]);
 source.Kernel.ThreadStart += e => {if(e.ProcessID==pid)Console.WriteLine($"T,{e.TimeStampQPC},{e.ThreadID},{e.ProcessID}");};
 source.Kernel.ThreadDCStart += e => {if(e.ProcessID==pid)Console.WriteLine($"T,{e.TimeStampQPC},{e.ThreadID},{e.ProcessID}");};
 Action<Microsoft.Diagnostics.Tracing.Parsers.Kernel.ImageLoadTraceData> image=e=>{if(e.ProcessID==pid)Console.WriteLine($"M,{e.ImageBase},{e.ImageSize},{e.FileName}");};
 source.Kernel.ImageLoad += image;
 source.Kernel.ImageDCStart += image;
 source.Kernel.PerfInfoSample += e=>{if(e.ProcessID==pid)Console.WriteLine($"P,{e.TimeStampQPC},{e.ThreadID},{e.InstructionPointer},{e.Count},{(e.NonProcess?1:0)}");};
 source.Process();Console.Error.WriteLine($"lost={source.EventsLost}");return;
 }
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
