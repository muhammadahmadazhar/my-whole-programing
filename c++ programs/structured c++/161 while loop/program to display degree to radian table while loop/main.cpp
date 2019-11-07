#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<"program to display degree to radin table using while loopa";
    float degree,radian;
    degree=0;
    while(degree<=360)
    {
      radian=(degree*3.141593)/180;
      cout<<setw(5)<<degree<<setw(9)<<radian<<endl;
      degree=degree+10;
    }
    return 0;
}
