
package dynamicstack;
class ArrayStack{
    private int top;
    private int arraysize;
    private int[] arr;
    public ArrayStack(int size){
        top=-1;
        arraysize=size;
        arr=new int[size];
    }
    public boolean isFull(){
        return (top==arraysize-1);
    }
    public boolean isEmpty(){
        return(top==-1);
    }
    public void push(int item){
        if(isFull()){
            System.out.println("Stack is full");
            increaseStackCapacity();
        }
        else{
            System.out.println("Adding:"+ item);
            arr[++top]=item;
        }
    }
    public int pop(){
        
        if(isEmpty()){
            System.out.println("Stack is empty");
            return -1;
        }
        else{
            
            int item=arr[top--];
            System.out.println("Removing:"+ item);
            return item;
        }
    }
    public int peek(){
        return(arr[top]);
    }
    private void increaseStackCapacity(){
        int[] newstack=new int[this.arraysize*2];
        for(int i=0;i<arraysize;i++){
            newstack[i]=arr[i];  
        }
        this.arr=newstack;
        this.arraysize=this.arraysize*2;
    }
}
public class DynamicStack {

    public static void main(String[] args) {
        ArrayStack stack=new ArrayStack(4);
        for(int i=0;i<10;i++){
            stack.push(i*2);
        }
        //stack.push(15);
        System.out.println("peek:"+stack.peek());
        
    }
    
}
