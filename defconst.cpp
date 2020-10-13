#include<iostream>
using namespace std;

class Emp
{
    int a,b;
public:
    Emp()
    {
        a=5;
        b=3;
    }
    void display()
    {
        cout<<a<<"\t"<<b;
    }
};
int main()
{
    Emp e;
    e.display();
}
