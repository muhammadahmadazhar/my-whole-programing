#include <iostream>

using namespace std;

int main()
{
    int x[5],i,sum=0;
    float avg;
    for(i=0;i<=4;i++)
    {
        cout<<"enter value=";
        cin>>x[i];
        sum=sum+x[i];
    }
    cout<<"sum="<<sum<<endl;
    avg=sum/5;
    cout<<"average="<<avg;

    return 0;
}
