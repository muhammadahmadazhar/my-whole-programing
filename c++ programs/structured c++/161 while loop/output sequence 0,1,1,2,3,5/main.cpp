#include <iostream>

using namespace std;

int main()
{
    int a,b,n,next,count;
    a=0;
    b=1;
    cout<<"enter ending point of sequence";
    cin>>n;
    cout<<a<<","<<b;
    count=2;
    while(count<n)
    {

        next=a+b;
        count++;
        cout<<","<<next;
        a=b;
        b=next;
    }

    return 0;
}
