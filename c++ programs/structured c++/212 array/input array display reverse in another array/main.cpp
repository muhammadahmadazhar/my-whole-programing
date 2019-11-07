#include <iostream>

using namespace std;

int main()
{
    int a[10],b[10],i,j=0;
    cout<<"input an array output is reverse of array in another array"<<endl;
    cout<<"enter ten values";
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=9;i>=0;i--)
    {
      b[j] =a[i];
      j++;
    }
    for(j=0;j<10;j++)
        cout<<b[j];
     return 0;
}
