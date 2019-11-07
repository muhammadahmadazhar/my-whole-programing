#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int,string> cu{{34,"amjad"},{10,"ahmad"},{55,"ali"},{46,"aaa"}};
    cu[2]="abc";  cout<<cu.at(10);
    cu.insert(pair <int,string> (55,"acc"));
    map <int,string>::iterator q= cu.begin();
    while(q!=cu.end()){
        cout<<q->second<<endl;
        q++;
    }
    return 0;
}
