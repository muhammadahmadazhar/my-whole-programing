#include <iostream>

using namespace std;

int main()
{
    char ch='A';
    int n,i,j;
    cout<<"enter a no how large triangle is"<<endl;
    cout<<"enter a no=";
    cin>>n;
    for(i=1;i<=n;i++)
    {
          for(j=1;j<=i;j++)
          {
              cout<<ch;
              ch++;

          }
          cout<<endl;
    }
    return 0;
}
