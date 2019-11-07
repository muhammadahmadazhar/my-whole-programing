#include<iostream>
//using namespace std;
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
    std::cout<<"hello ff "<<a;
}
int myspace::A::fun()
{
    std::cout<<"hello fun "<<a*2;
}
int main()
{
    myspace::a=5;
    myspace::ff();
    myspace::A obj;
    obj.fun();
}
