
package setfontofjtextfield;

import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import javax.swing.JFrame;
import javax.swing.JTextField;

public class SetFontOfJTextField {

    public static void main(String[] args) {
        JFrame frame=new JFrame("my first jlable");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(300,300,500,500);
        
        Container c=frame.getContentPane();
        c.setBackground(Color.GREEN);
        c.setLayout(null);
        
        JTextField text=new JTextField();
        text.setBounds(100,100,200,50);
        c.add(text);
        
        Font f=new Font("Arial",Font.CENTER_BASELINE,30);
        text.setFont(f);
    }
    
}
