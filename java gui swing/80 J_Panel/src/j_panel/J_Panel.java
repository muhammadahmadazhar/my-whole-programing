
package j_panel;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class J_Panel {

    public static void main(String[] args) {
        JFrame f=new JFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setBounds(100,100,700,500);
        
        Container c=f.getContentPane();
        c.setLayout(null);
        
        JPanel p1=new JPanel();
        p1.setBounds(0, 0, 500, 400);
        p1.setBackground(Color.yellow);
        p1.setLayout(null);
        c.add(p1);
        
        JPanel p2=new JPanel();
        p2.setBounds(0, 0, 400, 300);
        p2.setBackground(Color.GREEN);
        p2.setLayout(null);
        p1.add(p2);
        
        JButton btn=new JButton("ok");
        btn.setBounds(100, 100, 100, 50);
        p2.add(btn);
    }
    
}
