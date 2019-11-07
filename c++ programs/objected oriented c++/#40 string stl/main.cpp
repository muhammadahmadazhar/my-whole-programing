#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2="hello world of programing";
    s1.assign("hello");      cout<<s1<<endl;
    s1.append(" students");  cout<<s1<<endl;
    s1.insert(2,"123");      cout<<s1<<endl;
    s1.insert(2,3,'A');      cout<<s1<<endl;//3=how many times u insert
    s1.replace(2,6,"B");     cout<<s1<<endl;//4=how much length u replace
    s1.erase();              cout<<s1<<endl;
    int i=s2.find("world");cout<<i<<endl;
    return 0;
}
