/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package table;
import java.util.Scanner;
/**
 *
 * @author lab
 */
public class Table {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int a,n,b;
        System.out.print("enter the number=");
        n=in.nextInt();
        a=0;
        for(b=1;b<=10;b++)
        {a=b*n;
        System.out.println( +n +"*"+b+"="+a);}
        // TODO code application logic here
    }
    
}
