#include <iostream>

using namespace std;

int main()
{
    int n,c;
    n=1;
    cout<<"enter a no=";
    cin>>c;
    while(n<=10)
    {
        cout<<c<<"*"<<n<<"="<<c*n<<endl;
        n++;
    }
    return 0;
}
