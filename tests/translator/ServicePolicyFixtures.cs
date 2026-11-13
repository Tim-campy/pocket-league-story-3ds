using System;
namespace SyntheticPolicy {
 public class Billing {
  public int rights=73,pending=5,grants;
  public virtual bool Refresh(int value){rights=0;pending=0;grants=99;return true;}
  public virtual void Provision(){grants++;}
 }
 public class DerivedBilling:Billing {
  public override bool Refresh(int value){rights=1;pending=1;return true;}
  public override void Provision(){grants+=10;}
 }
 public static class Disabled {
  public enum OfferState {Waiting,Complete,Failed}
  public static OfferState offer;
  public static bool ads=true;
  public static int size=0;
  public static bool ShowOffers(){offer=OfferState.Complete;return true;}
  public static void UpdateAd(){ads=true;size=99;}
  public static bool Ready(){return false;}
  public static int Restore(){return 0;}
  public static string Missing(){return "must not run";}
  public static string[] Notifications(){throw new NotImplementedException();}
  public static string Signature(){throw new NotImplementedException();}
  public static byte[] Register(string ignored){throw new NotImplementedException();}
 }
 public static class Scenario {
  public static int trace;
  public static int Arg(){trace=trace*10+2;return 7;}
  public static int Preserve(){Billing value=new DerivedBilling();value.Refresh(Arg());value.Provision();return value.rights*100+value.pending+value.grants*10000;}
  public static int NullCaller(){trace=0;Billing value=null;try{value.Refresh(Arg());return -1;}catch(NullReferenceException){return trace;}}
  public static int Assignments(){Disabled.ShowOffers();Disabled.UpdateAd();return (int)Disabled.offer*100+Disabled.size+(Disabled.ads?10000:0);}
  public static bool Constants(){return Disabled.Ready()&&Disabled.Restore()==1&&Disabled.Missing()==null&&Disabled.Notifications().Length==0&&Disabled.Signature()=="pls-offline"&&Disabled.Signature().Length==11;}
  public static byte[] Registration(){return Disabled.Register("caller argument is still evaluated");}
 }
}
