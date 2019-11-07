#include <iostream>

using namespace std;

int main()
{
    int a[3][3],i,j,max,min;
    cout<<"enter values in matrix\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    max=min=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          if(max<a[i][j])
                max=a[i][j];
          if(min>a[i][j])
            min=a[i][j];
        }
    }
    cout<<"maximum value="<<max<<endl;
    cout<<"minimum value="<<min<<endl;
    return 0;
}
