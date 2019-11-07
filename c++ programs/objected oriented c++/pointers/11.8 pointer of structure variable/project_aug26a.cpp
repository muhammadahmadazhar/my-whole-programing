#include<iostream>
using namespace std;
int main()
{
cout<<"Write a program that declares a structure to store the record of a book. It defines a structure variable, inputs the values and displays them using pointer.\n";
 struct record
    {
     char name[30];int price; double page;   
    };
    record r1,*r2;
    r2=&r1;
   cout<<"enter name=";cin.get(r2->name,30);
   cout<<"enter price=";cin>>r2->price;
   cout<<"enter pages=";cin>>r2->page;
   cout<<"name="<<r2->name<<endl;
   cout<<"price="<<r2->price<<endl;
   cout<<"pages="<<r2->page<<endl;
   return 0;
}