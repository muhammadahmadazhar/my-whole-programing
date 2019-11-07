#include <iostream>
using namespace std;
class Product
{
private:
    int m,n;
public:
    void setdata(int x,int y)
    {
        m=x;  n=y;
    }
    int getm()
    {
        return m ;
    }
    int getn()
    {
        return n;
    }
};
class Item
{
private:
    int a,b;
public:
    Item(){}
    void showdata()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }
    Item(Product p)
    {
       a=p.getm();
       b=p.getn();
    }
};
int main()
{
    Product p;
    p.setdata(3,4);
    Item i;
    i=p;
    i.showdata();
    return 0;
}
