#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream inputfile;
    ofstream outputfile;
    char file1[20],file2[20];
    char ch;
    cout<<"Enter File Name1 ";
    cin>>file1;
    cout<<"Enter File Name2 ";
    cin>>file2;
    inputfile.open(file1);
    outputfile.open(file2);

    while(!inputfile.eof())
    {
        inputfile>>ch;
        if(!inputfile)
        {
            break;
        }
        outputfile<<ch;
    }
    inputfile.close();
    outputfile.close();

    return 0;
}
