
package foreachloop2d;

public class Foreachloop2d {

    public static void main(String[] args) {
       int arr[][]=new int[3][5];
       int sum=0;
       for(int i=0;i<3;i++){
           for(int j=0;j<5;j++){
               arr[i][j]=(i+1)*(j+1);
           }
       }
       for(int x[] : arr){
           for(int  y : x){
               System.out.print(y+" ");
               sum+=y;
           }
       }
       System.out.println("sum="+sum);
    }
    
}
