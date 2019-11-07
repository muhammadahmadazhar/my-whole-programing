
package dynamic;
class A{
    int a=10;
    public void show(){
        System.out.println("CLASS A");
    }
}
class B extends A{
     int a=20;
    public void show(){
       System.out.println("CLASS B"); 
    }
}
public class Dynamic {

    public static void main(String[] args) {
        A obj1=new A();
        A obj2=new B();
        //instance variables cant overide so cant polymorphism
        //they depend upon reference variables of that class
        System.out.println(obj1.a);//10
        System.out.println(obj2.a);//10
        //B obj3=new A();
        B obj4=new B();
        //System.out.println(obj3.a);
        System.out.println(obj4.a);//20
    }
    
}
