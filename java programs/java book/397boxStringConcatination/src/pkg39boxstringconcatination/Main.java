
package pkg39boxstringconcatination;
class Box{
   private int width;
   private int height;
   private int depth;
   Box(Box b){
     width=b.width;  
   }
    public Box(int w,int h,int d){
        width=w;
        height=h;
        depth=d;
    }
    public String toString(){
        return "dimentions are "+width+" by "+height+" by "+depth;
    }
}
public class Main {

    public static void main(String[] args) {
       Box b=new Box(10,20,30);
       System.out.println(b);
       String s="Box b "+b;
       System.out.println(s);
    }
    
}
