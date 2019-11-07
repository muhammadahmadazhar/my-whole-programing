
package setresizable;
import java.awt.Color;
import java.awt.Container;
import javax.swing.ImageIcon;
import javax.swing.JFrame;

public class SetResizable {

    public static void main(String[] args) {
        JFrame frame=new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        //frame.setLocation(100,50);
        //frame.setSize(700,500);
        frame.setBounds(100,50,700,500);
        frame.setTitle("PTI ABDDULLAH");
        ImageIcon icon=new ImageIcon("E:\\ahmad private\\java gui swing\\7 setResizable\\ahmad.jpg");
        frame.setIconImage(icon.getImage());
        Container c= frame.getContentPane();
        c.setBackground(Color.GREEN);
        frame.setResizable(false);
    }
    
}
