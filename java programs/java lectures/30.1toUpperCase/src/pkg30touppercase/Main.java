
package pkg30touppercase;

public class Main {

    public static void main(String[] args) {
        String s1=new String("computer");
        String s=s1.toUpperCase();//temporary change
        System.out.println(s1);
        System.out.println(s);
        s=s1.toLowerCase();
        System.out.println(s);
    }
    
}
