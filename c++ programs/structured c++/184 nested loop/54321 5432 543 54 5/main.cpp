#include <iostream>

using namespace std;

int main()
{
    int x,y;
    x=1;
    while(x<=5)
    {
        y=5;
        while(y>=x)
        {
              cout<<y;
              y--;
        }
        cout<<endl;
        x++;
    }
    return 0;
}
