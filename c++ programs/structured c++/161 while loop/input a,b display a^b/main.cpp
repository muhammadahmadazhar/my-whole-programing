#include <iostream>

using namespace std;

int main()
{
    float a,b,h,p,z;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    z=1;
    h=1;
        while(h<=b)
        {
            z=z*a;
            h++;
        }
        cout<<"a^b="<<z;

    return 0;
}
