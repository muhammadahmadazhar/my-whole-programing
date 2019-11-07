#include<iostream>
using namespace std;
class Move
{
    protected:
    int a;
    public:
    Move()
    {
       a=0;
    }
    void farword()
    {
     a++;
    }
    void show()
    {
     cout<<"a="<<a<<endl; 
    }
};
class Move2 :public Move
{
    public:
    void backword()
    {
         a--;
    }
};
int main()
{
Move2 m;
    m.show();
    m.farword();
    m.show();
    m.backword();
    m.show();
   return 0;
}