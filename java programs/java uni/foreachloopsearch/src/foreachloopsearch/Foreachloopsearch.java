
package foreachloopsearch;

public class Foreachloopsearch {

    public static void main(String[] args) {
       int arr[]={2,8,4,6,5,1,3,9};
       int val=10;
       boolean found=false;
       for(int x: arr){
           if(val==x)
              found=true;
       }
       if(found)
           System.out.println("value found");
       else
           System.out.println("value not found");
    }
    
}
