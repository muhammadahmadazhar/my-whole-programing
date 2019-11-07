#include <iostream>

using namespace std;

int main()
{
    int x[5],i,min;
    cout<<"enter 5 values"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>x[i];
    }
    min=x[0];
    for(i=0;i<5;i++)
    {
        if(min>x[i])
            min=x[i];
    }
    cout<<"minimum no="<<min;
    return 0;
}
