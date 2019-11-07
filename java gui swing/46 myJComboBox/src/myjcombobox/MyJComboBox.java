
package myjcombobox;

import java.awt.*;
import javax.swing.*;

public class MyJComboBox {

    public static void main(String[] args) {
        JFrame frame=new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(100,50,700,500);
        
        Container c=frame.getContentPane();
        c.setLayout(null);
        Font f=new Font("Arial",Font.BOLD,20);
        
        String arr[]={"A","B","C","D"};
        JComboBox com=new JComboBox(arr);
        com.setBounds(100,100,200,20);
        com.setEditable(true);
        com.setSelectedIndex(2);
        c.add(com);
        c.revalidate();
        
        JComboBox com1=new JComboBox(arr);
        com1.setBounds(100,200,200,20);
        com1.setEditable(true);
        com1.setSelectedItem("D");
        c.add(com1);
        c.revalidate();
    }
    
}
