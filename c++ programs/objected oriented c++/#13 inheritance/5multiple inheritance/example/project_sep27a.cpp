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
    void out()
    {
        cout<<"a="<<a<<endl;
    }
};
class B
{
    private:
    int b;
    public:
    void input()
    {
        cout<<"enter b=";
        cin>>b;
    }
    void output()
    {
        cout<<"b="<<b<<endl;
    }
};
class C :public A, public B
{
    private:
    int c;
    public:
    void get()
    {
        A::in();
        B::input();
        cout<<"enter c=";
        cin>>c;
    }
    void show()
    {
        A::out();
        B::output();
        cout<<"c="<<c<<endl;
    }
};
int main()
{
   C obj;
    obj.get();
    obj.show();
   return 0;
}