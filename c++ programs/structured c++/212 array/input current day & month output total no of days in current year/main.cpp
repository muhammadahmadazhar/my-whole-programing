#include <iostream>

using namespace std;

int main()
{
    int tdcy[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int cd,cm,total,x;
    cout<<"enter current day=";
    cin>>cd;
    cout<<"enter current month=";
    cin>>cm;
    total=cd;
    for(x=0;x<cm-1;x++)
    {
        total=total+tdcy[x];
    }
    cout<<"no of days til date"<<cd<<"/"<<cm<<"="<<total;

    return 0;
}
