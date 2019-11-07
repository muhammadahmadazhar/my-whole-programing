#include<iostream>
using namespace std;
class marks
{
    private:
    int a,b,c;
    public:
   inline void in()
    {cout<<"enter three marks\n";
     cout<<"a=";cin>>a;
     cout<<"b=";cin>>b;
     cout<<"c=";cin>>c;}
   inline int sum()
    {
       return a+b+c;
    }
   inline float avg()
    {
         return (a+b+c)/3.0;
    }
};
int main()
{
cout<<"write a class marks with three data members to store three marks.write three member functions in() to input marks sum() to calculate and return the sum and avg() to calculate and return the avgerage marks\n";
    marks m;
    int y; float z;
    m.in();
    y=m.sum();
    z=m.avg();
    cout<<"sum="<<y<<"\naverage="<<z;
   return 0;
}
