
package key_listener;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class MyFrame extends JFrame implements KeyListener{
 Container c;
 JTextField tf=new JTextField();
 JTextArea text=new JTextArea();
     MyFrame(){
     c=this.getContentPane();
     c.setLayout(null);
     c.setBackground(Color.GREEN);
     
     tf.setBounds(100,100,100,50);
     c.add(tf);
     
     tf.addKeyListener(this);

     text.setBounds(250,50,200,300);
     c.add(text);
     }
     public void keyPressed(KeyEvent e){
         text.append("KeyPressed "+e.getKeyChar()+"\n");
     }
     public void keyTyped(KeyEvent e){
         text.append("KeyTyped "+e.getKeyChar()+"\n");
     }
     public void keyReleased(KeyEvent e){
         text.append("KeyReleased "+e.getKeyChar()+"\n");
     }
}     
public class Key_listener {

    public static void main(String[] args) {
        MyFrame f=new MyFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(MyFrame.EXIT_ON_CLOSE);
        f.setBounds(100,100,700,500);
    }
    
}
