
package pkg16overloading.overriding;
class A{
    private int a;
    public void f(int x){
        System.out.println("class A");
    }
}
class B extends A{
    private int b;
    public void f(int x,int y){
        System.out.println("class B");
    }
}

class C{
    private int a;
    public void f(int x){
        System.out.println("class C");
    }
}
class D extends C{
    private int b;
    public void f(int x){
        System.out.println("class D");
    }
}
public class Overriding {

    public static void main(String[] args) {
        B b=new B();
        b.f(2);
        b.f(3,4);
        C c=new C();
        D d=new D();
        c.f(5);
        d.f(6);
    }
    
}
