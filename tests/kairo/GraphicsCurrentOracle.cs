// Own rendering collaborators around complete original Canvas lifecycle,
// Graphics constructors/GetCurrent/ResetRender/Dispose method bodies.
using System;using System.Collections.Generic;using kairo.unity.ui;
namespace UnityEngine {public class Camera{}public class GUIStyle{public object font,fontStyle;public int fontSize;}}
namespace kairo.unity.graphics {
 public class MeshBuilder{public class Group{public bool change;}public class Layer{public List<Group> groups=new List<Group>();}public Dictionary<int,Layer> layers=new Dictionary<int,Layer>();}
 public class MeshManager{public Dictionary<int,MeshBuilder> meshList_=new Dictionary<int,MeshBuilder>();public MeshManager(Graphics value){}public void BeginMesh(){}public void EndMesh(){}public void EndAlterRender(){}public void Clear(){}}
}
namespace kairo.unity.ui {
 public class Image{}
 public class Font {public int size;public Font(){}public Font(Font other){Copy(other);}public void Init(){size=0;}public void Copy(Font other){size=other.size;}public void Set(Font other){Copy(other);}public int GetSize(){return size;}public void AdjustFontSize(float value){}public static void UnlockLocalizeSetting(){}public static void ClearLocalizeSettings(){}}
 public class TextLayout{public static void SetPictographVisible(bool value){}}
 public class MatrixFake{public void Reset(){}}
 public class CacheFake{public void Reset(){}}
 public partial class Graphics {
  internal static Graphics current_;internal kairo.unity.graphics.MeshManager[] meshManList_=new kairo.unity.graphics.MeshManager[1];
  bool isGUI_,glRender_;object offscreen_;int glRenderCount_;
  UnityEngine.GUIStyle defaultGuiStyle_,guiStyle_;bool isGuiGroupRect_,fontScaleOffsetEnable_,isClipRegionGL,setFigureClip_,useFigureClip_;
  int renderModeCount_,blendModeCount_,originCount_,fontCount_,clipCount_,clipEnableCount_,renderQueueCount_,imageClipCount_,stackStateCount_,autoTextLayoutCount_,meshId_,cameraDepth_,localMatrixIndex_,localCoordinateCount_;
  int originX_,originY_,color;float scale_;Font font_=new Font();CacheFake renderCache_=new CacheFake();MatrixFake worldMatrix_=new MatrixFake(),localCoordinateMatrix_=new MatrixFake();
  internal void Init(object ignored,Image image,UnityEngine.Camera camera=null){ResetRender();}
  public void SetFont(Font value){font_.Copy(value);font_.AdjustFontSize(GetScale());}
  public void SetCurrentMeshManager(int id){}public void PopClipEnable(){}public void FlushGLRender(bool value){}
  public void ClearImageClip(){}public void SetClipEnable(bool value){}public void ClearRenderRect(){}public void SetRenderMode(int op,int a,int b){}
  public void SetFlipMode(int mode){}public void SetColor(int value){color=value;}public void SetPictoColorEnabled(bool value){}public void ClearClip(){}public void SetRenderQueue(int value){}public void SetBlendMode(int value){}
  public static int GetColorOfRGB(int r,int g,int b){return unchecked((int)0xff000000)|(r<<16)|(g<<8)|b;}
  public void SetOrigin(int x,int y){originX_=x;originY_=y;}public void Scale(float value){scale_=value;}public float GetScale(){return scale_;}
  public string State(){return originX_+":"+originY_+":"+scale_+":"+color+":"+font_.GetSize();}
 }
 public partial class Canvas {
  internal Graphics graphics_;static Graphics graphicsBuffer_;Font defaultFont_=new Font();internal bool isAlterStaticRendering_;
 }
}
class GraphicsCurrentOracle {
 static readonly Dictionary<Graphics,int> ids=new Dictionary<Graphics,int>();static int Identify(Graphics g){if(g==null)return 0;int value;if(!ids.TryGetValue(g,out value)){value=ids.Count+1;ids.Add(g,value);}return value;}
 static void P(string name,Canvas c){Console.WriteLine(name+"="+Identify(Graphics.GetCurrent())+":"+Identify(c.graphics_)+":"+c.isAlterStaticRendering_+":"+(Graphics.GetCurrent()!=null&&Graphics.GetCurrent().IsGUI()));}
 static void Main(){var c=new Canvas();P("initial",c);var image=new Graphics(new Image());var created=new Graphics();P("new-does-not-publish",c);
  var first=c.BeginPaint();P("begin-default",c);Console.WriteLine("nested-default="+Object.ReferenceEquals(first,c.BeginPaint()));Console.WriteLine("explicit-null-active="+(c.BeginPaint(null)==null));P("after-null",c);
  first.SetOrigin(9,7);first.Scale(300);first.SetColor(17);c.BeginPaint();Console.WriteLine("reset-default="+first.State());
  c.BeginPaint(image);P("begin-image-inner",c);c.EndPaint(image);P("end-image-inner",c);c.EndPaint();P("end-outer-sticky-inner",c);
  Console.WriteLine("buffer-reused="+Object.ReferenceEquals(first,c.BeginPaint()));P("begin-outer-again",c);
  try{try{c.BeginPaint(created);throw new InvalidOperationException();}finally{c.EndPaint(created);}}catch(InvalidOperationException){}P("exception-finally-sticky-inner",c);c.EndPaint();P("outer-end-no-restore",c);
  try{c.EndPaint();Console.WriteLine("null-end=no-error");}catch(Exception error){Console.WriteLine("null-end="+error.GetType().FullName);}P("after-null-end",c);
  c.BeginAlterStaticRender(image);P("begin-alter",c);c.EndAlterStaticRender(image);P("end-alter-flag-retained",c);c.EndPaint(image);P("normal-end-clears-alter-flag",c);
  c.BeginAlterStaticRender(null);P("alter-default",c);c.EndPaint();P("alter-default-ended",c);
  new Graphics();image.Dispose();P("new-dispose-no-current-write",c);
 }
}
