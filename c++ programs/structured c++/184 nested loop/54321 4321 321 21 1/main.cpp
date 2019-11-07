#include <iostream>

using namespace std;

int main()
{
    int x,y;
    x=5;
    while(x>=1)
    {
           y=x;
           while(y>=1)
           {
               cout<<y;
               y--;
           }
           cout<<endl;
           x--;
    }
    return 0;
}
