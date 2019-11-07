
package pkg22constructor.chaining;
class A{
    int a;
    A(){
        System.out.println("a");
    }
}
class B extends A{
    int b;
    B(){
        //super() compiler write it automatically
       System.out.println("b"); 
    }
}
class C{
    int c;
    C(){
        System.out.println("c11");
    }
}
class D extends C{
    int d;
    D(){
        this(4);
         System.out.println("d11");
    }
    D(int x){
       // super();
        d=x;
        System.out.println("d22");
    }
}
public class Chaining {

    public static void main(String[] args) {
        new B();
        new D();
    }
    
}
