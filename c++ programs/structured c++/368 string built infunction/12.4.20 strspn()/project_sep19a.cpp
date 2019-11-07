#include<iostream>
using namespace std;
int main()
{
    int res;
    char first[50]="12345678";
    char second[30]="123do8";
    res=strspn(first,second);
    cout<<"string differ at index="<<res;
   return 0;
}