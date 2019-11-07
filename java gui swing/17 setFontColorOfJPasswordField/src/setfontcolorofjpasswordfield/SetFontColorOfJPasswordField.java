
package setfontcolorofjpasswordfield;

import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import javax.swing.JFrame;
import javax.swing.JPasswordField;
import javax.swing.JTextField;

public class SetFontColorOfJPasswordField {

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
        
        JPasswordField pass=new JPasswordField();
        pass.setBounds(100,200,200,50);
        c.add(pass);
        
        Font f=new Font("Arial",Font.BOLD,30);
        pass.setFont(f);
        
        pass.setBackground(Color.ORANGE);
        pass.setForeground(Color.RED);
    }
    
}
