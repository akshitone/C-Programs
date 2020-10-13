#include <iostream>
using namespace std;

int main()
{
    int a[10][10],i,j=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n/2)
            {
                cout<<a[i][j]<<"\t";
            }
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==n/2)
            {
                cout<<a[i][j]<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}
