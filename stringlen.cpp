#include<iostream>
#include<string>
using namespace std;

int main()
{
    /*int c=0;
    string str;
    getline(cin,str);
    //string length count
    for(int i=0;str[i]!='\0';i++)
    {
        c++;
    }
    //reverse string
    for(int i=c-1;i>=0;i--)
    {
        cout<<str[i];
    }
    //count words
    int w=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            w++;
        }
    }
    cout<<endl<<c<<endl<<w;

    //concatenate string
    int i,j;
    char str1[20],str2[20];
    cin>>str1;
    cin>>str2;
    for(i=0;str2[i]!='\0';i++);
    for(j=0;str1[j]!='\0';j++)
    {
        str2[i++]=str1[j];
    }
    str2[i]='\0';
    cout<<str2;
    */
    int i,j,c;
    char str1[20],str2[20];
    cin>>str1;
    cin>>str2;
    for(c=0;str2[c]!='\0';c++);
    for(i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if(str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }
    if(j == c)
        cout<<"Substring found at position "<< i - j + 1;
    else
        cout<<"Substring not found";

    return 0;
}
