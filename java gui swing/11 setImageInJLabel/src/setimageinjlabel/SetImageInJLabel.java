
package setimageinjlabel;

import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class SetImageInJLabel {

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
        JLabel label1=new JLabel("username");
        label1.setText("password");
        label1.setBounds(100,100,300,50);
        c.add(label1);
        Font font=new Font("Arial",Font.ITALIC,30);
        label1.setFont(font);
        ImageIcon icon2=new ImageIcon("E:\\ahmad private\\java gui swing\\ahmad6.jpg");
        JLabel label2=new JLabel(icon2);
        label2.setBounds(300,100,icon2.getIconWidth(),icon2.getIconHeight());
        c.add(label2);
    }
    
}
