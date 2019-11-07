
package pkg194weight.pkgextends.box;
class Box{
    double width;
    double height;
    double length;
    Box(Box b){
        width=b.width;
        height=b.height;
        length=b.length;
    }
    Box(double w,double h,double l){
        width=w;
        height=h;
        length=l;
    }
    void show(){
        System.out.println("width="+width);
        System.out.println("height="+height);
        System.out.println("length="+length); 
    }
}
class WeightBox extends Box {
    double weight;
    WeightBox(double w,double h,double l,double we){
        super(w,h,l);
        weight=we;
    }
     WeightBox(WeightBox w){
         super(w);//a super class variable can be used to reference any 
                  // object derived from that class
        weight=w.weight;
    }
    void show(){
        System.out.println("width="+width);
        System.out.println("height="+height);
        System.out.println("length="+length); 
        System.out.println("weight="+weight);
    }
}
public class ExtendsBox {

    public static void main(String[] args) {
      Box sup2=new Box(1,2,3);
      Box sup1=new Box(sup2);
      sup1.show();
      sup2.show();
      System.out.println();
      WeightBox sub1=new WeightBox(9,8,7,6);
      WeightBox sub2=new WeightBox(sub1);
      sub1.show();
      sub2.show();
    }
    
}
