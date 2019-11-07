#include <iostream>

using namespace std;
class Complex
{
    private:
    int a,b;
    public:
        void setdata(int x,int y)
        {
            a=x;   b=y;
        }
        void showdata()
        {
            cout<<"a="<<a<<"b="<<b<<endl;
        }
        operator int()
        {
            return(a+b);
        }
};
int main()
{
    Complex c;
    c.setdata(3,6);
    c.showdata();
    int k;
    k=c; // k=c.operator int();
    cout<<"k="<<k;
    return 0;
}
