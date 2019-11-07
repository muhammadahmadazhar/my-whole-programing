#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    // 6>4
    if(a>=b)
    {    //6>2
        if(a>=c)
        cout<<"maximum no="<<a;
        //       if 4>6   else 6>8            2>4                     2>6
        //if 4 is not greater 6 then 6>8     if 2 is not greater than4 then 2is not greater than6
        else  cout<<"maximum no="<<c;
    }
    else
    {
        // if else 4>6  else if 6>2
        //if 4 is not greater than 6 then 6>2
        if(b>=c)
            cout<<"maximum no="<<b;
        //    2>6    6>4
        else cout<<"maximum no="<<c;
    }
    return 0;
}
