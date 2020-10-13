#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[100];
    ofstream outfile;
    outfile.open("afile.dat");

    cout<<"Writing in file"<<endl;
    cout<<"Enter name"<<endl;
    cin>>data;
    outfile<<data<<endl;

    cout<<"Enter Age"<<endl;
    cin>>data;
    outfile<<data<<endl;
    outfile.close();

    ifstream infile;
    infile.open("afile.dat");

    cout<<"Reading from file:"<<endl;
    infile>>data;
    cout<<data<<endl;
    infile>>data;
    cout<<data<<endl;
    infile.close();

    return 0;
}
