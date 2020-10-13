#include<iostream>
using namespace std;

class comp
{
    float real,image;
public:
    comp()
    {
        real=image=0;
    }
    comp(float n)
    {
        real=image=n;
    }
    comp(float a,float b)
    {
        real=a;
        image=b;
    }
    friend comp sum(comp,comp);
    friend void display(comp);
};

int main()
{
    comp c1(10,20),c2(5),c3;
    c3=sum(c1,c2);
    display(c1);
    display(c2);
    display(c3);
    return 0;
}

comp sum(comp a,comp b)
{
    comp temp;
    temp.real=a.real+b.real;
    temp.image=a.image+b.image;
    return temp;
}

void display(comp x)
{
    cout<<x.real<<"\t"<<x.image<<endl;
}

