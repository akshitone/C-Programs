#include<iostream>
#include<stdio.h>
using namespace std;
class a
{
    public:
        int arr[10],n,i;
    public:
        void accept();
        void display()
};
void a::accept()
{
    cout<<"enter how many elements";
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void a:display()
{
    for(i=0;i<n;i++)
    {
        cout<<Aarr[i]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    a ar;
    ar.accept();
    ar.display();
    return 0;
}
