/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fibonacci;
class Fibonac{
    int fib(int n){
        if(n==1||n==2){
            return 1;
        }
        else{
            return(fib(n-1)+fib(n-2));
        }
    }
}
public class Fibonacci {

    public static void main(String[] args) {
        Fibonac f=new Fibonac();
        for(int i=1;i<=10;i++){
            System.out.print(f.fib(i)+" ");
        }
    }
    
}
