
package pkg35.pkg2checkedexpection;
import java.io.*;
public class Main {

    public static void main(String[] args) {
        try{
            throw new IOException("compile time exception and program continue");
        }
        catch(IOException e){
            System.out.println("exception "+e.getMessage());
        }
    }
    
}
