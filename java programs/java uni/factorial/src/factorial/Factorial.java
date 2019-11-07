/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package factorial;
import java.util.Scanner;
/**
 *
 * @author AHMAD HACKER
 */
public class Factorial {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int f=1,c,n;
        Scanner in=new Scanner(System.in);
        System.out.print("enter value=");
        n=in.nextInt();
        for(c=1;c<=n;c++){
            f*=c;
        }
        System.out.println("\nfactorial of "+n+" is "+f);
    }
    
}
