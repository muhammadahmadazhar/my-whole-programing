
package pkg19superdifferencethis;
class A{
    int z;
    void  fun(){
        System.out.println("class A");
    }
}
class B extends A{
    int z;
    void fun(){
        System.out.println("class B");
    }
    void dif(){
        this.fun();
        super.fun();
    }
    void f(){
        int z;
        z=1;
        this.z=2;
        super.z=3;
    }
    void show(){
        System.out.println(this.z);
        System.out.println(super.z);
    }
}
public class Main {

    public static void main(String[] args) {
        B b=new B();
        b.dif();
        b.f();
       b.show();
    }
    
}
