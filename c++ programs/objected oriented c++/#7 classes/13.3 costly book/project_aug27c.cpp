#include<iostream>
using namespace std;
class book
{
    private:
    int bookid,pages; float price;
    public:
    void get()
    {
     cout<<"enter bookid=";cin>>bookid;
     cout<<"enter pages=";cin>>pages;
     cout<<"enter price=";cin>>price;
    }
    void show()
    {cout<<"bookid="<<bookid<<endl;
     cout<<"pages="<<pages<<endl;
     cout<<"price="<<price<<endl;
    }
    void set(int id,int pg,float pr)
    {
        bookid=id;pages=pg;price=pr;
    }
    float getprice()
    {return price;}
};
int main()
{
/*cout<<"Write a class Book with three data members Booke, Pages and Price. It  contains the following member function: 
The gett() tunctiun is used  input values 
The show() tunctinn is usud to display values 
The set() functiun is used to set the values at data members   using parameters 
The getprice() function is used tu return the value of Price. 
The program should create two objects of the Class and input values for these objects. The program display the details the details of most costly book."<<endl;*/
   book b1,b2;
    b1.get();
    b1.show();
    b2.set(23, 43, 55.33);
    cout<<"most costly  book is\n";
    if(b1.getprice()>b2.getprice())
    {
        b1.show();
    }
    else
    {
      b2.show();
    }
   return 0;
}