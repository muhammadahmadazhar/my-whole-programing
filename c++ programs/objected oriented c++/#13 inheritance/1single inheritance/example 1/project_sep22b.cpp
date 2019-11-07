#include<iostream>
using namespace std;
class Parent
{
    protected:
    int a;
    public:
    Parent()
    {
        a=0;
    }
    Parent(int m)
    {
        a=m;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
    }
};
class Child: public Parent
{
    private:
    char ch;
    public:
    Child() : Parent()
    {
     ch='*';
    }
    Child(char c,int m):Parent(m)
    {
        ch=c;
    }
    void display()
    {
    cout<<"ch="<<ch<<endl;
    }
};
int main()
{
   Child c1,c2('@',9);
    c1.show();
    c1.display();
    c2.show();
    c2.display();
   return 0;
}