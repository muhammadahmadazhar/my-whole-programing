
package setfontofjlabel;

import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class SetFontOfJlabel {

    public static void main(String[] args) {
        JFrame frame=new JFrame("my first jlable");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(300,300,500,500);
        ImageIcon icon=new ImageIcon("E:\\ahmad private\\java gui swing\\ahmad5.jpg");
        frame.setIconImage(icon.getImage());
        Container c=frame.getContentPane();
        c.setBackground(Color.GREEN);
        c.setLayout(null);
        JLabel label=new JLabel("username");
        label.setText("password");
        label.setBounds(100,100,300,50);
        c.add(label);
        Font font=new Font("Arial",Font.ITALIC,30);
        label.setFont(font);
                
    }
    
}
