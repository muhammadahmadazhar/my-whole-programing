#include<iostream>
using namespace std;
class distruct
{
    private:
    int a,b;
    public:
    distruct()
    {
    cout<<"object 1 created"<<endl;
    }
    ~distruct()
    {
    cout<<"objects are distroyed"<<endl;
    }
    distruct(int x,int y)
    {
     cout<<"object 2 created"<<endl;
    }
};
int main()
{
   distruct d1,d2(3,5);
   return 0;
}