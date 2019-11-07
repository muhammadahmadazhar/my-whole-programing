#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int cy,jy,sy,sallery;
    cout<<"input current year joining year sallery and display output total year of jobe service and sallery with bonus"<<endl;
    cout<<"current year=";
    cin>>cy;
    cout<<"joining year=";
    cin>>jy;
    cout<<"sallery of employe=";
    cin>>sallery;
    sy=cy-jy;
    if(sy>5)
    {
        cout<<"service year="<<sy<<"year"<<endl;
    sallery=sallery+2000;
    }
    else
    sallery=sallery+1000;
    cout<<"sallery with bonus="<<sallery;
    getch();
    return 0;
}
