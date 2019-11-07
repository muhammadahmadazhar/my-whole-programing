#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int tp,rp,remp,days;
    cout<<"input total number of pages of a book ,no of pages read a person output no of pages read and no of pages remaining"<<endl;
    cout<<"total pages=";
    cin>>tp;
    cout<<"read pages=";
    cin>>rp;
    cout<<"no of days=";
    cin>>days;
    rp=rp*days;
    remp=tp-rp;
    cout<<"remaining pages="<<remp<<endl;

    return 0;
}
