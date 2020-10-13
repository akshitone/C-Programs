#include<iostream>
using namespace std;

class comp
{
    int real,image;
public:
    comp(int r=0,int i=0)
    {
        real=r;
        image=i;
    }
    comp operator +(comp const &obj)
    {
        comp res;
        res.real=real+obj.real;
        res.image=image+obj.image;
        return res;
    }
    void display()
    {
        cout<<real<<"\t"<<image<<endl;
    }
};

int main()
{
    comp c1(10,20),c2(5,5);
    comp c3=c1+c2;
    c3.display();
}
