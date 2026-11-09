// Own synthetic wire bytes. No image, palette or text originates in assets.
using System;
using kairo.unity.ui;
public static class ImageMetadataProbe {
 public static int Header(int seed){
  byte[] data=new byte[24];byte[] signature={137,80,78,71,13,10,26,10};Array.Copy(signature,data,8);
  data[19]=(byte)seed;data[23]=17;int[] size=Image.GetAreaSize(data);return size[0]*100+size[1];
 }
 public static bool SharedHeaderResult(int seed){
  byte[] gif={71,73,70,0,0,0,3,0,2,0,0};int[] first=Image.GetAreaSize(gif);
  int[] second=Image.GetAreaSize(null);return object.ReferenceEquals(first,second)&&first[0]==0&&first[1]==0;
 }
 public static int Palette(int seed){
  byte[] gif=new byte[64];gif[0]=71;gif[1]=73;gif[2]=70;gif[10]=128;
  byte[] palette={1,2,3,4,5,6};byte[] result=Image.OverwritePaletteData(gif,palette);return result[13]*100+result[18];
 }
 public static int LocalPalette(int seed){
  byte[] gif=new byte[64];gif[0]=71;gif[1]=73;gif[2]=70;gif[13]=44;gif[22]=128;
  byte[] result=Image.OverwritePaletteData(gif,new byte[]{2,3,4,5,6,7});return result[23]*100+result[28];
 }
 public static bool NullPalette(int seed){return Image.OverwritePaletteData(null,new byte[3])==null;}
 public static string NativeFieldAlias(int seed){var image=new Image();image.SetName("own-name");return image.GetName();}
}
