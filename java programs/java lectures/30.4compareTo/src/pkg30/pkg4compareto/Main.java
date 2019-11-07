
package pkg30.pkg4compareto;

public class Main {

    public static void main(String[] args) {
        String s1=new String("coMputer");
        String s2=new String("computer");
        int i=s1.compareTo(s2);
        if(i==0)
            System.out.println("string equals");
        else if(i<0)//M-m=77-109=-32
            System.out.println("string is in dictionery order");
        else
            System.out.println("string is opposite to dictionery order");
    }
    
}
