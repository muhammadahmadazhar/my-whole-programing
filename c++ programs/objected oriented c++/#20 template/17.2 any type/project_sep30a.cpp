#include<iostream>
using namespace std;
template<class any>
any show(any a)
{
   cout<<"value is="<<a<<endl;
}
int main()
{
    cout<<" write a function template that accept value ofany type then display it\n";
    show("hello");
    show(100);
    show(1.1);
    show('*');
   return 0;
}