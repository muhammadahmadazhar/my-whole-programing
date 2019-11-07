
package loginform;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class LoginFrame extends JFrame implements ActionListener {
    Container c;
    JLabel userlabel=new JLabel("Username");
    JLabel passlabel=new JLabel("password");
    JTextField text=new JTextField();
    JPasswordField pass=new JPasswordField();
    JButton b1=new JButton("Login");
    JLabel wrn=new JLabel("ERROR");
    public LoginFrame(){
        c=this.getContentPane();
        c.setLayout(null);
        c.setBackground(Color.yellow);
        
        Font font=new Font("Arial",Font.BOLD,30);
        
        userlabel.setFont(font);
        userlabel.setBounds(150,50,150,50);
        c.add(userlabel);
        
        passlabel.setFont(font);
        passlabel.setBounds(150,150,150,50);
        c.add(passlabel);
        
        text.setBounds(350,50,200,50);
        text.setFont(font);
        c.add(text);
        
        pass.setBounds(350,150,200,50);
        pass.setFont(font);
        c.add(pass);
        
        b1.setBounds(250,250,100,50);
        c.add(b1);
        b1.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e){
        Font font=new Font("Arial",Font.BOLD,50);
        if(e.getSource()==b1){
            String username=text.getText();
            String password=pass.getText();
            if(username.equals("ABC") && password.equals("123")){
            c.setBackground(Color.BLUE);
            c.remove(wrn);
            }
            else{
                c.setBackground(Color.RED);
                wrn.setBounds(250,300,200,50);
                wrn.setFont(font);
                c.add(wrn);
            }
        }
    }
}
public class LoginForm {
    public static void main(String[] args) {
        LoginFrame f=new LoginFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(LoginFrame.EXIT_ON_CLOSE);
        f.setBounds(100,50,700,500);
    }
    
}
