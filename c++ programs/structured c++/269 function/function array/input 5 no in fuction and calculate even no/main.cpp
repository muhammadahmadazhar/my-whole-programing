#include <iostream>

using namespace std;
int even (int b[]);
int main()
{
    int i,a[5],n;
    cout<<"input 5 no in array and passes array to a function function counts even no";
    cout<<"in array and return result to main function to display\n";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
        n=even(a);
        cout<<"even no are="<<n;
    }
    return 0;
}
    int even (int b[])
    { int j,e=0;
       for(j=0;j<5;j++)
            if(b[j]%2==0)
            e++;
       return e;
    }
