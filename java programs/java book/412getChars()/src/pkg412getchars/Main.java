
package pkg412getchars;

public class Main {

    public static void main(String[] args) {
        StringBuffer sb=new StringBuffer("this is my first project");
        char buf[]=new char[20];
        sb.getChars(5, 16, buf, 0);
        System.out.println(buf);
    }
    
}
