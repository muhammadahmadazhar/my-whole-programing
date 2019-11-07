/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg8wrapper;

/**
 *
 * @author AHMAD HACKER
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Integer i1=Integer.valueOf("123");
        System.out.println("i1="+i1);
        Integer i2=Integer.valueOf("101011",2);
        System.out.println("i2="+i2);
        Double d1=Double.valueOf("3.14");
        System.out.println("d1="+d1);
        int a=Integer.parseInt("456");
        System.out.println("a="+a);
        double b=Double.parseDouble("33.33");
        System.out.println("b="+b);
        int c=i1.intValue();
        System.out.println("c="+c);
    }
    
}
