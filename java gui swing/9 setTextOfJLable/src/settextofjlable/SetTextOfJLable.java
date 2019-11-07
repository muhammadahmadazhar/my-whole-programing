
package settextofjlable;
import java.awt.Container;
import java.awt.Font;
import javax.swing.JFrame;
import javax.swing.JLabel;
public class SetTextOfJLable {

    public static void main(String[] args) {
        JFrame frame=new JFrame("my first jlable");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(300,300,500,500);
        Container c=frame.getContentPane();
        c.setLayout(null);
        JLabel label=new JLabel("username");
        label.setBounds(100,100,300,50);
        c.add(label); 
    }
    
}
