#include<iostream>
using namespace std;

class B;
class A
{
    int value;
public:
    A()
    {
        value=5;
    }
    friend int sum(A,B);
};
class B
{
    int value;
public:
    B()
    {
        value=3;
    }
    friend int sum(A,B);
};
int sum(A a,B b)
{
    return a.value+b.value;
}
int main()
{
    A a;
    B b;
    cout<<sum(a,b);
    return 0;
}
