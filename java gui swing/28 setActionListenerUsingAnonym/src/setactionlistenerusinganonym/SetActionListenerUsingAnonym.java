
package setactionlistenerusinganonym;
import java.awt.Color;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;

public class SetActionListenerUsingAnonym {
           static Container c;
    public static void main(String[] args) {
        JFrame frame=new JFrame("anonymous inner class");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(100,100,800,800);
        
        c=frame.getContentPane();
        c.setBackground(Color.yellow);
        c.setLayout(null);
        
        JButton b1=new JButton("red");
        b1.setBounds(50,50,200,50);
        c.add(b1);
        b1.addActionListener(new ActionListener(){
          public void actionPerformed(ActionEvent e){
              redButton(e);
          }   
        });
        
        JButton b2=new JButton("yellow");
        b2.setBounds(300,50,200,50);
        c.add(b2);
        b2.addActionListener(new ActionListener(){
          public void actionPerformed(ActionEvent e){
        
              yellowButton(e);
          }   
        });
        JButton b3=new JButton("green");
        b3.setBounds(550,50,200,50);
        c.add(b3);
        b3.addActionListener(new ActionListener(){
          public void actionPerformed(ActionEvent e){
              greenButton(e);
          }   
        });
    }
    static void redButton(ActionEvent e){
      c.setBackground(Color.RED);
     }
    static void yellowButton(ActionEvent e){
      c.setBackground(Color.YELLOW);
     }
    static void greenButton(ActionEvent e){
      c.setBackground(Color.GREEN);
     }
}
