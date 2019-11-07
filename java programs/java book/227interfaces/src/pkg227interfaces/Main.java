
package pkg227interfaces;
interface Callback{
    void callback(int p);
}
class Client implements Callback{
    public void callback(int p){
        System.out.println("callback calls "+p);
    }
    void nonIfaceMeth(){
        System.out.println("classes that implements interfaces"+
                "may alse define other members too");
    }
}
//partial implementation of interfaces
abstract class Incomplete implements Callback{
    int a,b;
    void show(){
        System.out.println(a+" "+b);
    }
}
public class Main {

    public static void main(String[] args) {
        Callback c=new Client();
        c.callback(42);
    }
    
}
