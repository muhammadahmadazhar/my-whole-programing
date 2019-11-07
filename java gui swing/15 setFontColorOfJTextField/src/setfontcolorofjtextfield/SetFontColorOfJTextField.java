
package setfontcolorofjtextfield;

import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import javax.swing.JFrame;
import javax.swing.JTextField;

public class SetFontColorOfJTextField {

    public static void main(String[] args) {
        JFrame frame=new JFrame("my first jlabel");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(300,300,500,500);
        
        Container c=frame.getContentPane();
        c.setBackground(Color.GREEN);
        c.setLayout(null);
        
        JTextField text=new JTextField("enter name");
        text.setBounds(100,100,200,50);
        c.add(text);
        
        Font f=new Font("Arial",Font.CENTER_BASELINE,30);
        text.setFont(f);
        text.setBackground(Color.YELLOW);
        text.setForeground(Color.RED);
        
        Color clr=new Color(120,100,50);
        JTextField text1=new JTextField();
        text1.setBounds(100,300,200,50);
        c.add(text1);
        
        Font f1=new Font("Arial",Font.CENTER_BASELINE,30);
        text1.setFont(f1);
        text1.setBackground(clr);
        text1.setForeground(Color.RED);
    }
    
}
