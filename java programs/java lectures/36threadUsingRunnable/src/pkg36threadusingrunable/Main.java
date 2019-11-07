
package pkg36threadusingrunable;
class A implements Runnable{
    public void run(){
        for(int i=0;i<10;i++){
            System.out.println("A"+i);
        }
    }
}
class B implements Runnable{
    public void run(){
        for(int i=0;i<10;i++){
            System.out.println("B"+i);
        }
    }
}
public class Main {

    public static void main(String[] args) {
        Runnable i1=new A();
        Runnable i2=new B();
      //  Thread t1=new Thread(i1);
        Thread t1=new Thread(new A());
       // Thread t2=new Thread(i2);
        Thread t2=new Thread(new B());
        t1.start();
        t2.start();
    }
    
}
