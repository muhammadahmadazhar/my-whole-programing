
package pkg17this;
class Example{
     int l=5,b=6,h=7;
     void sendObj(){

      Gift gf=new Gift();
      gf.exceptGift(this);
    }
}
class Gift{
       void exceptGift(Example ex){
        System.out.println("ex="+ex.l);
        System.out.println("ex="+ex.b);
        System.out.println("ex="+ex.h);
    }
}
public class Main {

    public static void main(String[] args) {
       Example ex=new Example();
       ex.sendObj();
    }
    
}
