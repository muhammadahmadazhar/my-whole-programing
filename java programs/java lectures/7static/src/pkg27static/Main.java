/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg27static;
class Account{
    int acno;
    static int tax1,tax2;
    public static void details(){
        tax2=10;
    }
    static class Maneger{
        public static int tax3=15;
    }
}
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Account.tax1=5;
        System.out.println(Account.tax1);
        Account.details();
        System.out.println(Account.tax2);
        System.out.println(Account.Maneger.tax3);
    }
    
}
