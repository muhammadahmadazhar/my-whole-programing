
package pkg179innerclass;
class Outer{
     int x=100;
     void getOuter(){
         Inner in=new Inner();
         in.getinner();
     }
     class Inner{
         void getinner(){
             System.out.println("x="+x);
         }
     }
}
public class Main {

    public static void main(String[] args) {
        Outer o=new Outer();
        o.getOuter();
    }
    
}
