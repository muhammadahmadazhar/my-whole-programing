
package pkg184variablearguments.varargs;
class Test{
    static void varTest(String msg,int ...v){//int v[]=int ...v
        System.out.print(msg+"  "+v.length+"  value");
        for(int x:v)
            System.out.print(x+" ");
        System.out.println();
    }
}
public class Varargs {

    public static void main(String[] args) {
        int ar1[]={10};
        int ar2[]={1,2,3};
        int ar3[]={};
        Test.varTest("1 varags",ar1);
        Test.varTest("3 varags",ar2);
        Test.varTest("no varags",ar3);
        
    }
    
}
