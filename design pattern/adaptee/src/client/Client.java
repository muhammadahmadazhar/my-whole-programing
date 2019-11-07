
package client;

import java.util.ArrayList;

class Adaptee{
    ArrayList list;
    public Adaptee(){
        list=new ArrayList();
    }
    public void addItem(String item){
        list.add(item);
    }
    public void removeItem(int n){
        list.remove(n);
    }
    public void showItem(){
        for(int i=0;i<list.size();i++){
            System.out.println(list.get(i));
        }
    }
}
interface Target{
    public void add(String s);
    public void remove(int i);
    public void show();
}
class Adapter implements Target{
    Adaptee ad;
    public Adapter(){
        ad=new Adaptee();
    }
    public void add(String s){
        ad.addItem(s);
    }
    public void remove(int i){
        ad.removeItem(i);
    }
    public void show(){
        ad.showItem();
    }
}
public class Client {

    public static void main(String[] args) {
        Target t=new Adapter();
        t.add("fan");
        t.add("chair");
        t.add("table");
        t.remove(0);
        t.show();
    }
    
}
