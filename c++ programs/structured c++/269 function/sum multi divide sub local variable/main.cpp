#include <iostream>

using namespace std;
void div(int a, int b);
void multi(int a,int b);
int sub(int a,int b);
int sum(int a,int b);
int main()
{
    int a,b,r;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    r=sum(a,b);
    cout<<"sum="<<r;
    r=sub(a,b);
    cout<<"\nsubtraction="<<r;
    multi(a,b);
    div(a,b);
    return 0;
}
int sum (int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int sub (int a,int b)
{
    int c;
    c=a-b;
    return c;
}
void multi(int a,int b)
{
    int c;
    c=a*b;
    cout<<"\nmultiplication="<<c;
}
void div(int x,int y)
{
    int z;
    z=x/y;
    cout<<"\ndivition="<<z;
}
