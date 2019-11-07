

package breakloopasformofgoto;

public class Breakloopasformofgoto {

    public static void main(String[] args) {
        boolean t=true;
              for(int i=0;i<3;i++){
                   for(int j=0;j<100;j++){
                       if(j==10)
                           break ;
                       System.out.print(j+" ");
                   }
                   System.out.println();
                }
              System.out.println();
        outer: for(int i=0;i<3;i++){
                   for(int j=0;j<100;j++){
                       if(j==10)
                           break outer;
                       System.out.print(j+" ");
                   }
        }
    }
    
}
