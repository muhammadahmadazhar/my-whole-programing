
package greatestcommondivisor;
class Greatest{
    int gcd(int a,int b){
        if(a==b) return a;
        if(a%b==0) return b;
        if(b%a==0) return a;
        if(a>b) 
            return(gcd(a%b,b));
        else
            return(gcd(a,b%a));
    }
}
public class GreatestCommonDivisor {

    public static void main(String[] args) {
        Greatest g=new Greatest();
        System.out.println("gcd is="+g.gcd(105,91));
    }
    
}
