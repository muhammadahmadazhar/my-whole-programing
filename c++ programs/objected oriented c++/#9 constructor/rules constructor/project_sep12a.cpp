#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    complex()   //default constructor
    {   }
    complex(int x)
    {
      a=x;//1 parametrized constructor
    }
    complex(int x,int y)
    {//parametrized constructor
      a=x;  b=y;
    }
    complex(complex  &c)
    {//copy constructor
     a=c.a;  b=c.b;
    }
    void show()
    {
     cout<<"a="<<a<<endl;
     cout<<"b="<<b<<endl;
    }
};
int main()
{
   complex c1,c2(3),c3(5,9);
   complex c4(c3);
    c1.show();
    c2.show();
    c3.show();
    c4.show();
   return 0;
}