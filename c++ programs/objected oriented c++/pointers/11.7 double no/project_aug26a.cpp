#include<iostream>
using namespace std;
void get(int *x);
void dbl(int *y);
int main()
{
cout<<"Write a program that declares an integer in mainO function. It also declares two functions. One function inputs a value in the variable defined in the mainO function. The second function doubles the value of that variable.\n";
    int no;
    get(&no);
    cout<<"no="<<no<<endl;
    dbl(&no);
    cout<<"double no="<<no<<endl;
   return 0;
}
void get(int *x)
{
    cout<<"enter no=";
    cin>>*x;
}
void dbl(int *y)
{
    *y=*y*2;
}