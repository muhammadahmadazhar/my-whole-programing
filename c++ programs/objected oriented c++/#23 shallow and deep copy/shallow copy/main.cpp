#include <iostream>

using namespace std;
class dummy
{
    private:
    int a,b;
    public:
        dummy(int x,int y)
        {
            a=x;   b=y;
        }
        void showdata()
        {
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
        }
        dummy(dummy &d)
        {
            a=d.a;
            b=d.b;
        }
};
int main()
{
    dummy d1(3,4);
    dummy d2=d1;
    d2.showdata();
    return 0;
}
