#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<n;i++)
        if(n%i==0&&i*i==n)
        cout<<"no is perfect square";
    return 0;
}
