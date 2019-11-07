
package my_frame;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class MyFrame extends JFrame {
 Container c;
     MyFrame(){
     c=this.getContentPane();
     c.setLayout(null);
     c.setBackground(Color.GREEN);
     }
}     
public class My_Frame {

    public static void main(String[] args) {
        MyFrame f=new MyFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(MyFrame.EXIT_ON_CLOSE);
        f.setBounds(100,100,700,500);
    }
    
}
