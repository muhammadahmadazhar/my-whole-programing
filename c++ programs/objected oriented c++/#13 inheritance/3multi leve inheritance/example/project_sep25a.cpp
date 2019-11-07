#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    public:
    void in()
    {
        cout<<"enter a=";
        cin>>a;
    }
    void show()
    {
      cout<<"a="<<a<<endl;
    }
};
class B :public A
{
    private:
    int b;
    public:
    void in()
    {
        A::in();
      cout<<"enter b=";
      cin>>b;
    }
    void show()
    {
      A::show();
      cout<<"b="<<b<<endl;
    }
};
class C :public B
{
    private:
    int c;
    public:
    void in()
    {
        B::in();
        cout<<"enter c=";
        cin>>c;
    }   
    void show()
    {
        B::show();
        cout<<"c="<<c<<endl;
    }
};
int main()
{
   C obj;
    obj.in();
    obj.show();
   return 0;
}