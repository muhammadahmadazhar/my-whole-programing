
package oddfactorial;
class Factorial{
    public int fact(int n){
        int result;
        if(n==1)
            return 1;
        result=fact(n-1)*n;
            return result;
    }
}
public class OddFactorial {

    public static void main(String[] args) {
        Factorial f=new Factorial();
        System.out.println(f.fact(3));
        System.out.println(f.fact(4));
        System.out.println(f.fact(5));
    }
    
}
