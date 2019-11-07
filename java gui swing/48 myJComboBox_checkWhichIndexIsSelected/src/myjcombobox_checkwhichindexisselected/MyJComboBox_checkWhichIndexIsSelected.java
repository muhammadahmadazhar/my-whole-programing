
package myjcombobox_checkwhichindexisselected;

import java.awt.Container;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class MyJComboBox_checkWhichIndexIsSelected {
        static Container c;
        static JComboBox com;
        static JButton btn;
        static JLabel label;
        static JLabel label1;
    public static void main(String[] args) {
        JFrame frame=new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(100,50,700,500);
        
        c=frame.getContentPane();
        c.setLayout(null);
        Font f=new Font("Arial",Font.BOLD,20);
        
        String arr[]={"A","B","C","D"};
        com=new JComboBox(arr);
        com.setBounds(100,100,200,20);
        com.setEditable(true);
        c.add(com);
        c.revalidate();
        
        btn=new JButton("ok");
        btn.setBounds(400,100,100,20);
        c.add(btn);
        
        btn.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
               buttonIndex(e); 
               buttonItem(e); 
            }
        });
        
        label=new JLabel("index");
        label.setBounds(250,200,100,50);
        c.add(label);
        
        label1=new JLabel("item");
        label1.setBounds(250,250,100,50);
        c.add(label1);
    }
    static void buttonIndex(ActionEvent e){
         label.setText(Integer.toString(com.getSelectedIndex()));
    }
    static void buttonItem(ActionEvent e){
        String item=(String)com.getSelectedItem();
        label1.setText(item);
    }

}
