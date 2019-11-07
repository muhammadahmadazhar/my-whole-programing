
package pkg30.pkg3lastindexof;

public class Main {

    public static void main(String[] args) {
        String s1=new String("computer");
        
        int s=s1.lastIndexOf("m");
        System.out.println(s);
        
        // it starts checking from last inex
        s=s1.lastIndexOf("m",3);
        System.out.println(s);
    }
    
}
