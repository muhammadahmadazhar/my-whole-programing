/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package foreachloop;

public class Foreachloop {

    public static void main(String[] args) {
      int nums[]={1,2,3,4,5,6,7,8,9,10};
      int sum=0;
      for(int x:nums){
          System.out.print(x+" ");
          sum+=x;
      }
      System.out.println("sum="+sum);
               sum=0;
        for(int x:nums){
          System.out.print(x+" ");
          sum+=x;
          if(x==5)break;
      }
      System.out.println("sum="+sum);
              sum=0;
        for(int x:nums){
          x*=10;//x is read only its value cant change
          System.out.print(x+" ");
      }
    }
       
}
