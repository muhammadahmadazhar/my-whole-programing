
package insertionsort;
class Sort{
    int i,j,temp;
    public void insert(int A[],int n){
        for(i=1;i<n;i++){
            temp=A[i];
            for(j=i-1;j>=0&&A[j]>temp;j--){
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
    }
    
}
public class InsertionSort {

    public static void main(String[] args) {
       int A[]={77,34,55,11,80,25,4};
       Sort o=new Sort();
       o.insert(A,7);
       for(int i=0;i<7;i++){
            System.out.println(A[i]);
        }
    }
    
}
