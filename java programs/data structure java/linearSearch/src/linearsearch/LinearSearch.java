
package linearsearch;
class Search{
    public void linear(int a[],int item){
        int loc=-1;
        for(int i=0;i<=a.length-1;i++){
            if(a[i]==item){
                loc=i+1;
                System.out.println(loc);
            }
        }
        if(loc==-1)
            System.out.println("search unsuccessfull");
    }
}
public class LinearSearch {

    public static void main(String[] args) {
        int a[]={33,55,23,5,7,13};
        Search s=new Search();
        s.linear(a,13);
    }
    
}
