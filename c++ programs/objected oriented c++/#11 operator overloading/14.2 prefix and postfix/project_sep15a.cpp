#include<iostream>
using namespace std;
class count
{
    private:
    int n;
    public:
    count()
    {
      n=0;
    }
    void show()
    {
      cout<<"n="<<n<<endl;
    }
    count operator++()
    {
     count c;
        c.n=++n;
        return(c);
    }
    count operator++(int)
    {
       count c;
       c.n=n++; 
        return(c);
    }
};
int main()
{
cout<<"Write a program that overloads increment operator to work with user-defmed objects. The overloaded function should return an object after incrementing the data member.\n";
    count c1,c2;
    c1.show();
    c2.show();
    c2=++c1;  //c2=c1.operator++()
    c1.show();
    c2.show();
    cout<<"overloading postfix increment operator"<<endl;
    c2=c1++;  //c2=c1.operator++()
    c1.show();
    c2.show();
   return 0;
}