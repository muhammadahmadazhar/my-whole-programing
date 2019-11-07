/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package array;
import java.util.Scanner;
public class Array {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Scanner s=new Scanner(System.in);
        int[] a=new int[4];
        int r,sum=0;
        System.out.println("Enter the values for 1 array");
        for(r=0;r<4;r++){
                a[r]=s.nextInt();
                sum+=a[r];
        }
          System.out.print("sum="+sum);
    }
    
}
