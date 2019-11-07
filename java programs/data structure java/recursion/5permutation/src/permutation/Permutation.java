
package permutation;
class Permut{
    static int count;
        void swap(char [] s,int x,int y){
            char temp=s[x];
                 s[x]=s[y];
                 s[y]=temp;
        }
    void perm(char[] s,int i,int n){ 
        int j;
        if(i==n){
            count++;
           System.out.println(s);
        }
        else{
            for(j=i;j<=n;j++){
                swap(s,i,j);
                perm(s,i+1,n);
                swap(s,i,j);
            }
        }
    }
}
public class Permutation {

    public static void main(String[] args) {
        char []s={'a','b','c'};
        Permut p=new Permut();
        p.perm(s, 0, s.length-1);
    }
    
}
