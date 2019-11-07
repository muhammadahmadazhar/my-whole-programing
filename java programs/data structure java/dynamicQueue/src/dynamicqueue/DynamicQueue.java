
package dynamicqueue;
class ArrayQueue{
   private int front,rear;
   private int arraysize;
   private int[] arr;
  public  ArrayQueue(int size){
        front=rear=-1;
        arraysize=size;
        arr=new int[size];
    }
  public boolean isEmpty(){
      return(front==-1);
  }
  public boolean isFull(){
      return ((rear+1)%arraysize==front);
  }
  int queueSize(){
      return((arraysize-front+rear+1)%arraysize);
  }
  public void inQueue(int data){
      if(isFull()){
          System.out.println("Overflow");
      }
      else{
          rear=(rear+1)%arraysize;
          arr[rear]=data;
          System.out.println("ADDING:"+data);
          if(front==-1)
              front=rear;
      }
  }
  public int deQueue(){
      int data=-1;
      if(isFull()){
          System.out.println("Queue is empty");
      }
      else{
          data=arr[front];
          if(front==rear){
              front=rear=-1;
          }
          else{
              front=(front+1)%arraysize;
          }
      }
      return data;
  }
}
public class DynamicQueue {

    public static void main(String[] args) {
        ArrayQueue queue=new ArrayQueue(4);
        for(int i=0;i<4;i++)
            queue.inQueue(i*2);
    }
    
}
