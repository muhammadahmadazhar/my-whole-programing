
package myjcheckbox;

import java.awt.*;
import javax.swing.*;

public class MyJCheckBox {

    public static void main(String[] args) {
        JFrame frame=new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(100,50,700,500);
        
        Container c=frame.getContentPane();
        c.setLayout(null);
        Font f=new Font("Arial",Font.BOLD,20);
        
        JCheckBox check=new JCheckBox("Enabled");
        check.setBounds(50, 50, 110, 50);
        check.setFont(f);
        check.setSelected(true);
        c.add(check);
        
        JCheckBox check1=new JCheckBox("Disabled");
        check1.setBounds(50, 150, 110, 50);
        check1.setFont(f);
        check1.setEnabled(false);
        c.add(check1);
    }
    
}
