
package pkg35.pkg1throwsincheckedexpection;
import java.io.*;
public class Main {

    public static void main(String[] args)throws IOException {
        throw new IOException("compile time exception and program terminates");
    }// java s checked exception catch mechanism run so error look like this
    
}
