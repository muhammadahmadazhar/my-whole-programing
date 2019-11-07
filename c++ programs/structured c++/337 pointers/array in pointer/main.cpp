#include <iostream>

using namespace std;

int main()
{
    int a[5],i,*p;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
        p=a;
    }
    for(i=0;i<5;i++)
    {
        cout<<*p++<<endl;
    }
    return 0;
}
