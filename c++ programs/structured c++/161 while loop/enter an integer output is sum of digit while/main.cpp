#include <iostream>

using namespace std;

int main()
{
    int no,rem,sum=0;
    cout<<"enter a 3 digit no=";
    cin>>no;
    while(no!=0)
     {
        rem=no%10;
        sum=sum+rem;
        no=no/10;
     }
    cout<<"sum="<<sum;
    return 0;
}
