
package pkg415delete.deletecharat.replace;

public class DeleteCharAtReplace {

    public static void main(String[] args) {
        StringBuffer sb=new StringBuffer("this is a test");
        System.out.println(sb);
        sb.delete(4, 7);
        System.out.println(sb);
        sb.deleteCharAt(5);
        System.out.println(sb);
        sb.replace(6, 10, "java");
        System.out.println(sb);
    }
    
}
