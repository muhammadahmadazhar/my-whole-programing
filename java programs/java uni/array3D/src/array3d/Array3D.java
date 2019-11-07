/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package array3d;

public class Array3D {

    public static void main(String[] args) {
      int arr[][][]=new int[3][4][5];
      for(int i=0;i<3;i++){
          for(int j=0;j<4;j++){
              for(int k=0;k<5;k++){
                  arr[i][j][k]=i*j*k;
              }
          }
      }
      
      for(int i=0;i<3;i++){
          for(int j=0;j<4;j++){
              
              for(int k=0;k<5;k++){
              System.out.print(arr[i][j][k]+" ");
              }
          System.out.println();
          }
      System.out.println("\n");  
      }
          
    }
    
}
