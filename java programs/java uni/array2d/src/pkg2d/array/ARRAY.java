/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg2d.array;
import java .util.Scanner;
/**
 *
 * @author lab
 */
public class ARRAY {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
          Scanner in=new Scanner(System.in);
        int a[][]=new int [4][4];
        int b[][]=new int [4][4];
        int s[][]=new int [4][4];
        int r,c;
        System.out.println("Enter the values for 1 array");
        for(r=0;r<=3;r++){
            for(c=0;c<=3;c++){
                a[r][c]=in.nextInt();
            }
        }
        System.out.println("Enter the values for 2 array");
        for(r=0;r<=3;r++){
            for(c=0;c<=3;c++){
                b[r][c]=in.nextInt();
            }
        }
          System.out.println("result of sum=");
        for(r=0;r<=3;r++){
            for(c=0;c<=3;c++){
                s[r][c]=a[r][c]+b[r][c];
                System.out.print(s[r][c]+"\t");
            }
            System.out.println();
        }
        
        
        
        // TODO code application logic here
    }
    
    
}
