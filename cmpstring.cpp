#include<iostream>
#include<string>
using namespace std;

void compareString(string s1,string s2)
{
    if( (s1.compare(s2)) < 0)
    {
        cout<<s1<<"\t"<<"smaller"<<"\t"<<(s1.compare(s2));
    }
    else
    {
        cout<<s2<<"\t"<<"smaller"<<"\t"<<(s1.compare(s2));
    }
}
int main()
{
    string s1("akshit");
    string s2("akshits");
    compareString(s1, s2);
    return 0;
}
