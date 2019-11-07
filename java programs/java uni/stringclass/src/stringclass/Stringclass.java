
package stringclass;
class Test{
    String str;
   private String str1;
    Test(){
        str="ahmad azhar";
        str1="azhar qayyum";
    }
    void check(){
        System.out.println(str+"\n"+str1);
    }
}
public class Stringclass {

    public static void main(String[] args) {
        Test t=new Test();
        t.check();
        System.out.println(t.str);
    }
    
}
