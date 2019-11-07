package towerofhanoi;
class Toh{
   public void tower(int n,char beg,char aux,char end){
         if(n==1){
             System.out.println(beg+"->"+end);  
         }
         else{//n>1
             tower(n-1, beg, end, aux);
             System.out.println(beg+"->"+end);
             tower(n-1, aux, beg, end);
         }
    }
}
public class TowerOfHanoi {

    public static void main(String[] args) {
        Toh t=new Toh();
        t.tower(3,'A','B','C');
    }
    
}
