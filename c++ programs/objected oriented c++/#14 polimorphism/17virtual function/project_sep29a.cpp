#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()
    {
        cout<<"class a\n";
    }
};
class B :public A
{
    public:
    void show()
    {
        cout<<"class b"<<endl;
    }
};
class C :public B
{
    void show()
    {
        cout<<"class c"<<endl;
    }
};
int main()
{
  A *p;
    p=new A;
    p->show();
    p=new B;
    p->show();
    p=new C;
    p->show();
    return 0;
}