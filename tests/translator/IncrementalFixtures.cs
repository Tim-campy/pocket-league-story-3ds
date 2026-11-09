// Own dependency graph, including concrete receivers with inherited fields.
namespace OwnIncremental {
 public class Base {public int value;}
 public class Leaf:Base {}
 public class Holder {public Leaf leaf;}
 public class Left {public Right right;}
 public class Right {public Left left;public int value;}
 public struct Pair {public int first,second;}
 public class Box<T> {public T value;public T Read(){return value;}}
 public static class Data {public static int Read(){return 11;}}
 public static class Independent {public static int Read(){return 27;}}
 public static class Probe {
  public static int Read(){
   var holder=new Holder();holder.leaf=new Leaf();holder.leaf.value=Data.Read();
   var left=new Left();var right=new Right();left.right=right;right.left=left;right.value=3;
   var pair=new Pair();pair.first=holder.leaf.value;pair.second=right.left.right.value;
   var box=new Box<Pair>();box.value=pair;return box.Read().first+box.Read().second;
  }
 }
}
