#include<iostream>
using namespace std;
class read
{
    private:
    int days,pages;
    public:
    read()
    {
      days=pages=0;
    }
    void in()
    {
     cout<<"days=";
        cin>>days;
     cout<<"pages=";
        cin>>pages;
    }
    void show()
    {
      cout<<"you read "<<pages<<" pages in "<<days<<"days"<<endl;
    }
    void operator+=(read r)
    {
      days=days+r.days;
      pages=pages+r.pages;
    }
};
int main()
{
   read r1,r2;
    r1.in();
    r2.in();
    r1.show();
    r2.show();
    cout<<"adding r1 to r2 using += operator\n";
    r2+=r1;   //r2=r2+r1;
    r2.show();
   return 0;
}