
package pkg410stringbuffer;

public class Main {

    public static void main(String[] args) {
       StringBuffer sb=new StringBuffer("hello");
        sb.setLength(7);
        sb.ensureCapacity(70);
        System.out.println("buffer="+sb);
        System.out.println("length="+sb.length());
        System.out.println("capacity="+sb.capacity());
    }
    
}
