
package border_layout;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Border_Layout {

    public static void main(String[] args) {
        JFrame f=new JFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setBounds(100,100,700,500);
        
        BorderLayout border=new BorderLayout();//(20,10);
        border.setHgap(100);
        border.setVgap(50);
        
        Container c=f.getContentPane();
        c.setLayout(border);
        
        JButton b1=new JButton("PAGE_START");
        c.add(b1,BorderLayout.PAGE_START);
        JButton b2=new JButton("PAGE_END");
        c.add(b2,BorderLayout.PAGE_END);
        JButton b3=new JButton("CENTER");
        c.add(b3,BorderLayout.CENTER);
        JButton b4=new JButton("LINE_START");
        c.add(b4,BorderLayout.LINE_START);
        JButton b5=new JButton("LINE_END");
        c.add(b5,BorderLayout.LINE_END);
    }
    
}
