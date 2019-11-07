#include <iostream>

using namespace std;

int main()
{
    int x,y;
    x=5;
    while(x>=1)
    {
        y=x;
        while(y<=5)
        {
            cout<<y;
            y++;
        }
        x--;
        cout<<endl;
    }


    return 0;
}
