#include <iostream>

using namespace std;

int main()
{
    int a[3][3],i,j,sum;
    cout<<"enter nos"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
            sum=sum+a[i][j];
        }
        cout<<sum<<endl;
    }
       return 0;
}
