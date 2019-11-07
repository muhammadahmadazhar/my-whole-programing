
package pkg30indexof;

public class Main {

    public static void main(String[] args) {
        String s1=new String("computer");
        
        int str=s1.indexOf('t',3);
        System.out.println(str);
        
        int s=s1.indexOf("m");
        System.out.println(s);
        
        s=s1.indexOf("m",3);
        System.out.println(s);
    }
    
}
