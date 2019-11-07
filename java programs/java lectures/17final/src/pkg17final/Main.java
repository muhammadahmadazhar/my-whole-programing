
package pkg17final;
final class Example{
    // we cant make it subclass
    // because it is final class
}
class Paper{
    public final void fun(){
        // we cant overide this functon in subclass
        // because it is final function
    }
}
class Test{
    private final static int x;
    static{
           x=4;
           //x=44;
           System.out.println("final static variable"+x);
          }
    private final int y;
    {    
        y=5;
        //y=55;
        System.out.println("final instance variable"+y);
    }
}
public class Main {

    public static void main(String[] args) {
       System.out.println("main clss");
       new Test();
    }
    
}
