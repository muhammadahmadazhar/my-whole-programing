
package pkg200another.use.of.pkgsuper;
class A{
    int i=5;
}
class B extends A{
    int i;
    B(int a,int b){
        super.i=a;
        i=b;
    }
    void show(){
        System.out.println("i="+super.i);
        System.out.println("i="+i);
    }
}
public class UseOfSuper {

    public static void main(String[] args) {
        B b=new B(1,2);
        b.show();
    }
    
}
