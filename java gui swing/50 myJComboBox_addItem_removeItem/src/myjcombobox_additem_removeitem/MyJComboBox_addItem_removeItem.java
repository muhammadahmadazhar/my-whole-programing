
package myjcombobox_additem_removeitem;

import java.awt.*;
import javax.swing.*;

public class MyJComboBox_addItem_removeItem {

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
        com.addItem("E");
        com.removeItem("C");
        c.add(com);
        c.revalidate();
    }
    
}
