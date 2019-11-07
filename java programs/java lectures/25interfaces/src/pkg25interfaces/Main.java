
package pkg25interfaces;
interface i1{
    void fun1();
}
interface i2{
    void fun2();
}
class Example implements i1,i2{
   public void fun1(){}//when u overide interface method u must declare public
   public void fun2(){}
    void fun3(){}
}
public class Main {

    public static void main(String[] args) {
        Example e=new Example();
        e.fun1();
        e.fun2();
        e.fun3();
        i1 i=new Example();
        i.fun1();
        i.fun2();
        i.fun3();
        i2 ii=new Example();
        ii.fun1();
        ii.fun2();
        ii.fun3();
    }
    
}
