#include <iostream>

using namespace std;

int main()
{
    int i,j=4,k=0,n;
    cout<<"how many terms u want=";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k=k+i+j;
        cout<<i<<"+"<<j<<"="<<k<<endl;
        j++;
    }
    return 0;
}
