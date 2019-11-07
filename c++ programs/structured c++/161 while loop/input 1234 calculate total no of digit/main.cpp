#include <iostream>

using namespace std;

int main()
{
    int n,i,a,c=0;
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        c++;
        n=n/10;
    }
    cout<<"total digit="<<c;
    return 0;
}
