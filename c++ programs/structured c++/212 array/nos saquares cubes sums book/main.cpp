#include <iostream>

using namespace std;

int main()
{
    int no[5], squares[5], cubes[5] , sums[5],i,total=0;

    for(i=0;i<5;i++)
    {
        no[i]=i;
        squares[i]=i*i;
        cubes[i]=i*i*i;
        sums[i]=no[i]+squares[i]+cubes[i];
    }
    cout<<"numbers=\t";
    for(i=0;i<5;i++)
        cout<<no[i]<<"\t";
        cout<<endl;
    cout<<"squares=\t";
    for(i=0;i<5;i++)
        cout<<squares[i]<<"\t";
        cout<<endl;
    cout<<"cubes=\t\t";
    for(i=0;i<5;i++)
        cout<<cubes[i]<<"\t";
        cout<<endl;
    cout<<"sums=\t\t";
    for(i=0;i<5;i++)
        cout<<sums[i]<<"\t";
        cout<<endl;

    for(i=0;i<5;i++)
    {
    total=total+sums[i];
    }
    cout<<"grand total="<<total;
    return 0;
}
