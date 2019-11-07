
package actionlistener_for_jtextfield;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class MyFrame extends JFrame implements ActionListener{
    Container c;
    JTextField tf=new JTextField();
    MyFrame(){
        c=this.getContentPane();
        c.setLayout(null);
        
        tf.setBounds(100,100,100,50);
        tf.addActionListener(this);
        c.add(tf);
    }

    @Override
    public void actionPerformed(ActionEvent ae) {
        String text=tf.getText();
        String newtext=text.toUpperCase();
        tf.setText(newtext);
    }
    
}
public class ActionListener_for_JTextField {

    public static void main(String[] args) {
        MyFrame frame=new MyFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(100,50,700,500);
        frame.setTitle("PTI ABDDULLAH");
        
    }
    
}
