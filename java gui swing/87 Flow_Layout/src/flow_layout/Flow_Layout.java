
package flow_layout;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Flow_Layout {

    public static void main(String[] args) {
        JFrame f=new JFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setBounds(100,100,700,500);
        
        FlowLayout f1=new FlowLayout();//(FlowLayout.RIGHT,100,50);
        f1.setHgap(100);
        f1.setVgap(50);
        
        Container c=f.getContentPane();
        c.setLayout(f1);
        
        JButton b1=new JButton("BUTTON 1 EXTRA SPACE");
        c.add(b1);
        JButton b2=new JButton("BUTTON 2");
        c.add(b2);
        JButton b3=new JButton("BUTTON 3");
        c.add(b3);//(b3,1);
        JButton b4=new JButton("BUTTON 4");
        c.add(b4);//(b4,0);
        JButton b5=new JButton("BUTTON 5");
        c.add(b5);
    }
    
}
