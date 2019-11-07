#include <iostream>

using namespace std;

int main()
{
    int a,b,n,next;

    cin>>n;
    if(n==0||n==1)
        cout<<"no is fabonacci";
    else
  {
      a=0;
      b=1;
      next=a+b;
      while(next<n)
      {
            a=b;
            b=next;
            next=a+b;
      }
        if(next==n)
        cout<<"no is faboncaii";
    else
       cout<<"no is not fabonccaii";
  }
    return 0;
}
