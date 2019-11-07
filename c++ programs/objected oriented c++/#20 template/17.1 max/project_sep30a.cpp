#include<iostream>
using namespace std;
template<class gen>
gen maxx(gen a,gen b)
{
    if(a>b)
          return (a);
    else
          return (b);
}
int main()
{
    int x;
    double y;
    x=maxx(3,4);
   cout<<"max="<<x<<endl;
    y=maxx(5.8,9.5);
   cout<<"max="<<y<<endl;
   return 0;
}