import java.util.Locale;
import java.util.TimeZone;

// Own Java platform observations only, never the APK's classes.dex.
public final class GlobalizationOracle {
    public static void main(String[] args) {
        if(args.length>0 && args[0].equals("live")) {
            Locale locale=Locale.getDefault();
            System.out.println("language\t"+locale.getLanguage());
            System.out.println("country\t"+locale.getCountry());
            System.out.println("timezone_id\t"+TimeZone.getDefault().getID());
            System.out.println("raw_offset\t"+TimeZone.getDefault().getRawOffset());
            System.out.println("format_locale\t"+Locale.getDefault(Locale.Category.FORMAT).toLanguageTag());
            System.out.println("display_locale\t"+Locale.getDefault(Locale.Category.DISPLAY).toLanguageTag());
            return;
        }
        String[] ids={"UTC","GMT","Etc/UTC","Etc/GMT","GMT+9","GMT-9","GMT+09","GMT+0900","GMT+930","GMT+9:30","GMT-03:30","GMT+00:01","GMT-00:01","GMT+23:59","GMT+24:00","GMT+5:6","GMT+5:060","GMT+000","GMT+005","GMT-0000","GMT+2400","gmt+9","","not-a-real-zone"};
        for(int i=0;i<ids.length;i++)System.out.println("zone-"+i+"\t"+TimeZone.getTimeZone(ids[i]).getRawOffset());
        String[] languages={"he","iw","id","in","yi","ji","PT","zh","fil","","xx","En"};
        for(int i=0;i<languages.length;i++)System.out.println("language-"+i+"\t"+new Locale(languages[i],"").getLanguage());
    }
}
