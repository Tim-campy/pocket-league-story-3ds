using System;
public static class TimeZoneFixtures {
    delegate string Work();static string Run(Work work){try{return work();}catch(Exception e){return e.GetType().FullName;}}
    static string Create(string id,long ticks,string display,string standard){TimeZoneInfo z=TimeZoneInfo.CreateCustomTimeZone(id,new TimeSpan(ticks),display,standard);return z.Id.Length+","+z.BaseUtcOffset.Ticks+","+(z.DisplayName==null?"null":z.DisplayName)+","+(z.StandardName==null?"null":z.StandardName)+","+z.SupportsDaylightSavingTime;}
    public static void Main(){
        long[] ticks={0,1,-1,TimeSpan.TicksPerMinute,-TimeSpan.TicksPerMinute,14*TimeSpan.TicksPerHour,-14*TimeSpan.TicksPerHour,14*TimeSpan.TicksPerHour+TimeSpan.TicksPerMinute,-14*TimeSpan.TicksPerHour-TimeSpan.TicksPerMinute};
        for(int i=0;i<ticks.Length;i++){long n=ticks[i];Console.WriteLine("offset-"+i+"="+Run(delegate{return Create("synthetic",n,"display","standard");}));}
        string[] ids={null,"","x","a\0b",new string('a',300)};for(int i=0;i<ids.Length;i++){string id=ids[i];Console.WriteLine("id-"+i+"="+Run(delegate{return Create(id,0,null,null);}));}
        Console.WriteLine("utc="+TimeZoneInfo.Utc.Id+","+TimeZoneInfo.Utc.BaseUtcOffset.Ticks+","+TimeZoneInfo.Utc.SupportsDaylightSavingTime);
        Console.WriteLine("utc-convert="+TimeZoneInfo.ConvertTimeToUtc(new DateTime(621355968000000000L,DateTimeKind.Utc)).Ticks);
    }
}
