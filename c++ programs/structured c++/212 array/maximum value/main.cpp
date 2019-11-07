#include <iostream>

using namespace std;

int main()
{
    int x[5],i,max;
    cout<<"enter 5 numbers"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>x[i];
    }
      max=x[0];
    for(i=0;i<5;i++)
    {
        if(max<x[i])
            max=x[i];
    }
    cout<<"maximum no="<<max;

    return 0;
}
