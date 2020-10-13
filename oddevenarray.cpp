#include<iostream>
using namespace std;
/*int* mergearr(int a[],int b[],int m,int n)
{
    int c[100],i;
    int j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c[j]=a[i];
            j++;
        }
    }
    for(i=0;i<m;i++)
    {
        if(b[i]%2==0)
        {
            c[j]=b[i];
            j++;
        }
    }



    j=n+m-1;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            c[j]=a[i];
            j--;
        }
    }
    for(i=0;i<m;i++)
    {
        if(b[i]%2==1)
        {
            c[j]=b[i];
            j--;
        }
    }


    cout<<endl<<"Third Array"<<endl;
    for(i=0;i<n+m;i++)
    {
            cout<<c[i]<<"\t";

    }
    return c;
}*/
int main()
{
    int a[50],b[50],i,n,m;
    int* d;
    cin>>n>>m;
    cout<<"First Array"<<endl;
    for(i=0;i<n;i++)
    {
            cin>>a[i];
    }
    cout<<"Second Array"<<endl;
    for(i=0;i<m;i++)
    {
            cin>>b[i];
    }
    cout<<"First Array"<<endl;
    for(i=0;i<n;i++)
    {
            cout<<a[i]<<"\t";
    }
    cout<<endl<<"Second Array"<<endl;
    for(i=0;i<m;i++)
    {
            cout<<b[i]<<"\t";
    }

    int c[100];
    int j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c[j]=a[i];
            j++;
        }
    }
    for(i=0;i<m;i++)
    {
        if(b[i]%2==0)
        {
            c[j]=b[i];
            j++;
        }
    }



    j=n+m-1;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            c[j]=a[i];
            j--;
        }
    }
    for(i=0;i<m;i++)
    {
        if(b[i]%2==1)
        {
            c[j]=b[i];
            j--;
        }
    }


    cout<<endl<<"Third Array"<<endl;
    for(i=0;i<n+m;i++)
    {
            cout<<c[i]<<"\t";
    }
}
