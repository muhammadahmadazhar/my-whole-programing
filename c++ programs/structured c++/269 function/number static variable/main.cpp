#include <iostream>

using namespace std;
void no();
int main()
{
    int n,i;
    for(i=1;i<=5;i++)
    {
        no();

    }
    return 0;
}    void no ()
    {
        static int n=0;
        n++;
         cout<<n<<endl;
    }

