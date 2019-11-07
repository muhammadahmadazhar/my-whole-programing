#include <iostream>

using namespace std;
class Dummy
{
    private:
    int a;
    const int b,c;
    int &d;
    public:
    Dummy(int m,int &n):b(4),c(5),d(n)
    {
        a=m;
    }
};
int main()
{
    int n=6;
    Dummy d(3,n);
    return 0;
}
