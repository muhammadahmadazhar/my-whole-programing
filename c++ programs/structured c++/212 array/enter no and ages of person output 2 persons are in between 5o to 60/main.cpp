#include <iostream>

using namespace std;

int main()
{
    int age[150],n,c,count=0;
    cout<<"enter the no of persons required=";
    cin>>n;
    cout<<"enter ages of"<<n<<"persons";
    for(c=0;c<n;c++)
    {
        cin>>age[c];
        if(age[c]>50&&age[c]<60)
         count++;
    }
    cout<<count<<"persons are in between age of 50 to 60";
    return 0;
}
