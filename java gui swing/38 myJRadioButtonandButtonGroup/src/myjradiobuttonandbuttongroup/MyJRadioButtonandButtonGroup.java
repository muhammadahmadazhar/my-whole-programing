
package myjradiobuttonandbuttongroup;

import java.awt.*;
import javax.swing.*;

public class MyJRadioButtonandButtonGroup {

    public static void main(String[] args) {
        JFrame frame=new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(100,50,700,500);
        
        Container c=frame.getContentPane();
        c.setLayout(null);
        Font f=new Font("Arial",Font.BOLD,20);
        
        JRadioButton radio1=new JRadioButton("Male");
        radio1.setBounds(100, 50, 100, 50);
        radio1.setFont(f);
        radio1.setSelected(true);
        c.add(radio1);
        
        JRadioButton radio2=new JRadioButton("Female");
        radio2.setBounds(300, 50, 100, 50);
        radio2.setFont(f);
        c.add(radio2);
        
        ButtonGroup gr1=new ButtonGroup();
        gr1.add(radio1);
        gr1.add(radio2);
        
        JRadioButton radio3=new JRadioButton("student");
        radio3.setBounds(50, 150, 100, 50);
        radio3.setEnabled(false);
        c.add(radio3);
        
        JRadioButton radio4=new JRadioButton("teacher");
        radio4.setBounds(200, 150, 100, 50);
        c.add(radio4);
        
        JRadioButton radio5=new JRadioButton("principal");
        radio5.setBounds(350, 150, 100, 50);
        radio5.setSelected(true);
        c.add(radio5);
        
        JRadioButton radio6=new JRadioButton("admin");
        radio6.setBounds(500, 150, 100, 50);
        c.add(radio6);
        
        ButtonGroup gr2=new ButtonGroup();
        gr2.add(radio3);
        gr2.add(radio4);
        gr2.add(radio5);
        gr2.add(radio6);
    }
    
}
