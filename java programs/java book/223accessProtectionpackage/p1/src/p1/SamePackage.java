
package p1;

public class SamePackage {
    Protection p=new Protection() ;
      public SamePackage(){
    System.out.println("SamePackage construtor");
    System.out.print(" SamePackage a="+p.a);
    System.out.print(" SamePackage b="/*+p.b*/);
    System.out.print(" SamePackage c="+p.c);
    System.out.println(" SamePackage d="+p.d);
}
}
