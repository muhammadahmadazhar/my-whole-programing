
package pkg175static;
class Stvariable{
    static int a=3;
    static int b;
    static {
        System.out.println("initialized block");
        b=6;
    }
    public static void show(){
        System.out.println("a="+a);
        System.out.println("b="+b);
    }
}
public class Main {
    // first all static statements are run then main is called
    public static void main(String[] args) {
        Stvariable.show();
    }
    
}
