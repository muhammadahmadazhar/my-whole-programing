#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
     char op;
    int a,b,c;
    cout<<"enter first no=";
    cin>>a;
    cout<<"enter operator=";
    cin>>op;
    cout<<"enter second no=";
    cin>>b;
    if(op=='+')
    {c=a+b;
      cout<<"sum of two no="<<c;
    }
      if(op=='-')
     {c=a-b;
         cout<<"subtraction of two no="<<c;
     }
     if(op=='*')
     {c=a*b;
      cout<<"multiplication of two no="<<c;
     }
     if(op=='/')
     {c=a/b;
      cout<<"divition of two no="<<c;
     }
     if(op=='%')
     {c=a%b;
      cout<<"reminder of two no="<<c;
     }
     getch ();
}
