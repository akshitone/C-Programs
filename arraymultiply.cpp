#include<iostream>
using namespace std;

int main()
{
    int a[10],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]*5<<"\t";
    }
}
