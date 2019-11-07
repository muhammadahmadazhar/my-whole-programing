#include <iostream>

using namespace std;

int main()
{
    int *ptr,n;
    cin>>n;
    ptr=&n;
    cout<<"\n address of n is "<<ptr;
    cout<<"\n value of n is"<<*ptr;
    return 0;
}
