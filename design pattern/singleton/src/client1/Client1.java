
package client1;
class Singleton{
    private static Singleton obj;
    private Singleton(){
        
    }
    public static Singleton createObj(){
        if(obj==null){
            obj=new Singleton();
        }
        return obj;
    }
    public void showMessage(){
        System.out.println("BSIT-V");
    }
}
public class Client1 {

    public static void main(String[] args) {
      // Singleton s=new Singleton();
      Singleton s=Singleton.createObj();
      s.showMessage();
    }
    
}
