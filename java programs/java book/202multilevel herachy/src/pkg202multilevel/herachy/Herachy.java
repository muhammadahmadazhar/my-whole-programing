
package pkg202multilevel.herachy;
class Box{
    int width,height,depth;
    Box(){
        System.out.println("box constructor");
         width=1;
        height=1;
        depth=1;
    }
    Box(int w,int h,int d){
        width=w;
        height=h;
        depth=d;
    }
    Box(Box b){
        width=b.width;
        height=b.height;
        depth=b.depth;
    }
    void showCost(char c){
        System.out.println("char="+c);
        System.out.println("width="+width);
        System.out.println("height="+height);
        System.out.println("depth="+depth);
    }
}
class WeightBox extends Box{
    float weight;
    WeightBox(){
        super();
        System.out.println("WeightBox constructor");
        weight=1;
    }
    WeightBox(int w,int h,int d,float we){
        super(w,h,d);
        weight=we;
    } 
    WeightBox(WeightBox w){
        super(w);
        weight=w.weight;
    }
    void showCost(String s){
        System.out.println("String="+s);
        System.out.println("width="+width);
        System.out.println("height="+height);
        System.out.println("depth="+depth);
        System.out.println("weight="+weight);
    }
}
class CostBox extends WeightBox{
    double cost;
    CostBox(){
        super();
        System.out.println("CostBox constructor");
        cost=1;
    }
    CostBox(int w,int h,int d,float we,double c){
         super(w,h,d,we);
         cost=c;
    }
    CostBox(CostBox c){
        super(c);
        cost=c.cost;
    }
    void showCost(){
        System.out.println("width="+width);
        System.out.println("height="+height);
        System.out.println("depth="+depth);
        System.out.println("weight="+weight);
        System.out.println("cost="+cost);
    }
}
public class Herachy {

    public static void main(String[] args) {
        CostBox box1=new CostBox();
        CostBox box2=new CostBox(1,2,3,4f,5d);
        CostBox box3=new CostBox(box1);
        box2.showCost();
        box3.showCost();
        box2.showCost('a');
        box2.showCost("ahmad");
    }
    
}
