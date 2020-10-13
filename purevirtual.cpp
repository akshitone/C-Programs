#include<iostream>
using namespace std;

class BaseClass
{
public:
    void display1()
    {
        cout<<"Base Class";
    }
    virtual void display2()=0;
};
class DeriveClass : public BaseClass
{
public:
    void display1()
    {
        cout<<"display 1"<<endl;
    }
    void display2()
    {
        cout<<"display 2"<<endl;
    }
};
int main()
{
    DeriveClass d;
    d.display1();
    d.display2();
}
