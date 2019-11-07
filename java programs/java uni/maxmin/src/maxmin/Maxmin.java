
package maxmin;
import java.util.Scanner;
public class Maxmin {
    
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int a[]=new int[4];
        int max,min;
        for(int i=0;i<4;i++){
            a[i]=in.nextInt();
        }
        max=min=a[0];
        for(int i=0;i<4;i++){
            if(min>a[i]){
                min=a[i];
            }
            if(max<a[i]){
                max=a[i];
            }        
        }
                System.out.println("minimum no="+min);
                System.out.println("maximum no="+max);
    }
    
}
