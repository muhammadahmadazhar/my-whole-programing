#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter starting no=";
    cin>>a;
    cout<<"enter ending no=";
    cin>>b;

    while(a<=b)
    {
        if(a%2==0)
            cout<<a<<endl;
            a++;
    }
    return 0;
}
