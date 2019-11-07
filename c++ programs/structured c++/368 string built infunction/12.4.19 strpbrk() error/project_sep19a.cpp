#include<iostream>
using namespace std;
int main()
{
   char first[50]="abcdefghijklmnopqrs";
   char second[50]="m";
   char *ptr;
    ptr=strpbrk(first,second);
    cout<<"result="<<ptr<<endl;
    if(ptr==NULL)
    cout<<"char not found";
    else
    cout<<"char found";
    return 0;
}