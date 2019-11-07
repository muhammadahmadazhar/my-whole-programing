#include <iostream>

using namespace std;
class Complex
{
    private:
    int a,b;
    public:
        Complex(){}
        Complex(int k)
        {
            a=k;   b=0;
        }
        void showdata()
        {
            cout<<"a="<<a<<"b="<<b<<endl;
        }
};
int main()
{
    Complex c;
    int x=5;
    c=x;
    c.showdata();
    return 0;
}
