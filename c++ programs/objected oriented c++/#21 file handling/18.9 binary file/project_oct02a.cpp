#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("c:\\data.txt",ios::binary);
    int n;
    for(int i=0;i<5;i++)
    {
        cout<<"n=";
        cin>>n;
        fout.write((char*)&n,sizeof(n));
    }
    fout.close();
   return 0;
}