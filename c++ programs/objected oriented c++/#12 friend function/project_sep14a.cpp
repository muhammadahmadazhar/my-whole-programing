#include<iostream>
using namespace std;
class B;
class A
{
  private:
    int a;
  public:
    A()
    {
      a=10;
    }
    friend void add(A,B);
};
class B
{
    private:
      int b;
    public:
      B()
      {
       b=20;
      }
    friend void add(A,B);
};
void add(A x,B y)
{
    int r;
    r=x.a+y.b;
   cout<<"value of class A obj="<<x.a<<endl;
   cout<<"value of class B obj="<<y.b<<endl;
   cout<<"sum of both values="<<r<<endl; 
}
int main()
{
   A obj1;  
   B obj2;
   add(obj1,obj2);
   return 0;
}