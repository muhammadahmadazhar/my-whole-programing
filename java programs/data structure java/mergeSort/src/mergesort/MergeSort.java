
package mergesort;
class Sort{
    
    public void merge(int a[],int b[],int c[]){
       int na=0,nb=0,ptr=0;
        while(na<a.length&&nb<b.length){
            if(a[na]<b[nb]){
                c[ptr]=a[na];
                na++;
                ptr++;
            }
            else{
                c[ptr]=b[nb];
                nb++;
                ptr++;
            }
        }
        if(na>a.length-1){
            for(int k=0;k<b.length-nb;k++){
              c[ptr+k]=b[nb+k];
            }
        }
        else{
            for(int k=0;k<a.length-na;k++){
                c[ptr+k]=a[na+k];
            }
        }
    }
   
}
public class MergeSort {

    public static void main(String[] args) {
     int a[]={4,6,8,10,12,14,16};
     int b[]={3,5,7,9,11,13,15,17};
     int c[]=new int[a.length+b.length];
        Sort s=new Sort();
        s.merge(a,b,c);
        for(int ptr=0;ptr<c.length;ptr++){
            System.out.println(c[ptr]);
        }
    
    }
    
}
