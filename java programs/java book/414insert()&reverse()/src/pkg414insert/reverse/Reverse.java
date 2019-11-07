
package pkg414insert.reverse;

public class Reverse {

    public static void main(String[] args) {
        StringBuffer sb=new StringBuffer("i java");
        sb.insert(2, "like ");
        System.out.println(sb);
        sb.reverse();
        System.out.println(sb);
    }
    
}
