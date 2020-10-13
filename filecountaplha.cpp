#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    char ch,fname[20];
    int c=0;
    cin>>fname;
    fin.open(fname);
    while(!fin.eof())
    {
        fin>>ch;
        if(isalpha(ch))
            c++;
    }
    cout<<"Alphabets: "<<c;
    fin.close();
    return 0;
}
