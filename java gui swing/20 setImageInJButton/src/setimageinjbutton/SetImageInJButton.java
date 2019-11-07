
package setimageinjbutton;

import java.awt.Color;
import java.awt.Container;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;

public class SetImageInJButton {

    public static void main(String[] args) {
        JFrame frame=new JFrame("my first JLabel");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(300,300,500,500);
        
        Container c=frame.getContentPane();
        c.setBackground(Color.GREEN);
        c.setLayout(null);
        
        ImageIcon icon=new ImageIcon("E:\\ahmad private\\java gui swing\\ahmad6.jpg");
        
        JButton b=new JButton(icon);
        b.setBounds(200,200,icon.getIconWidth(),icon.getIconHeight());
        c.add(b);
    }
    
}
