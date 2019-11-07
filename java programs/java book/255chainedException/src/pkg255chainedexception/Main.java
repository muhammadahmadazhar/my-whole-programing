
package pkg255chainedexception;
class Chained{
    static void proc(){
        NullPointerException e=new NullPointerException("top layer");
        e.initCause(new ArithmeticException("cause"));
        throw e;
    }
}
public class Main {

    public static void main(String[] args) {
        try{
            Chained.proc();
        }
        catch(NullPointerException e){
            System.out.println("caught "+e.getMessage());
            System.out.println("orginal cause "+e.getCause());
        }
    }
    
}
