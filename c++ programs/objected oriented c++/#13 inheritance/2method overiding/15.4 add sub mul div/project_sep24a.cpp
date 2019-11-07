#include<iostream>
using namespace std;
/*Write a program that declares two classes. The parent class is called Simple that has two data members a and b to store two numbers. It also has four member functions: 

0 The addO function adds two numbers and displays the result. 

0 The sub() function subtracts two numbers and displays the result. 
0 The mulO function multiplies two numbers and displays the result. . 
The div() function divides two numbers and displays the result. 

The child class is called Complex that overrides all four functions. Each function in the child class checks the values of data members. It calls the corresponding member function in the parent class if the values are greater than 0. Otherwise it displays error message. */
class Simple
{
    protected:
    int a,b;
    public:
    Simple()
    {
      a=b=0;
    }
    void in()
    {
        cout<<"enter a=";
        cin>>a;
        cout<<"enter b=";
        cin>>b;
    }
    void add()
    {
        cout<<"a+b="<<a+b<<endl;
    }
    void sub()
    {
        cout<<"a-b="<<a-b<<endl;
    }
    void mul()
    {
     cout<<"a*b="<<a*b<<endl;   
    }
    void div()
    {
        cout<<"a/b="<<(float)a/(float)b<<endl;
    }
};
class Complex :public Simple
{
   public:
    void add()
    {
        if(a<=0||b<=0)
        cout<<"invalid operands\n";
        else
        Simple::add();
    } 
    void sub()
    {
       if(a<=0||b<=0)
        cout<<"invalid operands\n";
       else
        Simple::sub();
      
    }
    void mul()
    {
         if(a<=0||b<=0)
        cout<<"invalid operands\n";
        else
        Simple::mul();
    }
    void div()
    {
         if(a<=0||b<=0)
        cout<<"invalid operands\n";
        else
        Simple::div();
    }
};
int main()
{
   Complex c;
    c.add();
    c.in();
    c.add();
    c.sub();
    c.mul();
    c.div();
   return 0;
}