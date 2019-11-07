#include <iostream>

using namespace std;
void sum (int *x,int *y,int *z);
int main()
{
    int a,b,c;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    sum(&a,&b,&c);
    cout<<"c="<<c;
    return 0;
}
void sum (int *x,int *y,int *z)
{
    *z=*x+*y;
}
