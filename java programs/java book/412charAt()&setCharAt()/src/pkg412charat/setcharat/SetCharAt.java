
package pkg412charat.setcharat;

public class SetCharAt {

    public static void main(String[] args) {
        StringBuffer sb=new StringBuffer("hello");
        System.out.println("before "+sb);
        System.out.println("before charAt(1) "+sb.charAt(1));
        sb.setCharAt(1,'i');
        sb.setLength(2);
        System.out.println("after "+sb);
        System.out.println("after charAt(1) "+sb.charAt(1));
    }
    
}
