#include<iostream>
using namespace std;
void table(int x);
int main()
{
cout<<"Write a program that inputs a number in main function and passes the number to a function. The function displays table of that number.\n";
    int a;
    cout<<"enter no=";cin>>a;
    table(a);
   return 0;
}
void table(int x)
{
   for(int i=1;i<=10;i++)
    cout<<x<<"*"<<i<<"="<<x*i<<endl;
}