#include <iostream>
#include <array>
using namespace std;

int main()
{
    int i;
    array <int,5> dataarray1={1,2,3,4,5};
    array <int,5> dataarray2={11,22,33,44,55};
    cout<<dataarray1.at(2)<<endl;
    cout<<dataarray1[3]<<endl;
    cout<<dataarray1.front()<<endl;
    cout<<dataarray1.back()<<endl;
    dataarray1.swap(dataarray2);
    for( i=0;i<5;i++)
    cout<<"first="<<dataarray1[i]<<endl;
    for( i=0;i<5;i++)
    cout<<"second="<<dataarray2[i]<<endl;
    dataarray1.fill(0);
    for( i=0;i<5;i++)
    cout<<"fill="<<dataarray1[i]<<endl;
    return 0;
}
