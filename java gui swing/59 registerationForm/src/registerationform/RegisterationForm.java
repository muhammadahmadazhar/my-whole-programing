
package registerationform;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class RegisterationForm {
    static JTextField namefield;
    static JTextField mobilefield;
    static JComboBox com;
    static JComboBox com1;
    static JComboBox com2;
    static JRadioButton b1;
    static JRadioButton b2;
    static JTextArea addarea;
    static JCheckBox checkb;
    static JButton btn;
    static JTextArea output;
    public static void main(String[] args) {
        JFrame frame=new JFrame("Registeration Form");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(100,100,700,500);
        
        Container c=frame.getContentPane();
        c.setBackground(Color.GREEN);
        c.setLayout(null);
        
        JLabel name=new JLabel("Name");
        name.setBounds(100,50,100,50);
        c.add(name);
        
        namefield=new JTextField();
        namefield.setBounds(200,65,200,20);
        c.add(namefield);
        
        JLabel mobile=new JLabel("Mobile");
        mobile.setBounds(100,100,100,50);
        c.add(mobile);
        
        mobilefield=new JTextField();
        mobilefield.setBounds(200,115,200,20);
        c.add(mobilefield);
        
        JLabel dob=new JLabel("Date Of Birth");
        dob.setBounds(100,150,100,50);
        c.add(dob);
        
        String[] dayarr=new String[31];
        for(int i=1;i<=31;i++)
            dayarr[i-1]=Integer.toString(i);
        com=new JComboBox(dayarr);
        com.setBounds(200,165,40,20);
        com.setEditable(true);
        c.add(com);
        
        String[] montharr={"jan","feb","march","april","may","june","july","agust","sep","oct","nov","dec"};
        com1=new JComboBox(montharr);
        com1.setBounds(250,165,60,20);
        com1.setEditable(true);
        c.add(com1);
        
        String[] yeararr=new String[70];
        for(int i=1951;i<=2020;i++)
            yeararr[i-1951]=Integer.toString(i);
        com2=new JComboBox(yeararr);
        com2.setBounds(320,165,60,20);
        com2.setEditable(true);
        c.add(com2);
        
        JLabel gender=new JLabel("Gender");
        gender.setBounds(100,200,100,50);
        c.add(gender);
        
        b1=new JRadioButton("Male");
        b1.setBounds(200,210,100,30);
        c.add(b1);
        b2=new JRadioButton("Female");
        b2.setBounds(300,210,100,30);
        c.add(b2);
        ButtonGroup grbt=new ButtonGroup();
        grbt.add(b1);
        grbt.add(b2);
        
        JLabel address=new JLabel("Address");
        address.setBounds(100,240,100,50);
        c.add(address);
        
        addarea=new JTextArea();
        addarea.setBounds(200,255,200,50);
        c.add(addarea);
        
        checkb=new JCheckBox(" I agree terms and condition");
        checkb.setBounds(100,320,200,30);
        c.add(checkb);
        
        btn=new JButton("Submit");
        btn.setBounds(150,360,100,50);
        c.add(btn);
        
        btn.addActionListener(new ActionListener(){
           public void actionPerformed(ActionEvent e){
               button(e);
           }
        
        });
        
        output=new JTextArea();
        output.setBounds(430,50,200,350);
        c.add(output);
    }
    static void button(ActionEvent e){
        if(checkb.isSelected()){
            String opname=namefield.getText();
            String opmobile=mobilefield.getText();
            String opday=(String)com.getSelectedItem();
            String opmonth=(String)com1.getSelectedItem();
            String opyear=(String)com2.getSelectedItem();
            String gen;
            if(b1.isSelected())
                gen="male";
            else
                gen="female";
            String opaddress=addarea.getText();
            
            output.setText("Name: "+opname+"\nMobile: "+opmobile
                    +"\nDate Of Birth: "+opday+" "+opmonth+" "+opyear
                    +"\nGender: "+gen+"\nAddress: "+opaddress);
        }
        else{
            output.setText(" please agree terms and condition");
        }
    }
}
