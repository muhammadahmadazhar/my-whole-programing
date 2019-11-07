
package pkg229nestedif;
class A{
    protected interface NestedIF{//default/public/private/protected/
        boolean isNegative(int p);//default/public
    }
}
class B implements A.NestedIF{
    public boolean isNegative(int x){//public
        return x<0? false:true;//because true is written on second no we can interchange it
    }
}
public class Main {

    public static void main(String[] args) {
      A.NestedIF nif=new B();
      if(nif.isNegative(10))
          System.out.println("positive");
      if(nif.isNegative(-12))
          System.out.println("this wont be displayed");
    }
    
}
