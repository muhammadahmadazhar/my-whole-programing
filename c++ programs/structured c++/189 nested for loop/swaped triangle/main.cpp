#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        for(k=1;k<=i;k++)
            cout<<" ";
        for(j=1;j<=8-i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
