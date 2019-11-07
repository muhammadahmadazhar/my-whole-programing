#include <iostream>

using namespace std;

int main()
{
    int r,n,rev,no;
    rev=0;
    cout<<"enter a no 62526 or 12345";
    cin>>no;
    n=no;

    do
    {
       r=no%10;
       no=no/10;
       rev=(rev*10)+r;
    }

    while(no!=0);
    cout<<"reverse no="<<rev;
    if(n==rev)
        cout<<"no is palindrome";
    else
        cout<<"no is not palindrome";

    return 0;
}
