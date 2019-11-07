
package pkg210dynamic.method.dispatch;
class Figure{
    double base;
    double height;
    Figure(double a,double b){
        base=a;
        height=b;
    }
    double show(){
        System.out.println("Figure");
        return 0;
    }
}
class Rectangle extends Figure{
    Rectangle(double a,double b){
        super(a,b);
    }
    double show(){
        System.out.println("Rectangle");
        return (base*height);
    }
}
class Triangle extends Figure{
    Triangle(double a,double b){
        super(a,b);
    }
    double show(){
        System.out.println("Triangle");
        return (base*height)/2;
    }
}
public class MethodDispatch {

    public static void main(String[] args) {//error
        Figure fig=new Figure(1,2);//Triangle fig=new Figure(1,2);
        Figure rec=new Rectangle(2,3);//Triangle rec=new Rectangle(2,3);
        Figure tri=new Triangle(4,5);
       // Figure f;
       // f=fig;
        System.out.println(fig.show());
        //f=rec;
        System.out.println(rec.show());
        //f=tri;
        System.out.println(tri.show());
    }
    
}
