
package myjtextarea;

import java.awt.*;
import javax.swing.*;

public class MyJTextArea {

    public static void main(String[] args) {
        JFrame frame=new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(100,100,700,500);
        
        Container c=frame.getContentPane();
        c.setLayout(null);
        
        JTextArea text=new JTextArea();
        text.setBounds(100,100,200,200);
        Font f=new Font("Arial",Font.ITALIC,30);
        text.setFont(f);
        c.add(text);
        c.revalidate();
    }
    
}
