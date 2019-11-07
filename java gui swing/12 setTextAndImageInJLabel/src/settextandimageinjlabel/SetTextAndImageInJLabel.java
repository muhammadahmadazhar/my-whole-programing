
package settextandimageinjlabel;

import java.awt.Container;
import java.awt.Font;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class SetTextAndImageInJLabel {

    public static void main(String[] args) {
        JFrame frame=new JFrame(" both text and image in jlabel");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(320,50,1000,1000);
        
        Container c=frame.getContentPane();
        c.setLayout(null);
        
        ImageIcon icon=new ImageIcon("E:\\ahmad private\\java gui swing\\ahmad6.jpg");
        
        JLabel label1=new JLabel("text",icon,JLabel.LEFT) ;
        label1.setBounds(50,50,400,200);
        c.add(label1);
        Font font=new Font("Arial",Font.ROMAN_BASELINE,50);
        label1.setFont(font);
        
        JLabel label2=new JLabel("text",icon,JLabel.RIGHT) ;
        label2.setBounds(50,50,400,200);
        c.add(label2);
        Font font2=new Font("Arial",Font.ROMAN_BASELINE,30);
        label1.setFont(font2);
        
        JLabel label3=new JLabel("text",icon,JLabel.CENTER) ;
        label3.setBounds(50,500,400,200);
        c.add(label3);
    }
    
}
