#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b&&a>=c)
    cout<<"maximum no="<<a;
    if(b>=a&&b>=c)
    cout<<"maximum no="<<b;
    if(c>=a&&c>=b)
    cout<<"maximum no="<<c;
    return 0;
}
