
package pkg41synchronizingmultiplethreads;
import java.util.Scanner;
class Account{
    private int bal;
    public Account(int bal){
        this.bal=bal;
    }
    public boolean isSufficient(int w){
        if(bal>=w)
            return true;
        else 
            return false;
    }
    public void withdraw(int amt){
        bal=bal-amt;
        System.out.println("withdrawl money is"+amt);
        System.out.println("current bal is"+bal);
    }
}
class Customer implements Runnable{
    private String name;
    public Account account;
    public Customer(Account account,String n){
        this.account=account;
        name=n;
    }
    public void run(){
        Scanner kb=new Scanner(System.in);
        synchronized(account){
        System.out.println("enter amount "+name+" to withdraw");
        int amt=kb.nextInt();
        if(account.isSufficient(amt)){
            System.out.println(name);
           account.withdraw(amt);
        }
        else
            System.out.println("insufficient balance");
        }
    }
}
public class Main {

    public static void main(String[] args) {
        Account a1=new Account(1000);
        Customer c1=new Customer(a1,"ahmad"),c2=new Customer(a1,"amjad");
        Thread t1=new Thread(c1);
        Thread t2=new Thread(c2);
        t1.start();
        t2.start();
    }
    
}
