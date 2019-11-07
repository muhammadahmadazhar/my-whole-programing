
package focus_listener;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class MyFrame extends JFrame implements FocusListener {
 Container c;
 JTextField text=new JTextField();
 JTextArea area=new JTextArea();
     MyFrame(){
     c=this.getContentPane();
     c.setLayout(null);
     c.setBackground(Color.GREEN);
     
     text.setBounds(50,50,100,50);
     c.add(text);
     text.addFocusListener(this);
     
     area.setBounds(300,50,100,300);
     area.setBackground(Color.YELLOW);
     area.setEditable(false);
     c.add(area);
     }
     public void focusGained(FocusEvent e){
      area.append("focusGained \n");
     }
     public void focusLost(FocusEvent e){
      area.append("focusLost \n");
     }
}     
public class Focus_Listener {

    public static void main(String[] args) {
        MyFrame f=new MyFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(MyFrame.EXIT_ON_CLOSE);
        f.setBounds(400,100,700,500);
    }
    
}
