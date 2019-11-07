#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter a no calculate puoduct component of 24 24*1 12*1 8*3 4*6"<<endl;
    cout<<"no=";
    cin>>n;
    for(i=n;i>=1;i--)
        for(j=1;j<=n;j++)
    {
        if(i*j==n)
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
    }
    return 0;
}
