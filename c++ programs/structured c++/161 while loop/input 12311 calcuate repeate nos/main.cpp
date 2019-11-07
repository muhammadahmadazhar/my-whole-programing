#include <iostream>

using namespace std;

int main()
{
     int a,n,b,co=0;
     cout<<"input a digit 12311 and and check user enter no 1 how many times repeat \n";
    cin>>n;
    cin>>a;
    while(n!=0)
    {
        b=n%10;
        n=n/10;
        if(a==b)
        {
            co++;
        }
    }
    cout<<"no repeat "<<co<<" times";
    return 0;
}
