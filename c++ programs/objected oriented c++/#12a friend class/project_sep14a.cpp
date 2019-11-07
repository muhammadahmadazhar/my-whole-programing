#include<iostream>
using namespace std;
class aa1
{
    private:
    int a,b;
    public:
    aa1()
    {
      a=10;
      b=20;
    }
    friend class bb1;
};
class bb1
{
    public:
    void showaa1(aa1 obj)
    {
     cout<<"a="<<obj.a<<endl;
     cout<<"b="<<obj.b<<endl;
    }
};
int main()
{
    aa1 x;
    bb1 y;
    y.showaa1(x);
   return 0;
}