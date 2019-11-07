
package pkg15inialiazation.block;
class Test{
    private static int x;
    public static int a;
    static{
           System.out.println("static inialization block "+x);
           a=4;
          }
    private int y;
    {
        System.out.println("instance inialization block "+y);
        y=5;
    }
    public Test(){
        System.out.println("constructor inialization block "+y);
    }
}
public class Block {

    public static void main(String[] args) {
        new Test();
        new Test();
        System.out.println("static variable"+Test.a);
    }
}
