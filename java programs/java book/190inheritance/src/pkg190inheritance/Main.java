
package pkg190inheritance;
class A{
    int i,j;
    void set(){
        i=10;
        j=20;
    }
    void show(){
        System.out.println("i="+i);
        System.out.println("j="+j);
    }
}
class B extends A{
    int k=30;
    void sum(){
        System.out.println("sum="+(i+j+k));
    }
}
public class Main {

    public static void main(String[] args) {
      B b=new B() ;
      b.set();
      b.show();
      b.sum();
    }
    
}
