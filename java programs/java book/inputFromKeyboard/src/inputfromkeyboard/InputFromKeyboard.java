
package inputfromkeyboard;
import java.util.Scanner;
public class InputFromKeyboard {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String s;
        String s1;
        System.out.println("enter name without space");
        s=in.next();
        System.out.println(s);
        System.out.println("enter name with space");
        s1=in.nextLine();
        System.out.println(s1);
    }
    
}
