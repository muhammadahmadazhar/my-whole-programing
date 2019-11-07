#include<iostream>
using namespace std;
class data
{
    private:
    int a;
    public:
    void in()
    {cout<<"enter no=";cin>>a;}
    void out()
    {cout<<"no="<<a;}
};
int main()
{
   cout<<"program that declares a class with one integer data member and two member function in() and out() to input and output data in data member\n";
    data n;
    n.in();
    n.out();
   return 0;
}