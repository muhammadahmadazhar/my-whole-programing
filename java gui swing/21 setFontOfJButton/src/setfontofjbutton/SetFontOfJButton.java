
package setfontofjbutton;

import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import javax.swing.JButton;
import javax.swing.JFrame;

public class SetFontOfJButton {

    public static void main(String[] args) {
        JFrame frame=new JFrame("my first JLabel");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(300,300,500,500);
        
        Container c=frame.getContentPane();
        c.setBackground(Color.GREEN);
        c.setLayout(null);
        
        JButton b=new JButton("Click");
        b.setBounds(200,200,100,50);
        c.add(b);
        
        Font f=new Font("Arial",Font.BOLD,25);
        b.setFont(f);
    }
    
}
