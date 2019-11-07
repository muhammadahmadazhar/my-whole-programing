
package binarysearch;
class Search{
    public void binary(int a[],int item){
        int beg=0,mid=0,end=a.length-1;
        
        while(beg<=end&&item!=a[mid]){
            mid=(beg+end)/2;
            if(item==a[mid]){
                System.out.println("item="+a[mid]+"  index="+mid);
            }
            else if(item<a[mid]){
                end=mid-1;
            }
            else{
                beg=mid+1;
            }
           
        }
    }
}
public class BinarySearch {

    public static void main(String[] args) {
        int a[]={5,10,15,20,25,30,35};
        Search s=new Search();
        s.binary(a, 30);
    }
    
}
