
package firstframe;
import javax.swing.*;
public class FirstFrame extends JFrame {

    public static void main(String[] args) {
        FirstFrame frame=new FirstFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        //frame.setLocation(100,50);
        //frame.setSize(700,500);
        frame.setBounds(100,50,700,500);
        frame.setTitle("PTI ABDDULLAH");
        ImageIcon icon=new ImageIcon("E:\\ahmad private documents\\programs\\java swing\\2 firstFrame\\ahmad.jpg");
        frame.setIconImage(icon.getImage());
    }
    
}
