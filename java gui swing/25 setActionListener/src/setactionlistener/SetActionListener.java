
package setactionlistener;
import java.awt.Color;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
class MyFrame extends JFrame implements ActionListener{
    JButton b1=new JButton("BLUE");
    JButton b2=new JButton("GREEN");
    JButton b3=new JButton("YELLOW");
    Container c;
    MyFrame(){
        c=this.getContentPane();
        c.setLayout(null);
        b1.setBounds(50,100,200,50);
        b1.addActionListener(this);
        c.add(b1);
        
        b2.setBounds(300,100,200,50);
        b2.addActionListener(this);
        c.add(b2);
        
        b3.setBounds(550,100,200,50);
        b3.addActionListener(this);
        c.add(b3);
    }
    public void actionPerformed(ActionEvent e){
       if(e.getSource()==b1){
           c.setBackground(Color.BLUE);
       }
       if(e.getSource()==b2){
           c.setBackground(Color.GREEN);
       }
       if(e.getSource()==b3){
           c.setBackground(Color.YELLOW);
       }
    }
}
public class SetActionListener {

    public static void main(String[] args) {
        MyFrame f=new MyFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(MyFrame.EXIT_ON_CLOSE);
        f.setBounds(100,100,800,800);
    }
    
}
