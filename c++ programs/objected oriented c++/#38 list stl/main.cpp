#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <string> l1{"hello","world","programmer"};
    list <int> l2 {11,22,33,44};
    list <string>:: iterator p=l1.begin();
    while(p!=l1.end()){
        cout<<*p<<"  ";
        p++;
    }cout<<endl;
    list <int>:: iterator q=l2.begin();
     while(q!=l2.end()){
        cout<<*q<<"  ";
        q++;
    }cout<<endl;
    l2.push_back(55);
    l2.push_front(00);
      list <int>:: iterator r=l2.begin();
     while(r!=l2.end()){
        cout<<*r<<"  ";
        r++;
    }cout<<endl;
    l2.pop_back();
    l2.pop_front();
    l2.remove(33);
      list <int>:: iterator s=l2.begin();
     while(s!=l2.end()){
        cout<<*s<<"  ";
        s++;
    }cout<<endl;
    l2.reverse();
      list <int>:: iterator t=l2.begin();
     while(t!=l2.end()){
        cout<<*t<<"  ";
        t++;
    }cout<<endl;
     cout<<l2.size();
    l2.clear();
      list <int>:: iterator u=l2.begin();
     while(u!=l2.end()){
        cout<<*u<<"  ";
        u++;
    }cout<<endl;
    list <int> l3 {66,44,88,11};
    l3.sort();
      list <int>:: iterator v=l3.begin();
     while(v!=l3.end()){
        cout<<*v<<"  ";
        v++;
    }
    return 0;
}
