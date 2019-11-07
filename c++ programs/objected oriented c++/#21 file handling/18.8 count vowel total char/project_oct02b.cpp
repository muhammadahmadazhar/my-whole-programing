#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("c:\\string.txt");
    ifstream fin("c:\\string.txt");
    int t=0,v=0;
    char ch;
    for(int i=0;i<5;i++)
    {
        cin>>ch;
        fout<<ch;
    }
    fout.close();
    while(!fin.eof())
    {
        ch=fin.get();
  if(ch=='a'|ch=='e'|ch=='i'|ch=='o'|ch=='u')
        v++;
        t++;
    }
    cout<<"vowel="<<v<<endl;
    cout<<"total="<<t-1<<endl;
   return 0;
}