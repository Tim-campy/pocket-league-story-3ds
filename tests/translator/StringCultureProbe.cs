using System;
using System.Globalization;
using System.Threading;

// Synthetic Unicode only. This probes the BCL calls used by StringEx and
// StringUtil without loading either original assembly or any game data.
class StringCultureProbe
{
    static void Row(string id, object actual, object ordinal)
    {
        Console.WriteLine(id + "\t" + actual + "\t" + ordinal);
    }
    static void Main()
    {
        var prop = typeof(CompareInfo).GetProperty("UseManagedCollation", System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Static);
        Console.Error.WriteLine("initialCulture=" + CultureInfo.CurrentCulture.Name);
        Console.Error.WriteLine("managedCollation=" + (prop == null ? "UNKNOWN" : prop.GetValue(null, null).ToString()));
        string[] cultures = { "", "en-US", "tr-TR" };
        string[] haystacks = { "abc", "I", "\u0130", "a\0b", "a\u00adb", "\u00e9", "e\u0301", "\ud800x" };
        string[] needles = { "a", "i", "i", "ab", "ab", "e\u0301", "\u00e9", "\ud800" };
        for (int c = 0; c < cultures.Length; ++c)
        {
            Thread.CurrentThread.CurrentCulture = new CultureInfo(cultures[c]);
            for (int i = 0; i < haystacks.Length; ++i)
            {
                string s = haystacks[i], n = needles[i], id = "c" + c + "p" + i;
                Row(id + "index", s.IndexOf(n), s.IndexOf(n, StringComparison.Ordinal));
                Row(id + "indexStart", s.IndexOf(n, 1), s.IndexOf(n, 1, StringComparison.Ordinal));
                Row(id + "starts", s.StartsWith(n), s.StartsWith(n, StringComparison.Ordinal));
                Row(id + "ends", s.EndsWith(n), s.EndsWith(n, StringComparison.Ordinal));
                Row(id + "equalsCI", s.Equals(n, StringComparison.CurrentCultureIgnoreCase), s.Equals(n, StringComparison.OrdinalIgnoreCase));
            }
        }
    }
}
