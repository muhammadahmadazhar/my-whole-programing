#include <iostream>

using namespace std;

int main()
{
    int c,d,e,f,n;
    c=1;
    cin>>n;
    while(c<=n)
        {
        cout<<c<<",";
        c=c+1;
        }
        cout<<endl;
        d=2;
    while(d<=n)
        {
        cout<<d<<",";
        d=d+2;
        }
        cout<<endl;
         e=1;
    while(e<=n)
    {
        cout<<e<<",";
        e=e+2;
    }
    f=1;
    cout<<endl;
     while(f<=n)
     {
         if(f%3!=0)
         cout<<f<<",";
         f=f+1;
     }

    return 0;
}
