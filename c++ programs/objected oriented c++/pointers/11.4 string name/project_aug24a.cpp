#include<iostream>
using namespace std;
int main()
{
cout<<"Write a program that inputs a string value from the user and displays it using pointer.\n";
    char name[30],*ptr;
    cout<<"enter name=";cin.get(name,30);
    ptr=name;
    cout<<"your name ="<<ptr;
   return 0;
}