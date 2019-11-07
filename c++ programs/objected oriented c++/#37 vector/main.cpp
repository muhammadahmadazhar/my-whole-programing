#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int>v1{10,20,30,40,50};//variable initialize
    vector <int>v2(5);//5 variable created by()
    cout<<"capacity="<<v2.capacity()<<endl;
    vector <int>v3(5,10);
     for(int i=0;i<5;i++){
        cout<<"v3="<<v3[i]<<"  ";
    }
    cout<<endl;
    vector <string> v4(5,"hello ");
    for(int i=0;i<5;i++){
        cout<<"v4="<<v4[i];
    }
    cout<<endl;
    vector <int>v5;
    for(int i=0;i<5;i++){
        v5.push_back(10*(i+1));
        cout<<v5[i]<<"  ";
    }
    cout<<endl;
    v5.pop_back();
    cout<<"copacity="<<v5.capacity()<<" size="<<v5.size();
    v5.pop_back();
    cout<<" copacity="<<v5.capacity()<<" size="<<v5.size()<<endl;
    for(int i=0;i<v5.size();i++){
        cout<<"v5="<<v5[i]<<"  ";
    }
    //v5.clear();
    cout<<"\nsize="<<v5.size()<<" front="<<v5.front()<<" last="<<v5.back()<<endl;
    vector <int>::iterator it=v5.begin();
    v5.insert(it+2,25);
    for(int i=0;i<v5.size();i++){
        cout<<"v5="<<v5[i]<<"  ";
    }
    return 0;
}
