#include <iostream>

using namespace std;

int main()
{
    float r,c;
    c=2;
    r=1;
    while(c<=100)
       {
           r=r+1/c;

           c=c+2;
       }
       cout<<"series="<<r;
    return 0;
}
