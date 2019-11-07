
package pkg211abstract.pkgclass;
abstract class A{
    abstract void show();
    void showMe(){
        System.out.println("A showMe");
    }
    void showTo(){
        System.out.println("A showTo");
    }
}
class B extends A{
    void show(){
        System.out.println("B show");
    }
    void showMe(){
        System.out.println("B showMe");
    }
    void showTO(){
        System.out.println("B showTo");
    }
}
public class Class {

    public static void main(String[] args) {
       B b=new B() ;
       b.show();
       b.showMe();
       A a=new B();
       a.showTo();
       b.showTo();
    }
    
}
