
package item_listener_for_jcombobox;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class MyFrame extends JFrame implements ItemListener{
 Container c;
 JComboBox box;
 MyFrame(){
     c=this.getContentPane();
     c.setLayout(null);
     
     Color[] clr={Color.BLUE,Color.GREEN,Color.ORANGE,Color.RED};
     box=new JComboBox(clr);
     box.setBounds(100,100,300,40);
     box.addItemListener(this);
     c.add(box);
 }
 public void itemStateChanged(ItemEvent e){
     Color selected_clr=(Color)box.getSelectedItem();
     c.setBackground(selected_clr);  
 }
}
public class Item_listener_for_JComboBox {

    public static void main(String[] args) {
        MyFrame f=new MyFrame();
        f.setVisible(true);
        f.setDefaultCloseOperation(MyFrame.EXIT_ON_CLOSE);
        f.setBounds(100,100,700,500);
    }
    
}
