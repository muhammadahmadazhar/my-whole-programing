#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()
    {
        cout<<"class A"<<endl;
    }
};
class B :public A
{
    public:
    void show()
    {
        cout<<"class B"<<endl;
    }
};
class C:public B
{
    void show()
    {
        cout<<"class C"<<endl;
    }
};
int main()
{
   A *p[5]; int n;
    cout<<"enter 1 for A,2 for B,3 for C\n";
    for(int i=0;i<5;i++)
    {
        cout<<"which object to create=";
        cin>>n;
        if(n==1)
        {
            p[i]=new A;
            p[i]->show();
        }
        else if(n==2)
        {
            p[i]=new B;
            p[i]->show();
        }
        else
        {
            p[i]=new C;
            p[i]->show();
        }
    }
   return 0;
}