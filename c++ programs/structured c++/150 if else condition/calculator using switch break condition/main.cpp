#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char op;
    float a,b,c;
    int x,y,z;
    cout<<"calculator"<<endl;
    cout<<"enter operator either +,-,*,/,%,  =";
    cin>>op;
    if(op=='+'||op=='-'||op=='*'||op=='/')
    {
    cout<<"enter first no=";
    cin>>a;
    cout<<"enter second no=";
    cin>>b;
    switch(op)
    {
    case'+':
        c=a+b;
        cout<<"sum="<<c;
        break;
    case'-':
        c=a-b;
        cout<<"subtractetion="<<c;
        break;
    case'*':
        c=a*b;
        cout<<"multiplication="<<c;
        break;
    case'/':
        c=a/b;
        cout<<"divition="<<c;
        break;

    }
    }
    else
    { cout<<"enter first no=";
      cin>>x;
      cout<<"enter second no=";
      cin>>y;
    switch(op)
    {
    case'%':
        z=x%y;
        cout<<"reminder="<<z;
        break;
    }
    }
    return 0;
}
