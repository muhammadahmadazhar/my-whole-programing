
package pkg402bubblesortarray;

public class Main {

    public static void main(String[] args) {
        String a[]={
            "Now","is","the","time","for","all","good","men",
            "to","come","to","the","aid","for","their","countary"
        };
        String temp;
        for(int i=0;i<a.length;i++){
            for(int j=i+1;j<a.length;j++){
                if(a[j].compareTo(a[i])<0){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
            System.out.println(a[i]);
        }
    }
    
}
