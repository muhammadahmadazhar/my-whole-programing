#include <iostream>

using namespace std;

int main()
{
    int a[10][10],i,j,x,y,sum=0;
    cout<<"enter order of matrix\n";
    cin>>x>>y;
    cout<<"enter values in matrix\n";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }
     for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<a[i][j]<<"  ";
            sum+=a[i][j];
        }
        cout<<sum<<endl;
        sum=0;
    }
    for(j=0;j<y;j++)
    {
        for(i=0;i<x;i++)
        {
            sum+=a[i][j];
        }
        cout<<sum<<" ";
        sum=0;
    }
     for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
          if(i==j)
            sum+=a[i][j];
        }
    }cout<<"\ndognol="<<sum;
    return 0;
}
