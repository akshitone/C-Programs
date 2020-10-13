#include<iostream>
using namespace std;

int main()
{
    char a[10];
    char b[] = {'a','d','\0'};
    int i=0,flag=0;
    cin>>a;
    if(a==b)
    {
        cout<<"Same";
    }
    for(i=0;a[i]!='/0';i++)
    {
        if(a[i]==b[i])
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<"same";
    }
    cout<<a<<endl;
    cout<<b;
    return 0;
}
