#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    complex()
    {
     a=b=0;
    }
    void set()
    {
     cout<<"enter a=";
        cin>>a;
     cout<<"enter b=";
        cin>>b;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    complex operator+(complex c)
    {
       complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
    ~complex()
    {
     cout<<"THE END"<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.set();
    c2.set();
    c1.show();
    c2.show();
    c3=c1+c2; //c2=c1.operator+(c2);
    cout<<"addition take place"<<endl;
    c3.show();
   return 0;
}