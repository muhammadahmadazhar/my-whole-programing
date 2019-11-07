
package mouse_listener;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class MyFrame extends JFrame implements MouseListener {
 Container c;
 JTextArea area=new JTextArea();
 JTextArea text=new JTextArea();
     MyFrame(){
     c=this.getContentPane();
     c.setLayout(null);
     c.setBackground(Color.GREEN);
     
     area.setBounds(50,50,100,100);
     area.setBackground(Color.YELLOW);
     c.add(area);
     area.addMouseListener(this);
     
     text.setBounds(200,50,200,400);
     c.add(text);
     }
     public void mouseEntered(MouseEvent e){
         text.append("mouseEntere \n");
     }
     public void mouseExited(MouseEvent e){
         text.append("mouseExited \n");
     }
     public void mousePressed(MouseEvent e){
         text.append("mousePressed \n");
     }
     public void mouseReleased(MouseEvent e){
         text.append("mouseReleased \n");
     }
     public void mouseClicked(MouseEvent e){
         text.append("mouseClicked \n");
     }
} 
public class Mouse_Listener {

    public static void main(String[] args) {
        MyFrame f=new MyFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(MyFrame.EXIT_ON_CLOSE);
        f.setBounds(400,100,700,500);
    }
    
}
