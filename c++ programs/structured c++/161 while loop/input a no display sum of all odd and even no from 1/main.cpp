#include <iostream>

using namespace std;

int main()
{
    int a,c,e,o;
    cout<<"enter a no=";
    cin>>a;
    c=0;
    e=0;
    o=3;
    while(c<=a)
    {
        e=e+c;
        o=o+c;
        c=c+2;
    }
    cout<<"even no="<<e<<endl;
    cout<<"odd no="<<o<<endl;
    return 0;
}
