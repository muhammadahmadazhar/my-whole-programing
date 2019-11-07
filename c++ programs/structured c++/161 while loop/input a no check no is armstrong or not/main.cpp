#include <iostream>

using namespace std;

int main()
{
    cout << "armstrong no= 3*3*3+7*7*7+1*1*1=371" << endl;
    int n,n1,r,sum;
    sum=0;
    cout<<"enter a no=";
    cin>>n;
    n1=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;

    }
    cout<<"sum is="<<sum;
    {
    if(sum==n1)
        cout<<"no is armstrong";
    else
        cout<<"no is not armstrong";
    }
    return 0;
}
