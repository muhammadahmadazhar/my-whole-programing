
package window_listener;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class MyFrame extends JFrame implements WindowListener{
 Container c;
     MyFrame(){
     c=this.getContentPane();
     c.setLayout(null);
     c.setBackground(Color.GREEN);
     
     this.addWindowListener(this);
     }
     public void windowOpened(WindowEvent e){
          System.out.println("windowOpened ");
     }
     public void windowClosing(WindowEvent e){
          System.out.println("windowClosing ");
     }
     public void windowClosed(WindowEvent e){
          System.out.println("windowClosed ");
     }
     public void windowIconified(WindowEvent e){
          System.out.println("windowIconified ");
     }
     public void windowDeiconified(WindowEvent e){
          System.out.println("windowDeiconified ");
     }
     public void windowActivated(WindowEvent e){
          System.out.println("windowActivated ");
     }
     public void windowDeactivated(WindowEvent e){
          System.out.println("windowDeactivated ");
     }
} 
public class Window_Listener {

    public static void main(String[] args) {
        MyFrame f=new MyFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(MyFrame.EXIT_ON_CLOSE);
        f.setBounds(400,100,700,500);
    }
    
}
