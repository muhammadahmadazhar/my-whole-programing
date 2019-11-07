
package pkg213finalmethodfinalclass;
class A{
    private int a;
   final void get(){
        a=10;
    }
}
class B extends A{
    private int b;
    void get(){ 
                 // cant override this method 
                //  final method is alternative of inline method
        b=20;
    }
 }
final class C{
    
}
class D extends C{
        // C class cant extends
        }
public class Main {

    public static void main(String[] args) {
        
    }
    
}
