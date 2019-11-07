#include<iostream>
using namespace std;
namespace myspace
{
    int a;
    int ff();
    class A
    {
    public:
        int fun();
    };
}
int myspace::ff()
{
    cout<<"hello ff "<<a<<endl;
}
int myspace::A::fun()
{
    cout<<"hello fun "<<a*2<<endl;
}using namespace myspace;
int main()
{
    a=5;
    ff();
    A obj;
    obj.fun();
}
