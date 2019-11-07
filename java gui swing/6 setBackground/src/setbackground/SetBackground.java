
package setbackground;

import java.awt.Color;
import java.awt.Container;
import javax.swing.*;
public class SetBackground {

    public static void main(String[] args) {
        JFrame frame=new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocation(100,50);
        frame.setSize(700,500);
        Container c= frame.getContentPane();
        c.setBackground(Color.GREEN);
        
    }
    
}
