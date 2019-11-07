#include<iostream>
using namespace std;
int main()
{
    cout<<"array of pointer is in which different variabe.user enter no in 3 variables then display using pointer array\n";
    int *p[3],a,b,c,i;
    p[0]=&a;  p[1]=&b;  p[2]=&c;
    cin>>a>>b>>c;
    for(i=0;i<3;i++)
    cout<<*p[i];
    return 0;
}