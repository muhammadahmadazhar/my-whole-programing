#include <iostream>

using namespace std;

int main()
{
    int f,c,no;
    c=1;
    f=1;
    cout<<"enter an integer=";
    cin>>no;
    while(c<=no)
    {
        f=f*c;
        c++;
    }
    cout<<"factorial of"<<no<<"="<<f;
    return 0;
}
