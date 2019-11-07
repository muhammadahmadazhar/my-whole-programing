#include<iostream>
using namespace std;
int main()
{
cout<<"input 5 integers in an array display the revourse of integers  using pointers\n";
    int a[5],i;
    int *x;
    for(i=0;i<5;i++)
    {cin>>a[i];}
    x=&a[4];
     for(i=0;i<5;i++)
      cout<<*x--<<endl;
return 0;
}