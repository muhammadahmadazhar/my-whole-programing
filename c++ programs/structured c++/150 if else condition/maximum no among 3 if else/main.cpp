#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b&&a>=c)
        cout<<"maximum no="<<a;
    else
    if(b>=a&&b>=c)
    cout<<"maximum no="<<b;
    else
    cout<<"maximum no="<<c;

    return 0;
}
