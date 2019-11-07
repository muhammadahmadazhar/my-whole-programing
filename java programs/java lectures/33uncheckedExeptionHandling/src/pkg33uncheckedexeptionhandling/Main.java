
package pkg33uncheckedexeptionhandling;

public class Main {

    public static void main(String[] args) {
        try{ 
            System.out.println("first line");
            System.out.println("exception="+3/0);
            System.out.println("in try");
        }
        catch(NullPointerException e){
            System.out.println("catch1="+e.getMessage());
        }
        catch(ArithmeticException e){
            System.out.println("catch="+e.getMessage());
        }
        System.out.println("hello");
    }
    
}
