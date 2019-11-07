#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    int *a,*b,*c;
    a=&x;
    b=&y;
    c=&z;
    cin>>*a>>*b;
    *c=*a+*b;
    cout<<*c;

    return 0;
}
