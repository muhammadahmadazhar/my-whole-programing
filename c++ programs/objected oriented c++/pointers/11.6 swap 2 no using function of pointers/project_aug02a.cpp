#include<iostream>
using namespace std;
void swap(int *x,int *y);
int main()
{
    cout<<"enter 2 no in main function then swapp in user defined function with pointers\n";
    int a,b;
    cout<<"a=";  cin>>a;
    cout<<"b=";  cin>>b;
      swap(&a,&b);
    cout<<"a=";  cout<<a;
    cout<<"\nb=";  cout<<b;
    return 0;
}
void swap(int *x,int *y)
{
    int c;
    c=*x;  *x=*y;  *y=c;
}