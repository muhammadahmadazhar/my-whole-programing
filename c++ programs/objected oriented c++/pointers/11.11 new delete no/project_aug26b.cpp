#include<iostream>
using namespace std;
int main()
{
cout<<"Write a program that uses new operator to create an integer, inputs value in it and then displays that value.\n";
  int *ptr;
  ptr=new int;
  cout<<"enter no=";cin>>*ptr;
  cout<<"u entered="<<*ptr<<endl;
  cout<<"address of ptr="<<ptr;
  delete ptr;
   return 0;
}