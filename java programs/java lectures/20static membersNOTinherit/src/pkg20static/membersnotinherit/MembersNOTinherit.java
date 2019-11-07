
package pkg20static.membersnotinherit;
 class Parent{
   static int y=4;
    static void f(){
       System.out.println("parent ff");//it is inherit in child
   }
   static void f1(){
       System.out.println("parent");// it does no inherit it will hide
   }
}
class Child extends Parent{
    static{
        y=5;
    }
     static void f1(){
        System.out.println("child");
    }
}
public class MembersNOTinherit {

    public static void main(String[] args) {
       System.out.println(Child.y);
       Child.f();
       Child.f1();
    }
    
}
