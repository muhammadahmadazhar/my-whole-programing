#include <iostream>

using namespace std;

int main()
{
    int f,c,w=1,x,a,b;
    cin>>a>>b;
    if(a<b)
    {
        f=a; c=b;
    }
    else
    {
        x=a;
        a=b;
        b=x;
        f=a;  c=b;
    }
    while(f<=c)
    {   w=f*1*w;
        f++;
    }


    cout<<w;

    return 0;
}
