#include<iostream>
using namespace std;
struct record
{
    int id;  int pages;  int price;
};
int main()
{
cout<<"Write a program that declares a structure to store id, pages and price of a book. It defines an array of structures to store the records of five books. It inputs the records of five books and displays the record of most costly book.\n";
    record r1[5]; int max,m;
    for(int i=0; i<5; i++)
    {
      cout<<"enter id="; cin>>r1[i].id;
      cout<<"enter pages=";cin>>r1[i].pages;
      cout<<"enter price=";cin>>r1[i].price;
    }  max=r1[0].price;
   for(int i=0; i<5; i++)
    {
      cout<<"id="<<r1[i].id<<endl;
      cout<<"pages="<<r1[i].pages<<endl;
      cout<<"price="<<r1[i].price<<endl;
      if(r1[i].price>max)
        {
            max=r1[i].price;
            m=i;
        }
    }
    cout<<"most costly book is\n";
    cout<<"id="<<r1[m].id<<endl;
    cout<<"pages="<<r1[m].pages<<endl;
    cout<<"price="<<r1[m].price<<endl;
   return 0;
}