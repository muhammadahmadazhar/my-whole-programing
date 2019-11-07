#include <iostream>
#include <tuple>
using namespace std;

int main()
{
    tuple <string,int,float,char>t1;
    t1=make_tuple("asad",99,3.3,'A');
    cout<<get<0>(t1)<<"  ";
    cout<<get<1>(t1)<<"  ";
    cout<<get<2>(t1)<<"  ";
    cout<<get<3>(t1)<<"  ";
    return 0;
}
