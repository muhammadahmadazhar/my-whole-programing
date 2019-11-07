
package mouse_motion_listener;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class MyFrame extends JFrame implements MouseMotionListener {
 Container c;
 JTextArea area=new JTextArea();
 JTextField text=new JTextField();
     MyFrame(){
     c=this.getContentPane();
     c.setLayout(null);
     c.setBackground(Color.GREEN);
     
     area.setBounds(50,50,100,100);
     area.setBackground(Color.YELLOW);
     area.setEditable(false);
     c.add(area);
     area.addMouseMotionListener(this);
     
     text.setBounds(200,50,300,50);
     c.add(text);
     }
     public void mouseMoved(MouseEvent e){
         text.setText("mouseMoved at "+e.getX()+" "+e.getY());
     }
     public void mouseDragged(MouseEvent e){
         text.setText("mouseDragged at "+e.getX()+" "+e.getY());
     }
}     
public class Mouse_Motion_Listener {

    public static void main(String[] args) {
        MyFrame f=new MyFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(MyFrame.EXIT_ON_CLOSE);
        f.setBounds(400,100,700,500);
    
    }
    
}
