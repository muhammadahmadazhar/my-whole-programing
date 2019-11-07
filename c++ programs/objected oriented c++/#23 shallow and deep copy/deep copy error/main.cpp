#include <iostream>

using namespace std;
class dummy
{
    private:
    int a,b,*p;
    public:
        dummy(int x,int y,int z)
        {
            a=x;   b=y;   *p=z;
        }
        void showdata()
        {
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
            cout<<"p="<<*p<<endl;
        }
        dummy(dummy &d)
        {
            a=d.a;  b=d.b;
            p=new int;
            *p=*(d.p);
        }
        ~dummy()
        {
            delete p;
        }
};
int main()
{
    dummy d1(3,4,5);
    d1.showdata();
    dummy d2=d1;
    d2.showdata();
    return 0;
}
