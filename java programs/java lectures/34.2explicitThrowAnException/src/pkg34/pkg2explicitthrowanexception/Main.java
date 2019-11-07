
package pkg34.pkg2explicitthrowanexception;

public class Main {

    public static void main(String[] args) {
        int balance=5000;
        int withdrawlbalance=6000;
        try{
        if(balance<withdrawlbalance)
            throw new ArithmeticException("INSUFFICIENT BALANCE");
        balance=balance-withdrawlbalance;
        System.out.println("TRANSACTION SUCCESSFULL");
        }
        catch(ArithmeticException e){
            System.out.println("EXCEPTION "+e.getMessage());
        }
        System.out.println("program continew");
    }
    
}
