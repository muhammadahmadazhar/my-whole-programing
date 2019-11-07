
package createjtextfield;

import java.awt.Color;
import java.awt.Container;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JTextField;

public class CreateJTextField {

    public static void main(String[] args) {
        JFrame frame=new JFrame("my first jlable");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(300,300,500,500);
        
        ImageIcon icon=new ImageIcon("E:\\ahmad private\\java gui swing\\ahmad6.jpg");
        frame.setIconImage(icon.getImage());
        
        Container c=frame.getContentPane();
        c.setBackground(Color.GREEN);
        c.setLayout(null);
        
        JTextField text=new JTextField();
        text.setBounds(100,100,200,50);
        c.add(text);
    }
    
}
