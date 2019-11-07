#include <iostream>

using namespace std;

int main()
{
    int countch=0,countwd=1;
    char ch='a';
    cout<<"enter a sentence"<<endl;

    while(ch!='')
    {
        cin>>ch;
        if(ch=='')
            countwd++;
        else
            countch++;
    }
    cout<<" words="<<countwd<<endl;
    cout<<" cherector"<<countch-1<<endl;
    return 0;
}
