#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("c:\\test.txt");
    ifstream fin; 
    char ch[10];
    char a[10];
    if(fout)
    cout<<"file created\n";
    for(int i=0;i<5;i++)
    {
        cout<<"enter city name=";
        cin>>a;
        fout<<a<<endl;
    }
    fout.close();
    fin.open("c:\\test.txt");
    if(!fin)
    cout<<"file opening error";
    while(!fin.eof())
    {
        fin>>a;
        cout<<"city name="<<a<<endl;
    }
    fin.close();
   return 0;
}