#include <iostream>

using namespace std;

int main()
{
    cout<<"user input ten values in an array calcualte square of each value";
    cout<<"in another array similarly qube and sum"<<endl;
    int a[10],b[10],c[10],sum[10],i;
    for(i=0;i<=9;i++)
        cin>>a[i];
    cout<<"number  square  qube   sum"<<endl;
    for(i=0;i<=9;i++)
    {
        b[i]=a[i]*a[i];
        c[i]=a[i]*a[i]*a[i];
        sum[i]=a[i]+b[i]+c[i];
        cout<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\t"<<sum[i]<<endl;
    }
    return 0;
}
