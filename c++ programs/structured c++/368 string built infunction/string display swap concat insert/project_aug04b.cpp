#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1("i m ahmadazhar");
   string s2="father name azhar qayyum";
   string s3;
   string s4("alive");
   cout<<"s1="<<s1<<"\ns2="<<s2<<endl;
   cout<<"swaping of two string"<<endl;
    s1.swap(s2);
   cout<<"s1="<<s1<<"\ns2="<<s2<<endl;
   cout<<"concatination of two strings"<<endl;
   s3=s1 + "      " +s2;
    cout<<"concat="<<s3<<endl;
    cout<<"erasing charector of strings";
    s2.erase(4,13);
    cout<<"\ns2="<<s2;
    cout<<"\nreplasing elements of two strings";
    s1.replace(0,6,s4);
    cout<<"\nreplace="<<s1<<endl;
    s1.insert(0,"not ");
    cout<<"insterted string="<<s1;
    cout<<"\nremoving char from end of string";
    s1.erase(s1.size()-6,3);
    cout<<"\nerase="<<s1;
    s1.append(3,'*');
    cout<<"\nappend="<<s1;
   return 0;
}