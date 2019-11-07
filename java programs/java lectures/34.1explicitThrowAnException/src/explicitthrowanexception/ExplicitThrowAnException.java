
package explicitthrowanexception;

public class ExplicitThrowAnException {

    public static void main(String[] args) {
        int balance=5000;
        int withdrawlbalance=3000;
        if(balance<withdrawlbalance)
            throw new ArithmeticException("INSUFFICIENT BALABCE");
        balance=balance-withdrawlbalance;
        System.out.println("TRANSACTION SUCCESSFULL");
        System.out.println("program continew");
    }
    
}
