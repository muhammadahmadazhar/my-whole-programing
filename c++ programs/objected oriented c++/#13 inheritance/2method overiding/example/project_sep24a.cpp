#include<iostream>
using namespace std;
class Parent
{
    protected:
    int n;
    public:
    Parent(int x)
    {
       n=x;   
    }
    void show()
    {
        cout<<"n="<<n<<endl;
    }
};
class Child :public Parent
{
    private:
    char ch;
    public:
    Child(char y,int z):Parent(z)
    {
     ch=y;
    }
    void show()
    {
        Parent::show();
        cout<<"ch="<<ch<<endl;
    }
};
int main()
{
Child c1('@',8);
    c1.show();
   return 0;
}