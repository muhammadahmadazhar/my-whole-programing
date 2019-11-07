#include <iostream>

using namespace std;
int a,b,c,s;
void div();
void multi();
void sub();
void sum();
int main()
{
   cin>>a>>b;
   sum();cout<<endl;
   sub();cout<<c<<endl;
   multi();cout<<c<<endl;
   div();
   return 0;
}
void sum ()
{
    c=a+b;cout<<c;
}
void sub()
{
  c=a-b;
}
void multi()
{
    c=a*b;
}
void div()
{
    c=a/b;
    cout<<c<<endl;
}
