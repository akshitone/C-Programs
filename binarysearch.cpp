#include<iostream>
using namespace std;

int bin_search(int a[],int n,int num)
{
    int first=0;
    int last=n-1;
    int mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==num)
        {
            return mid+1;
            break;
        }
        else if(a[mid]<num)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    if(first>last)
    {
        return 0;
    }
    return 0;

}
int main()
{
    int a[10],n,i,j,num,temp,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            c=i;
        }
    }
    cout<<endl<<c+1<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl<<"Enter number that you want to search:";
    cin>>num;
    int pos = bin_search(a,n,num);
    if(pos==0)
    {
        cout<<"Number is not found";
    }
    else
    {
        cout<<num<<" number is found at this position :"<<pos;
    }
    return 0;
}
