#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    cout<<"write a program that displays first 5 no annd their sum\n";
    int x,sum;
    x=1;
    sum=0;
    while(x<=5)
    {

        cout<<x<<endl;
        sum=sum+x;
        x++;
    }
    cout<<"sum="<<sum;
    return 0;
}
