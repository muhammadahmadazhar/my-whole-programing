#include<iostream>
#include<fstream>
using namespace std;
struct student
{
    int rno;
    char name[50];
    int marks;
    
};
int main()
{
    student s;
   ofstream fout("c:\\data.txt",ios::binary);
    cout<<"enter rollno=";
    cin>>s.rno;
    cout<<"enter name=";
    cin>>s.name;
    cout<<"enter marks=";   
    cin>>s.marks; 
    fout.write((char*)&s,sizeof(s));
    fout.close();
    ifstream fin("c:\\data.txt",ios::binary);
    while(!fin.eof())
    {
        fin.read((char*)&s,sizeof(s));
        cout<<"roll no="<<s.rno<<endl;
        cout<<"name="<<s.name<<endl;
        cout<<"marks="<<s.marks<<endl;
    }
    fin.close();
   return 0;
}