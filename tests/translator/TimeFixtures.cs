using System;
public static class TimeFixtures {
    delegate string Work();static string Run(Work work){try{return work();}catch(Exception e){return e.GetType().FullName;}}
    static string Parts(DateTime t){return t.Ticks+","+(int)t.Kind+","+t.Year+","+t.Month+","+t.Day+","+t.Hour+","+t.Minute+","+t.Second+","+t.Millisecond+","+t.DayOfYear+","+(int)t.DayOfWeek;}
    public static void Main(){
        int[][] dates={new int[]{1,1,1,0,0,0},new int[]{1970,1,1,0,0,0},new int[]{2000,2,29,23,59,59},new int[]{1900,2,28,12,34,56},new int[]{9999,12,31,23,59,59},new int[]{2024,2,29,1,2,3},new int[]{1900,2,29,0,0,0},new int[]{0,1,1,0,0,0}};
        for(int i=0;i<dates.Length;i++){int[] d=dates[i];Console.WriteLine("date-"+i+"="+Run(delegate{return Parts(new DateTime(d[0],d[1],d[2],d[3],d[4],d[5],DateTimeKind.Utc));}));}
        DateTime epoch=new DateTime(1970,1,1,0,0,0,DateTimeKind.Utc);
        double[] delta={0,0.00001,0.00005,0.00015,-0.00005,-0.00015,0.25,0.5,-0.5,1.25,1234567890123.25,Double.NaN,Double.PositiveInfinity,Double.NegativeInfinity,1e20};
        for(int i=0;i<delta.Length;i++){double n=delta[i];Console.WriteLine("add-ms-"+i+"="+Run(delegate{return (epoch.AddMilliseconds(n).Ticks-epoch.Ticks).ToString();}));}
        double[] daydelta={0.000000001,0.00000001,-0.00000001,1.25,-1.25};for(int i=0;i<daydelta.Length;i++){double n=daydelta[i];Console.WriteLine("add-day-"+i+"="+Run(delegate{return (epoch.AddDays(n).Ticks-epoch.Ticks).ToString();}));}
        DateTime jan=new DateTime(2024,1,31,13,14,15,DateTimeKind.Utc);int[] offsets={1,-1,13,-13,120001};for(int i=0;i<offsets.Length;i++){int n=offsets[i];Console.WriteLine("months-"+i+"="+Run(delegate{return Parts(jan.AddMonths(n));}));}
        Console.WriteLine("years="+Parts(new DateTime(2024,2,29,1,2,3,DateTimeKind.Utc).AddYears(1)));
        Console.WriteLine("utc-kind="+(int)epoch.ToUniversalTime().Kind);Console.WriteLine("kind-ignored="+(new DateTime(epoch.Ticks,DateTimeKind.Utc)==new DateTime(epoch.Ticks,DateTimeKind.Local)));
        Console.WriteLine("min-underflow="+Run(delegate{return DateTime.MinValue.AddTicks(-1).Ticks.ToString();}));Console.WriteLine("max-overflow="+Run(delegate{return DateTime.MaxValue.AddTicks(1).Ticks.ToString();}));
        Console.WriteLine("bad-kind="+Run(delegate{return new DateTime(0,(DateTimeKind)3).Ticks.ToString();}));
        long[] ticks={0,1,-1,9999,-9999,12345678901234567L,Int64.MaxValue,Int64.MinValue};for(int i=0;i<ticks.Length;i++){TimeSpan span=new TimeSpan(ticks[i]);Console.WriteLine("span-"+i+"="+span.Ticks+","+BitConverter.DoubleToInt64Bits(span.TotalMilliseconds));}
        int[][] spans={new int[]{1,2,3,4,5},new int[]{-1,-2,-3,-4,-5},new int[]{0,1000000,0,0,0},new int[]{Int32.MaxValue,0,0,0,0}};
        for(int i=0;i<spans.Length;i++){int[] a=spans[i];Console.WriteLine("span-parts-"+i+"="+Run(delegate{return new TimeSpan(a[0],a[1],a[2],a[3],a[4]).Ticks.ToString();}));}
        Console.WriteLine("time-of-day="+new DateTime(2024,2,29,13,14,15,DateTimeKind.Utc).TimeOfDay.Ticks);
        // Own deterministic clock source; does not patch framework DateTime.UtcNow.
        DateTime injected=new DateTime(638500000000123456L,DateTimeKind.Utc);Console.WriteLine("injected-clock="+Parts(injected));
    }
}
