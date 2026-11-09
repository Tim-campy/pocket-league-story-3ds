using System;
namespace OwnSwitchPlan {
 enum Choice{First=1,Second=2,Third=3}
 public static class Fixture {
  public static int trace;
  public static int Mark(int digit){trace=unchecked(trace*10+digit);return digit;}
  public static int Forward(int value){trace=0;switch(value){case 0:{int local=Mark(1);goto case 2;}case 1:goto default;case 2:{int local=Mark(2);return local+trace;}default:return Mark(3);}}
  public static int Backward(int value){int count=0;switch(value){case 0:count++;if(count<2)goto case 2;return count;case 2:goto case 0;default:goto case 0;}}
  public static int EnumCase(int value){trace=0;switch((Choice)value){case Choice.First:Mark(1);goto case Choice.Third;case Choice.Third:return Mark(3)+trace;default:return Mark(9);}}
  public static int Nested(int value){trace=0;switch(value){case 0:Mark(1);switch(value+1){case 1:Mark(2);goto default;default:Mark(3);break;}goto case 2;case 2:return Mark(4)+trace;default:goto case 0;}}
  public static int Unsigned(ulong value){switch(value){case ulong.MaxValue:goto case 0UL;case 0UL:return 37;default:return 53;}}
  public static int Signed(long value){switch(value){case long.MinValue:goto case 0L;case 0L:return 37;default:return 53;}}
  // This control must stay explicitly unsupported: goto exits a finally lambda.
  public static int ProtectedNegative(int value){switch(value){case 0:try{Mark(1);goto case 2;}finally{Mark(2);}case 2:return Mark(3);default:return 0;}}
 }
}
