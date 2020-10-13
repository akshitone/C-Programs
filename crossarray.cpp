#include <iostream>
using namespace std;

int main()
{
    int a[10][10],m,n,i,j;
    std::cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
    }
    return 0;
}
