
package pkg156stack;
class Stack{
  int stck[]=new int[10];
  int toc;
  Stack(){
      toc=-1;
  }
  void push(int item){
      if(toc==9)
          System.out.println("stack full");
      else
          stck[++toc]=item;
  }
  int pop(){
      if(toc<0){
          System.out.println("stack underflow");
      return 0;
      }
      else
       return stck[toc--];
  }
}
public class Main {

    public static void main(String[] args) {
        Stack st1=new Stack();
        Stack st2=new Stack();
        for(int i=0;i<10;i++){
            st1.push(i);
        }
         for(int i=10;i<20;i++){
            st2.push(i);
        }
         for(int i=0;i<10;i++){
             System.out.println(st1.pop());
         }
          for(int i=0;i<10;i++){
              System.out.println(st2.pop());
          }
              
    }
    
}
