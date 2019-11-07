package index;
import java.util.Scanner;
public class Index {

    public static void main(String[] args) {
       Scanner in=new Scanner(System.in);
       int a[]=new int[5];
       int i,no,c=0,loc=-1;
        System.out.print("enter array element=");
       for(i=0;i<5;i++){
           a[i]=in.nextInt();
       }
        System.out.print("enter no to be searched=");
       no=in.nextInt();
       for( i=0;i<5;i++){
           if(no==a[i]){
               c++;
               loc=0;
               
           }
           
       }
       if(loc==0)
           System.out.println("INDEX="+i);
       else
           System.out.println("unsuccessful");
       System.out.println("value repeated="+c);
    }
    
}
