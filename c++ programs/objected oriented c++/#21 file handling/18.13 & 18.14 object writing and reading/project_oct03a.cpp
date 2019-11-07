#include<iostream>
#include<fstream>
using namespace std;
class Countary
{
    private:
    int id;
    char name[50];
    public:
    void get()
    {
        cout<<"enter id=";
        cin>>id;
        cout<<"enter name=";
        cin>>name;
    }
    void show()
    {
        cout<<"id="<<id<<endl;
        cout<<"name="<<name<<endl;
    }
};
int main()
{
    Countary cn;
    ofstream fout;
    fout.open("data.txt",ios::app|ios::binary);
    cn.get();
    fout.write((char*)&cn,sizeof(cn));
    cout<<endl;
    fout.close();
    ifstream fin("data.txt",ios::app|ios::binary);
    fin.read((char*)&cn,sizeof(cn));
    cn.show();
    fin.close();
   return 0;
}
