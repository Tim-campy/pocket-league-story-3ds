using System;
public static class DiagnosticNativeLeaf {public static void Missing(int value){throw new NotSupportedException();}}
public static class DiagnosticLeafFixtures {
 static int trace_;
 static int Trace(int value){trace_=trace_*10+value;return value;}
 public static int Run(int selector){trace_=0;if(selector==1)DiagnosticNativeLeaf.Missing(Trace(3));return Trace(5);}
}
