
package pkg38threadusingthreadclass;
class A extends Thread{
     public void run(){
        for(int i=0;i<10;i++){
            System.out.println("A"+i);
        }
    }
}
class B extends Thread{
    public void run(){
        for(int i=0;i<10;i++){
            System.out.println("B"+i);
        }
    }
}
class C extends Thread{
    public void run(){
        for(int i=0;i<10;i++){
            System.out.println("c"+i);
        }
    }
}
public class Main {

    public static void main(String[] args) {
       A o1=new A();o1.setPriority(4);
       B o2=new B();o2.setPriority(5);
       C o3=new C();o3.setPriority(6);
       o1.start();
       o2.start();
       o3.start();
       System.out.println(o1.getPriority());
       System.out.println(o2.getPriority());
       System.out.println(o3.getPriority());
    }
    
}
