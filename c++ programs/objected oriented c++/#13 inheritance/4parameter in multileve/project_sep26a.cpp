#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    public:
    void set(int x)
    {
        a=x;
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
    void set(int x,int y)
    {
        A::set(x);
        b=y;
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
    void set(int x,int y,int z)
    {
        B::set(x,y);
        c=z; 
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
    obj.set(1,2,3);
    obj.show();
   return 0;
}