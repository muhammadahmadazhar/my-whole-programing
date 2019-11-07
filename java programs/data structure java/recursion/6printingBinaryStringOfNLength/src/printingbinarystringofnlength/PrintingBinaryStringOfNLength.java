
package printingbinarystringofnlength;
class Binary{
    
    public void bin(int n,char A[]){
        if(n<1){
            System.out.println(A);
        }
        else{
            A[n-1]='0';
            bin(n-1,A);
            A[n-1]='1';
            bin(n-1,A);
        }
    }
}
public class PrintingBinaryStringOfNLength {

    public static void main(String[] args) {
        char a[]=new char[11];
        a[10]='\0';
       Binary b=new Binary();
       b.bin(10, a);
    }
    
}
