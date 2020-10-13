#include<iostream>
using namespace std;

class Emp
{

public:
    int age,id;
    char name[20];
    void getdata()
    {
        cin>>id>>name>>age;
        cout<<endl;
    }
    void putdata()
    {
        cout<<id<<endl<<name<<endl<<age<<endl;
    }
};

int main()
{
    Emp e[100];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        e[i].getdata();
    }
    for(i=0;i<n;i++)
    {
        e[i].putdata();
    }
    int Max=e[0].age;
    for(i=0;i<n;i++)
    {
        if(Max<e[i].age)
        {
                Max=e[i].age;
        }
    }
    cout<<"max"<<Max;
}
