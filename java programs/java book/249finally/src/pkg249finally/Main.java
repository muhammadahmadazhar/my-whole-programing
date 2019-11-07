
package pkg249finally;

class FinallyDemo{
    static void procA(){
        try{
           System.out.println("procA");
           throw new ArithmeticException("demo");
           }
    finally{
           System.out.println("procA finally");
           }
     }
    static void procB(int a){
        try{
            System.out.println("procB");
            //return ;
             a=a/0;
        }
        finally{
            System.out.println("procB finally");
        }
    }
}
public class Main {

    public static void main(String[] args) {
        try{
        FinallyDemo.procA();
        }
        catch(Exception e){
            System.out.println("caught "+e);
        }
        FinallyDemo.procB(3);
    }
    
}
