
package writeactionlistenerusingseperateclass;

import java.awt.Color;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;

public class WriteActionListenerUsingSeperateClass {
        static Container c;
    public static void main(String[] args) {
        JFrame frame=new JFrame("actionlistener using seperate Class");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(50,50,1000,700);
        
        c=frame.getContentPane();
        c.setLayout(null);
        
        JButton b1=new JButton("red");
        b1.setBounds(50,50,200,50);
        c.add(b1);
        RedListener red=new RedListener();
        b1.addActionListener(red);
        
        
    }  
}
class RedListener implements ActionListener{
        public void actionPerformed(ActionEvent e){
            WriteActionListenerUsingSeperateClass.c.setBackground(Color.RED);
        }
}
