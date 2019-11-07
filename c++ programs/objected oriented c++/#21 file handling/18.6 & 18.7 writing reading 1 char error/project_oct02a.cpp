#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("c:\\chars.txt");
    ifstream fin;
    char ch;
    if(!fout)
    {
    cout<<"error opening file";
    }
    for(int i=0;i<5;i++)
    {
        cin>>ch;
        fout<<ch<<endl;
    }
    fin.open("c:\\chars.txt");
    if(!fin)
    cout<<"error";
    fin>>ch;
    while(!fin.eof())
    {
        cout<<ch<<endl;
        fin>>ch;
    }
    fin.close();
   return 0;
}