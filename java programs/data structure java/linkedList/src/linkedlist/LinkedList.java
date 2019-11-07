
package linkedlist;

public class LinkedList {
    private Link head;
    public LinkedList(){
        head=null;
    }
    public boolean isEmpty(){
        return head==null;
    }
    public void insert(int data){
        Link newLink=new Link(data);
        newLink.next=head;
        head=newLink;
    }
    public boolean delete(){
        if(head!=null) {
            return false;
        }
        head=head.next;
        return true;
    }
    public void print(){
        Link current=head;
        while(current!=null)
            System.out.println(current.Data());
            current=current.next;
    } 
    public static void main(String[] args) {
        LinkedList linkedList=new LinkedList();
        linkedList.insert(17);
        linkedList.insert(22);
        linkedList.print();
    }
    
}
