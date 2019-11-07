#include<iostream>
using namespace std;
class Test
{
    private:
    int n;
    public:
    void in()
    {
        cout<<"enter n=";
        cin>>n;
    }
    void show()
    {
        cout<<"n="<<n<<endl;
    }
};
int main()
{
cout<<"write a class with an integer data member, a function to input and a function to display it. Creates an object of the class using pointer and calls its member functions.\n";
    Test *p;
    p=new Test;
    p->in();
    p->show();
   return 0;
}