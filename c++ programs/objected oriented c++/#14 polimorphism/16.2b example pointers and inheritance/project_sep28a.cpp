#include<iostream>
using namespace std;
class A
{
    public:
    void show()
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
  A o1;
  B o2;
  C o3;
    p=& o1;
    p->show();
    p=& o2;
    p->show();
    p=& o3;
    p->show();
    return 0;
}