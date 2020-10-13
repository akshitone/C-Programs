#include<iostream>
using namespace std;

int main()
{
    char ch[10];
    char str[20];
    int i,j=0,c;
    cin>>str;
    cin>>ch;
        for(c=0;str[c]='/0';c++);
        for(i=0,j=0;ch[i]!='/0' && str[j]!='/0';i++)
        {
            if(ch[i]==str[j])
            {
                j++;
            }
            else
            {
                j=0;
            }
        }
        cout<<j;
}
