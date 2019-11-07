package sort;
import java.util.Scanner;
public class Sort {
    public static void main(String[] args) {
        int temp;
       Scanner in=new Scanner(System.in);
      // System.out.print("enter no of array element="+"\n");
       int a[]=new int[4];
       System.out.println("enter element");
       for(int i=0;i<4;i++){
           a[i]=in.nextInt();
       }
       for(int i=0;i<4;i++){
           
           for(int j=i+1;j<4;j++){
               if(a[i]>a[j]){
                   temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;       
               }
           }
       }
       for(int i=0;i<=3;i++){
           System.out.print(a[i]+"  ");
       }
    }
    
}
