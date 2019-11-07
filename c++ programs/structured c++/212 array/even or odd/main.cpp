#include <iostream>

using namespace std;

int main()
{
    int x[10],i,even=0,odd=0;
    cout<<"enter 10 numbers"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>x[i];
        if(x[i]%2==0)
            even++;
        else
            odd++;
    }
    cout<<"even="<<even<<endl;
    cout<<"odd="<<odd<<endl;
    return 0;
}
