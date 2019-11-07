
package itemlistener_for_jcheckbox;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class MyFrame extends JFrame implements ItemListener{
 Container c;
 JCheckBox[] cb=new JCheckBox[5];
 JTextArea text=new JTextArea();
     MyFrame(){
     c=this.getContentPane();
     c.setLayout(null);
     c.setBackground(Color.GREEN);
     
     text.setBounds(250,50,200,300);
     c.add(text);
     
        for(int i=0;i<cb.length;i++){
         cb[i]=new JCheckBox("checkbox "+(i+1));
         cb[i].setBounds(100,50+(50*i),100,30);
         c.add(cb[i]);
         cb[i].addItemListener(this);
        }
     }
     public void itemStateChanged(ItemEvent e){
         text.setText("");
         for(int i=0;i<cb.length;i++){
             if(cb[i].isSelected())
             text.append(cb[i].getText()+"\n");
         }
     }
 }    
public class ItemListener_for_JCheckBox {

    public static void main(String[] args) {
        MyFrame f=new MyFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(MyFrame.EXIT_ON_CLOSE);
        f.setBounds(100,100,700,500);
    }
    
}
