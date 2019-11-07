#include<iostream>
using namespace std;
class count
{
    private:
    int n;
    public:
    count()
    {
        n=0;
    }
    void show()
    {
      cout<<"n="<<n<<endl;
    }
    void operator++()
    {
      ++n;
    }
};
int main()
{
cout<<"program that overload increment operator to work with user defined objects\n";
    count c1;
    c1.show();
    ++c1;  //c1.operator++()
    c1.show();
    ++c1;
    c1.show();
   return 0;
}