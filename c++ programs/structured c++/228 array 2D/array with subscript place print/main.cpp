#include <iostream>

using namespace std;

int main()
{
    int i,j,a[2][2]={2,4,6,8};
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
