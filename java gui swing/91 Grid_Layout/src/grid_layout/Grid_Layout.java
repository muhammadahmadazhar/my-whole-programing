
package grid_layout;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Grid_Layout {

    public static void main(String[] args) {
        JFrame f=new JFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setBounds(100,100,700,500);
        
        GridLayout grid=new GridLayout(2,2,20,10);//(3,3,20,10);
//        grid.setHgap(100);
//        grid.setVgap(50);
        
        Container c=f.getContentPane();
        c.setLayout(grid);
        
        JButton b1=new JButton("BUTTON 1");
        c.add(b1);
        JButton b2=new JButton("BUTTON 2");
        c.add(b2);
        JButton b3=new JButton("BUTTON 3");
        c.add(b3);//(b3,1);
        JButton b4=new JButton("BUTTON 4");
        c.add(b4);//(b4,0);
        JButton b5=new JButton("BUTTON 5");
        c.add(b5);
    }
    
}
