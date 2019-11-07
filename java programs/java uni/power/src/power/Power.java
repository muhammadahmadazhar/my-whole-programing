/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package power;
import java.util.Scanner;
/**
 *
 * @author AHMAD HACKER
 */
public class Power {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
            int f=1,c,a,b;
        Scanner in=new Scanner(System.in);
        System.out.print("enter value=");
        a=in.nextInt();
        System.out.print("enter value=");
        b=in.nextInt();
        for(c=1;c<=b;c++){
            f*=a;
        }
        System.out.println("\na^b\n"+a+"^"+b+"="+f);
    }
    
}
