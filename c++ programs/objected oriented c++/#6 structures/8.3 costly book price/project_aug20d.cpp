#include<iostream>
using namespace std;
struct book
{
    int id,pages;
    float price;
};
int main()
{
cout<<"program that declare a structure to store book id, pages and price of a book. it defines two structure variables and input values.it display the record of most costly book.\n";
    book b1,b2;
    cout<<"book1 id="; cin>>b1.id;
    cout<<"book1 pages="; cin>>b1.pages;
    cout<<"book1 price="; cin>>b1.price;
    cout<<"book2 id="; cin>>b2.id;
    cout<<"book2 pages="; cin>>b2.pages;
    cout<<"book2 price="; cin>>b2.price;
    if(b1.price>b2.price)
    {
       cout<<"most costly book is\n";
       cout<<"book1 id="<<b1.id<<endl;
       cout<<"book1 pages="<<b1.pages<<endl;
       cout<<"book1 price="<<b1.price<<endl; 
    }
    else
    {
       cout<<"most costly book is\n";
       cout<<"book2 id="<<b2.id<<endl;
       cout<<"book2 pages="<<b2.pages<<endl;
       cout<<"book2 price="<<b2.price<<endl;
    }
   return 0;
}