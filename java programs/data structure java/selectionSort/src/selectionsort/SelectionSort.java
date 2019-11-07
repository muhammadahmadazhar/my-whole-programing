
package selectionsort;
class Sort{
    public int min(int a[],int k,int n){
        int loc=k,min;
        min=a[k];
        for(int i=k;i<a.length-1;i++){
            if(min>a[i+1]){
                min=a[i+1];
                loc=i+1;
            }
        }
       return loc; 
    }
    void selection(int a[],int n){
        int loc,temp;
        for(int k=0;k<n-1;k++){
           loc=min(a,k,n);
           temp=a[k];
           a[k]=a[loc];
           a[loc]=temp;
        }
    }
}
public class SelectionSort {

    public static void main(String[] args) {
        int a[]={37,44,55,100,30,80,5};
        Sort s=new Sort();
        s.selection(a, 7);
        for(int i=0;i<7;i++){
            System.out.print(a[i]+"  ");
        }
    }
    
}
