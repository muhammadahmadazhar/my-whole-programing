
package decimalpointpercision;
import java.text.DecimalFormat;

public class DecimalPointpercision {

    public static void main(String[] args) {
        DecimalFormat df2=new DecimalFormat(".###");
      double input=32.12345;
      System.out.println("double1="+input);
      System.out.println("double1="+df2.format(input));
    }
    
}
