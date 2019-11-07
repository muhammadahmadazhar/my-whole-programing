#include <iostream>

using namespace std;
void fun (int b[]);
int main()
{
    int i,a[5];
    for(i=0;i<5;i++)
    {
        cin>>a[i];
        fun(a);
    }
    return 0;
}
  void fun (int b[])
{  int j;
    for(j=0;j<5;j++)
   cout<<b[j];
}
