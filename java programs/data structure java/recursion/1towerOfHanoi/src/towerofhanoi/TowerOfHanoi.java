package towerofhanoi;
class Toh{
   static int c=0;
   public void tower(int n,char beg,char aux,char end){
        c++;
         if(n==1){
             
             System.out.println(n+":"+beg+"->"+end);  
         }
         else{//n>1
             
             tower(n-1, beg, end, aux);
             System.out.println(n+":"+beg+"->"+end);
             tower(n-1, aux, beg, end);
         }
    }
}
public class TowerOfHanoi {

    public static void main(String[] args) {
        Toh t=new Toh();
        t.tower(3,'A','B','C');
        System.out.println("TOTAL MOVES="+Toh.c);
    }
    
}
