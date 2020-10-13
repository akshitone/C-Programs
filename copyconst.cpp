#include<iostream>
using namespace std;

class A
{
public:
    int n;
    A(int a)
    {
        n=a;
    }
    A(A &b)
    {
        n=b.n;
    }
};
int main()
{
    A a1(20);
    A a2(a1);
    cout<<a1.n<<"\t"<<a2.n;
}
