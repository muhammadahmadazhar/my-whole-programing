
package pkg29distinctlength;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int [][]a=new int[2][];
         a[0]=new int[5];
         a[1]=new int[3];
           System.out.println("enter values in two different length arrays");
         for(int i=0 ;i<a.length;i++){
               for(int j=0;j<a[i].length;j++){
                   a[i][j]=in.nextInt();
               }
         }
         for(int i=0 ;i<a.length;i++){
               for(int j=0;j<a[i].length;j++){
                   System.out.println("a["+i+"]["+j+"]="+a[i][j]);
               }
         }
    }
    
}
