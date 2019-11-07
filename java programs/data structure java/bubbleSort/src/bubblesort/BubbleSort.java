
package bubblesort;
class Sort{
    void bubble(int a[],int n){
        int temp;
        for(int i=1;i<=a.length-1;i++){
            for(int j=0;j<=a.length-1-i;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }
}
public class BubbleSort {

    public static void main(String[] args) {
        int a[]={55,4,33,60,13,99,44,22,89,18};
        Sort s=new Sort();
        s.bubble(a,10);
        for(int i=0;i<a.length;i++){
            System.out.print(a[i]+"  ");
        }
    }
    
}
