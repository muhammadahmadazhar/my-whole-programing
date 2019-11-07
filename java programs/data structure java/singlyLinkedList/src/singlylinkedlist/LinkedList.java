
package singlylinkedlist;

public class LinkedList {
    Node head;
        public void insert(int data){
            Node node=new Node(data);
            node.next=null;
            if(head==null)
                head=node;
            else{
                Node n=head;
                while(n.next!=null){
                    n=n.next;
                }
                n.next=node;//2nd step giving node adress to head
            }
        }
      
        public void show(){
            Node n=head;
            while(n.next!=null){
                System.out.println(n.Data());
                n=n.next;
            }
            System.out.println(n.Data());
        }
}
