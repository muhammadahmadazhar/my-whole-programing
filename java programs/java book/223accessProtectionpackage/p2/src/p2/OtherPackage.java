
package p2;

import p1.Protection;

public class OtherPackage {
    Protection pro=new Protection() ;
    public OtherPackage(){
    System.out.println("OtherPackage construtor");
    System.out.print(" OtherPackage a="/*+pro.a*/);
    System.out.print(" OtherPackage b="/*+pro.b*/);
    System.out.print(" OtherPackage c="/*+pro.c*/);
    System.out.println(" OtherPackage d="+pro.d);
}
}
